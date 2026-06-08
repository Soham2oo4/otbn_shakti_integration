// OTBN wrapped with an AXI4 slave interface for Shakti integration.
// Instantiates axi64_to_tl64_bridge → otbn, ties off ancillary ports.

module otbn_axi_wrapper
  import tlul_pkg::*;
  import top_pkg::*;
  import otbn_pkg::*;
  import otbn_reg_pkg::*;
  import prim_alert_pkg::*;
  import prim_mubi_pkg::*;
  import prim_ram_1p_pkg::*;
  import otp_ctrl_pkg::*;
  import keymgr_pkg::*;
  import edn_pkg::*;
#(
  parameter int unsigned AxiIdWidth = 4
) (
  input  logic clk_i,
  input  logic rst_ni,

  // ===== AXI4 Slave Interface =====

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

  // ===== Side-band outputs =====
  output logic                    intr_done_o,
  output logic                    idle_o
);

  // TL-UL wires
  tl_h2d_t tl_h2d;
  tl_d2h_t tl_d2h;

  // AXI → TL-UL bridge (integrity enabled)
  axi64_to_tl64_bridge #(
    .AxiIdWidth (AxiIdWidth),
    .EnableIntg (1)
  ) u_axi_bridge (
    .clk_i,
    .rst_ni,
    .axi_aw_valid_i, .axi_aw_ready_o, .axi_aw_addr_i,
    .axi_aw_len_i, .axi_aw_size_i, .axi_aw_burst_i, .axi_aw_id_i,
    .axi_w_valid_i, .axi_w_ready_o, .axi_w_data_i,
    .axi_w_strb_i, .axi_w_last_i,
    .axi_b_valid_o, .axi_b_ready_i, .axi_b_resp_o, .axi_b_id_o,
    .axi_ar_valid_i, .axi_ar_ready_o, .axi_ar_addr_i,
    .axi_ar_len_i, .axi_ar_size_i, .axi_ar_burst_i, .axi_ar_id_i,
    .axi_r_valid_o, .axi_r_ready_i, .axi_r_data_o,
    .axi_r_resp_o, .axi_r_last_o, .axi_r_id_o,
    .tl_o  (tl_h2d),
    .tl_i  (tl_d2h)
  );

  // Alert tie-off (auto-ack)
  localparam int NumAlerts = 2;
  alert_rx_t [NumAlerts-1:0] alert_rx;
  alert_tx_t [NumAlerts-1:0] alert_tx;

  for (genvar i = 0; i < NumAlerts; i++) begin : gen_alert_tieoff
    assign alert_rx[i].ping_p = 1'b0;
    assign alert_rx[i].ping_n = 1'b1;
    assign alert_rx[i].ack_p  = alert_tx[i].alert_p;
    assign alert_rx[i].ack_n  = alert_tx[i].alert_n;
  end

  // ---- EDN model (mirrors add_64_test.sv pattern) ----
  edn_pkg::edn_req_t edn_rnd_o_sig;
  edn_pkg::edn_rsp_t edn_rnd_i_sig;
  edn_pkg::edn_req_t edn_urnd_o_sig;
  edn_pkg::edn_rsp_t edn_urnd_i_sig;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      edn_rnd_i_sig.edn_ack  <= 1'b0;
      edn_rnd_i_sig.edn_fips <= 1'b1;
      edn_rnd_i_sig.edn_bus  <= 32'h5A5A5A5A;
    end else begin
      edn_rnd_i_sig.edn_ack  <= edn_rnd_o_sig.edn_req;
      edn_rnd_i_sig.edn_fips <= 1'b1;
      edn_rnd_i_sig.edn_bus  <= edn_rnd_i_sig.edn_bus + 32'h87654321;
    end
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      edn_urnd_i_sig.edn_ack  <= 1'b0;
      edn_urnd_i_sig.edn_fips <= 1'b1;
      edn_urnd_i_sig.edn_bus  <= 32'hA5A5A5A5;
    end else begin
      edn_urnd_i_sig.edn_ack  <= edn_urnd_o_sig.edn_req;
      edn_urnd_i_sig.edn_fips <= 1'b1;
      edn_urnd_i_sig.edn_bus  <= edn_urnd_i_sig.edn_bus + 32'h12345678;
    end
  end

  // ---- OTP key responder (mirrors add_64_test.sv) ----
  otp_ctrl_pkg::otbn_otp_key_req_t otbn_otp_key_o_sig;
  otp_ctrl_pkg::otbn_otp_key_rsp_t otbn_otp_key_i_sig;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      otbn_otp_key_i_sig.ack        <= 1'b0;
      otbn_otp_key_i_sig.key        <= 128'h0;
      otbn_otp_key_i_sig.nonce      <= 64'h0;
      otbn_otp_key_i_sig.seed_valid <= 1'b0;
    end else begin
      otbn_otp_key_i_sig.ack <= otbn_otp_key_o_sig.req;
      if (otbn_otp_key_o_sig.req) begin
        otbn_otp_key_i_sig.key        <= 128'hDEADBEEFCAFEBABEDEADBEEFCAFEBABE;
        otbn_otp_key_i_sig.nonce      <= 64'hABCDABCDABCDABCD;
        otbn_otp_key_i_sig.seed_valid <= 1'b1;
      end
    end
  end

  // OTBN idle
  prim_mubi_pkg::mubi4_t idle_mubi;

  otbn u_otbn (
    .clk_i,
    .rst_ni,
    .tl_i              (tl_h2d),
    .tl_o              (tl_d2h),
    .intr_done_o       (intr_done_o),
    .alert_rx_i        (alert_rx),
    .alert_tx_o        (alert_tx),
    .idle_o            (idle_mubi),
    // EDN RND
    .clk_edn_i         (clk_i),
    .rst_edn_ni        (rst_ni),
    .edn_rnd_o         (edn_rnd_o_sig),
    .edn_rnd_i         (edn_rnd_i_sig),
    // EDN URND
    .clk_otp_i         (clk_i),
    .rst_otp_ni        (rst_ni),
    .edn_urnd_o        (edn_urnd_o_sig),
    .edn_urnd_i        (edn_urnd_i_sig),
    // RAM config (separate IMEM/DMEM ports)
    .ram_cfg_imem_i    (prim_ram_1p_pkg::RAM_1P_CFG_DEFAULT),
    .ram_cfg_dmem_i    (prim_ram_1p_pkg::RAM_1P_CFG_DEFAULT),
    .ram_cfg_rsp_imem_o(),
    .ram_cfg_rsp_dmem_o(),
    // Lifecycle
    .lc_escalate_en_i  (lc_ctrl_pkg::Off),
    .lc_rma_req_i      (lc_ctrl_pkg::Off),
    .lc_rma_ack_o      (),
    // OTP key
    .otbn_otp_key_o    (otbn_otp_key_o_sig),
    .otbn_otp_key_i    (otbn_otp_key_i_sig),
    // Keymgr
    .keymgr_key_i      (keymgr_pkg::OTBN_KEY_REQ_DEFAULT)
  );

  assign idle_o = prim_mubi_pkg::mubi4_test_true_strict(idle_mubi);

endmodule
