`timescale 1ns/1ps
import otp_ctrl_pkg::*;
import keymgr_pkg::*;
import tlul_pkg::*;
import lc_ctrl_pkg::*;
import prim_alert_pkg::*;
import prim_ram_1p_pkg::*;
import edn_pkg::*;
import prim_mubi_pkg::*;

module add_test (
    input logic rst_ni,
    input logic rst_otp_ni
);

  // ------------------
  // Clocks (internal)
  // ------------------
  logic clk_i;
  logic clk_otp_i;
  logic clk_edn_i;
  initial clk_i = 0;
  always #5 clk_i = ~clk_i;       // 100MHz
  initial clk_otp_i = 0;
  always #5 clk_otp_i = ~clk_otp_i;
  initial clk_edn_i = 0;
  always #5 clk_edn_i = ~clk_edn_i;

  logic rst_edn_ni;
  assign rst_edn_ni = rst_ni;

  // ------------------
  // TL-UL
  // ------------------
  tlul_pkg::tl_h2d_t tl_i = '0;
  tlul_pkg::tl_d2h_t tl_o;

  // ------------------
  // Idle / Interrupt
  // ------------------
  prim_mubi_pkg::mubi4_t idle_o;
  logic intr_done_o;

  // ------------------
  // Alerts
  // ------------------
  prim_alert_pkg::alert_rx_t [otbn_reg_pkg::NumAlerts-1:0] alert_rx_i;
  prim_alert_pkg::alert_tx_t [otbn_reg_pkg::NumAlerts-1:0] alert_tx_o;

  for (genvar i = 0; i < otbn_reg_pkg::NumAlerts; i++) begin : gen_alert_rx
    assign alert_rx_i[i] = prim_alert_pkg::ALERT_RX_DEFAULT;
  end

  // ------------------
  // Lifecycle
  // ------------------
  lc_ctrl_pkg::lc_tx_t lc_escalate_en_i = lc_ctrl_pkg::Off;
  lc_ctrl_pkg::lc_tx_t lc_rma_req_i     = lc_ctrl_pkg::Off;
  lc_ctrl_pkg::lc_tx_t lc_rma_ack_o;

  // ------------------
  // RAM config
  // ------------------
  prim_ram_1p_pkg::ram_1p_cfg_t ram_cfg_imem_i = '0;
  prim_ram_1p_pkg::ram_1p_cfg_t ram_cfg_dmem_i = '0;
  prim_ram_1p_pkg::ram_1p_cfg_rsp_t ram_cfg_rsp_imem_o;
  prim_ram_1p_pkg::ram_1p_cfg_rsp_t ram_cfg_rsp_dmem_o;

  // ------------------
  // EDN responders
  // ------------------
  edn_pkg::edn_req_t edn_rnd_o;
  edn_pkg::edn_rsp_t edn_rnd_i;
  edn_pkg::edn_req_t edn_urnd_o;
  edn_pkg::edn_rsp_t edn_urnd_i;

  always_ff @(posedge clk_edn_i or negedge rst_edn_ni) begin
    if (!rst_edn_ni) begin
      edn_urnd_i.edn_ack  <= 1'b0;
      edn_urnd_i.edn_fips <= 1'b1;
      edn_urnd_i.edn_bus  <= 32'hA5A5A5A5;
    end else begin
      edn_urnd_i.edn_ack  <= edn_urnd_o.edn_req;
      edn_urnd_i.edn_fips <= 1'b1;
      edn_urnd_i.edn_bus  <= edn_urnd_i.edn_bus + 32'h12345678;
    end
  end

  always_ff @(posedge clk_edn_i or negedge rst_edn_ni) begin
    if (!rst_edn_ni) begin
      edn_rnd_i.edn_ack  <= 1'b0;
      edn_rnd_i.edn_fips <= 1'b1;
      edn_rnd_i.edn_bus  <= 32'h5A5A5A5A;
    end else begin
      edn_rnd_i.edn_ack  <= edn_rnd_o.edn_req;
      edn_rnd_i.edn_fips <= 1'b1;
      edn_rnd_i.edn_bus  <= edn_rnd_i.edn_bus + 32'h87654321;
    end
  end

  // ------------------
  // OTP key responder
  // ------------------
  otp_ctrl_pkg::otbn_otp_key_req_t  otbn_otp_key_o;
  otp_ctrl_pkg::otbn_otp_key_rsp_t  otbn_otp_key_i;

  always_ff @(posedge clk_otp_i or negedge rst_otp_ni) begin
    if (!rst_otp_ni) begin
      otbn_otp_key_i.ack <= 1'b0;
      otbn_otp_key_i.key <= 128'h0;
      otbn_otp_key_i.nonce <= 64'h0;
      otbn_otp_key_i.seed_valid <= 1'b0;
    end else begin
      otbn_otp_key_i.ack <= otbn_otp_key_o.req;
      if (otbn_otp_key_o.req) begin
        otbn_otp_key_i.key <= 128'hDEADBEEFCAFEBABEDEADBEEFCAFEBABE;
        otbn_otp_key_i.nonce <= 64'hABCDABCDABCDABCD;
        otbn_otp_key_i.seed_valid <= 1'b1;
      end
    end
  end

  // ------------------
  // Key manager
  // ------------------
  keymgr_pkg::otbn_key_req_t keymgr_key_i = '0;

  // ------------------
  // DUT
  // ------------------
  otbn dut (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .tl_i(tl_i),
    .tl_o(tl_o),
    .idle_o(idle_o),
    .intr_done_o(intr_done_o),
    .alert_rx_i(alert_rx_i),
    .alert_tx_o(alert_tx_o),
    .lc_escalate_en_i(lc_escalate_en_i),
    .lc_rma_req_i(lc_rma_req_i),
    .lc_rma_ack_o(lc_rma_ack_o),
    .ram_cfg_imem_i(ram_cfg_imem_i),
    .ram_cfg_dmem_i(ram_cfg_dmem_i),
    .ram_cfg_rsp_imem_o(ram_cfg_rsp_imem_o),
    .ram_cfg_rsp_dmem_o(ram_cfg_rsp_dmem_o),
    .clk_edn_i(clk_edn_i),
    .rst_edn_ni(rst_edn_ni),
    .edn_rnd_o(edn_rnd_o),
    .edn_rnd_i(edn_rnd_i),
    .edn_urnd_o(edn_urnd_o),
    .edn_urnd_i(edn_urnd_i),
    .clk_otp_i(clk_otp_i),
    .rst_otp_ni(rst_otp_ni),
    .otbn_otp_key_o(otbn_otp_key_o),
    .otbn_otp_key_i(otbn_otp_key_i),
    .keymgr_key_i(keymgr_key_i)
  );

  // ------------------
  // TL-UL Tasks
  // ------------------
  task automatic tl_write(input logic [31:0] addr, input logic [31:0] data);
    begin
      logic req_done, rsp_done;
      req_done = 1'b0;
      rsp_done = 1'b0;

      tl_i.d_ready = 1'b1;

      tl_i.a_valid   = 1'b1;
      tl_i.a_opcode  = tlul_pkg::PutFullData;
      tl_i.a_address = addr;
      tl_i.a_data    = data;
      tl_i.a_mask    = 4'hF;
      tl_i.a_size    = 2'h2;
      tl_i.a_source  = 8'h0;
      tl_i.a_param   = 3'h0;

      tl_i.a_user.rsvd       = '0;
      tl_i.a_user.instr_type = prim_mubi_pkg::MuBi4False;
      tl_i.a_user.data_intg  = tlul_pkg::get_data_intg(data);
      tl_i.a_user.cmd_intg   = tlul_pkg::get_cmd_intg(tl_i);

      while (!req_done || !rsp_done) begin
        @(posedge clk_i);
        if (!req_done && tl_o.a_ready) begin
          req_done = 1'b1;
          tl_i.a_valid = 1'b0;
        end
        if (!rsp_done && tl_o.d_valid) begin
          rsp_done = 1'b1;
        end
      end

      @(posedge clk_i);
      tl_i.d_ready = 1'b0;
    end
  endtask

  task automatic tl_read(input logic [31:0] addr, output logic [31:0] data);
    begin
      logic req_done, rsp_done;
      req_done = 1'b0;
      rsp_done = 1'b0;

      tl_i.d_ready = 1'b1;

      tl_i.a_valid   = 1'b1;
      tl_i.a_opcode  = tlul_pkg::Get;
      tl_i.a_address = addr;
      tl_i.a_data    = 32'h0;
      tl_i.a_mask    = 4'hF;
      tl_i.a_size    = 2'h2;
      tl_i.a_source  = 8'h0;
      tl_i.a_param   = 3'h0;

      tl_i.a_user.rsvd       = '0;
      tl_i.a_user.instr_type = prim_mubi_pkg::MuBi4False;
      tl_i.a_user.data_intg  = tlul_pkg::get_data_intg(32'h0);
      tl_i.a_user.cmd_intg   = tlul_pkg::get_cmd_intg(tl_i);

      while (!req_done || !rsp_done) begin
        @(posedge clk_i);
        if (!req_done && tl_o.a_ready) begin
          req_done = 1'b1;
          tl_i.a_valid = 1'b0;
        end
        if (!rsp_done && tl_o.d_valid) begin
          rsp_done = 1'b1;
          data = tl_o.d_data;
        end
      end

      @(posedge clk_i);
      tl_i.d_ready = 1'b0;
    end
  endtask

  // ============================================================
  // OTBN Program — ADD two 256-bit numbers
  // ============================================================
  //
  // Assembly:
  //   ADDI  x2, x0, 0        # x2  = 0  → selects w0
  //   ADDI  x3, x0, 1        # x3  = 1  → selects w1
  //   ADDI  x4, x0, 2        # x4  = 2  → selects w2
  //   ADDI  x5, x0, 0        # x5  = 0  → DMEM base address
  //   BN.LID x2, 0(x5)       # w0  = DMEM[0]     (operand A)
  //   BN.LID x3, 32(x5)      # w1  = DMEM[32]    (operand B)
  //   BN.ADD w2, w0, w1      # w2  = w0 + w1
  //   BN.SID x4, 64(x5)      # DMEM[64] = w2     (result)
  //   ECALL                   # stop
  //
  // Encodings:
  //   ADDI rd, x0, imm  → [31:20]=imm  [19:15]=00000  [14:12]=000  [11:7]=rd  [6:0]=0010011
  //   BN.LID grd,off(grs1) → [31:25]=imm[9:3] [24:20]=grd [19:15]=grs1 [14:12]=100 [11:9]=imm[2:0] [8:7]=00 [6:0]=0001011
  //   BN.ADD wrd,wrs1,wrs2 → [31]=fg [30]=st [29:25]=sb [24:20]=wrs2 [19:15]=wrs1 [14:12]=000 [11:7]=wrd [6:0]=0101011
  //   BN.SID grs2,off(grs1)→ [31:25]=imm[9:3] [24:20]=grs2 [19:15]=grs1 [14:12]=101 [11:9]=imm[2:0] [8:7]=00 [6:0]=0001011
  //   ECALL → 0x00000073

  localparam int NUM_INSNS = 9;
  localparam logic [31:0] PROGRAM [NUM_INSNS] = '{
    32'h00000113,   // 0: ADDI x2, x0, 0
    32'h00100193,   // 1: ADDI x3, x0, 1
    32'h00200213,   // 2: ADDI x4, x0, 2
    32'h00000293,   // 3: ADDI x5, x0, 0
    32'h0022C00B,   // 4: BN.LID x2, 0(x5)
    32'h0232C00B,   // 5: BN.LID x3, 32(x5)
    32'h0010012B,   // 6: BN.ADD w2, w0, w1
    32'h0442D00B,   // 7: BN.SID x4, 64(x5)
    32'h00000073    // 8: ECALL
  };

  // ============================================================
  // Operands (256-bit = 8 × 32-bit words, little-endian)
  // ============================================================
  localparam logic [31:0] OPERAND_A [8] = '{
    32'hFFFFFFF1,   // word 0 — bits [31:0] (least significant)
    32'h00000000,   
    32'h00000000,   
    32'h00000003,   
    32'h00000000,   
    32'h00000000,   
    32'h00000000,   
    32'h00000000    
  };

  localparam logic [31:0] OPERAND_B [8] = '{
    32'h00000002,   
    32'h00000000,
    32'h00000000,
    32'h00000005,   
    32'h00000000,
    32'h00000000,
    32'h00000000,
    32'h00000000
  };

  // Expected: A + B
  //   word 0: 0xDEADBEEF + 0x00000002 = 0xDEADBEF1
  //   word 3: 0x00000003 + 0x00000005 = 0x00000008
  localparam logic [31:0] EXPECTED [8] = '{
    32'hFFFFFFF3,
    32'h00000000,
    32'h00000000,
    32'h00000008,
    32'h00000000,
    32'h00000000,
    32'h00000000,
    32'h00000000
  };

  // ============================================================
  // Address map
  // ============================================================
  localparam OTBN_IMEM_BASE       = 32'h4000;
  localparam OTBN_DMEM_BASE       = 32'h8000;
  localparam OTBN_CMD_OFFSET      = 32'h0010;
  localparam OTBN_STATUS_OFFSET   = 32'h0018;
  localparam OTBN_ERR_BITS_OFFSET = 32'h001C;
  localparam CMD_EXECUTE          = 32'h000000D8;

  // ============================================================
  // Test sequence
  // ============================================================
  initial begin
    logic [31:0] status;
    logic [31:0] err_bits;
    logic [31:0] read_data;
    int timeout;
    int pass_count;
    int fail_count;

    pass_count = 0;
    fail_count = 0;

    $display("======================================");
    $display("=== OTBN ADD Test Start            ===");
    $display("======================================");

    // ---- Wait for reset ----
    wait(rst_ni == 1'b1);
    repeat(10) @(posedge clk_i);
    $display("[%0t] Reset released, waiting for init secure wipe...", $time);

    // ---- Wait for init secure wipe ----
    timeout = 0;
    while (timeout < 300) begin
      if (dut.init_sec_wipe_done_q) begin
        $display("[%0t] init_sec_wipe_done at iter=%0d", $time, timeout);
        break;
      end
      if (timeout < 5 || timeout % 50 == 0)
        $display("[%0t] DBG iter=%0d | start_stop_state=%0d | init_sec_wipe_done=%b",
          $time, timeout,
          dut.u_otbn_core.u_otbn_start_stop_control.state_q,
          dut.init_sec_wipe_done_q);
      repeat(10) @(posedge clk_i);
      timeout++;
    end

    repeat(20) @(posedge clk_i);

    // Drain any phantom outstanding
    tl_i.d_ready = 1'b1;
    repeat(5) @(posedge clk_i);
    tl_i.d_ready = 1'b0;

    // ---- Check STATUS = IDLE ----
    tl_read(OTBN_STATUS_OFFSET, status);
    $display("[%0t] STATUS = 0x%08x", $time, status);
    if (status != 32'h0) begin
      $display("[%0t] FAIL: OTBN not idle, aborting.", $time);
      $finish;
    end
    $display("[%0t] OTBN is IDLE", $time);

    // ==========================================================
    // PHASE 1: Load operands into DMEM
    // ==========================================================
    $display("");
    $display("[%0t] --- Loading operand A into DMEM[0..31] ---", $time);
    for (int i = 0; i < 8; i++) begin
      tl_write(OTBN_DMEM_BASE + (i * 4), OPERAND_A[i]);
    end

    $display("[%0t] --- Loading operand B into DMEM[32..63] ---", $time);
    for (int i = 0; i < 8; i++) begin
      tl_write(OTBN_DMEM_BASE + 32 + (i * 4), OPERAND_B[i]);
    end
    $display("[%0t] Operands loaded.", $time);

    // ==========================================================
    // PHASE 2: Load program into IMEM
    // ==========================================================
        $display("");
        $display("[%0t] --- Loading %0d instructions into IMEM ---", $time, NUM_INSNS);
        for (int i = 0; i < NUM_INSNS; i++) begin
        $display("[%0t]   IMEM[0x%04x] = 0x%08x",
            $time, OTBN_IMEM_BASE + (i * 4), PROGRAM[i]);
      tl_write(OTBN_IMEM_BASE + (i * 4), PROGRAM[i]);
    end
    $display("[%0t] Program loaded.", $time);

    // ==========================================================
    // PHASE 3: Start execution
    // ==========================================================
    $display("");
    $display("[%0t] --- Starting OTBN execution (CMD=0x%02x) ---", $time, CMD_EXECUTE);
    tl_write(OTBN_CMD_OFFSET, CMD_EXECUTE);

    // ==========================================================
    // PHASE 4: Poll STATUS until IDLE (or timeout)
    // ==========================================================
    $display("[%0t] --- Polling STATUS... ---", $time);
    timeout = 0;
    while (timeout < 2000) begin
      tl_read(OTBN_STATUS_OFFSET, status);
      if (status == 32'h0) begin
        $display("[%0t] OTBN returned to IDLE after %0d polls", $time, timeout + 1);
        break;
      end
      if (timeout < 5 || timeout % 100 == 0)
        $display("[%0t]   STATUS = 0x%08x (poll %0d)", $time, status, timeout);
      repeat(10) @(posedge clk_i);
      timeout++;
    end

    if (status != 32'h0) begin
      $display("[%0t] FAIL: OTBN did not return to IDLE (STATUS=0x%08x)", $time, status);
      $finish;
    end

    // ==========================================================
    // PHASE 5: Check ERR_BITS
    // ==========================================================
    tl_read(OTBN_ERR_BITS_OFFSET, err_bits);
    $display("[%0t] ERR_BITS = 0x%08x", $time, err_bits);
    if (err_bits != 32'h0) begin
      $display("[%0t] FAIL: OTBN reported errors!", $time);
      $finish;
    end
    $display("[%0t] No errors reported.", $time);

    // ==========================================================
    // PHASE 6: Read result from DMEM[64..95] and verify
    // ==========================================================
    $display("");
    $display("[%0t] --- Reading result from DMEM[64..95] ---", $time);
    for (int i = 0; i < 8; i++) begin
      tl_read(OTBN_DMEM_BASE + 64 + (i * 4), read_data);
      if (read_data == EXPECTED[i]) begin
        $display("[%0t] PASS: result[%0d] = 0x%08x",
          $time, i, read_data);
        pass_count++;
      end else begin
        $display("[%0t] FAIL: result[%0d] = 0x%08x (expected 0x%08x)",
          $time, i, read_data, EXPECTED[i]);
        fail_count++;
      end
    end

    // ==========================================================
    // Summary
    // ==========================================================
    $display("");
    $display("======================================");
    $display("=== OTBN ADD Test Summary          ===");
    $display("  PASSED: %0d / 8", pass_count);
    $display("  FAILED: %0d / 8", fail_count);
    if (fail_count == 0)
      $display("  Result: ALL TESTS PASSED");
    else
      $display("  Result: SOME TESTS FAILED");
    $display("======================================");

    repeat(100) @(posedge clk_i);
    $finish;
  end

endmodule