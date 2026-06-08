// Shakti stub for sw/device/lib/base/status.h
// The crypto layer only uses status_t via the crypto impl/status.h defines.

#ifndef SHAKTI_P384_BASE_STATUS_H_
#define SHAKTI_P384_BASE_STATUS_H_

#include <stdint.h>
#include "sw/device/lib/base/macros.h"

// status_t: negative value = error, kHardenedBoolTrue = OK
typedef struct { int32_t value; } status_t;

// Generic status codes used directly by some paths in otbn.c
#define kOk             0
#define kAborted        7
#define kFailedPrecondition 9
#define kInvalidArgument    3
#define kUnavailable       14
#define kUnimplemented     12

#endif  // SHAKTI_P384_BASE_STATUS_H_
