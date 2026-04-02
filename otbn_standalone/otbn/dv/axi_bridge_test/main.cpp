#include <cstdio>
#include <cstdlib>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vaxi_bridge_test.h"
#include "Vaxi_bridge_test__Dpi.h"

static Vaxi_bridge_test *tb;
static VerilatedFstC    *trace;
static vluint64_t        sim_time = 0;

void tick() {
  tb->clk_i = 0;
  tb->eval();
  if (trace) trace->dump(sim_time++);
  tb->clk_i = 1;
  tb->eval();
  if (trace) trace->dump(sim_time++);
}

void reset(int cycles) {
  tb->rst_ni = 0;
  for (int i = 0; i < cycles; i++) tick();
  tb->rst_ni = 1;
  tick();
}

void wait_cycles(int n) {
  for (int i = 0; i < n; i++) tick();
}

bool poll_wr_done(int timeout = 100) {
  for (int i = 0; i < timeout; i++) {
    tick();
    svSetScope(svGetScopeFromName("TOP.axi_bridge_test"));
    if (is_wr_done()) return true;
  }
  return false;
}

bool poll_rd_done(int timeout = 100) {
  for (int i = 0; i < timeout; i++) {
    tick();
    svSetScope(svGetScopeFromName("TOP.axi_bridge_test"));
    if (is_rd_done()) return true;
  }
  return false;
}

int pass_count = 0;
int fail_count = 0;

void check(const char *name, bool cond) {
  if (cond) {
    printf("  [PASS] %s\n", name);
    pass_count++;
  } else {
    printf("  [FAIL] %s\n", name);
    fail_count++;
  }
}

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  tb    = new Vaxi_bridge_test;
  trace = new VerilatedFstC;
  tb->trace(trace, 99);
  trace->open("axi_bridge_test.fst");

  printf("============================================\n");
  printf("  AXI64-to-TL64 Bridge Standalone Test\n");
  printf("============================================\n");

  reset(5);

  svSetScope(svGetScopeFromName("TOP.axi_bridge_test"));

  // ---- Test 1: Single 64-bit write + readback ----
  printf("\n--- Test 1: Single 64-bit write + readback ---\n");
  axi_write(0x000, (long long)0xDEADBEEFCAFEBABEULL, 0xFF, 1);
  if (!poll_wr_done()) { printf("  TIMEOUT on write!\n"); goto done; }

  axi_read(0x000, 1);
  if (!poll_rd_done()) { printf("  TIMEOUT on read!\n"); goto done; }

  {
    long long rd = get_read_data();
    printf("  Wrote: 0x%016llx\n", (unsigned long long)0xDEADBEEFCAFEBABEULL);
    printf("  Read:  0x%016llx\n", (unsigned long long)rd);
    check("full 64-bit match", rd == (long long)0xDEADBEEFCAFEBABEULL);
  }

  // ---- Test 2: Partial strobe (lower 4 bytes only) ----
  printf("\n--- Test 2: Partial strobe write (lower 4 bytes) ---\n");
  // First write all-FF to addr 0x008
  axi_write(0x008, (long long)0xFFFFFFFFFFFFFFFFULL, 0xFF, 2);
  if (!poll_wr_done()) { printf("  TIMEOUT\n"); goto done; }

  // Now partial write lower 4 bytes
  axi_write(0x008, (long long)0x0000000012345678ULL, 0x0F, 2);
  if (!poll_wr_done()) { printf("  TIMEOUT\n"); goto done; }

  axi_read(0x008, 2);
  if (!poll_rd_done()) { printf("  TIMEOUT\n"); goto done; }

  {
    unsigned long long rd = (unsigned long long)get_read_data();
    printf("  Read:  0x%016llx\n", rd);
    check("lower 32 bits = 0x12345678", (rd & 0xFFFFFFFF) == 0x12345678);
    check("upper 32 bits = 0xFFFFFFFF", (rd >> 32) == 0xFFFFFFFF);
  }

  // ---- Test 3: Multiple addresses ----
  printf("\n--- Test 3: Write + readback at 4 different addresses ---\n");
  for (int i = 0; i < 4; i++) {
    long long val = 0xA000000000000000LL | (long long)i;
    axi_write(0x100 + i * 8, val, 0xFF, 3);
    if (!poll_wr_done()) { printf("  TIMEOUT write[%d]\n", i); goto done; }
  }
  for (int i = 0; i < 4; i++) {
    long long expected = 0xA000000000000000LL | (long long)i;
    axi_read(0x100 + i * 8, 3);
    if (!poll_rd_done()) { printf("  TIMEOUT read[%d]\n", i); goto done; }
    long long rd = get_read_data();
    char msg[64];
    snprintf(msg, sizeof(msg), "addr 0x%03x", 0x100 + i * 8);
    check(msg, rd == expected);
  }

  // ---- Test 4: Zero write ----
  printf("\n--- Test 4: Write zero + readback ---\n");
  axi_write(0x200, 0LL, 0xFF, 4);
  if (!poll_wr_done()) { printf("  TIMEOUT\n"); goto done; }

  axi_read(0x200, 4);
  if (!poll_rd_done()) { printf("  TIMEOUT\n"); goto done; }

  {
    long long rd = get_read_data();
    check("read back zero", rd == 0);
  }

  // ---- Test 5: Overwrite ----
  printf("\n--- Test 5: Overwrite same address ---\n");
  axi_write(0x300, (long long)0x1111111111111111ULL, 0xFF, 5);
  if (!poll_wr_done()) { printf("  TIMEOUT\n"); goto done; }
  axi_write(0x300, (long long)0x2222222222222222ULL, 0xFF, 5);
  if (!poll_wr_done()) { printf("  TIMEOUT\n"); goto done; }

  axi_read(0x300, 5);
  if (!poll_rd_done()) { printf("  TIMEOUT\n"); goto done; }

  {
    long long rd = get_read_data();
    check("overwrite value", rd == (long long)0x2222222222222222ULL);
  }

done:
  printf("\n============================================\n");
  printf("  Results: %d PASS, %d FAIL\n", pass_count, fail_count);
  printf("============================================\n");

  wait_cycles(10);
  trace->close();
  delete trace;
  delete tb;
  return fail_count > 0 ? 1 : 0;
}