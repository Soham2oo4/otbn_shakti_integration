`timescale 1ns / 1ps

module tb_otbn_axi;
  import tlul_pkg::*;
  import top_pkg::*;

  localparam int unsigned AxiIdWidth = 4;
  localparam int CLK_PERIOD = 10;

  localparam logic [TL_AW-1:0] ADDR_CMD       = 32'h0000_0010;  // otbn_reg_pkg: OTBN_CMD_OFFSET
  localparam logic [TL_AW-1:0] ADDR_STATUS    = 32'h0000_0018;  // otbn_reg_pkg: OTBN_STATUS_OFFSET
  localparam logic [TL_AW-1:0] ADDR_ERR_BITS  = 32'h0000_001C;  // otbn_reg_pkg: OTBN_ERR_BITS_OFFSET
  localparam logic [TL_AW-1:0] ADDR_IMEM_BASE = 32'h0000_4000;  // otbn_reg_pkg: OTBN_IMEM_OFFSET

  logic clk, rst_n;
  initial clk = 0;
  always #(CLK_PERIOD/2) clk = ~clk;

  initial begin
    rst_n = 1'b0;
    #(CLK_PERIOD * 5);
    rst_n = 1'b1;
  end

  // AXI signals
  logic                    aw_valid, aw_ready;
  logic [TL_AW-1:0]       aw_addr;
  logic [7:0]              aw_len;
  logic [2:0]              aw_size;
  logic [1:0]              aw_burst;
  logic [AxiIdWidth-1:0]   aw_id;

  logic                    w_valid, w_ready;
  logic [TL_DW-1:0]       w_data;
  logic [TL_DBW-1:0]      w_strb;
  logic                    w_last;

  logic                    b_valid, b_ready;
  logic [1:0]              b_resp;
  logic [AxiIdWidth-1:0]   b_id;

  logic                    ar_valid, ar_ready;
  logic [TL_AW-1:0]       ar_addr;
  logic [7:0]              ar_len;
  logic [2:0]              ar_size;
  logic [1:0]              ar_burst;
  logic [AxiIdWidth-1:0]   ar_id;

  logic                    r_valid, r_ready;
  logic [TL_DW-1:0]       r_data;
  logic [1:0]              r_resp;
  logic                    r_last;
  logic [AxiIdWidth-1:0]   r_id;

  logic                    intr_done, idle;

  // DUT
  otbn_axi_wrapper #(.AxiIdWidth(AxiIdWidth)) u_dut (
    .clk_i(clk), .rst_ni(rst_n),
    .axi_aw_valid_i(aw_valid), .axi_aw_ready_o(aw_ready),
    .axi_aw_addr_i(aw_addr),   .axi_aw_len_i(aw_len),
    .axi_aw_size_i(aw_size),   .axi_aw_burst_i(aw_burst),
    .axi_aw_id_i(aw_id),
    .axi_w_valid_i(w_valid),   .axi_w_ready_o(w_ready),
    .axi_w_data_i(w_data),     .axi_w_strb_i(w_strb),
    .axi_w_last_i(w_last),
    .axi_b_valid_o(b_valid),   .axi_b_ready_i(b_ready),
    .axi_b_resp_o(b_resp),     .axi_b_id_o(b_id),
    .axi_ar_valid_i(ar_valid), .axi_ar_ready_o(ar_ready),
    .axi_ar_addr_i(ar_addr),   .axi_ar_len_i(ar_len),
    .axi_ar_size_i(ar_size),   .axi_ar_burst_i(ar_burst),
    .axi_ar_id_i(ar_id),
    .axi_r_valid_o(r_valid),   .axi_r_ready_i(r_ready),
    .axi_r_data_o(r_data),     .axi_r_resp_o(r_resp),
    .axi_r_last_o(r_last),     .axi_r_id_o(r_id),
    .intr_done_o(intr_done),   .idle_o(idle)
  );

  // ---- AXI driver tasks ----

  task automatic axi_write32(
    input logic [TL_AW-1:0] addr,
    input logic [31:0]       data32,
    input logic [AxiIdWidth-1:0] id
  );
    logic [TL_DW-1:0]  data64;
    logic [TL_DBW-1:0] strb;
    logic [TL_AW-1:0]  aligned_addr;
    aligned_addr = {addr[TL_AW-1:3], 3'b000};
    if (addr[2]) begin
      data64 = {data32, 32'd0};
      strb   = 8'hF0;
    end else begin
      data64 = {32'd0, data32};
      strb   = 8'h0F;
    end

    @(posedge clk);
    aw_valid <= 1'b1; aw_addr <= aligned_addr; aw_len <= 8'd0;
    aw_size <= 3'd2; aw_burst <= 2'b01; aw_id <= id;
    w_valid <= 1'b1; w_data <= data64; w_strb <= strb; w_last <= 1'b1;

    fork
      begin // AW handshake
        while (!(aw_valid && aw_ready)) @(posedge clk);
        aw_valid <= 1'b0;
      end
      begin // W handshake
        while (!(w_valid && w_ready)) @(posedge clk);
        w_valid <= 1'b0;
      end
    join

    b_ready <= 1'b1;
    while (!b_valid) @(posedge clk);
    if (b_resp != 2'b00)
      $warning("[WR] addr=0x%08h resp=%0b", addr, b_resp);
    @(posedge clk);
    b_ready <= 1'b0;
  endtask

  task automatic axi_read32(
    input  logic [TL_AW-1:0]      addr,
    input  logic [AxiIdWidth-1:0]  id,
    output logic [31:0]            data32
  );
    logic [TL_DW-1:0] data64;
    logic [TL_AW-1:0] aligned_addr;
    aligned_addr = {addr[TL_AW-1:3], 3'b000};

    @(posedge clk);
    ar_valid <= 1'b1; ar_addr <= aligned_addr; ar_len <= 8'd0;
    ar_size <= 3'd2; ar_burst <= 2'b01; ar_id <= id;

    while (!(ar_valid && ar_ready)) @(posedge clk);
    ar_valid <= 1'b0;

    r_ready <= 1'b1;
    while (!r_valid) @(posedge clk);
    data64 = r_data;
    if (r_resp != 2'b00)
      $warning("[RD] addr=0x%08h resp=%0b", addr, r_resp);
    @(posedge clk);
    r_ready <= 1'b0;

    data32 = addr[2] ? data64[63:32] : data64[31:0];
  endtask

  // ---- Init ----
  initial begin
    aw_valid=0; w_valid=0; b_ready=0;
    ar_valid=0; r_ready=0;
    aw_addr='0; aw_len='0; aw_size='0; aw_burst='0; aw_id='0;
    w_data='0; w_strb='0; w_last=0;
    ar_addr='0; ar_len='0; ar_size='0; ar_burst='0; ar_id='0;
  end

  // ---- Test sequence ----
  initial begin
    logic [31:0] status, err_bits;
    int timeout_cnt;

    $display("=== tb_otbn_axi: starting ===");
    @(posedge rst_n);
    repeat(10) @(posedge clk);

    // 1. Write ECALL (0x00000073) to IMEM[0]
    $display("[%0t] Writing ECALL to IMEM[0]", $time);
    axi_write32(ADDR_IMEM_BASE, 32'h0000_0073, 4'd1);
    repeat(5) @(posedge clk);

    // 2. CMD = Execute (0x01)
    $display("[%0t] Issuing CMD = Execute", $time);
    axi_write32(ADDR_CMD, 32'h0000_0001, 4'd2);
    repeat(10) @(posedge clk);

    // 3. Poll STATUS
    $display("[%0t] Polling STATUS...", $time);
    timeout_cnt = 0;
    status = 32'hFF;
    while (status != 32'd0 && timeout_cnt < 10000) begin
      axi_read32(ADDR_STATUS, 4'd3, status);
      $display("[%0t]   STATUS = 0x%08h", $time, status);
      repeat(10) @(posedge clk);
      timeout_cnt++;
    end

    if (timeout_cnt >= 10000)
      $error("TIMEOUT waiting for OTBN idle");
    else
      $display("[%0t] OTBN is idle.", $time);

    // 4. Read ERR_BITS
    axi_read32(ADDR_ERR_BITS, 4'd4, err_bits);
    $display("[%0t] ERR_BITS = 0x%08h", $time, err_bits);

    if (err_bits == 32'd0) $display("=== TEST PASSED ===");
    else                   $display("=== TEST FAILED (err=0x%08h) ===", err_bits);

    repeat(20) @(posedge clk);
    $finish;
  end

  // Watchdog
  initial begin
    #(CLK_PERIOD * 500_000);
    $fatal(1, "Global timeout");
  end

  // Waveform dump
  initial begin
    if ($test$plusargs("dump")) begin
      $dumpfile("tb_otbn_axi.vcd");
      $dumpvars(0, tb_otbn_axi);
    end
  end

endmodule
