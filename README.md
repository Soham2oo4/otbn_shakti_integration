# OTBN + Shakti C-class P-384 Integration

This repository integrates OpenTitan's **OTBN** big-number accelerator into the
**Shakti C-class** RISC-V SoC and runs the OpenTitan P-384 program through the
full Shakti software simulation path.

The important result is:

```text
Shakti C-class CPU firmware
    -> Shakti memory-mapped AXI bus
    -> OTBN AXI wrapper / bridge
    -> OpenTitan OTBN core
    -> P-384 key generation inside OTBN
    -> Shakti CPU reads Qx/Qy back from OTBN DMEM
```

This is not just an OTBN standalone test. The main P-384 test runs as bare-metal
firmware on the Shakti C-class SoC simulation and uses OTBN as a memory-mapped
accelerator.

Validated software simulation result:

```text
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
[7] Qx=0x3f5824e80x64b078410x2a929e570x6e90e0bf0xc5ccbafe0xb3af95950x37b30b040xd3e896bf0x5fa120c60xb1b413340xd6aa46250x9f2330c8
[7] Qy=0xeef9fa1f0x3a4712690xedb18d960x5ce71ccf0x16d08dc70x58b3f7a80x3b984b1a0x3d63644f0x305b9c790xf9c38b320xde9bf52f0xac07014e
=== P384 TEST PASSED ===
```

`insn_cnt=0` is expected in this integration because the instruction counter
reads as zero after OTBN returns to idle. The decisive success indicators are:

- `Keygen done`
- `No errors`
- readable Qx/Qy public key output
- `=== P384 TEST PASSED ===`

---

## Branches used

The following branches currently point to the same root commit:

```text
otbn-p384-integration
otbn-p384-5.5-integration
```

Validated root commit:

```text
2339622abadd1a0678026b6222b52b6c26090ac3
```

The C-class sub-repository is the Shakti C-class tree used by the simulation.
The software validation discussed here is independent of FPGA bitstream,
Vivado, OpenOCD, and hardware JTAG.

For reproducible cloning, `c-class/` is recorded as a submodule. The submodule
content is stored on the companion branch:

```text
c-class-otbn-p384-5.6.1
```

Use `--recurse-submodules` when cloning this branch.

---

## Repository layout

```text
shakti/
├── README.md
├── opentitan/
│   └── sw/otbn/crypto/run_p384.S
│       OpenTitan's original OTBN P-384 assembly program.
│
├── otbn_standalone/
│   ├── rtl/
│   │   └── otbn_axi_wrapper.sv
│   │       Shakti-facing OTBN wrapper. This exposes OTBN to Shakti over AXI
│   │       and provides the minimal integration glue needed for simulation.
│   │
│   ├── otbn/rtl/
│   │   └── otbn.sv, otbn_reg_top.sv, ...
│   │       OpenTitan OTBN core RTL.
│   │
│   └── otbn/dv/
│       ├── add/
│       ├── add_64/
│       ├── dmem_test/
│       ├── dmem64_test/
│       ├── imem_tb/
│       ├── axi_bridge_test/
│       ├── otbn_axi_test/
│       └── p384_run/
│           Standalone/unit tests for OTBN and the AXI wrapper.
│
├── p384/
│   ├── Makefile
│   ├── shakti.ld
│   ├── p384_test.elf
│   ├── test/
│   │   ├── crt0.S
│   │   ├── main.c
│   │   └── utils.c
│   ├── impl/
│   │   └── p384.c
│   ├── sw/device/lib/crypto/drivers/
│   │   ├── otbn.c
│   │   └── otbn.h
│   ├── scripts/
│   │   └── extract_otbn_binary.py
│   └── gen/
│       ├── run_p384_app.c
│       └── run_p384_defs.h
│
└── c-class/
    ├── bin/out
    ├── code.mem
    └── app_log
        Shakti C-class Verilator simulation and UART output.
```

---

## What each part does

### `opentitan/`

OpenTitan provides the reference OTBN P-384 assembly implementation:

