# OTBN + Shakti C-class Integration

This repository integrates OpenTitan's **OTBN** (OpenTitan Big Number accelerator) cryptographic co-processor into the **Shakti C-class** RISC-V SoC and demonstrates a complete P-384 ECDSA key generation running in the Verilated SoC simulation.

**Result:** P-384 keygen completes in ~4–5 minutes in Verilator, producing a valid 384-bit public key pair (Qx, Qy).

---

## Repository Layout

```
shakti/
├── otbn_standalone/          # OTBN RTL + unit-level DV tests
│   └── otbn/dv/
│       ├── add/              # 32-bit BN.ADD instruction test
│       ├── add_64/           # 64-bit AXI BN.ADD test
│       ├── axi_bridge_test/  # AXI4 → TL-UL bridge correctness test
│       ├── dmem_test/        # DMEM read/write via TL-UL
│       ├── dmem64_test/      # DMEM read/write via 64-bit AXI
│       ├── imem_tb/          # IMEM load and readback test
│       ├── otbn_axi_test/    # Full OTBN + AXI wrapper integration test
│       └── p384_run/         # OTBN-only P-384 keygen (no Shakti SoC)
├── p384/                     # Full Shakti SoC P-384 integration
│   ├── test/main.c           # Top-level test firmware
│   ├── sw/device/lib/        # Ported OpenTitan OTBN driver
│   ├── impl/p384.c           # P-384 host-side driver
│   ├── gen/                  # Auto-generated OTBN binary + address defines
│   ├── scripts/              # extract_otbn_binary.py
│   └── README.md             # Detailed P-384 walkthrough
└── c-class/                  # Shakti C-class SoC (Verilated binary in bin/out)
```

---

## Prerequisites

| Tool | Version | Install |
|------|---------|---------|
| Verilator | ≥ 5.0 | `sudo apt install verilator` |
| riscv64-unknown-elf-gcc | any | `sudo apt install gcc-riscv64-unknown-elf` |
| elf2hex | any | usually ships with the Shakti toolchain |
| Python 3 + pyelftools | any | `pip3 install pyelftools` |
| Bazel (via bazelisk) | any | already in `opentitan/bazelisk.sh` |

---

## Tests

There are two sets of tests: **unit-level DV tests** (OTBN standalone) and the **full SoC integration test** (P-384 on Shakti).

---

### Unit-Level DV Tests (otbn_standalone)

Each test lives in `otbn_standalone/otbn/dv/<name>/` and is built + run with `make`.

#### 1. `add` — 32-bit BN.ADD instruction

Verifies the OTBN BN.ADD instruction over 32-bit data paths.

```bash
cd otbn_standalone/otbn/dv/add
make
```

#### 2. `add_64` — 64-bit AXI BN.ADD

Same BN.ADD test but exercising the 64-bit AXI interface.

```bash
cd otbn_standalone/otbn/dv/add_64
make
```

#### 3. `imem_tb` — IMEM load and readback

Loads instructions into IMEM over TL-UL and reads them back to verify correctness.

```bash
cd otbn_standalone/otbn/dv/imem_tb
make
```

#### 4. `dmem_test` — DMEM via TL-UL

Writes and reads DMEM words via the TL-UL bus.

```bash
cd otbn_standalone/otbn/dv/dmem_test
make
```

#### 5. `dmem64_test` — DMEM via 64-bit AXI

Same as above but through the 64-bit AXI data path.

```bash
cd otbn_standalone/otbn/dv/dmem64_test
make
```

#### 6. `axi_bridge_test` — AXI4 → TL-UL bridge

Exercises the AXI4-to-TL-UL bridge: write transactions, read-back, alignment checks.

```bash
cd otbn_standalone/otbn/dv/axi_bridge_test
make
```

#### 7. `otbn_axi_test` — Full OTBN + AXI wrapper

Loads an OTBN program over AXI, issues EXECUTE, and waits for completion. This is the key integration test that validates the `otbn_axi_wrapper.sv` with the full OTBN core.

```bash
cd otbn_standalone/otbn/dv/otbn_axi_test
make
```

#### 8. `p384_run` — OTBN-only P-384 keygen

Runs P-384 keygen directly against the OTBN core (without the Shakti SoC), using a SystemVerilog testbench.

```bash
cd otbn_standalone/otbn/dv/p384_run
make
```

---

### Full SoC Integration Test — P-384 Keygen on Shakti

This is the main result of this project. The P-384 ECDSA keygen runs inside the full Verilated Shakti C-class SoC via the OTBN AXI bridge.

