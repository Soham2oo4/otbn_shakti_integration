// OTBN register offsets and memory sizes for Shakti.
// Values derived from otbn_reg_pkg.sv in the OTBN RTL.

#ifndef SHAKTI_P384_HW_TOP_OTBN_REGS_H_
#define SHAKTI_P384_HW_TOP_OTBN_REGS_H_

// Register offsets (from OTBN_reg_pkg.sv parameter OTBN_*_OFFSET)
#define OTBN_INTR_STATE_REG_OFFSET    0x00
#define OTBN_INTR_ENABLE_REG_OFFSET   0x04
#define OTBN_INTR_TEST_REG_OFFSET     0x08
#define OTBN_ALERT_TEST_REG_OFFSET    0x0c
#define OTBN_CMD_REG_OFFSET           0x10
#define OTBN_CTRL_REG_OFFSET          0x14
#define OTBN_STATUS_REG_OFFSET        0x18
#define OTBN_ERR_BITS_REG_OFFSET      0x1c
#define OTBN_FATAL_ALERT_CAUSE_OFFSET 0x20
#define OTBN_INSN_CNT_REG_OFFSET      0x24
#define OTBN_LOAD_CHECKSUM_REG_OFFSET 0x28

// Memory window offsets
#define OTBN_IMEM_REG_OFFSET          0x4000
#define OTBN_DMEM_REG_OFFSET          0x8000

// Memory sizes
#define OTBN_IMEM_SIZE_BYTES          (8  * 1024)   // 8 KiB
#define OTBN_DMEM_SIZE_BYTES          (3  * 1024)   // 3 KiB

#endif  // SHAKTI_P384_HW_TOP_OTBN_REGS_H_