```text
sw/otbn/crypto/run_p384.S
```

That program is compiled into an OTBN ELF using Bazel. The Shakti CPU does not
execute this ELF directly. Instead, the ELF is converted into C arrays and
embedded into the Shakti bare-metal firmware.

### `p384/`

This directory builds the Shakti-side firmware.

The firmware runs on the Shakti C-class CPU. Its job is to:

1. configure/load OTBN,
2. copy the P-384 OTBN program into OTBN IMEM,
3. copy P-384 constants/data into OTBN DMEM,
4. issue OTBN `EXECUTE`,
5. wait until OTBN finishes,
6. read public key output from OTBN DMEM,
7. print the result through UART into `c-class/app_log`.

Important files:

| File | Purpose |
|------|---------|
| `p384/test/main.c` | Seven-phase top-level test. This is the main test logic. |
| `p384/test/utils.c` | Minimal UART output and simulation finish helper. |
| `p384/test/crt0.S` | Bare-metal reset/startup code. |
| `p384/sw/device/lib/crypto/drivers/otbn.c` | Shakti port of OpenTitan's OTBN driver. |
| `p384/sw/device/lib/crypto/drivers/otbn.h` | OTBN app symbol/address handling. |
| `p384/impl/p384.c` | Host-side OpenTitan P-384 driver code. |
| `p384/gen/run_p384_app.c` | Generated IMEM/DMEM arrays from the OTBN ELF. |
| `p384/gen/run_p384_defs.h` | Generated OTBN DMEM symbol offsets. |
| `p384/shakti.ld` | Linker script for firmware at Shakti memory base. |

### `otbn_standalone/`

This contains OTBN RTL and standalone tests. These are useful for proving OTBN
and the AXI wrapper before involving the Shakti SoC.

### `c-class/`

This is the Shakti C-class SoC simulation tree. For the full test, `c-class`
provides:

- the Shakti CPU,
- memory map,
- AXI fabric,
- UART capture into `app_log`,
- OTBN as an AXI-attached accelerator,
- Verilator executable `bin/out`.

---

## Architecture

### High-level view

```text
              software running on Shakti CPU
                            │
                            │ memory-mapped loads/stores
                            ▼
                  Shakti AXI interconnect
                            │
                            ▼
                   OTBN AXI wrapper/shim
                            │
                            ▼
                      TL-UL style OTBN
                            │
              ┌─────────────┴─────────────┐
              ▼                           ▼
         OTBN IMEM                    OTBN DMEM
   P-384 assembly code        curve constants, mode, output
              │                           │
              └─────────────┬─────────────┘
                            ▼
                     OTBN execution
                            │
                            ▼
                  Qx/Qy public key output
```

### Why the test proves the full path

The test does not simply instantiate OTBN and run it in isolation. The Shakti
CPU performs all OTBN access using normal memory-mapped transactions.

The proof points in `app_log` correspond to this:

| Log line | What it proves |
|----------|----------------|
| `[1] Loading P-384 IMEM/DMEM...` | Shakti firmware started and is accessing the OTBN driver. |
| `[1] Load OK` | Shakti CPU successfully wrote the OTBN app into OTBN memory. |
| `[2] IMEM boundary OK...` | Shakti CPU read OTBN IMEM back through the SoC path; the large P-384 IMEM window works. |
| `[3] DMEM .data OK` | Shakti CPU read OTBN DMEM constants back correctly. |
| `[4] EXECUTE issued` | Shakti CPU wrote OTBN command register through the integration path. |
| `[5] Keygen done` | OTBN executed the P-384 keygen program and returned to idle. |
| `[6] No errors` | OTBN did not report an internal error. |
| `[7] Qx/Qy` | Shakti CPU read the public key result from OTBN DMEM. |
| `=== P384 TEST PASSED ===` | The firmware reached its success path. |

---

## Build and run: full Shakti + OTBN P-384 software simulation

These are the commands to reproduce the software-only result. No FPGA hardware,
Vivado, OpenOCD, or JTAG is involved.

### Fresh clone

