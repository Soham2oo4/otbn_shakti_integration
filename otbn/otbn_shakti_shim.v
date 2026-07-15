// Verilog shim: Adapts BSV AXI4 signal-level names to otbn_axi_wrapper ports.
// BSV AXI4_Slave_IFC generates ports like AWVALID, AWADDR, AWSIZE, etc.
// otbn_axi_wrapper expects axi_aw_valid_i, axi_aw_addr_i, etc.
// This module bridges the naming convention gap and ties off unused BSV signals
// (AWPROT, ARPROT, AWUSER, ARUSER, WID are consumed but not forwarded).

module otbn_shakti_shim (
  CLK,
  RST_N,

  // ======= AXI4 Slave (BSV signal names) =======
  // AW channel
  AWVALID,
  AWREADY,
  AWADDR,
  AWSIZE,
  AWUSER,
  AWPROT,
  AWLEN,
  AWBURST,
  AWID,

  // W channel
  WVALID,
  WREADY,
  WDATA,
  WSTRB,
  WLAST,
  WID,

  // B channel
  BVALID,
  BREADY,
  BRESP,
  BUSER,
  BID,

  // AR channel
  ARVALID,
  ARREADY,
  ARADDR,
  ARSIZE,
  ARUSER,
  ARPROT,
  ARLEN,
  ARBURST,
  ARID,

  // R channel
  RVALID,
  RREADY,
  RDATA,
  RRESP,
  RLAST,
  RUSER,
  RID,

  // ======= Side-band outputs =======
  intr_done_o,
  idle_o
);

  parameter ADDR_WIDTH = 32;
  parameter ID_WIDTH   = 4;
  parameter DATA_WIDTH = 64;
  parameter USER_WIDTH = 1;

  input  CLK;
  input  RST_N;

  // AW
  input                       AWVALID;
  output                      AWREADY;
  input  [ADDR_WIDTH-1:0]     AWADDR;
  input  [2:0]                AWSIZE;
  input  [USER_WIDTH-1:0]     AWUSER;
  input  [2:0]                AWPROT;
  input  [7:0]                AWLEN;
  input  [1:0]                AWBURST;
  input  [ID_WIDTH-1:0]       AWID;

  // W
  input                       WVALID;
  output                      WREADY;
  input  [DATA_WIDTH-1:0]     WDATA;
  input  [(DATA_WIDTH/8)-1:0] WSTRB;
  input                       WLAST;
  input  [ID_WIDTH-1:0]       WID;

  // B
  output                      BVALID;
  input                       BREADY;
  output [1:0]                BRESP;
  output [USER_WIDTH-1:0]     BUSER;
  output [ID_WIDTH-1:0]       BID;

  // AR
  input                       ARVALID;
  output                      ARREADY;
  input  [ADDR_WIDTH-1:0]     ARADDR;
  input  [2:0]                ARSIZE;
  input  [USER_WIDTH-1:0]     ARUSER;
  input  [2:0]                ARPROT;
  input  [7:0]                ARLEN;
  input  [1:0]                ARBURST;
  input  [ID_WIDTH-1:0]       ARID;

  // R
  output                      RVALID;
  input                       RREADY;
  output [DATA_WIDTH-1:0]     RDATA;
  output [1:0]                RRESP;
  output                      RLAST;
  output [USER_WIDTH-1:0]     RUSER;
  output [ID_WIDTH-1:0]       RID;

  // Side-band
  output                      intr_done_o;
  output                      idle_o;

  // Tie off BSV-only signals that the wrapper doesn't use
  assign BUSER = {USER_WIDTH{1'b0}};
  assign RUSER = {USER_WIDTH{1'b0}};

  otbn_axi_wrapper #(
    .AxiIdWidth(ID_WIDTH)
  ) u_otbn_axi (
    .clk_i            (CLK),
    .rst_ni           (RST_N),

    // AW
    .axi_aw_valid_i   (AWVALID),
    .axi_aw_ready_o   (AWREADY),
    .axi_aw_addr_i    (AWADDR),
    .axi_aw_len_i     (AWLEN),
    .axi_aw_size_i    (AWSIZE),
    .axi_aw_burst_i   (AWBURST),
    .axi_aw_id_i      (AWID),

    // W
    .axi_w_valid_i    (WVALID),
    .axi_w_ready_o    (WREADY),
    .axi_w_data_i     (WDATA),
    .axi_w_strb_i     (WSTRB),
    .axi_w_last_i     (WLAST),

    // B
    .axi_b_valid_o    (BVALID),
    .axi_b_ready_i    (BREADY),
    .axi_b_resp_o     (BRESP),
    .axi_b_id_o       (BID),

    // AR
    .axi_ar_valid_i   (ARVALID),
    .axi_ar_ready_o   (ARREADY),
    .axi_ar_addr_i    (ARADDR),
    .axi_ar_len_i     (ARLEN),
    .axi_ar_size_i    (ARSIZE),
    .axi_ar_burst_i   (ARBURST),
    .axi_ar_id_i      (ARID),

    // R
    .axi_r_valid_o    (RVALID),
    .axi_r_ready_i    (RREADY),
    .axi_r_data_o     (RDATA),
    .axi_r_resp_o     (RRESP),
    .axi_r_last_o     (RLAST),
    .axi_r_id_o       (RID),

    // Side-band
    .intr_done_o      (intr_done_o),
    .idle_o           (idle_o)
  );

endmodule
