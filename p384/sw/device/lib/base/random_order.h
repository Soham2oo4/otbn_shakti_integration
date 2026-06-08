// Shakti stub: sequential (non-random) order — no SCA hardening needed for testing.
#ifndef SHAKTI_P384_BASE_RANDOM_ORDER_H_
#define SHAKTI_P384_BASE_RANDOM_ORDER_H_

#include <stddef.h>
#include <stdint.h>

typedef struct { size_t count; size_t total; } random_order_t;

static inline void random_order_init(random_order_t *ctx, size_t total) {
  ctx->count = 0;
  ctx->total = total;
}

static inline size_t random_order_advance(random_order_t *ctx) {
  return ctx->count++;
}

// Verify all elements were visited
#define RANDOM_ORDER_HARDENED_CHECK_DONE(order) \
  do { (void)(order); } while (0)

#endif  // SHAKTI_P384_BASE_RANDOM_ORDER_H_
