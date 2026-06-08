// OTBN driver for Shakti C-class.
//
// Shakti has OTBN connected via a 64-bit AXI bus at base address 0x30000.
// Key difference from OpenTitan: the AXI bus is 64-bit wide, so IMEM and DMEM
// must be accessed with 64-bit (8-byte) transactions.
//
// IMEM layout on Shakti's AXI:
//   Instruction i (32-bit) lives at physical address IMEM_BASE + i*8.
//   (Each 64-bit AXI word holds one 32-bit instruction in the lower half.)
//
// DMEM layout on Shakti's AXI:
//   Two consecutive 32-bit OTBN words are packed into one 64-bit AXI word.
//   OTBN byte offset N maps to AXI address DMEM_BASE + N (i.e. same byte addr).
//   So OTBN words[2i] and words[2i+1] go to AXI addr DMEM_BASE + i*8.
//
// SEC_WIPE is skipped: the Shakti OTBN integration does not have the entropy
// complex wired up. After reset, OTBN performs its own internal wipe and
// becomes IDLE. We just poll for IDLE before loading.

#include "sw/device/lib/crypto/drivers/otbn.h"

#include <stddef.h>
#include <stdint.h>

#include "hw/top/otbn_regs.h"
#include "sw/device/lib/base/abs_mmio.h"
#include "sw/device/lib/base/crc32.h"
#include "sw/device/lib/crypto/impl/status.h"

// Module ID for status codes
#define MODULE_ID MAKE_MODULE_ID('d', 'b', 'n')

// ============================================================
// Address map (from otbn_add.c / otbn_reg_pkg.sv)
// ============================================================
#define OTBN_BASE_ADDR  0x00030000UL

static inline uint32_t otbn_base(void) { return OTBN_BASE_ADDR; }

// ============================================================
// OTBN commands and status values
// ============================================================
typedef enum {
  kOtbnCmdExecute      = 0xd8,
  kOtbnCmdSecWipeDmem  = 0xc3,
  kOtbnCmdSecWipeImem  = 0x1e,
} otbn_cmd_t;

typedef enum {
  kOtbnStatusIdle            = 0x00,
  kOtbnStatusBusyExecute     = 0x01,
  kOtbnStatusBusySecWipeDmem = 0x02,
  kOtbnStatusBusySecWipeImem = 0x03,
  kOtbnStatusBusySecWipeInt  = 0x04,
  kOtbnStatusLocked          = 0xFF,
} otbn_status_t;

enum {
  kOtbnDMemSizeBytes = OTBN_DMEM_SIZE_BYTES,
  kOtbnIMemSizeBytes = OTBN_IMEM_SIZE_BYTES,
  kOtbnErrBitsNoError = 0,
};

// ============================================================
// Helpers
// ============================================================

static status_t check_offset_len(uint32_t offset_bytes, size_t num_words,
                                  size_t mem_size) {
  if (num_words > UINT32_MAX / sizeof(uint32_t)) return OTCRYPTO_BAD_ARGS;
  uint32_t num_bytes = (uint32_t)num_words * sizeof(uint32_t);
  if (offset_bytes > UINT32_MAX - num_bytes) return OTCRYPTO_BAD_ARGS;
  if (offset_bytes + num_bytes > mem_size) return OTCRYPTO_BAD_ARGS;
  return OTCRYPTO_OK;
}

// Poll STATUS until IDLE or LOCKED (with a timeout).
static status_t otbn_wait_idle(void) {
  uint32_t timeout = 4000000;
  while (timeout--) {
    uint32_t s = abs_mmio_read32(otbn_base() + OTBN_STATUS_REG_OFFSET);
    if (s == kOtbnStatusIdle)   return OTCRYPTO_OK;
    if (s == kOtbnStatusLocked) return OTCRYPTO_FATAL_ERR;
  }
  return OTCRYPTO_RECOV_ERR;  // timeout
}

static status_t otbn_assert_idle(void) {
  uint32_t s = abs_mmio_read32(otbn_base() + OTBN_STATUS_REG_OFFSET);
  if (s == kOtbnStatusIdle)   return OTCRYPTO_OK;
  if (s == kOtbnStatusLocked) return OTCRYPTO_FATAL_ERR;
  return OTCRYPTO_ASYNC_INCOMPLETE;
}

// ============================================================
// DMEM write — Shakti 64-bit AXI packing
// ============================================================
status_t otbn_dmem_write(size_t num_words, const uint32_t *src,
                         otbn_addr_t dest) {
  HARDENED_TRY(check_offset_len(dest, num_words, kOtbnDMemSizeBytes));

  uint64_t base = (uint64_t)otbn_base() + OTBN_DMEM_REG_OFFSET + dest;

  // Write pairs of 32-bit words as single 64-bit transactions.
  size_t pairs = num_words / 2;
  for (size_t i = 0; i < pairs; i++) {
    uint64_t val = ((uint64_t)src[2 * i + 1] << 32) | src[2 * i];
    abs_mmio_write64(base + i * 8, val);
  }
  // Odd trailing word (zero-extend upper half).
  if (num_words & 1) {
    uint64_t val = (uint64_t)src[num_words - 1];
    abs_mmio_write64(base + pairs * 8, val);
  }
  return OTCRYPTO_OK;
}

