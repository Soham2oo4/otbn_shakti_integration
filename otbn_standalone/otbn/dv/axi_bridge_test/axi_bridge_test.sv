// Standalone testbench for axi64_to_tl64_bridge
// Instantiates bridge + simple TL-UL memory responder (no OTBN needed)

module axi_bridge_test
  import tlul_pkg::*;
  import top_pkg::*;
(
  input logic clk_i,
  input logic rst_ni
);

  // ---------------------------------------------------------------
  // AXI wires
  // ---------------------------------------------------------------
  logic                    aw_valid, aw_ready;
  logic [TL_AW-1:0]       aw_addr;
  logic [7:0]              aw_len;
  logic [2:0]              aw_size;
  logic [1:0]              aw_burst;
  logic [3:0]              aw_id;

  logic                    w_valid, w_ready;
  logic [TL_DW-1:0]       w_data;
  logic [TL_DBW-1:0]      w_strb;
  logic                    w_last;

  logic                    b_valid, b_ready;
  logic [1:0]              b_resp;
  logic [3:0]              b_id;

  logic                    ar_valid, ar_ready;
  logic [TL_AW-1:0]       ar_addr;
  logic [7:0]              ar_len;
  logic [2:0]              ar_size;
  logic [1:0]              ar_burst;
  logic [3:0]              ar_id;

  logic                    r_valid, r_ready;
  logic [TL_DW-1:0]       r_data;
  logic [1:0]              r_resp;
  logic                    r_last;
  logic [3:0]              r_id;

  // ---------------------------------------------------------------
  // TL-UL wires
  // ---------------------------------------------------------------
  tl_h2d_t tl_h2d;
  tl_d2h_t tl_d2h;

  // ---------------------------------------------------------------
  // DUT: AXI → TL bridge (integrity enabled)
  // ---------------------------------------------------------------
  axi64_to_tl64_bridge #(
    .AxiIdWidth (4),
    .EnableIntg (0)   // Disable integrity for standalone test (no checker downstream)
  ) u_bridge (
    .clk_i,
    .rst_ni,
    .axi_aw_valid_i (aw_valid),
    .axi_aw_ready_o (aw_ready),
    .axi_aw_addr_i  (aw_addr),
    .axi_aw_len_i   (aw_len),
    .axi_aw_size_i  (aw_size),
    .axi_aw_burst_i (aw_burst),
    .axi_aw_id_i    (aw_id),
    .axi_w_valid_i  (w_valid),
    .axi_w_ready_o  (w_ready),
    .axi_w_data_i   (w_data),
    .axi_w_strb_i   (w_strb),
    .axi_w_last_i   (w_last),
    .axi_b_valid_o  (b_valid),
    .axi_b_ready_i  (b_ready),
    .axi_b_resp_o   (b_resp),
    .axi_b_id_o     (b_id),
    .axi_ar_valid_i (ar_valid),
    .axi_ar_ready_o (ar_ready),
    .axi_ar_addr_i  (ar_addr),
    .axi_ar_len_i   (ar_len),
    .axi_ar_size_i  (ar_size),
    .axi_ar_burst_i (ar_burst),
    .axi_ar_id_i    (ar_id),
    .axi_r_valid_o  (r_valid),
    .axi_r_ready_i  (r_ready),
    .axi_r_data_o   (r_data),
    .axi_r_resp_o   (r_resp),
    .axi_r_last_o   (r_last),
    .axi_r_id_o     (r_id),
    .tl_o           (tl_h2d),
    .tl_i           (tl_d2h)
  );

  // ---------------------------------------------------------------
  // Simple TL-UL memory slave (8 KB, 1-cycle latency)
  // ---------------------------------------------------------------
  localparam int MemDepth     = 1024;  // 1024 x 8 bytes = 8 KB
  localparam int MemAddrBits  = $clog2(MemDepth);

  logic [TL_DW-1:0] mem [MemDepth];

  // Pipeline register for response
  logic                   resp_valid_q;
  logic [2:0]             resp_opcode_q;
  logic [TL_SZW-1:0]     resp_size_q;
  logic [TL_AIW-1:0]     resp_source_q;
  logic [TL_DW-1:0]      resp_data_q;

  // Accept request when no pending response, or response is being consumed this cycle
  wire tl_a_accept = !resp_valid_q || tl_h2d.d_ready;

  assign tl_d2h.a_ready  = tl_a_accept;
  assign tl_d2h.d_valid  = resp_valid_q;
  assign tl_d2h.d_opcode = tl_d_op_e'(resp_opcode_q);
  assign tl_d2h.d_param  = '0;
  assign tl_d2h.d_size   = resp_size_q;
  assign tl_d2h.d_source = resp_source_q;
  assign tl_d2h.d_sink   = '0;
  assign tl_d2h.d_data   = resp_data_q;
  assign tl_d2h.d_user   = TL_D_USER_DEFAULT;
  assign tl_d2h.d_error  = 1'b0;

  wire                   tl_a_fire = tl_h2d.a_valid && tl_d2h.a_ready;
  wire [MemAddrBits-1:0] mem_idx   = tl_h2d.a_address[MemAddrBits-1+3:3]; // word index (8-byte aligned)

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      resp_valid_q  <= 1'b0;
      resp_opcode_q <= '0;
      resp_size_q   <= '0;
      resp_source_q <= '0;
      resp_data_q   <= '0;
    end else begin
      // Clear response when consumed
      if (resp_valid_q && tl_h2d.d_ready)
        resp_valid_q <= 1'b0;

      // New request
      if (tl_a_fire) begin
        resp_valid_q  <= 1'b1;
        resp_size_q   <= tl_h2d.a_size;
        resp_source_q <= tl_h2d.a_source;

        if (tl_h2d.a_opcode == Get) begin
          resp_opcode_q <= 3'(AccessAckData);
          resp_data_q   <= mem[mem_idx];
        end else begin
          // PutFullData or PutPartialData
          resp_opcode_q <= 3'(AccessAck);
          resp_data_q   <= '0;
          for (int b = 0; b < TL_DBW; b++) begin
            if (tl_h2d.a_mask[b])
              mem[mem_idx][b*8 +: 8] <= tl_h2d.a_data[b*8 +: 8];
          end
        end
      end
    end
  end

  // ---------------------------------------------------------------
  // DPI interface for C++ test driver
  // ---------------------------------------------------------------
  // Command staging
  logic        cmd_wr_go, cmd_rd_go;
  logic [31:0] cmd_addr;
  logic [63:0] cmd_wdata;
  logic [7:0]  cmd_wstrb;
  logic [7:0]  cmd_len;
  logic [3:0]  cmd_id;
  logic [63:0] result_rdata;
  logic [1:0]  result_bresp;

  export "DPI-C" function axi_write;
  export "DPI-C" function axi_read;
  export "DPI-C" function get_read_data;
  export "DPI-C" function get_write_resp;
  export "DPI-C" function is_wr_done;
  export "DPI-C" function is_rd_done;

  logic wr_done_flag, rd_done_flag;

  function void axi_write(input int addr, input longint data,
                           input int strb, input int id);
    cmd_wr_go   = 1;
    cmd_addr    = addr[31:0];
    cmd_wdata   = data;
    cmd_wstrb   = strb[7:0];
    cmd_len     = 8'd0;
    cmd_id      = id[3:0];
    wr_done_flag = 0;
  endfunction

  function void axi_read(input int addr, input int id);
    cmd_rd_go   = 1;
    cmd_addr    = addr[31:0];
    cmd_len     = 8'd0;
    cmd_id      = id[3:0];
    rd_done_flag = 0;
  endfunction

  function longint get_read_data();
    return result_rdata;
  endfunction

  function int get_write_resp();
    return int'(result_bresp);
  endfunction

  function int is_wr_done();
    return int'(wr_done_flag);
  endfunction

  function int is_rd_done();
    return int'(rd_done_flag);
  endfunction

  // ---------------------------------------------------------------
  // AXI master driver FSM
  // ---------------------------------------------------------------
  typedef enum logic [3:0] {
    DRV_IDLE,
    DRV_AW, DRV_W, DRV_B,
    DRV_AR, DRV_R
  } drv_state_e;

  drv_state_e drv_q, drv_d;

  always_comb begin
    drv_d = drv_q;

    aw_valid = 0; aw_addr = '0; aw_len = '0; aw_size = 3'd3;
    aw_burst = 2'b01; aw_id = '0;
    w_valid  = 0; w_data  = '0; w_strb  = '0; w_last  = 0;
    b_ready  = 0;
    ar_valid = 0; ar_addr = '0; ar_len  = '0; ar_size = 3'd3;
    ar_burst = 2'b01; ar_id = '0;
    r_ready  = 0;

    unique case (drv_q)
      DRV_IDLE: begin
        if (cmd_wr_go)      drv_d = DRV_AW;
        else if (cmd_rd_go) drv_d = DRV_AR;
      end

      DRV_AW: begin
        aw_valid = 1;
        aw_addr  = cmd_addr;
        aw_len   = cmd_len;
        aw_size  = 3'd3;
        aw_burst = 2'b01;
        aw_id    = cmd_id;
        if (aw_ready) drv_d = DRV_W;
      end

      DRV_W: begin
        w_valid = 1;
        w_data  = cmd_wdata;
        w_strb  = cmd_wstrb;
        w_last  = 1;
        if (w_ready) drv_d = DRV_B;
      end

      DRV_B: begin
        b_ready = 1;
        if (b_valid) begin
          result_bresp = b_resp;
          wr_done_flag = 1;
          cmd_wr_go    = 0;
          drv_d        = DRV_IDLE;
        end
      end

      DRV_AR: begin
        ar_valid = 1;
        ar_addr  = cmd_addr;
        ar_len   = cmd_len;
        ar_size  = 3'd3;
        ar_burst = 2'b01;
        ar_id    = cmd_id;
        if (ar_ready) drv_d = DRV_R;
      end

      DRV_R: begin
        r_ready = 1;
        if (r_valid) begin
          result_rdata = r_data;
          rd_done_flag = 1;
          cmd_rd_go    = 0;
          drv_d        = DRV_IDLE;
        end
      end

      default: drv_d = DRV_IDLE;
    endcase
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      drv_q        <= DRV_IDLE;
      cmd_wr_go    <= 0;
      cmd_rd_go    <= 0;
      wr_done_flag <= 0;
      rd_done_flag <= 0;
    end else begin
      drv_q <= drv_d;
    end
  end

  // Init
  initial begin
    for (int i = 0; i < MemDepth; i++) mem[i] = '0;
    result_rdata = '0;
    result_bresp = '0;
  end

endmodule