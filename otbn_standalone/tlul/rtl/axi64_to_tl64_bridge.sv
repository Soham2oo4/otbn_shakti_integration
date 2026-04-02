// AXI4 (64-bit data) → TileLink-UL (64-bit data) Bridge
// Uses tlul_pkg structs directly — drops into existing OTBN standalone build
//
// Limitations (intentional for OTBN register/memory access):
//   - Single outstanding transaction per channel (no reordering)
//   - Write priority over read when both pending
//   - Supports FIXED / INCR / WRAP bursts

module axi64_to_tl64_bridge
  import tlul_pkg::*;
  import top_pkg::*;
#(
  parameter int unsigned AxiIdWidth   = 4,
  // Set to 1 to compute proper TL-UL cmd/data integrity ECC.
  // Set to 0 to use TL_A_USER_DEFAULT (all-1s = "unchecked").
  parameter bit          EnableIntg   = 1
) (
  input  logic clk_i,
  input  logic rst_ni,

  // ===== AXI4 Slave Interface =====

  // AW channel
  input  logic                    axi_aw_valid_i,
  output logic                    axi_aw_ready_o,
  input  logic [TL_AW-1:0]       axi_aw_addr_i,
  input  logic [7:0]              axi_aw_len_i,
  input  logic [2:0]              axi_aw_size_i,
  input  logic [1:0]              axi_aw_burst_i,
  input  logic [AxiIdWidth-1:0]   axi_aw_id_i,

  // W channel
  input  logic                    axi_w_valid_i,
  output logic                    axi_w_ready_o,
  input  logic [TL_DW-1:0]       axi_w_data_i,
  input  logic [TL_DBW-1:0]      axi_w_strb_i,
  input  logic                    axi_w_last_i,

  // B channel
  output logic                    axi_b_valid_o,
  input  logic                    axi_b_ready_i,
  output logic [1:0]              axi_b_resp_o,
  output logic [AxiIdWidth-1:0]   axi_b_id_o,

  // AR channel
  input  logic                    axi_ar_valid_i,
  output logic                    axi_ar_ready_o,
  input  logic [TL_AW-1:0]       axi_ar_addr_i,
  input  logic [7:0]              axi_ar_len_i,
  input  logic [2:0]              axi_ar_size_i,
  input  logic [1:0]              axi_ar_burst_i,
  input  logic [AxiIdWidth-1:0]   axi_ar_id_i,

  // R channel
  output logic                    axi_r_valid_o,
  input  logic                    axi_r_ready_i,
  output logic [TL_DW-1:0]       axi_r_data_o,
  output logic [1:0]              axi_r_resp_o,
  output logic                    axi_r_last_o,
  output logic [AxiIdWidth-1:0]   axi_r_id_o,

  // ===== TileLink-UL Master Interface =====
  output tl_h2d_t                 tl_o,
  input  tl_d2h_t                 tl_i
);

  // ---------------------------------------------------------------
  // AXI burst type encoding
  // ---------------------------------------------------------------
  localparam logic [1:0] AxiBurstFixed = 2'b00;
  localparam logic [1:0] AxiBurstIncr  = 2'b01;
  localparam logic [1:0] AxiBurstWrap  = 2'b10;

  localparam logic [1:0] AxiRespOkay   = 2'b00;
  localparam logic [1:0] AxiRespSlvErr = 2'b10;

  // Source tag encoding: MSB=1 → write, MSB=0 → read
  localparam int unsigned SrcWidth = TL_AIW; // 8

  // ---------------------------------------------------------------
  // Burst address calculator
  // ---------------------------------------------------------------
  function automatic logic [TL_AW-1:0] calc_next_addr(
    input logic [TL_AW-1:0] current,
    input logic [TL_AW-1:0] base,
    input logic [2:0]       size,
    input logic [1:0]       burst,
    input logic [7:0]       len
  );
    logic [TL_AW-1:0] step, nxt, wrap_boundary, wrap_mask;
    step = TL_AW'(1) << size;
    unique case (burst)
      AxiBurstFixed: nxt = current;
      AxiBurstIncr:  nxt = current + step;
      AxiBurstWrap: begin
        wrap_boundary = TL_AW'(len + 8'd1) << size;
        wrap_mask     = wrap_boundary - 1;
        nxt = (base & ~wrap_mask) | ((current + step) & wrap_mask);
      end
      default: nxt = current + step;
    endcase
    return nxt;
  endfunction

  // Check if strobe matches a full natural-size transfer
  function automatic logic is_full_strobe(
    input logic [TL_DBW-1:0] strb,
    input logic [2:0]        size
  );
    logic [TL_DBW-1:0] expected;
    expected = TL_DBW'((1 << (1 << size)) - 1);
    return (strb == expected);
  endfunction

  // ---------------------------------------------------------------
  // Read mask generator: TL-UL requires mask to match size & alignment
  // ---------------------------------------------------------------
  function automatic logic [TL_DBW-1:0] gen_read_mask(
    input logic [TL_AW-1:0] addr,
    input logic [2:0]       size
  );
    logic [TL_DBW-1:0] mask;
    unique case (size)
      3'd0: mask = TL_DBW'(8'h01) << addr[2:0];
      3'd1: mask = TL_DBW'(8'h03) << {addr[2:1], 1'b0};
      3'd2: mask = addr[2] ? 8'hF0 : 8'h0F;
      3'd3: mask = 8'hFF;
      default: mask = 8'hFF;
    endcase
    return mask;
  endfunction

  // ---------------------------------------------------------------
  // Write channel FSM
  // ---------------------------------------------------------------
  typedef enum logic [2:0] {
    W_IDLE,
    W_DATA,
    W_WAIT_ACK,
    W_RESP
  } wr_state_e;

  wr_state_e                wr_state_q,    wr_state_d;
  logic [TL_AW-1:0]        wr_addr_q,     wr_addr_d;
  logic [TL_AW-1:0]        wr_base_q,     wr_base_d;
  logic [7:0]              wr_len_q,      wr_len_d;
  logic [7:0]              wr_beat_q,     wr_beat_d;
  logic [2:0]              wr_size_q,     wr_size_d;
  logic [1:0]              wr_burst_q,    wr_burst_d;
  logic [AxiIdWidth-1:0]   wr_id_q,       wr_id_d;
  logic                    wr_err_q,      wr_err_d;

  // ---------------------------------------------------------------
  // Read channel FSM
  // ---------------------------------------------------------------
  typedef enum logic [2:0] {
    R_IDLE,
    R_REQUEST,
    R_WAIT_DATA,
    R_RESPONSE
  } rd_state_e;

  rd_state_e                rd_state_q,    rd_state_d;
  logic [TL_AW-1:0]        rd_addr_q,     rd_addr_d;
  logic [TL_AW-1:0]        rd_base_q,     rd_base_d;
  logic [7:0]              rd_len_q,      rd_len_d;
  logic [7:0]              rd_beat_q,     rd_beat_d;
  logic [2:0]              rd_size_q,     rd_size_d;
  logic [1:0]              rd_burst_q,    rd_burst_d;
  logic [AxiIdWidth-1:0]   rd_id_q,       rd_id_d;
  logic                    rd_err_q,      rd_err_d;
  logic [TL_DW-1:0]        rd_data_q,     rd_data_d;

  // ---------------------------------------------------------------
  // Arbiter: write gets priority when both want TL-A
  // ---------------------------------------------------------------
  logic wr_wants_tl, rd_wants_tl;
  logic wr_grant,    rd_grant;

  assign wr_wants_tl = (wr_state_q == W_DATA) && axi_w_valid_i;
  assign rd_wants_tl = (rd_state_q == R_REQUEST);
  assign wr_grant    = wr_wants_tl;
  assign rd_grant    = rd_wants_tl && !wr_wants_tl;

  // ---------------------------------------------------------------
  // TL-D channel demux by source MSB
  // ---------------------------------------------------------------
  logic d_is_write;
  assign d_is_write = tl_i.d_source[SrcWidth-1];

  logic dw_valid, dr_valid;
  logic dw_ready, dr_ready;
  assign dw_valid = tl_i.d_valid &&  d_is_write;
  assign dr_valid = tl_i.d_valid && !d_is_write;

  // Default d_ready: accept responses when neither FSM is actively waiting.
  // This prevents stalling OTBN's TL-UL bus from unsolicited/boot responses.
  logic default_d_ready;
  assign default_d_ready = (wr_state_q == W_IDLE || wr_state_q == W_RESP) &&
                           (rd_state_q == R_IDLE || rd_state_q == R_RESPONSE);

  // ---------------------------------------------------------------
  // TL-A channel mux (before integrity)
  // ---------------------------------------------------------------
  tl_h2d_t tl_o_pre;

  always_comb begin
    tl_o_pre = TL_H2D_DEFAULT;

    // d_ready: route to the owning FSM, OR accept by default if idle
    tl_o_pre.d_ready = (d_is_write ? dw_ready : dr_ready) | default_d_ready;

    if (wr_grant) begin
      tl_o_pre.a_valid   = 1'b1;
      tl_o_pre.a_opcode  = is_full_strobe(axi_w_strb_i, wr_size_q)
                            ? PutFullData
                            : PutPartialData;
      tl_o_pre.a_param   = 3'd0;
      tl_o_pre.a_size    = top_pkg::TL_SZW'(wr_size_q);
      tl_o_pre.a_source  = {1'b1, {(SrcWidth-1-AxiIdWidth){1'b0}}, wr_id_q};
      tl_o_pre.a_address = wr_addr_q;
      tl_o_pre.a_mask    = axi_w_strb_i;
      tl_o_pre.a_data    = axi_w_data_i;
    end else if (rd_grant) begin
      tl_o_pre.a_valid   = 1'b1;
      tl_o_pre.a_opcode  = Get;
      tl_o_pre.a_param   = 3'd0;
      tl_o_pre.a_size    = top_pkg::TL_SZW'(rd_size_q);
      tl_o_pre.a_source  = {1'b0, {(SrcWidth-1-AxiIdWidth){1'b0}}, rd_id_q};
      tl_o_pre.a_address = rd_addr_q;
      tl_o_pre.a_mask    = gen_read_mask(rd_addr_q, rd_size_q);
      tl_o_pre.a_data    = {TL_DW{1'b0}};
    end
  end

  // ---------------------------------------------------------------
  // Integrity generation (optional but recommended)
  // ---------------------------------------------------------------
  // When EnableIntg=1, compute proper ECC for cmd and data fields
  // so that downstream tlul_cmd_intg_chk / tlul_data_integ_dec pass.
  // When EnableIntg=0, TL_A_USER_DEFAULT all-1s integrity is used
  // (works only if downstream integrity checking is disabled).

  generate
    if (EnableIntg) begin : gen_intg
      always_comb begin
        tl_o = tl_o_pre;
        if (tl_o_pre.a_valid) begin
          tl_o.a_user.cmd_intg  = tlul_pkg::get_cmd_intg(tl_o_pre);
          tl_o.a_user.data_intg = tlul_pkg::get_data_intg(tl_o_pre.a_data);
        end
      end
    end else begin : gen_no_intg
      assign tl_o = tl_o_pre;
    end
  endgenerate

  // ---------------------------------------------------------------
  // Write FSM
  // ---------------------------------------------------------------
  always_comb begin
    wr_state_d = wr_state_q;
    wr_addr_d  = wr_addr_q;
    wr_base_d  = wr_base_q;
    wr_len_d   = wr_len_q;
    wr_beat_d  = wr_beat_q;
    wr_size_d  = wr_size_q;
    wr_burst_d = wr_burst_q;
    wr_id_d    = wr_id_q;
    wr_err_d   = wr_err_q;

    axi_aw_ready_o = 1'b0;
    axi_w_ready_o  = 1'b0;
    axi_b_valid_o  = 1'b0;
    axi_b_resp_o   = AxiRespOkay;
    axi_b_id_o     = wr_id_q;
    dw_ready       = 1'b0;

    unique case (wr_state_q)
      W_IDLE: begin
        axi_aw_ready_o = 1'b1;
        if (axi_aw_valid_i) begin
          wr_state_d = W_DATA;
          wr_addr_d  = axi_aw_addr_i;
          wr_base_d  = axi_aw_addr_i;
          wr_len_d   = axi_aw_len_i;
          wr_size_d  = axi_aw_size_i;
          wr_burst_d = axi_aw_burst_i;
          wr_id_d    = axi_aw_id_i;
          wr_beat_d  = 8'd0;
          wr_err_d   = 1'b0;
        end
      end

      W_DATA: begin
        // Also accept D-channel here for same-cycle responses
        dw_ready = 1'b1;
        if (wr_grant && tl_i.a_ready) begin
          axi_w_ready_o = 1'b1;
          // Check if TL-D response arrives same cycle
          if (dw_valid) begin
            if (tl_i.d_error) wr_err_d = 1'b1;
            if (wr_beat_q == wr_len_q) begin
              wr_state_d = W_RESP;
            end else begin
              wr_beat_d  = wr_beat_q + 8'd1;
              wr_addr_d  = calc_next_addr(wr_addr_q, wr_base_q,
                                           wr_size_q, wr_burst_q, wr_len_q);
              wr_state_d = W_DATA;
            end
          end else begin
            wr_state_d = W_WAIT_ACK;
          end
        end
      end

      W_WAIT_ACK: begin
        dw_ready = 1'b1;
        if (dw_valid) begin
          if (tl_i.d_error) wr_err_d = 1'b1;

          if (wr_beat_q == wr_len_q) begin
            wr_state_d = W_RESP;
          end else begin
            wr_beat_d  = wr_beat_q + 8'd1;
            wr_addr_d  = calc_next_addr(wr_addr_q, wr_base_q,
                                         wr_size_q, wr_burst_q, wr_len_q);
            wr_state_d = W_DATA;
          end
        end
      end

      W_RESP: begin
        axi_b_valid_o = 1'b1;
        axi_b_resp_o  = wr_err_q ? AxiRespSlvErr : AxiRespOkay;
        axi_b_id_o    = wr_id_q;
        if (axi_b_ready_i) begin
          wr_state_d = W_IDLE;
        end
      end

      default: wr_state_d = W_IDLE;
    endcase
  end

  // ---------------------------------------------------------------
  // Read FSM — fixed to handle same-cycle TL-D response
  // ---------------------------------------------------------------
  always_comb begin
    rd_state_d = rd_state_q;
    rd_addr_d  = rd_addr_q;
    rd_base_d  = rd_base_q;
    rd_len_d   = rd_len_q;
    rd_beat_d  = rd_beat_q;
    rd_size_d  = rd_size_q;
    rd_burst_d = rd_burst_q;
    rd_id_d    = rd_id_q;
    rd_err_d   = rd_err_q;
    rd_data_d  = rd_data_q;

    axi_ar_ready_o = 1'b0;
    axi_r_valid_o  = 1'b0;
    axi_r_data_o   = rd_data_q;
    axi_r_resp_o   = AxiRespOkay;
    axi_r_last_o   = 1'b0;
    axi_r_id_o     = rd_id_q;
    dr_ready       = 1'b0;

    unique case (rd_state_q)
      R_IDLE: begin
        axi_ar_ready_o = 1'b1;
        if (axi_ar_valid_i) begin
          rd_state_d = R_REQUEST;
          rd_addr_d  = axi_ar_addr_i;
          rd_base_d  = axi_ar_addr_i;
          rd_len_d   = axi_ar_len_i;
          rd_size_d  = axi_ar_size_i;
          rd_burst_d = axi_ar_burst_i;
          rd_id_d    = axi_ar_id_i;
          rd_beat_d  = 8'd0;
          rd_err_d   = 1'b0;
        end
      end

      R_REQUEST: begin
        // Accept d_ready even here — in case TL-D responds same cycle as TL-A
        dr_ready = 1'b1;
        if (rd_grant && tl_i.a_ready) begin
          // TL-A request accepted. Check if TL-D response arrives simultaneously.
          if (dr_valid) begin
            // Same-cycle response! Capture data and go straight to R_RESPONSE.
            rd_data_d  = tl_i.d_data;
            if (tl_i.d_error) rd_err_d = 1'b1;
            rd_state_d = R_RESPONSE;
          end else begin
            rd_state_d = R_WAIT_DATA;
          end
        end
      end

      R_WAIT_DATA: begin
        dr_ready = 1'b1;
        if (dr_valid) begin
          rd_data_d = tl_i.d_data;
          if (tl_i.d_error) rd_err_d = 1'b1;
          rd_state_d = R_RESPONSE;
        end
      end

      R_RESPONSE: begin
        axi_r_valid_o = 1'b1;
        axi_r_data_o  = rd_data_q;
        axi_r_resp_o  = rd_err_q ? AxiRespSlvErr : AxiRespOkay;
        axi_r_last_o  = (rd_beat_q == rd_len_q);
        axi_r_id_o    = rd_id_q;
        if (axi_r_ready_i) begin
          if (rd_beat_q == rd_len_q) begin
            rd_state_d = R_IDLE;
          end else begin
            rd_beat_d  = rd_beat_q + 8'd1;
            rd_addr_d  = calc_next_addr(rd_addr_q, rd_base_q,
                                         rd_size_q, rd_burst_q, rd_len_q);
            rd_state_d = R_REQUEST;
          end
        end
      end

      default: rd_state_d = R_IDLE;
    endcase
  end

  // ---------------------------------------------------------------
  // Sequential
  // ---------------------------------------------------------------
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      wr_state_q <= W_IDLE;
      wr_addr_q  <= '0;
      wr_base_q  <= '0;
      wr_len_q   <= '0;
      wr_beat_q  <= '0;
      wr_size_q  <= '0;
      wr_burst_q <= '0;
      wr_id_q    <= '0;
      wr_err_q   <= 1'b0;

      rd_state_q <= R_IDLE;
      rd_addr_q  <= '0;
      rd_base_q  <= '0;
      rd_len_q   <= '0;
      rd_beat_q  <= '0;
      rd_size_q  <= '0;
      rd_burst_q <= '0;
      rd_id_q    <= '0;
      rd_err_q   <= 1'b0;
      rd_data_q  <= '0;
    end else begin
      wr_state_q <= wr_state_d;
      wr_addr_q  <= wr_addr_d;
      wr_base_q  <= wr_base_d;
      wr_len_q   <= wr_len_d;
      wr_beat_q  <= wr_beat_d;
      wr_size_q  <= wr_size_d;
      wr_burst_q <= wr_burst_d;
      wr_id_q    <= wr_id_d;
      wr_err_q   <= wr_err_d;

      rd_state_q <= rd_state_d;
      rd_addr_q  <= rd_addr_d;
      rd_base_q  <= rd_base_d;
      rd_len_q   <= rd_len_d;
      rd_beat_q  <= rd_beat_d;
      rd_size_q  <= rd_size_d;
      rd_burst_q <= rd_burst_d;
      rd_id_q    <= rd_id_d;
      rd_err_q   <= rd_err_d;
      rd_data_q  <= rd_data_d;
    end
  end

  // ---------------------------------------------------------------
  // Assertions (simulation only)
  // ---------------------------------------------------------------
  // synthesis translate_off
  initial begin
    assert (TL_DW == 64) else $fatal(1, "axi64_to_tl64_bridge: TL_DW must be 64");
    assert (AxiIdWidth < SrcWidth)
      else $fatal(1, "axi64_to_tl64_bridge: AxiIdWidth must be < TL_AIW (%0d)", SrcWidth);
  end

  always_ff @(posedge clk_i) begin
    if (rst_ni) begin
      if (axi_aw_valid_i && axi_aw_ready_o) begin
        assert (axi_aw_burst_i != 2'b11)
          else $error("AXI AW: reserved burst type 2'b11");
        assert (axi_aw_size_i <= 3'd3)
          else $error("AXI AW: size > 8 bytes not supported on 64-bit bus");
      end
      if (axi_ar_valid_i && axi_ar_ready_o) begin
        assert (axi_ar_burst_i != 2'b11)
          else $error("AXI AR: reserved burst type 2'b11");
        assert (axi_ar_size_i <= 3'd3)
          else $error("AXI AR: size > 8 bytes not supported on 64-bit bus");
      end
    end
  end
  // synthesis translate_on

  // Unused signal tie-off
  logic unused_w_last;
  assign unused_w_last = axi_w_last_i;

endmodule