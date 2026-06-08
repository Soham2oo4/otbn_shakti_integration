// Crypto-layer status codes for Shakti.
// Derived from OpenTitan sw/device/lib/crypto/impl/status.h

#ifndef SHAKTI_P384_CRYPTO_IMPL_STATUS_H_
#define SHAKTI_P384_CRYPTO_IMPL_STATUS_H_

#include "sw/device/lib/base/macros.h"
#include "sw/device/lib/base/status.h"
#include "sw/device/lib/base/hardened.h"

#ifdef __cplusplus
extern "C" {
#endif

// kOtcryptoStatusValue* — fixed values that match OpenTitan's crypto library.
// Using base status codes from status.h:
enum {
  kOtcryptoStatusValueOk              = (int32_t)0x739,
  kOtcryptoStatusValueBadArgs         = (int32_t)(0x80000000 | 0x00fea0 | 3),
  kOtcryptoStatusValueInternalError   = (int32_t)(0x80000000 | 0x005340 | 7),
  kOtcryptoStatusValueFatalError      = (int32_t)(0x80000000 | 0x006d80 | 9),
  kOtcryptoStatusValueAsyncIncomplete = (int32_t)(0x80000000 | 0x00ea40 | 14),
  kOtcryptoStatusValueNotImplemented  = (int32_t)(0x80000000 | 0x008d20 | 12),
};

// Shorthand status constructors used throughout p384.c and otbn.c
#define OTCRYPTO_OK                ((status_t){.value = kHardenedBoolTrue})
#define OTCRYPTO_BAD_ARGS          ((status_t){.value = kOtcryptoStatusValueBadArgs})
#define OTCRYPTO_RECOV_ERR         ((status_t){.value = kOtcryptoStatusValueInternalError})
#define OTCRYPTO_FATAL_ERR         ((status_t){.value = kOtcryptoStatusValueFatalError})
#define OTCRYPTO_ASYNC_INCOMPLETE  ((status_t){.value = kOtcryptoStatusValueAsyncIncomplete})
#define OTCRYPTO_NOT_IMPLEMENTED   ((status_t){.value = kOtcryptoStatusValueNotImplemented})

// HARDENED_TRY: returns error on failure, continues on success.
// Non-RV32 version (no asm).
#define HARDENED_TRY(expr_)                                              \
  do {                                                                   \
    status_t _status = (expr_);                                          \
    if (_status.value != kHardenedBoolTrue) {                            \
      return (status_t){                                                 \
          .value = (int32_t)(OT_UNSIGNED(_status.value) | 0x80000000u)}; \
    }                                                                    \
  } while (0)

// MODULE_ID placeholder — p384.c defines its own via MAKE_MODULE_ID
#ifndef MAKE_MODULE_ID
#define MAKE_MODULE_ID(a, b, c) \
  ((uint32_t)(a) | ((uint32_t)(b) << 8) | ((uint32_t)(c) << 16))
#endif

#ifdef __cplusplus
}
#endif

#endif  // SHAKTI_P384_CRYPTO_IMPL_STATUS_H_
