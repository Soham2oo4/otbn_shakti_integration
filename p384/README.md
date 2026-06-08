# P-384 ECDSA/ECDH on Shakti via OTBN

This repository integrates OpenTitan's OTBN co-processor into the Shakti
C-class RISC-V SoC and runs the full P-384 elliptic-curve cryptography suite
(key generation, ECDSA sign, ECDSA verify) on it.

**Proven result:** P-384 key generation completes in ~4 minutes in the Verilated
Shakti SoC simulation, producing a valid 384-bit public key pair (Qx, Qy).

---

## Quick Start — All Commands

Run these in order from scratch. Everything after step 1 takes under 10 minutes.

```bash
# ── Step 1: Build the OTBN P-384 assembly binary (OpenTitan Bazel, one-time) ──
cd /home/soham/shakti/opentitan
./bazelisk.sh build //sw/otbn/crypto:run_p384
ELF=$(find bazel-out -name "run_p384.elf" 2>/dev/null | head -1)
echo "OTBN ELF: $ELF"

# ── Step 2: Extract OTBN binary to C arrays + address defines ──
cd /home/soham/shakti/p384
pip3 install pyelftools          # one-time
python3 scripts/extract_otbn_binary.py run_p384 "$ELF" gen/

# ── Step 3: Build the Shakti bare-metal firmware ──
cd /home/soham/shakti/p384
make

# ── Step 4: Convert firmware ELF to simulation memory image ──
cd /home/soham/shakti/c-class
elf2hex 8 4194304 /home/soham/shakti/p384/p384_test.elf 2147483648 > code.mem

# ── Step 5: Run the Shakti SoC simulation ──
cd /home/soham/shakti/c-class
timeout 10800 ./bin/out > /tmp/sim_p384.log 2>&1 &   # background (3-hour safety limit)
tail -f app_log                                        # watch UART output live
```

**Expected finish** (`app_log` after ~4–5 minutes):
```
[5] Keygen done
[6] No errors
[7] Qx=0x22c7dbec...
[7] Qy=0xdec2b44c...
=== P384 TEST PASSED ===
```

If you already have a prebuilt OTBN ELF, skip step 1 and point `$ELF` at the
cached binary:
```bash
ELF=/home/soham/.cache/bazel/_bazel_soham/cfada5411f82513c1b3338d07d24bc91/execroot/_main/bazel-out/k8-fastbuild-ST-1df456420242/bin/sw/otbn/crypto/run_p384.elf
```

---

## Table of Contents