// ============================================================
// DMEM set — fill num_words words with a constant value
// ============================================================
status_t otbn_dmem_set(size_t num_words, const uint32_t src, otbn_addr_t dest) {
  HARDENED_TRY(check_offset_len(dest, num_words, kOtbnDMemSizeBytes));

  uint64_t val64 = ((uint64_t)src << 32) | src;
  uint64_t base  = (uint64_t)otbn_base() + OTBN_DMEM_REG_OFFSET + dest;

  size_t pairs = num_words / 2;
  for (size_t i = 0; i < pairs; i++) {
    abs_mmio_write64(base + i * 8, val64);
  }
  if (num_words & 1) {
    abs_mmio_write64(base + pairs * 8, (uint64_t)src);
  }
  return OTCRYPTO_OK;
}

// ============================================================
// DMEM read — unpack 64-bit AXI reads into 32-bit words
// ============================================================
status_t otbn_dmem_read(size_t num_words, otbn_addr_t src, uint32_t *dest) {
  HARDENED_TRY(check_offset_len(src, num_words, kOtbnDMemSizeBytes));

  uint64_t base = (uint64_t)otbn_base() + OTBN_DMEM_REG_OFFSET + src;

  size_t pairs = num_words / 2;
  for (size_t i = 0; i < pairs; i++) {
    uint64_t val  = abs_mmio_read64(base + i * 8);
    dest[2 * i]   = (uint32_t)(val & 0xFFFFFFFFu);
    dest[2 * i + 1] = (uint32_t)(val >> 32);
  }
  if (num_words & 1) {
    uint64_t val = abs_mmio_read64(base + pairs * 8);
    dest[num_words - 1] = (uint32_t)(val & 0xFFFFFFFFu);
  }
  return OTCRYPTO_OK;
}

// ============================================================
// Execute
// ============================================================
status_t otbn_execute(void) {
  HARDENED_TRY(otbn_assert_idle());
  abs_mmio_write32(otbn_base() + OTBN_CMD_REG_OFFSET, kOtbnCmdExecute);
  return OTCRYPTO_OK;
}

// ============================================================
// Busy-wait until done
// ============================================================
status_t otbn_busy_wait_for_done(void) {
  uint32_t status;
  do {
    status = abs_mmio_read32(otbn_base() + OTBN_STATUS_REG_OFFSET);
  } while (status != kOtbnStatusIdle && status != kOtbnStatusLocked);

  if (status == kOtbnStatusLocked) return OTCRYPTO_FATAL_ERR;

  uint32_t err = otbn_err_bits_get();
  if (err != kOtbnErrBitsNoError) return OTCRYPTO_RECOV_ERR;

  return OTCRYPTO_OK;
}

// ============================================================
// Error / instruction count accessors
// ============================================================
uint32_t otbn_err_bits_get(void) {
  return abs_mmio_read32(otbn_base() + OTBN_ERR_BITS_REG_OFFSET);
}

uint32_t otbn_instruction_count_get(void) {
  return abs_mmio_read32(otbn_base() + OTBN_INSN_CNT_REG_OFFSET);
}

// ============================================================
// Secure wipe — skip on Shakti (no entropy complex).
// Just return OK so callers don't fail.
// ============================================================
status_t otbn_imem_sec_wipe(void) {
  return OTCRYPTO_OK;
}

status_t otbn_dmem_sec_wipe(void) {
  return OTCRYPTO_OK;
}

// ============================================================
// CTRL register
// ============================================================
status_t otbn_set_ctrl_software_errs_fatal(bool enable) {
  HARDENED_TRY(otbn_assert_idle());
  abs_mmio_write32(otbn_base() + OTBN_CTRL_REG_OFFSET, enable ? 1u : 0u);
  return OTCRYPTO_OK;
}

// ============================================================
// Load app — write IMEM and DMEM data section.
//
// On Shakti: skip sec_wipe. Just poll for IDLE then load.
// IMEM writes use 64-bit transactions at stride 8 (one instruction per 8 bytes).
// ============================================================
status_t otbn_load_app(const otbn_app_t app) {
  if (app.imem_end <= app.imem_start)       return OTCRYPTO_BAD_ARGS;
  if (app.dmem_data_end < app.dmem_data_start) return OTCRYPTO_BAD_ARGS;

  // Wait for OTBN to reach IDLE (handles post-reset wipe).
  HARDENED_TRY(otbn_wait_idle());

  const size_t imem_num_words =
      (size_t)(app.imem_end - app.imem_start);
  const size_t data_num_words =
      (size_t)(app.dmem_data_end - app.dmem_data_start);

  HARDENED_TRY(check_offset_len(0, imem_num_words, kOtbnIMemSizeBytes));
  HARDENED_TRY(check_offset_len(app.dmem_data_start_addr, data_num_words,
                                kOtbnDMemSizeBytes));

  // Write IMEM: each 32-bit instruction as a 64-bit write at stride 8.
  uint64_t imem_base = (uint64_t)otbn_base() + OTBN_IMEM_REG_OFFSET;
  for (size_t i = 0; i < imem_num_words; i++) {
    abs_mmio_write64(imem_base + (uint64_t)i * 8,
                     (uint64_t)app.imem_start[i]);
  }

  // Write DMEM data section.
  if (data_num_words > 0) {
    HARDENED_TRY(otbn_dmem_write(data_num_words, app.dmem_data_start,
                                 app.dmem_data_start_addr));
  }

  return OTCRYPTO_OK;
}