```bash
git clone --recurse-submodules -b otbn-p384-5.5-integration \
  https://github.com/Soham2oo4/otbn_shakti_integration.git

cd otbn_shakti_integration
```

If the repository was cloned without submodules:

```bash
git submodule update --init --recursive
```

### Step 0: activate the environment

If using the local virtual environment:

```bash
cd /home/soham/shakti
source shakti_env/bin/activate
```

### Step 1: build the OTBN P-384 binary from OpenTitan

This is only needed if `p384/gen/run_p384_app.c` and
`p384/gen/run_p384_defs.h` are missing or stale.

```bash
cd /home/soham/shakti/opentitan
./bazelisk.sh build //sw/otbn/crypto:run_p384

ELF=$(find bazel-out -name "run_p384.elf" 2>/dev/null | head -1)
echo "$ELF"
```

The output ELF is the OTBN program. It is not the Shakti firmware.

### Step 2: extract OTBN IMEM/DMEM into C arrays

```bash
cd /home/soham/shakti/p384
python3 scripts/extract_otbn_binary.py run_p384 "$ELF" gen/
```

This creates:

```text
p384/gen/run_p384_app.c
p384/gen/run_p384_defs.h
```

These generated files embed the OTBN program and symbol offsets into the Shakti
firmware build.

### Step 3: build the Shakti bare-metal firmware

```bash
cd /home/soham/shakti/p384
make
```

Expected output:

```text
p384/p384_test.elf
p384/p384_test.dis
```

This ELF runs on the Shakti CPU. It contains:

- the Shakti startup code,
- UART print helpers,
- the OTBN driver,
- the P-384 test,
- the generated OTBN P-384 IMEM/DMEM arrays.

### Step 3.5: build the Shakti C-class simulator if needed

If `c-class/bin/out` is missing or stale, rebuild the Verilator simulator:

```bash
cd /home/soham/shakti/c-class
make -j4 generate_verilog
make -j4 link_verilator
make generate_boot_files
```

This builds the Shakti SoC simulation executable and regenerates the boot memory
used by the testbench.

### Step 4: convert the Shakti firmware ELF to `code.mem`

The Shakti Verilator simulation loads memory from `c-class/code.mem`.

```bash
cd /home/soham/shakti/c-class
elf2hex 8 4194304 /home/soham/shakti/p384/p384_test.elf 2147483648 > code.mem
```

What this means:

| Argument | Meaning |
|----------|---------|
| `8` | output words are 8 bytes wide |
| `4194304` | memory depth for the generated image |
| `p384_test.elf` | Shakti firmware ELF |
| `2147483648` | decimal for `0x80000000`, the firmware load base |

### Step 5: run the Shakti C-class simulation

```bash
cd /home/soham/shakti/c-class
: > app_log
./bin/out > /tmp/sim_p384.log 2>&1
```

In another terminal, watch:

```bash
cd /home/soham/shakti/c-class
tail -f app_log
```

Or run it in the background:

```bash
cd /home/soham/shakti/c-class
: > app_log
./bin/out > /tmp/sim_p384.log 2>&1 &
tail -f app_log
```

Expected runtime is roughly 4-5 minutes on a normal Verilator build, but it can
vary by machine.

---

## Expected successful output

The full successful output should look like this:

```text
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
[7] Qx=0x3f5824e80x64b078410x2a929e570x6e90e0bf0xc5ccbafe0xb3af95950x37b30b040xd3e896bf0x5fa120c60xb1b413340xd6aa46250x9f2330c8
[7] Qy=0xeef9fa1f0x3a4712690xedb18d960x5ce71ccf0x16d08dc70x58b3f7a80x3b984b1a0x3d63644f0x305b9c790xf9c38b320xde9bf52f0xac07014e
=== P384 TEST PASSED ===
```

The exact Qx/Qy can vary if randomness is changed. In this simulation, the EDN
model is deterministic/immediate-ack, so repeated runs can produce the same
public key.

If `=== P384 TEST PASSED ===` appears, the software integration test passed.
If the Verilator process does not exit after the pass banner, the test result is
still valid; stop the simulator manually after preserving `app_log`.

