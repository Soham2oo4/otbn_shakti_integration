`timescale 1ns/1ps
import otp_ctrl_pkg::*;
import keymgr_pkg::*;
import tlul_pkg::*;
import lc_ctrl_pkg::*;
import prim_alert_pkg::*;
import prim_ram_1p_pkg::*;
import edn_pkg::*;
import prim_mubi_pkg::*;

module imem_test (
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
  always #5 clk_i = ~clk_i;
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
  // Idle output
  // ------------------
  prim_mubi_pkg::mubi4_t idle_o;

  // ------------------
  // Interrupt
  // ------------------
  logic intr_done_o;

  // ------------------
  // Alerts (NumAlerts = 2)
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
  // EDN interface
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
  // OTP key
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
      logic req_done;
      logic rsp_done;
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
      logic req_done;
      logic rsp_done;
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

  // ------------------
  // Test Sequence
  // ------------------
  localparam OTBN_STATUS_OFFSET = 32'h18;
  localparam OTBN_IMEM_BASE     = 32'h4000;

  // Test patterns — pretend these are instructions
  localparam logic [31:0] TEST_DATA [4] = '{
    32'h11223344,
    32'h55667788,
    32'hAABBCCDD,
    32'hDEADBEEF
  };

  initial begin
    logic [31:0] status;
    logic [31:0] read_data;
    int timeout;
    int pass_count;
    int fail_count;

    status     = 32'hFFFF_FFFF;
    pass_count = 0;
    fail_count = 0;

    $display("=== IMEM Test Start ===");

    // Wait for reset
    wait(rst_ni == 1'b1);
    repeat(10) @(posedge clk_i);

    $display("[%0t] Reset released, waiting for init secure wipe...", $time);

    // Wait for init secure wipe to complete
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

    // Read STATUS — must be IDLE before we can access IMEM
    tl_read(OTBN_STATUS_OFFSET, status);
    $display("[%0t] STATUS = 0x%08x", $time, status);

    if (status != 32'h0) begin
      $display("[%0t] FAIL: OTBN not idle, cannot test IMEM", $time);
      $finish;
    end

    $display("[%0t] OTBN is IDLE — starting IMEM write/read test", $time);

    // === Write 4 words to IMEM ===
    for (int i = 0; i < 4; i++) begin
      $display("[%0t] Writing IMEM[0x%04x] = 0x%08x",
        $time, OTBN_IMEM_BASE + (i * 4), TEST_DATA[i]);
      tl_write(OTBN_IMEM_BASE + (i * 4), TEST_DATA[i]);
    end

    // === Read them back and verify ===
    for (int i = 0; i < 4; i++) begin
      tl_read(OTBN_IMEM_BASE + (i * 4), read_data);
      if (read_data == TEST_DATA[i]) begin
        $display("[%0t] PASS: IMEM[0x%04x] = 0x%08x",
          $time, OTBN_IMEM_BASE + (i * 4), read_data);
        pass_count++;
      end else begin
        $display("[%0t] FAIL: IMEM[0x%04x] expected 0x%08x got 0x%08x",
          $time, OTBN_IMEM_BASE + (i * 4), TEST_DATA[i], read_data);
        fail_count++;
      end
    end

    // === Summary ===
    $display("");
    $display("=== IMEM Test Summary ===");
    $display("  PASSED: %0d / 4", pass_count);
    $display("  FAILED: %0d / 4", fail_count);
    if (fail_count == 0)
      $display("  Result: ALL TESTS PASSED");
    else
      $display("  Result: SOME TESTS FAILED");
    $display("=========================");

    repeat(100) @(posedge clk_i);
    $finish;
  end

endmodule 


    