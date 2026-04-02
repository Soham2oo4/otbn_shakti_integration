// OTBN wrapped with an AXI4 slave interface for Shakti integration.
// Instantiates axi64_to_tl64_bridge (EnableIntg=1) → otbn.
// Ties off all ancillary OTBN ports with safe defaults.

module otbn_axi_wrapper
  import tlul_pkg::*;
  import top_pkg::*;
  import otbn_pkg::*;
  import otbn_reg_pkg::*;
  import prim_alert_pkg::*;
  import prim_mubi_pkg::*;
  import prim_ram_1p_pkg::*;
  import edn_pkg::*;
  import keymgr_pkg::*;
  import otp_ctrl_pkg::*;
  import lc_ctrl_pkg::*;
#(
  parameter int unsigned AxiIdWidth = 4
) (
  input  logic clk_i,
  input  logic rst_ni,

  // AW
  input  logic                    axi_aw_valid_i,
  output logic                    axi_aw_ready_o,
  input  logic [TL_AW-1:0]       axi_aw_addr_i,
  input  logic [7:0]              axi_aw_len_i,
  input  logic [2:0]              axi_aw_size_i,
  input  logic [1:0]              axi_aw_burst_i,
  input  logic [AxiIdWidth-1:0]   axi_aw_id_i,

  // W
  input  logic                    axi_w_valid_i,
  output logic                    axi_w_ready_o,
  input  logic [TL_DW-1:0]       axi_w_data_i,
  input  logic [TL_DBW-1:0]      axi_w_strb_i,
  input  logic                    axi_w_last_i,

  // B
  output logic                    axi_b_valid_o,
  input  logic                    axi_b_ready_i,
  output logic [1:0]              axi_b_resp_o,
  output logic [AxiIdWidth-1:0]   axi_b_id_o,

  // AR
  input  logic                    axi_ar_valid_i,
  output logic                    axi_ar_ready_o,
  input  logic [TL_AW-1:0]       axi_ar_addr_i,
  input  logic [7:0]              axi_ar_len_i,
  input  logic [2:0]              axi_ar_size_i,
  input  logic [1:0]              axi_ar_burst_i,
  input  logic [AxiIdWidth-1:0]   axi_ar_id_i,

  // R
  output logic                    axi_r_valid_o,
  input  logic                    axi_r_ready_i,
  output logic [TL_DW-1:0]       axi_r_data_o,
  output logic [1:0]              axi_r_resp_o,
  output logic                    axi_r_last_o,
  output logic [AxiIdWidth-1:0]   axi_r_id_o,

  // Side-band
  output logic                    intr_done_o,
  output logic                    idle_o
);

  // TL-UL wires
  tl_h2d_t tl_bridge_out;
  tl_d2h_t tl_d2h;
  tl_h2d_t tl_h2d;

  // AXI → TL-UL bridge — integrity disabled, we use tlul_cmd_intg_gen
  axi64_to_tl64_bridge #(
    .AxiIdWidth (AxiIdWidth),
    .EnableIntg (0)
  ) u_axi_bridge (
    .clk_i,
    .rst_ni,
    .axi_aw_valid_i, .axi_aw_ready_o, .axi_aw_addr_i,
    .axi_aw_len_i,   .axi_aw_size_i,  .axi_aw_burst_i, .axi_aw_id_i,
    .axi_w_valid_i,  .axi_w_ready_o,  .axi_w_data_i,
    .axi_w_strb_i,   .axi_w_last_i,
    .axi_b_valid_o,  .axi_b_ready_i,  .axi_b_resp_o, .axi_b_id_o,
    .axi_ar_valid_i, .axi_ar_ready_o, .axi_ar_addr_i,
    .axi_ar_len_i,   .axi_ar_size_i,  .axi_ar_burst_i, .axi_ar_id_i,
    .axi_r_valid_o,  .axi_r_ready_i,  .axi_r_data_o,
    .axi_r_resp_o,   .axi_r_last_o,   .axi_r_id_o,
    .tl_o  (tl_bridge_out),
    .tl_i  (tl_d2h)
  );

  // Integrity generation
  tlul_cmd_intg_gen u_cmd_intg_gen (
    .tl_i (tl_bridge_out),
    .tl_o (tl_h2d)
  );

  // Alert tie-off
  localparam int NumAlerts = 2;
  alert_rx_t [NumAlerts-1:0] alert_rx;
  alert_tx_t [NumAlerts-1:0] alert_tx;

  for (genvar i = 0; i < NumAlerts; i++) begin : gen_alert_tieoff
    assign alert_rx[i].ping_p = 1'b0;
    assign alert_rx[i].ping_n = 1'b1;
    assign alert_rx[i].ack_p  = alert_tx[i].alert_p;
    assign alert_rx[i].ack_n  = alert_tx[i].alert_n;
  end

  // EDN tie-offs
  edn_pkg::edn_req_t edn_rnd_req;
  edn_pkg::edn_rsp_t edn_rnd_rsp;
  edn_pkg::edn_req_t edn_urnd_req;
  edn_pkg::edn_rsp_t edn_urnd_rsp;

  logic edn_rnd_ack_q, edn_urnd_ack_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      edn_rnd_ack_q  <= 1'b0;
      edn_urnd_ack_q <= 1'b0;
    end else begin
      edn_rnd_ack_q  <= edn_rnd_req.edn_req  & ~edn_rnd_ack_q;
      edn_urnd_ack_q <= edn_urnd_req.edn_req & ~edn_urnd_ack_q;
    end
  end

  assign edn_rnd_rsp.edn_ack  = edn_rnd_ack_q;
  assign edn_rnd_rsp.edn_fips = 1'b0;
  assign edn_rnd_rsp.edn_bus  = 32'hDEAD_BEEF;

  assign edn_urnd_rsp.edn_ack  = edn_urnd_ack_q;
  assign edn_urnd_rsp.edn_fips = 1'b0;
  assign edn_urnd_rsp.edn_bus  = 32'hCAFE_BABE;

  prim_mubi_pkg::mubi4_t idle_mubi;
  prim_ram_1p_pkg::ram_1p_cfg_rsp_t unused_ram_cfg_rsp_imem;
  prim_ram_1p_pkg::ram_1p_cfg_rsp_t unused_ram_cfg_rsp_dmem;

  // ---------------------------------------------------------------
  // OTP key response — provide valid keys so IMEM/DMEM SRAMs work
  //
  // otbn_otp_key_o is the request (otbn asks OTP for keys)
  // otbn_otp_key_i is the response (we provide valid keys)
  //
  // The otp_ctrl_pkg::otbn_otp_key_rsp_t has:
  //   .key    (128-bit)
  //   .nonce  (64-bit for OTBN)
  //   .seed_valid (1-bit)
  //   .ack    (1-bit)
  // ---------------------------------------------------------------
  // Capture the OTP key request and respond with ack + valid keys
  otp_ctrl_pkg::otbn_otp_key_req_t otp_key_req;
  otp_ctrl_pkg::otbn_otp_key_rsp_t otp_key_rsp;

  logic otp_ack_q;
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) otp_ack_q <= 1'b0;
    else         otp_ack_q <= otp_key_req.req & ~otp_ack_q;
  end
  assign otp_key_rsp.ack        = otp_ack_q;
  assign otp_key_rsp.key        = '0;
  assign otp_key_rsp.nonce      = '0;
  assign otp_key_rsp.seed_valid = 1'b1;

  // ---------------------------------------------------------------
  // OTBN instance
  // ---------------------------------------------------------------
  otbn u_otbn (
    .clk_i              (clk_i),
    .rst_ni             (rst_ni),
    .tl_i               (tl_h2d),
    .tl_o               (tl_d2h),
    .intr_done_o        (intr_done_o),
    .alert_rx_i         (alert_rx),
    .alert_tx_o         (alert_tx),
    .idle_o             (idle_mubi),
    .clk_edn_i          (clk_i),
    .rst_edn_ni         (rst_ni),
    .edn_rnd_o          (edn_rnd_req),
    .edn_rnd_i          (edn_rnd_rsp),
    .clk_otp_i          (clk_i),
    .rst_otp_ni         (rst_ni),
    .edn_urnd_o         (edn_urnd_req),
    .edn_urnd_i         (edn_urnd_rsp),
    .ram_cfg_imem_i     (prim_ram_1p_pkg::RAM_1P_CFG_DEFAULT),
    .ram_cfg_dmem_i     (prim_ram_1p_pkg::RAM_1P_CFG_DEFAULT),
    .ram_cfg_rsp_imem_o (unused_ram_cfg_rsp_imem),
    .ram_cfg_rsp_dmem_o (unused_ram_cfg_rsp_dmem),
    .lc_escalate_en_i   (lc_ctrl_pkg::Off),
    .lc_rma_req_i       (lc_ctrl_pkg::Off),
    .lc_rma_ack_o       (),
    .keymgr_key_i       ('0),
    .otbn_otp_key_o     (otp_key_req),
    .otbn_otp_key_i     (otp_key_rsp)
  );

  assign idle_o = prim_mubi_pkg::mubi4_test_true_strict(idle_mubi);

  // Debug
  // synthesis translate_off
  always_ff @(posedge clk_i) if (rst_ni) begin
    if (tl_h2d.a_valid)
      $display("[%0t] TL-A: op=%0d addr=0x%08h size=%0d mask=0x%02h ready=%b src=0x%02h",
               $time, tl_h2d.a_opcode, tl_h2d.a_address, tl_h2d.a_size, tl_h2d.a_mask, tl_d2h.a_ready, tl_h2d.a_source);
    if (tl_d2h.d_valid)
      $display("[%0t] TL-D: op=%0d err=%b data=0x%016h ready=%b src=0x%02h",
               $time, tl_d2h.d_opcode, tl_d2h.d_error, tl_d2h.d_data, tl_h2d.d_ready, tl_d2h.d_source);
    if (otp_key_req.req)
      $display("[%0t] OTP-KEY: req=1 ack=%b seed_valid=%b",
               $time, otp_key_rsp.ack, otp_key_rsp.seed_valid);
  end
  // synthesis translate_on

endmodule
