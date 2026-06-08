// Shakti-compatible hardened.h
// Removes RV32-specific asm, keeps the logical behavior.

#ifndef SHAKTI_P384_BASE_HARDENED_H_
#define SHAKTI_P384_BASE_HARDENED_H_

#include <stdint.h>
#include "sw/device/lib/base/hardened_asm.h"
#include "sw/device/lib/base/macros.h"
#include "sw/device/lib/base/stdasm.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum hardened_bool {
  kHardenedBoolTrue  = HARDENED_BOOL_TRUE,
  kHardenedBoolFalse = HARDENED_BOOL_FALSE,
} hardened_bool_t;

typedef enum hardened_byte_bool {
  kHardenedByteBoolTrue  = HARDENED_BYTE_BOOL_TRUE,
  kHardenedByteBoolFalse = HARDENED_BYTE_BOOL_FALSE,
} hardened_byte_bool_t;

// On Shakti (non-hardened path): HARDENED_CHECK_* abort on failure.
// We use __builtin_trap() so the simulator halts visibly.
#define HARDENED_CHECK_EQ(a, b) \
  do { if ((uint32_t)(a) != (uint32_t)(b)) __builtin_trap(); } while (0)
#define HARDENED_CHECK_NE(a, b) \
  do { if ((uint32_t)(a) == (uint32_t)(b)) __builtin_trap(); } while (0)
#define HARDENED_CHECK_LT(a, b) \
  do { if (!((uint32_t)(a) <  (uint32_t)(b))) __builtin_trap(); } while (0)
#define HARDENED_CHECK_GT(a, b) \
  do { if (!((uint32_t)(a) >  (uint32_t)(b))) __builtin_trap(); } while (0)
#define HARDENED_CHECK_LE(a, b) \
  do { if (!((uint32_t)(a) <= (uint32_t)(b))) __builtin_trap(); } while (0)
#define HARDENED_CHECK_GE(a, b) \
  do { if (!((uint32_t)(a) >= (uint32_t)(b))) __builtin_trap(); } while (0)

#ifdef __cplusplus
}
#endif

#endif  // SHAKTI_P384_BASE_HARDENED_H_