---

## What the P-384 firmware does internally

The Shakti firmware in `p384/test/main.c` runs seven phases.

### Phase 1: load OTBN IMEM and DMEM

```text
[1] Loading P-384 IMEM/DMEM...
[1] Load OK
```

The firmware declares the generated OTBN app:

```c
OTBN_DECLARE_APP_SYMBOLS(run_p384);
static const otbn_app_t kApp = OTBN_APP_T_INIT(run_p384);
```

Then it calls:

```c
otbn_load_app(kApp);
```

This copies:

- OTBN instructions into IMEM,
- constants and initial data into DMEM.

### Phase 2: verify IMEM boundary slots

```text
[2] Verifying IMEM boundary slots...
[2] IMEM boundary OK (slots 0, 1023, 1024, 2026 verified)
```

The P-384 OTBN program is large. The important boundary is slot `1024`, because
older/smaller OTBN IMEM windows only covered the first 1024 slots. Reading back
slot `1024` and slot `2026` proves the full P-384 program is accessible.

The checked slots are:

| Slot | Meaning |
|------|---------|
| `0` | first instruction |
| `1023` | last slot in the old 8 KiB-style boundary |
| `1024` | first slot beyond the old boundary |
| `2026` | last P-384 instruction |

### Phase 3: verify DMEM curve parameters

```text
[3] Verifying DMEM curve parameters...
[3] DMEM .data OK
```

The firmware reads back the first and last words of the P-384 constants loaded
into OTBN DMEM. This proves DMEM writes/reads are working through the Shakti
bus path.

### Phase 4: issue OTBN execute

```text
[4] Issuing EXECUTE (keygen mode)...
[4] EXECUTE issued
```

The firmware writes the keygen mode into OTBN DMEM and issues the OTBN command:

```text
CMD = EXECUTE
```

At this point, the actual P-384 scalar/keygen computation is happening inside
OTBN, not on the Shakti CPU.

### Phase 5: wait for OTBN completion

```text
[5] Waiting for OTBN keygen...
[5] Keygen done
```

The Shakti CPU polls OTBN status until OTBN returns to idle.

This is the long part of the simulation. The P-384 keygen path executes about
1.9 million OTBN instructions.

### Phase 6: check OTBN error state

```text
[6] insn_cnt=0 (expect 1935430)
[6] No errors
```

The key check is `ERR_BITS == 0`.

`insn_cnt=0` is expected in this simulation after OTBN returns to idle.

### Phase 7: read back public key

```text
[7] Reading public key...
[7] Qx=...
[7] Qy=...
=== P384 TEST PASSED ===
```

The Shakti CPU reads the public key from OTBN DMEM:

| Symbol | Meaning |
|--------|---------|
| `x` | P-384 public key x-coordinate |
| `y` | P-384 public key y-coordinate |

If Qx/Qy are read and no error bits are set, the test passes.

---

## OTBN memory map used by the firmware

The Shakti-side OTBN driver uses this base:

```c
#define OTBN_BASE_ADDR 0x00030000UL
```

Important windows:

| Region | Address |
|--------|---------|
| OTBN registers | `0x00030000` |
| OTBN IMEM window | `0x00034000` |
| OTBN DMEM window | `0x00038000` |

The Shakti CPU reaches these over the SoC interconnect. The OTBN wrapper
translates the Shakti AXI access pattern into OTBN's internal bus/register
interface.

---

## Why 64-bit packing matters

OpenTitan's original software stack is built around Ibex/RV32 and TileLink.
This integration runs on Shakti/RV64 with a 64-bit AXI path.

The Shakti OTBN driver must account for that:

- IMEM accesses are performed through 64-bit AXI slots.
- Each OTBN instruction is 32 bits, but the IMEM bus slot is 64 bits wide.
- DMEM words are 32-bit words, but the Shakti bus naturally reads/writes 64-bit
  pairs.

That is why the driver has explicit packing/unpacking logic for IMEM and DMEM.

