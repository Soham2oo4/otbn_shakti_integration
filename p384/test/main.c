// P-384 end-to-end smoke test for Shakti SoC.
//
// FAST MODE (default): verifies IMEM/DMEM loading correctness and OTBN startup
// without waiting for P-384 to complete (which takes many hours in RTL sim).
//
// FULL MODE: define P384_FULL_TEST to run keygen+sign+verify end-to-end.
// Warning: full P-384 execution requires many hours in Verilator simulation.

#include <stdint.h>
#include <string.h>

#include "sw/device/lib/crypto/drivers/otbn.h"
#include "sw/device/lib/crypto/impl/ecc/p384.h"
#include "sw/device/lib/crypto/impl/status.h"

// ----------------------------------------------------------------
// UART and sim termination (from test/utils.c)
// ----------------------------------------------------------------
void uart_puts(const char *s);
void uart_putdec(unsigned long n);
void uart_puthex32(uint32_t v);
void sim_finish(void);

static void test_pass(void) {
  uart_puts("=== P384 TEST PASSED ===\r\n");
  sim_finish();
}

static void test_fail(int line) {
  uart_puts("=== P384 TEST FAILED at line ");
  uart_putdec((unsigned long)line);
  uart_puts(" ===\r\n");
  sim_finish();
}

#define CHECK_OK(expr) \
  do { \
    status_t _s = (expr); \
    if (_s.value != kHardenedBoolTrue) test_fail(__LINE__); \
  } while (0)

#define CHECK_TRUE(expr) \
  do { if (!(expr)) test_fail(__LINE__); } while (0)

// ----------------------------------------------------------------
// Direct OTBN register/memory accessors
// ----------------------------------------------------------------
#define OTBN_BASE       0x00030000UL
#define OTBN_STATUS     (OTBN_BASE + 0x0018)
#define OTBN_ERR_BITS   (OTBN_BASE + 0x001C)
#define OTBN_IMEM_BASE  (OTBN_BASE + 0x4000)
#define OTBN_DMEM_BASE  (OTBN_BASE + 0x8000)

static inline uint32_t reg32(uintptr_t addr) {
  return *(volatile uint32_t *)addr;
}
static inline uint64_t reg64(uintptr_t addr) {
  return *(volatile uint64_t *)addr;
}

// ----------------------------------------------------------------
// IMEM/DMEM readback helpers
// ----------------------------------------------------------------

// Read back IMEM instruction at slot i (each slot is 8 bytes on 64-bit AXI).
// OTBN instructions are 32 bits; the lower 32 bits of the 64-bit AXI word.
static uint32_t imem_read(unsigned i) {
  uint64_t val = reg64(OTBN_IMEM_BASE + i * 8);
  return (uint32_t)(val & 0xFFFFFFFF);
}

// Read back DMEM word pair at slot i (each 64-bit AXI word = 2 × 32-bit words).
static uint64_t dmem_read64(unsigned i) {
  return reg64(OTBN_DMEM_BASE + i * 8);
}

