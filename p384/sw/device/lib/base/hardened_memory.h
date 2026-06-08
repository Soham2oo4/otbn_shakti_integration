// Shakti stub for hardened_memory.h
#ifndef SHAKTI_P384_BASE_HARDENED_MEMORY_H_
#define SHAKTI_P384_BASE_HARDENED_MEMORY_H_

#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include "sw/device/lib/base/hardened.h"
#include "sw/device/lib/base/macros.h"

#ifdef __cplusplus
extern "C" {
#endif

// Compare two uint32_t arrays of `len` words. Returns kHardenedBoolTrue if
// equal, kHardenedBoolFalse otherwise.
static inline OT_WARN_UNUSED_RESULT
hardened_bool_t hardened_memeq(const uint32_t *a, const uint32_t *b,
                                size_t len) {
  uint32_t diff = 0;
  for (size_t i = 0; i < len; i++) {
    diff |= a[i] ^ b[i];
  }
  return diff == 0 ? kHardenedBoolTrue : kHardenedBoolFalse;
}

#ifdef __cplusplus
}
#endif

#endif  // SHAKTI_P384_BASE_HARDENED_MEMORY_H_
