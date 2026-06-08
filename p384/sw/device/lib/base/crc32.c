// CRC32 implementation — portable C (non-RV32 path from OpenTitan).
// Used by the OTBN driver for IMEM/DMEM load checksum verification.

#include "sw/device/lib/base/crc32.h"
#include <string.h>

enum { kCrc32Poly = 0xedb88320u };

static uint32_t crc32_byte(uint32_t ctx, uint8_t byte) {
  ctx ^= byte;
  for (int i = 0; i < 8; i++) {
    int lsb = ctx & 1;
    ctx >>= 1;
    if (lsb) ctx ^= kCrc32Poly;
  }
  return ctx;
}

void crc32_init(uint32_t *ctx) {
  *ctx = 0xffffffffu;
}

void crc32_add8(uint32_t *ctx, uint8_t byte) {
  *ctx = crc32_byte(*ctx, byte);
}

void crc32_add32(uint32_t *ctx, uint32_t word) {
  *ctx = crc32_byte(*ctx, (uint8_t)(word >>  0));
  *ctx = crc32_byte(*ctx, (uint8_t)(word >>  8));
  *ctx = crc32_byte(*ctx, (uint8_t)(word >> 16));
  *ctx = crc32_byte(*ctx, (uint8_t)(word >> 24));
}

void crc32_add(uint32_t *ctx, const void *buf, size_t len) {
  const uint8_t *p = (const uint8_t *)buf;
  for (size_t i = 0; i < len; i++) {
    *ctx = crc32_byte(*ctx, p[i]);
  }
}

uint32_t crc32_finish(const uint32_t *ctx) {
  return ~(*ctx);
}

uint32_t crc32(const void *buf, size_t len) {
  uint32_t ctx;
  crc32_init(&ctx);
  crc32_add(&ctx, buf, len);
  return crc32_finish(&ctx);
}
