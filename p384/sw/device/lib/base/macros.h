// Copyright lowRISC contributors (OpenTitan project).
// SPDX-License-Identifier: Apache-2.0
// Shakti-compatible stub: removes RV32-specific attributes.

#ifndef SHAKTI_P384_BASE_MACROS_H_
#define SHAKTI_P384_BASE_MACROS_H_

#include <stdint.h>

#define OT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#define OT_UNREACHABLE()      __builtin_unreachable()
#define OT_UNSIGNED(x)        ((uint32_t)(x))

// Barrier macros — no-ops on non-hardened builds
#define barrierw(x)           ((void)(x))
#define launder32(x)          (x)
#define launderw(x)           (x)

// Array size helper
#define ARRAYSIZE(x)          (sizeof(x) / sizeof((x)[0]))

#endif  // SHAKTI_P384_BASE_MACROS_H_
