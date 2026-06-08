// Shakti abs_mmio: direct volatile pointer reads/writes.
#ifndef SHAKTI_P384_BASE_ABS_MMIO_H_
#define SHAKTI_P384_BASE_ABS_MMIO_H_

#include <stdint.h>

static inline void abs_mmio_write32(uint32_t addr, uint32_t val) {
  *(volatile uint32_t *)(uintptr_t)addr = val;
}

static inline uint32_t abs_mmio_read32(uint32_t addr) {
  return *(volatile uint32_t *)(uintptr_t)addr;
}

static inline void abs_mmio_write64(uint64_t addr, uint64_t val) {
  *(volatile uint64_t *)(uintptr_t)addr = val;
}

static inline uint64_t abs_mmio_read64(uint64_t addr) {
  return *(volatile uint64_t *)(uintptr_t)addr;
}

#endif  // SHAKTI_P384_BASE_ABS_MMIO_H_