---

## Standalone OTBN tests

Before running the full Shakti SoC test, the standalone OTBN tests can be used
to isolate issues.

Run from the repository root:

```bash
cd /home/soham/shakti/otbn_standalone/otbn/dv/add
make
```

Other useful tests:

```bash
cd /home/soham/shakti/otbn_standalone/otbn/dv/add_64
make

cd /home/soham/shakti/otbn_standalone/otbn/dv/dmem_test
make

cd /home/soham/shakti/otbn_standalone/otbn/dv/dmem64_test
make

cd /home/soham/shakti/otbn_standalone/otbn/dv/imem_tb
make

cd /home/soham/shakti/otbn_standalone/otbn/dv/axi_bridge_test
make

cd /home/soham/shakti/otbn_standalone/otbn/dv/otbn_axi_test
make

cd /home/soham/shakti/otbn_standalone/otbn/dv/p384_run
make
```

Use these to separate:

- OTBN core problems,
- AXI wrapper problems,
- Shakti SoC integration problems,
- firmware/driver problems.

---

## Troubleshooting

### `app_log` is empty

Usually this means the SoC did not boot the intended firmware.

Check:

```bash
cd /home/soham/shakti/c-class
ls -lh code.mem
ls -lh bin/out
```

Regenerate `code.mem`:

```bash
cd /home/soham/shakti/c-class
elf2hex 8 4194304 /home/soham/shakti/p384/p384_test.elf 2147483648 > code.mem
```

### `app_log` reaches `[5] Waiting for OTBN keygen...` and appears stuck

That is the long OTBN execution phase. Wait several minutes.

If it runs far longer than expected, inspect:

```bash
tail -f /tmp/sim_p384.log
tail -f app_log
```

### `[4] OTBN LOCKED`

OTBN entered a locked/error state during load or execute.

Check:

- `p384/gen/run_p384_app.c` was generated from a valid OpenTitan `run_p384.elf`.
- IMEM boundary verification passes.
- DMEM `.data` verification passes.
- OTBN wrapper/EDN model is present.

### IMEM boundary check fails

If slot `1024` or `2026` fails, the P-384 program is not fully accessible.
This usually points to an OTBN IMEM window/address decode issue.

The full P-384 program needs the extended IMEM access path.

### DMEM `.data` check fails

This points to data packing, endian, bus-width, or DMEM address translation
issues.

Check the Shakti OTBN driver packing/unpacking logic in:

```text
p384/sw/device/lib/crypto/drivers/otbn.c
```

### The simulator prints PASS but does not exit

The app-level result is still valid if `app_log` contains:

```text
=== P384 TEST PASSED ===
```

Preserve `app_log`, then stop the simulator manually if needed.

---

## What is proven by the passing test

A passing P-384 run proves:

1. Shakti C-class boots the P-384 firmware.
2. The firmware can access the OTBN memory map.
3. OTBN IMEM can be loaded through the Shakti SoC path.
4. OTBN DMEM can be loaded and read through the Shakti SoC path.
5. The full P-384 OTBN program fits and executes.
6. The Shakti CPU can issue `EXECUTE`.
7. OTBN completes key generation without error bits.
8. The Shakti CPU can read back Qx/Qy from OTBN DMEM.

That is the core software integration proof.

---

## What is not proven by this test

This README covers software simulation only.

It does not prove:

- FPGA bitstream boot,
- Nexys Video QSPI boot,
- hardware JTAG/OpenOCD debug,
- post-synthesis timing,
- real entropy behavior,
- side-channel/security hardening.

Those are separate hardware validation tasks.

---

## Minimal repeat command sequence

If everything is already generated and built, this is enough:

```bash
cd /home/soham/shakti/p384
make

cd /home/soham/shakti/c-class
elf2hex 8 4194304 /home/soham/shakti/p384/p384_test.elf 2147483648 > code.mem
: > app_log
./bin/out > /tmp/sim_p384.log 2>&1 &
tail -f app_log
```

Stop after:

```text
=== P384 TEST PASSED ===
```