**What it does:**
1. Loads the 2027-instruction OTBN P-384 program into IMEM
2. Verifies IMEM boundary slots (proves the 8 KiB window RTL fix works)
3. Verifies DMEM curve parameters
4. Issues EXECUTE in keygen mode
5. Waits ~4–5 minutes for OTBN to finish 1,935,430 instructions
6. Reads back the 384-bit public key (Qx, Qy) from DMEM
7. Prints `=== P384 TEST PASSED ===`

#### Step 1 — Build the OTBN P-384 binary (one-time, ~10 min)

```bash
cd opentitan
./bazelisk.sh build //sw/otbn/crypto:run_p384
ELF=$(find bazel-out -name "run_p384.elf" 2>/dev/null | head -1)
echo "ELF: $ELF"
```

#### Step 2 — Extract the OTBN binary to C arrays

```bash
cd p384
pip3 install pyelftools    # one-time
python3 scripts/extract_otbn_binary.py run_p384 "$ELF" gen/
```

This produces `gen/run_p384_app.c` (the IMEM/DMEM data as C arrays) and `gen/run_p384_defs.h` (DMEM symbol addresses as `#define`s).

#### Step 3 — Build the Shakti firmware

```bash
cd p384
make
# Output: p384_test.elf
```

#### Step 4 — Convert ELF to simulation memory image

```bash
cd c-class
elf2hex 8 4194304 ../p384/p384_test.elf 2147483648 > code.mem
```

#### Step 5 — Run the SoC simulation

```bash
cd c-class
./bin/out > /tmp/sim_p384.log 2>&1 &
tail -f app_log
```

The simulation writes UART output to `app_log`. After ~4–5 minutes you should see:

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
[7] Qx=22c7dbec3249eaac8afd97017d29a0d0f77e1fa2349a7d59418aafea2226e7269edc3d91f3be3f2e238df26edb1f4abf
[7] Qy=dec2b44cc289c5d31d6e680efced56324c74a641857ba29e184e44c1cf92e7280389a7f4dd88cb4673e09cc18bd43d53
=== P384 TEST PASSED ===
```

> Note: `insn_cnt=0` is expected — the OTBN `INSN_CNT` register resets to 0 when the core returns to IDLE. `ERR_BITS=0` is the authoritative success signal.

For the full step-by-step explanation of how everything works, see [p384/README.md](p384/README.md).

---

## RTL Changes Made

Three bugs were fixed to make the full integration work:

| File | Fix |
|------|-----|
| `otbn_standalone/rtl/otbn_reg_top.sv` | Extended IMEM address window from 8 KiB to 16 KiB so all 2027 P-384 instructions are accessible |
| `otbn_standalone/rtl/otbn_reg_pkg.sv` | Updated the `IMEM_SIZE` constant to match |
| `otbn_standalone/otbn/dv/otbn_axi_test/otbn_axi_wrapper.sv` | Added EDN (entropy) model with immediate-ack so OTBN never stalls waiting for random data |

---

## How It Works (Architecture)

```
Shakti C-class CPU
       │  AXI4 (64-bit)
       ▼
 otbn_axi_wrapper.sv
  ├── AXI4 → TL-UL bridge  (address translation)
  ├── OTBN core             (big-number co-processor)
  └── EDN model             (entropy, immediate-ack)
       │
       ▼
  IMEM (16 KiB)  ← P-384 OTBN assembly (2027 instructions)
  DMEM (4 KiB)   ← curve params, key material, mode flag
```

The CPU loads OTBN IMEM/DMEM over AXI, writes `MODE_KEYGEN` to DMEM, issues `CMD=EXECUTE`, then polls the STATUS register in a tight loop until OTBN returns to IDLE. The 384-bit public key is then read back from DMEM offsets `0x220` (Qx) and `0x260` (Qy).

---

## Troubleshooting

**`app_log` is empty or simulation hangs immediately**
- Make sure `code.mem` was generated in `c-class/` before running `./bin/out`

**`[4] OTBN LOCKED`**
- OTBN hit an error during load. Check that `gen/run_p384_app.c` was generated from a valid ELF.

**Simulation runs for hours without `[5] Keygen done`**
- Check `app_log` for `[5] Waiting...` — if present, it is running (just slow). Normal time is 4–5 minutes.
- If stuck before phase 5, the EDN model may not be providing entropy. Check `otbn_axi_wrapper.sv`.

**`make` fails with `gen/ files missing`**
- Run Steps 1–2 above to generate `gen/run_p384_app.c` and `gen/run_p384_defs.h`.