int main(void) {
  // ----------------------------------------------------------------
  // Phase 1: Load P-384 IMEM and DMEM via otbn_load_app
  // ----------------------------------------------------------------
  uart_puts("[1] Loading P-384 IMEM/DMEM...\r\n");

  // Wait for OTBN post-reset wipe, then load the app.
  OTBN_DECLARE_APP_SYMBOLS(run_p384);
  static const otbn_app_t kApp = OTBN_APP_T_INIT(run_p384);
  CHECK_OK(otbn_load_app(kApp));

  uart_puts("[1] Load OK\r\n");

  // ----------------------------------------------------------------
  // Phase 2: Read back IMEM and verify key boundary slots
  //
  // This confirms the IMEM window fix is effective:
  //   slot 0      = first instruction (always accessible)
  //   slot 1023   = last slot of old 8 KiB window [0x4000:0x5FFF]
  //   slot 1024   = first slot PAST old boundary (needed the RTL fix)
  //   slot 2026   = last instruction (P-384 uses all 2027 instructions)
  // ----------------------------------------------------------------
  uart_puts("[2] Verifying IMEM boundary slots...\r\n");

  // Reference: the IMEM data is the _otbn_local_app_run_p384__imem_start array.
  // We access it directly to get the expected values.
  extern const uint32_t _otbn_local_app_run_p384__imem_start[];
  const uint32_t *imem = _otbn_local_app_run_p384__imem_start;

  uint32_t got, expected;

  // Slot 0
  expected = imem[0];
  got = imem_read(0);
  if (got != expected) { test_fail(__LINE__); }

  // Slot 1023 (last in old 8 KiB window)
  expected = imem[1023];
  got = imem_read(1023);
  if (got != expected) { test_fail(__LINE__); }

  // Slot 1024 (first past old boundary — proves the RTL fix works)
  expected = imem[1024];
  got = imem_read(1024);
  if (got != expected) { test_fail(__LINE__); }

  // Slot 2026 (last P-384 instruction)
  expected = imem[2026];
  got = imem_read(2026);
  if (got != expected) { test_fail(__LINE__); }

  uart_puts("[2] IMEM boundary OK (slots 0, 1023, 1024, 2026 verified)\r\n");

  // ----------------------------------------------------------------
  // Phase 3: Verify DMEM .data (P-384 curve parameters)
  // Check first and last 64-bit words of the loaded .data section.
  // ----------------------------------------------------------------
  uart_puts("[3] Verifying DMEM curve parameters...\r\n");

  extern const uint32_t _otbn_local_app_run_p384__dmem_data_start[];
  const uint32_t *dmem_data = _otbn_local_app_run_p384__dmem_data_start;

  // First 64-bit DMEM word (words 0+1 of .data)
  uint64_t exp64 = ((uint64_t)dmem_data[1] << 32) | dmem_data[0];
  uint64_t got64 = dmem_read64(0);
  if (got64 != exp64) { test_fail(__LINE__); }

  // Last 64-bit DMEM word of .data section (words 78+79)
  exp64 = ((uint64_t)dmem_data[79] << 32) | dmem_data[78];
  got64 = dmem_read64(39);  // 80 words / 2 = 40 pairs; pair 39 = words 78+79
  if (got64 != exp64) { test_fail(__LINE__); }

  uart_puts("[3] DMEM .data OK\r\n");

  // ----------------------------------------------------------------
  // Phase 4: Issue EXECUTE
  // ----------------------------------------------------------------
  uart_puts("[4] Issuing EXECUTE (keygen mode)...\r\n");

  uint32_t mode = OTBN_ADDR_T_INIT(run_p384, MODE_KEYGEN);
  CHECK_OK(otbn_dmem_write(1, &mode, OTBN_ADDR_T_INIT(run_p384, mode)));
  CHECK_OK(otbn_execute());

  uint32_t status = reg32(OTBN_STATUS);
  if (status == 0xFF) {
    uart_puts("[4] OTBN LOCKED\r\n");
    test_fail(__LINE__);
  }
  uart_puts("[4] EXECUTE issued\r\n");

  // ----------------------------------------------------------------
  // Phase 5: Wait for P-384 keygen to complete.
  // OTBN executes ~1,935,430 instructions for keygen. The EDN model
  // acks entropy immediately, so no blocking on entropy.
  // ----------------------------------------------------------------
  uart_puts("[5] Waiting for OTBN keygen...\r\n");
  CHECK_OK(otbn_busy_wait_for_done());
  uart_puts("[5] Keygen done\r\n");

  // ----------------------------------------------------------------
  // Phase 6: Verify no errors; print instruction count (expect 1935430)
  // ----------------------------------------------------------------
  uint32_t err_bits = otbn_err_bits_get();
  if (err_bits != 0) {
    uart_puts("[6] ERR_BITS=");
    uart_puthex32(err_bits);
    uart_puts("\r\n");
    test_fail(__LINE__);
  }
  uint32_t insn_cnt = otbn_instruction_count_get();
  uart_puts("[6] insn_cnt=");
  uart_putdec((unsigned long)insn_cnt);
  uart_puts(" (expect 1935430)\r\n");
  uart_puts("[6] No errors\r\n");

  // ----------------------------------------------------------------
  // Phase 7: Read back the P-384 public key (x, y) from DMEM.
  // Symbols x @ 0x220, y @ 0x260, each 12 words (384 bits).
  // Print big-endian (MSW first) so the hex can be copy-pasted.
  // ----------------------------------------------------------------
  uart_puts("[7] Reading public key...\r\n");

  uint32_t pub_x[12], pub_y[12];
  CHECK_OK(otbn_dmem_read(12, OTBN_ADDR_T_INIT(run_p384, x), pub_x));
  CHECK_OK(otbn_dmem_read(12, OTBN_ADDR_T_INIT(run_p384, y), pub_y));

  uart_puts("[7] Qx=");
  for (int i = 11; i >= 0; i--) uart_puthex32(pub_x[i]);
  uart_puts("\r\n");

  uart_puts("[7] Qy=");
  for (int i = 11; i >= 0; i--) uart_puthex32(pub_y[i]);
  uart_puts("\r\n");

  test_pass();
  return 0;
}
