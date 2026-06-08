// Shakti stub for hw/top/dt/otbn.h (device-tree OTBN descriptor).
// On OpenTitan, this provides the OTBN base address via device-tree lookup.
// On Shakti, the OTBN base is hardcoded at 0x30000.

#ifndef SHAKTI_P384_HW_TOP_DT_OTBN_H_
#define SHAKTI_P384_HW_TOP_DT_OTBN_H_

#include <stdint.h>

typedef int dt_otbn_t;
#define kDtOtbn 0

static inline uint32_t dt_otbn_primary_reg_block(dt_otbn_t dt) {
  (void)dt;
  return 0x00030000UL;
}

#endif  // SHAKTI_P384_HW_TOP_DT_OTBN_H_