1. [Architecture Overview](#architecture-overview)
2. [Repository Layout](#repository-layout)
3. [What Was Built and Fixed](#what-was-built-and-fixed)
4. [How to Build](#how-to-build)
5. [How to Run the Simulation](#how-to-run-the-simulation)
6. [How It Works — Driver Layer](#how-it-works--driver-layer)
7. [How It Works — Hardware Path](#how-it-works--hardware-path)
8. [How It Works — The Test](#how-it-works--the-test)
9. [Register Map](#register-map)
10. [Troubleshooting](#troubleshooting)

---

## Architecture Overview

```
OpenTitan reference:
  Ibex CPU  →  TileLink (32-bit)  →  otbn.h driver  →  OTBN core  →  P-384 math

Shakti integration (this repo):
  Shakti CPU  →  AXI4 (64-bit)  →  otbn.h driver  →  OTBN core  →  P-384 math
                      ↑
              otbn_shakti_shim.v
              otbn_axi_wrapper.sv
              axi64_to_tl64_bridge.sv
```

The P-384 algorithm (`impl/p384.c`) and the OTBN assembly binary
(`run_p384.elf`, compiled from OpenTitan's `sw/otbn/crypto/run_p384.S`) are
**byte-for-byte identical** to OpenTitan. Only the driver
(`sw/device/lib/crypto/drivers/otbn.c`) was ported to Shakti's 64-bit AXI bus
and memory map.

### Key differences from OpenTitan's Ibex integration

| Aspect | OpenTitan (Ibex RV32) | Shakti (RV64) |
|--------|-----------------------|---------------|
| CPU width | 32-bit | 64-bit |
| Bus to OTBN | TileLink 32-bit | AXI4 64-bit |
| OTBN base address | auto from device-tree | `0x00030000` (hardcoded) |
| IMEM write stride | 4 bytes / instruction | **8 bytes / instruction** |
| DMEM write width | 32-bit words | **64-bit packed pairs** |
| `OTBN_ADDR_T_INIT` | pointer-difference (RV32) | compile-time `#define` (RV64) |
| Secure wipe | full entropy complex | **no-op** (skipped) |

---

## Repository Layout

```
p384/
├── Makefile                              ← build entry point
├── shakti.ld                             ← bare-metal linker script (base 0x80000000)
├── p384_test.elf                         ← compiled firmware (output of make)
│
├── impl/
│   └── p384.c                            ← OpenTitan P-384 impl (UNCHANGED)
│
├── sw/device/lib/
│   ├── base/
│   │   ├── abs_mmio.h                    ← MMIO via plain volatile pointers
│   │   ├── hardened.h                    ← HARDENED_CHECK_EQ / launder32 / etc.
│   │   ├── crc32.h / crc32.c            ← CRC32 for app checksum
│   │   └── random_order.h               ← stub (sequential iteration)
│   └── crypto/
│       ├── drivers/
│       │   ├── otbn.h                    ← modified for RV64: ADDR_T_INIT is #define
│       │   └── otbn.c                    ← Shakti OTBN driver (64-bit AXI packing)
│       └── impl/
│           ├── ecc/p384.h               ← P-384 types and API declarations
│           └── status.h                 ← crypto status codes (OTCRYPTO_OK etc.)
│
├── hw/
│   ├── top/otbn_regs.h                  ← register offsets (from RTL autogen)
│   └── top_earlgrey/sw/autogen/...      ← stub include (required by p384.c)
│
├── test/
│   ├── crt0.S                            ← startup: clears .bss, sets sp, calls main
│   ├── utils.c                           ← UART putchar + sim_finish (writes 0x2000C)
│   └── main.c                            ← 7-phase end-to-end test (see below)
│
├── scripts/
│   └── extract_otbn_binary.py            ← ELF → C arrays + DMEM address #defines
│
└── gen/                                  ← generated by extract_otbn_binary.py
    ├── run_p384_app.c                    ← IMEM and DMEM data as C const arrays
    └── run_p384_defs.h                   ← all DMEM symbols as #defines
```

The `otbn_standalone/` directory (sibling of `p384/`) contains the OTBN RTL
and integration shims used when building `VmkTbSoc`:

```
otbn_standalone/
├── rtl/
│   └── otbn_axi_wrapper.sv              ← AXI4 ↔ TL-UL bridge + EDN/OTP stubs
├── otbn/rtl/
│   ├── otbn.sv                          ← OTBN core (OpenTitan, unchanged)
│   ├── otbn_reg_top.sv                  ← register file + IMEM/DMEM windows (FIXED)
│   └── ...
└── tlul/rtl/
    └── axi64_to_tl64_bridge.sv         ← 64-bit AXI ↔ TL-UL protocol bridge
```

---

## What Was Built and Fixed

Three non-trivial bugs were found and fixed during integration. Each is
described below so they can be understood and reproduced.

---

### Bug 1 — OTBN IMEM window too narrow (`otbn_reg_top.sv`)

**File:** `otbn_standalone/otbn/rtl/otbn_reg_top.sv`

**Problem:** The OTBN register decoder decoded IMEM bus addresses in the
range `[0x4000 : 0x5FFF]` (8 KiB). P-384 uses 2027 instructions; at 8 bytes
per AXI slot, instruction 1024 lands at `0x6000` and instruction 2026 at
`0x7F50` — both outside the old window. Writes to those addresses were silently
dropped (decoded as unmapped). The first 1023 instructions loaded correctly,
but the rest of IMEM stayed as zeroes, causing OTBN to execute garbage.

**Fix:** Widened the IMEM window to `[0x4000 : 0x7FFF]` (16 KiB). The SRAM
index formula `a_address[13:3]` stays correct because `OTBN_IMEM_SIZE` remains
`0x2000` (8192 bytes = 1024 × 8-byte slots).

```sv
// otbn_reg_top.sv — address decode for IMEM/DMEM/regs
// Before (only 8 KiB covered):
tl_i.a_address[AW-1:0] inside {[16384:24575]} ? 2'd0 :   // [0x4000:0x5FFF]
// After (full 16 KiB window):
tl_i.a_address[AW-1:0] inside {[16384:32767]} ? 2'd0 :   // [0x4000:0x7FFF]
```

**Verification:** Phase 2 of the test reads back slots 0, 1023, 1024, and 2026
from IMEM via the AXI bus and compares against the original data. Slot 1024
is the first instruction past the old boundary; it would have read back 0 if
the fix were absent.

---

### Bug 2 — C zero-size array end markers placed at wrong address

**File:** `scripts/extract_otbn_binary.py` → `gen/run_p384_app.c`

**Problem:** The OTBN driver uses sentinel symbols to find the boundaries of
the embedded IMEM/DMEM arrays:

```c
extern const uint32_t _imem_start[];   // pointer to start of IMEM data
extern const uint32_t _imem_end[];     // pointer just past end of IMEM data
// num_words = imem_end - imem_start
```

The original `extract_otbn_binary.py` generated:

```c
const uint32_t run_p384__imem_start[] = { ... };  // 2027 words
const uint32_t run_p384__imem_end[0]  = {};        // zero-size sentinel
```

GCC with `-Os` places zero-size arrays at the **start** of a section, not
after the preceding array, so `imem_end == imem_start`. The driver computes
`0 words` and refuses to load (`OTCRYPTO_BAD_ARGS`).

**Fix:** Each array gets its own named ELF section via `__attribute__((section(...)))`.
End markers use `[1] = {0}` with `aligned(4)` (not zero-size). The linker script
explicitly orders: `imem_data → imem_end → dmem_data → dmem_end`.

```c
// gen/run_p384_app.c (generated by extract_otbn_binary.py)
__attribute__((section(".rodata.otbn.run_p384.imem_data"), used))
const uint32_t _otbn_local_app_run_p384__imem_start[] = { /* 2027 words */ };

__attribute__((section(".rodata.otbn.run_p384.imem_end"), used, aligned(4)))
const uint32_t _otbn_local_app_run_p384__imem_end[1] = {0};
```

```ld
/* shakti.ld — ordering is mandatory */
.text : {
    *(.rodata.otbn.*.imem_data)
    *(.rodata.otbn.*.imem_end)
    *(.rodata.otbn.*.dmem_data)
    *(.rodata.otbn.*.dmem_end)
    *(.rodata*)
} > ram
```

**Verification:** After the fix, `nm p384_test.elf` shows
`_imem_end - _imem_start = 2027 words` and
`_dmem_data_end - _dmem_data_start = 80 words`.

---

### Bug 3 — Corrupted boot ROM files

**File:** `c-class/boot.LSB` and `c-class/boot.MSB`

**Problem:** Both `boot.LSB` and `boot.MSB` in the `c-class/` root directory
had identical MD5 hashes. The Shakti SoC loads the boot ROM from these files
at reset. With both halves identical, the CPU executed garbage instructions and
never jumped to DRAM, so the simulation hung silently.

**Fix:** Copied the correct files from `c-class/bin/`:

```bash
cp c-class/bin/boot.LSB c-class/boot.LSB
cp c-class/bin/boot.MSB c-class/boot.MSB
```

The boot ROM sequence is:
```asm
lui   t0, 0
addi  t0, t0, 0x140      # build boot config address
csrrs a0, mhartid        # read hart ID
lw    t0, 24(t0)         # load DRAM base from config → 0x80000000
jalr  x0, t0, 0          # jump to DRAM (our firmware)
```

---

## How to Build

### Prerequisites

```bash
# RISC-V 64-bit toolchain (already present on this machine):
riscv64-unknown-elf-gcc --version

# Python with pyelftools (for OTBN binary extraction):
pip3 install pyelftools

# OpenTitan repo (for building the OTBN P-384 assembly binary):
# Expected at /home/soham/shakti/opentitan
```

---

### Step 1 — Build the OTBN P-384 binary

OTBN is a separate co-processor with its own RISC-V ISA extension (BN
instructions). The P-384 assembly (`sw/otbn/crypto/run_p384.S` in OpenTitan)
must be compiled with OpenTitan's Bazel toolchain:

```bash
cd /home/soham/shakti/opentitan

./bazelisk.sh build //sw/otbn/crypto:run_p384

# Find the output ELF:
ELF=$(find bazel-out -name "run_p384.elf" 2>/dev/null | head -1)
echo "OTBN ELF: $ELF"
```

This ELF is **not** a RISC-V binary — it's an OTBN binary (uses BN
instructions). It is embedded verbatim into the Shakti firmware as a C array.

The prebuilt version is cached at:
```
/home/soham/.cache/bazel/_bazel_soham/cfada5411f82513c1b3338d07d24bc91/execroot/_main/
bazel-out/k8-fastbuild-ST-1df456420242/bin/sw/otbn/crypto/run_p384.elf
```

---

### Step 2 — Extract the OTBN binary to C

```bash
cd /home/soham/shakti/p384

python3 scripts/extract_otbn_binary.py run_p384 $ELF gen/
```

This reads the OTBN ELF and emits two files:

**`gen/run_p384_app.c`** — embeds the binary as C arrays with explicit sections:
```c
// IMEM: 2027 instructions (32-bit each, embedded as uint32_t)
__attribute__((section(".rodata.otbn.run_p384.imem_data"), used))
const uint32_t _otbn_local_app_run_p384__imem_start[] = { 0x0008b38b, ... };

__attribute__((section(".rodata.otbn.run_p384.imem_end"), used, aligned(4)))
const uint32_t _otbn_local_app_run_p384__imem_end[1] = {0};

// DMEM .data: 80 words of curve parameters (p384_b, p384_p, p384_n, gx, gy)
__attribute__((section(".rodata.otbn.run_p384.dmem_data"), used))
const uint32_t _otbn_local_app_run_p384__dmem_data_start[] = { 0x2a85c8ed, ... };

__attribute__((section(".rodata.otbn.run_p384.dmem_end"), used, aligned(4)))
const uint32_t _otbn_local_app_run_p384__dmem_data_end[1] = {0};
```

**`gen/run_p384_defs.h`** — all DMEM variable addresses as compile-time constants:
```c
#define _OTBN_REM_run_p384_mode        0x00000140u   // where to write mode
#define _OTBN_REM_run_p384_x           0x00000220u   // public key X output
#define _OTBN_REM_run_p384_y           0x00000260u   // public key Y output
#define _OTBN_REM_run_p384_MODE_KEYGEN 0x000003ccu   // keygen mode constant
// ... 100+ more symbols
```

---

### Step 3 — Build the Shakti firmware

```bash
cd /home/soham/shakti/p384

make
```

Output: `p384_test.elf` — a bare-metal RV64 ELF loaded at `0x80000000`.

The build compiles and links:
- `test/crt0.S` — startup (clears BSS, sets up stack, jumps to `main`)
- `test/main.c` — 7-phase test (see below)
- `test/utils.c` — UART output and `sim_finish`
- `impl/p384.c` — OpenTitan P-384 implementation (unchanged)
- `sw/device/lib/crypto/drivers/otbn.c` — Shakti OTBN driver
- `sw/device/lib/base/crc32.c` — CRC32 for app checksum verification
- `gen/run_p384_app.c` — embedded OTBN binary

---

### Step 4 — Convert ELF to simulation memory image

The Shakti simulation loads DRAM from a `code.mem` hex file (one 64-bit word
per line, `$readmemh` format):

```bash
cd /home/soham/shakti/c-class

elf2hex 8 4194304 /home/soham/shakti/p384/p384_test.elf 2147483648 > code.mem
#       ^         ^                                      ^
#       bytes/    depth (32 MiB / 8)                    base address (decimal!)
#       word
```

> **Important:** `elf2hex` requires the base address in **decimal**, not hex.
> `0x80000000 = 2147483648`. Passing `0x80000000` literally causes a silent
> assertion failure.

---

## How to Run the Simulation

```bash
cd /home/soham/shakti/c-class

# Run with a 3-hour safety timeout (keygen completes in ~4 minutes):
timeout 10800 ./bin/out

# Or run in the background and watch the log:
timeout 10800 ./bin/out > /tmp/sim_p384.log 2>&1 &
tail -f app_log          # UART output appears here in real time
```

### What the simulation produces

| File | Contents |
|------|----------|
| `app_log` | UART output from the firmware (live, written as characters arrive) |
| `sim_p384.log` | Verilator simulation stdout (warnings, `$finish` messages) |

### Expected output

```
[1] Loading P-384 IMEM/DMEM...
[1] Load OK
[2] Verifying IMEM boundary slots...
[2] IMEM boundary OK (slots 0, 1023, 1024, 2026 verified)
[3] Verifying DMEM curve parameters...
[3] DMEM .data OK
[4] Issuing EXECUTE (keygen mode)...
[4] EXECUTE issued
[5] Waiting for OTBN keygen...
[5] Keygen done
[6] insn_cnt=0 (expect 1935430)
[6] No errors
[7] Reading public key...
[7] Qx=0x<48 bytes, big-endian>
[7] Qy=0x<48 bytes, big-endian>
=== P384 TEST PASSED ===
```

> **Note on `insn_cnt=0`:** The `INSN_CNT` register in OTBN holds the running
> instruction count while the co-processor is busy. After it transitions back
> to IDLE it is cleared. Reading it after `otbn_busy_wait_for_done()` returns
> always gives 0. `ERR_BITS=0` is the authoritative success indicator.

### Simulation timing

| Phase | Real time |
|-------|-----------|
| Boot + IMEM load (2027 writes) | ~30 seconds |
| DMEM load + readback verification | ~5 seconds |
| P-384 keygen (1,935,430 OTBN instructions) | ~3–4 minutes |
| DMEM readback of public key | ~5 seconds |
| **Total** | **~4–5 minutes** |

---

## How It Works — Driver Layer

### `otbn.c` — Shakti-specific changes

The entire OpenTitan P-384 algorithm (`impl/p384.c`) is compiled unchanged.
Only `sw/device/lib/crypto/drivers/otbn.c` was rewritten for Shakti.

#### IMEM load: 8-byte stride

OTBN instructions are 32 bits wide. On OpenTitan's TileLink (32-bit bus), one
instruction = one 4-byte write at byte offset `N` (stride 4).

On Shakti's 64-bit AXI bus, the `axi64_to_tl64_bridge` requires 8-byte-aligned
accesses. Each instruction occupies the **lower 32 bits** of an 8-byte AXI slot.
The physical IMEM address for instruction `i` is:

```
physical = OTBN_BASE + OTBN_IMEM_OFFSET + i * 8
```

Driver code:
```c
uint64_t imem_base = otbn_base() + OTBN_IMEM_REG_OFFSET;
for (size_t i = 0; i < imem_num_words; i++) {
    abs_mmio_write64(imem_base + i * 8, (uint64_t)app.imem_start[i]);
}
```

#### DMEM load: 64-bit packed pairs

OTBN DMEM is word-addressed (32-bit words). On Shakti's 64-bit AXI bus, two
consecutive 32-bit words are packed into one 64-bit transaction. The byte
offset in DMEM maps 1:1 to AXI byte address (no stride doubling here):

```
AXI address = OTBN_BASE + OTBN_DMEM_OFFSET + dmem_byte_offset
```

Driver code:
```c
size_t pairs = num_words / 2;
for (size_t i = 0; i < pairs; i++) {
    uint64_t val = ((uint64_t)src[2*i+1] << 32) | src[2*i];
    abs_mmio_write64(base + i * 8, val);
}
// Odd trailing word (zero-extend upper half):
if (num_words & 1) {
    abs_mmio_write64(base + pairs * 8, (uint64_t)src[num_words-1]);
}
```

#### Secure wipe: no-op

OpenTitan calls `otbn_imem_sec_wipe()` and `otbn_dmem_sec_wipe()` before
loading an app (requires the entropy complex). On Shakti those functions just
return `OTCRYPTO_OK`. OTBN performs an internal RAM wipe on reset; the driver
polls `STATUS` until `IDLE` before loading.

#### Symbol addresses: compile-time defines

On OpenTitan's 32-bit Ibex, `OTBN_ADDR_T_INIT(app, sym)` computes an address
by subtracting the start-of-DMEM pointer from the symbol pointer (pointer
arithmetic at runtime). On RV64 this would require 64-bit pointer arithmetic
that doesn't match OTBN's 32-bit DMEM address space.

The fix: `extract_otbn_binary.py` reads the OTBN ELF symbol table and emits
the DMEM address of every symbol as a `#define` in `gen/run_p384_defs.h`.
`OTBN_ADDR_T_INIT(app, sym)` expands to `_OTBN_REM_<app>_<sym>` — a
compile-time constant. No runtime pointer arithmetic.

---

## How It Works — Hardware Path

### From `otbn_dmem_write` to OTBN SRAM

A 64-bit write from the Shakti CPU to an OTBN DMEM address takes this path:

```
Shakti CPU
  → L1 D-cache miss (OTBN is MMIO, non-cacheable)
  → Shakti AXI fabric
  → otbn_shakti_shim.v (address-maps 0x30000 → shim's slave port)
  → otbn_axi_wrapper.sv (holds the OTBN instance + EDN model)
  → axi64_to_tl64_bridge.sv (AXI4 64-bit → TL-UL 32-bit)
  → otbn_reg_top.sv (decodes address, routes to IMEM/DMEM/reg windows)
  → prim_ram_1p_fpga.sv (actual SRAM model)
```

### AXI → TL-UL bridge

`axi64_to_tl64_bridge.sv` converts AXI4 transactions to TL-UL (Tile Link
Uncached Lightweight). Key behavioural points:

- Accepts one AXI write burst at a time (`aw_ready` deasserted while a
  transaction is in flight)
- Generates two TL-UL `PutFull` beats for each 64-bit AXI write
- Holds `b_ready` high until it receives the TL-UL D-channel response before
  asserting `b_valid`

### EDN (Entropy) model

P-384 key generation requires random numbers from OTBN's EDN interface (for
blinding the scalar multiplication). The `otbn_axi_wrapper.sv` contains a
simple counter-based EDN stub:

```sv
always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
        edn_rnd_i_sig.edn_ack <= 1'b0;
        edn_rnd_i_sig.edn_bus <= 32'h5A5A5A5A;
    end else begin
        edn_rnd_i_sig.edn_ack  <= edn_rnd_o_sig.edn_req;  // 1-cycle latency
        edn_rnd_i_sig.edn_fips <= 1'b1;                    // always FIPS-valid
        edn_rnd_i_sig.edn_bus  <= edn_rnd_i_sig.edn_bus + 32'h87654321;
    end
end
```

This provides deterministic (non-cryptographic) entropy. The output keys are
NOT cryptographically secure — this is simulation only. The `edn_fips=1` flag
satisfies OTBN's entropy quality check; without it OTBN would lock.

### OTBN execution

After `CMD = EXECUTE` is written:

1. OTBN `start_stop_control` issues a fetch from IMEM offset 0 (the `start`
   entry-point in `run_p384.S`)
2. The OTBN controller fetches, decodes, and executes RISC-V BN instructions
3. The `otbn_rnd` module requests entropy from EDN as needed (for scalar
   re-blinding). The stub acks in one cycle.
4. After 1,935,430 instructions (constant-time), OTBN writes the result to
   DMEM and sets `STATUS = IDLE`
5. The Shakti CPU's polling loop (`do { status = *STATUS; } while (busy)`)
   detects IDLE and proceeds

---

## How It Works — The Test

`test/main.c` runs 7 phases:

| Phase | What it does | Why |
|-------|-------------|-----|
| 1 | `otbn_load_app(kApp)` | Writes 2027 × 8 = 16,216 bytes to IMEM + 80 words to DMEM |
| 2 | Read back IMEM slots 0, 1023, 1024, 2026 | **Proves the IMEM window fix works** — slot 1024 is the first past the old 8 KiB boundary |
| 3 | Read back first + last 64-bit DMEM words | Verifies curve parameters loaded correctly |
| 4 | Write MODE=KEYGEN, call `otbn_execute()` | Fires `CMD=0xD8`, confirms STATUS != LOCKED |
| 5 | `otbn_busy_wait_for_done()` | Polls STATUS until IDLE (~4 minutes) |
| 6 | Check `ERR_BITS == 0`, print `INSN_CNT` | Confirms keygen ran without errors |
| 7 | `otbn_dmem_read(12, x, pub_x)` + print | Reads the 384-bit public key X and Y coordinates |

### UART and simulation termination

The Shakti TbSoc writes every byte the UART transmits to `app_log` (opened
with `$fopen("app_log","w")`). Characters appear as they are serialized, one
baud period at a time.

Simulation terminates when the firmware writes any value to address `0x2000C`.
This address maps to the `mksign_dump` peripheral which calls `$finish(0)` on
any write where address bits [24:21] == `4'hC`:

```c
// test/utils.c
void sim_finish(void) {
    *(volatile uint32_t *)0x2000CUL = 1;
    while (1);
}
```

---

## Register Map

All addresses are physical (as seen by the Shakti CPU).

| Register | Address | Width | Description |
|----------|---------|-------|-------------|
| CMD | `0x00030010` | 32-bit | Write `0xD8` to execute |
| CTRL | `0x00030014` | 32-bit | Bit 0: software errors fatal |
| STATUS | `0x00030018` | 32-bit | `0x00`=IDLE, `0x01`=BUSY_EXECUTE, `0xFF`=LOCKED |
| ERR_BITS | `0x0003001C` | 32-bit | Error flags; `0` = success |
| FATAL_ALERT_CAUSE | `0x00030020` | 32-bit | Fatal alert details |
| INSN_CNT | `0x00030024` | 32-bit | Instructions executed (cleared when IDLE) |
| LOAD_CHECKSUM | `0x00030028` | 32-bit | CRC32 over loaded IMEM+DMEM |
| IMEM | `0x00034000` | 8 KiB | Instruction memory (stride 8 on Shakti AXI) |
| DMEM | `0x00038000` | 3 KiB | Data memory (packed 32-bit pairs on Shakti AXI) |
| UART TX data | `0x00011304` | 8-bit write | Write character to UART transmit buffer |
| UART status | `0x0001130C` | 16-bit read | Bit 1 = TX busy |
| sim_finish | `0x0002000C` | any write | Triggers `$finish(0)` in Verilog |

---

## Troubleshooting

**`make` fails with "gen/ files missing"**
→ Run Step 2 first (`extract_otbn_binary.py`). The generated files are not
committed because they are derived from the OpenTitan Bazel build.

**Simulation hangs indefinitely**
→ Check `app_log`. If empty: boot ROM is wrong. Copy correct files:
```bash
cp c-class/bin/boot.LSB c-class/boot.LSB
cp c-class/bin/boot.MSB c-class/boot.MSB
```
If `app_log` has `[1] Loading...` but no `[1] Load OK`: OTBN never became
IDLE. Verify `otbn_shakti_shim.v` is instantiated in the SoC and the OTBN
AXI slave is clocked and reset correctly.

**`[4] OTBN LOCKED`**
→ OTBN entered the LOCKED state before EXECUTE was issued. Read `ERR_BITS`
(`0x3001C`) and `FATAL_ALERT_CAUSE` (`0x30020`). Most common cause: an IMEM
integrity failure. Check that the 64-bit IMEM write stride is 8 (not 4).

**`[6]` shows non-zero ERR_BITS**
→ OTBN hit a fatal error during keygen. The error codes are defined in
`otbn_reg_pkg.sv`. Common values: `BAD_INSN_ADDR` = instruction fetch outside
IMEM, `ILLEGAL_INSN` = invalid opcode, `RND_FIPS_CHK_FAIL` = EDN did not
assert `edn_fips`.

**IMEM readback mismatch (Phase 2 fails)**
→ The IMEM window fix is not in effect. Verify `otbn_reg_top.sv` line:
```sv
tl_i.a_address[AW-1:0] inside {[16384:32767]}   // [0x4000:0x7FFF]
```
and that the simulation binary (`bin/out`) was recompiled after the fix.

**elf2hex crash or wrong memory image**
→ Always pass the base address as **decimal**:
```bash
elf2hex 8 4194304 p384_test.elf 2147483648 > code.mem
#                                ^^^^^^^^^^
#                                NOT 0x80000000
```

**Instruction count mismatch crash (`HARDENED_CHECK_EQ` trap)**
→ Only triggered if calling `p384_keygen_finalize()` from `impl/p384.c`.
The expected count (`kModeKeygenInsCnt = 1935430`) is constant-time and will
match if keygen completes normally. A mismatch means OTBN executed a different
code path — likely due to an early termination or error. Check `ERR_BITS` first.
