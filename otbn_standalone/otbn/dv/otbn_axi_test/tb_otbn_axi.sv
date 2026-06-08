// Integration testbench: exercise OTBN through the AXI wrapper.
//
// OTBN register map offsets (from otbn_reg_pkg):
//   INTR_STATE  = 0x0000   CMD    = 0x0004   STATUS = 0x0018
//   ERR_BITS    = 0x002C   IMEM   = 0x4000   DMEM   = 0x8000

`timescale 1ns / 1ps

module tb_otbn_axi
  import tlul_pkg::*;
  import top_pkg::*;
(
  input logic clk_i,
  input logic rst_ni
);

  localparam int unsigned AxiIdWidth = 4;

  // OTBN register offsets — read from actual otbn_reg_pkg
  // These are BYTE offsets. Each CSR is 4 bytes, packed into 8-byte TL words.
  // Offset  Register
  // 0x00    INTR_STATE
  // 0x04    INTR_ENABLE
  // 0x08    INTR_TEST
  // 0x0C    ALERT_TEST
  // 0x10    CMD
  // 0x14    CTRL
  // 0x18    STATUS
  // 0x1C    ERR_BITS
  // 0x20    FATAL_ALERT_CAUSE
  // 0x24    INSN_CNT
  // 0x28    LOAD_CHECKSUM
  // 0x4000  IMEM (4KB)
  // 0x8000  DMEM (4KB)

  localparam logic [TL_AW-1:0] ADDR_CMD       = 32'h0000_0010;
  localparam logic [TL_AW-1:0] ADDR_STATUS    = 32'h0000_0018;
  localparam logic [TL_AW-1:0] ADDR_ERR_BITS  = 32'h0000_001C;
  localparam logic [TL_AW-1:0] ADDR_IMEM_BASE = 32'h0000_4000;

  reg                    aw_valid = 0;
  reg [TL_AW-1:0]       aw_addr  = 0;
  reg [7:0]              aw_len   = 0;
  reg [2:0]              aw_size  = 0;
  reg [1:0]              aw_burst = 0;
  reg [AxiIdWidth-1:0]   aw_id    = 0;
  reg                    w_valid  = 0;
  reg [TL_DW-1:0]       w_data   = 0;
  reg [TL_DBW-1:0]      w_strb   = 0;
  reg                    w_last   = 0;
  reg                    b_ready  = 0;
  reg                    ar_valid = 0;
  reg [TL_AW-1:0]       ar_addr  = 0;
  reg [7:0]              ar_len   = 0;
  reg [2:0]              ar_size  = 0;
  reg [1:0]              ar_burst = 0;
  reg [AxiIdWidth-1:0]   ar_id    = 0;
  reg                    r_ready  = 0;

  wire aw_ready, w_ready, b_valid, ar_ready, r_valid, r_last;
  wire [1:0] b_resp, r_resp;
  wire [AxiIdWidth-1:0] b_id, r_id;
  wire [TL_DW-1:0] r_data;
  wire intr_done, idle;

  otbn_axi_wrapper #(.AxiIdWidth(AxiIdWidth)) u_dut (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .axi_aw_valid_i(aw_valid), .axi_aw_ready_o(aw_ready),
    .axi_aw_addr_i(aw_addr),  .axi_aw_len_i(aw_len),
    .axi_aw_size_i(aw_size),  .axi_aw_burst_i(aw_burst),
    .axi_aw_id_i(aw_id),
    .axi_w_valid_i(w_valid),  .axi_w_ready_o(w_ready),
    .axi_w_data_i(w_data),    .axi_w_strb_i(w_strb),
    .axi_w_last_i(w_last),
    .axi_b_valid_o(b_valid),  .axi_b_ready_i(b_ready),
    .axi_b_resp_o(b_resp),    .axi_b_id_o(b_id),
    .axi_ar_valid_i(ar_valid), .axi_ar_ready_o(ar_ready),
    .axi_ar_addr_i(ar_addr),  .axi_ar_len_i(ar_len),
    .axi_ar_size_i(ar_size),  .axi_ar_burst_i(ar_burst),
    .axi_ar_id_i(ar_id),
    .axi_r_valid_o(r_valid),  .axi_r_ready_i(r_ready),
    .axi_r_data_o(r_data),    .axi_r_resp_o(r_resp),
    .axi_r_last_o(r_last),    .axi_r_id_o(r_id),
    .intr_done_o(intr_done),  .idle_o(idle)
  );

  task automatic tick();
    @(posedge clk_i);
  endtask

  task automatic axi_cleanup();
    aw_valid = 0; w_valid = 0; b_ready = 0;
    ar_valid = 0; r_ready = 0;
  endtask

  // ---------------------------------------------------------------
  // AXI Write 64-bit
  //
  // KEY: Keep w_valid HIGH until b_valid. The bridge needs w_valid
  // to assert wr_grant in W_DATA state. Deasserting w_valid after
  // w_ready kills the grant before the FSM can register the transition.
  // ---------------------------------------------------------------
  task automatic axi_write64(
    input logic [TL_AW-1:0]      addr,
    input logic [TL_DW-1:0]      data64,
    input logic [TL_DBW-1:0]     strb,
    input logic [AxiIdWidth-1:0]  id,
    input logic                   debug,
    output logic                  ok
  );
    int cyc;
    logic b_done;

    aw_valid = 1; aw_addr = addr; aw_len = 0;
    aw_size = 3'd3; aw_burst = 2'b01; aw_id = id;
    w_valid = 1; w_data = data64; w_strb = strb; w_last = 1;
    b_ready = 1;

    b_done = 0;

    for (cyc = 0; cyc < 5000 && !b_done; cyc++) begin
      tick();

      if (debug && cyc < 30)
        $display("  [wr cyc=%0d] aw_v=%b aw_r=%b w_v=%b w_r=%b b_v=%b",
                 cyc, aw_valid, aw_ready, w_valid, w_ready, b_valid);

      // Only deassert aw_valid after AW handshake.
      // NEVER deassert w_valid — keep it high so wr_grant stays active.
      // The bridge will consume W data when it's ready.
      if (aw_valid && aw_ready) aw_valid = 0;

      // B response terminates everything
      if (b_valid && b_ready) begin
        b_done = 1;
        ok = (b_resp == 2'b00);
      end
    end
    if (!b_done) begin
      $display("  WR64 TIMEOUT addr=0x%08h (cyc=%0d)", addr, cyc);
      ok = 0;
    end
    // Deassert AW/W before the drain tick so the bridge can't re-latch
    // the current address. Keep b_ready=1 so W_RESP → W_IDLE completes.
    aw_valid = 0;
    w_valid  = 0;
    tick();       // bridge drains W_RESP → W_IDLE while b_ready is still 1
    axi_cleanup();// zero b_ready (and any remaining signals)
  endtask

  task automatic axi_write32(
    input logic [TL_AW-1:0]      addr,
    input logic [31:0]            data32,
    input logic [AxiIdWidth-1:0]  id,
    input logic                   debug,
    output logic                  ok
  );
    logic [TL_AW-1:0] aligned;
    aligned = {addr[TL_AW-1:3], 3'b000};
    $display("[%0t] WR32 addr=0x%08h data=0x%08h", $time, addr, data32);
    axi_write64(aligned, {data32, data32}, 8'hFF, id, debug, ok);
    $display("[%0t]   -> %s", $time, ok ? "OK" : "FAILED");
  endtask

  // ---------------------------------------------------------------
  // AXI Read 64-bit
  //
  // Keep ar_valid HIGH until AR is accepted. Keep r_ready HIGH
  // throughout. Don't deassert ar_valid immediately — let the bridge
  // see it for a full cycle.
  // ---------------------------------------------------------------
  task automatic axi_read64(
    input  logic [TL_AW-1:0]      addr,
    input  logic [AxiIdWidth-1:0]  id,
    input  logic                   debug,
    output logic [TL_DW-1:0]      data64,
    output logic                   ok
  );
    int cyc;
    logic r_done;

    ar_valid = 1; ar_addr = addr; ar_len = 0;
    ar_size = 3'd3; ar_burst = 2'b01; ar_id = id;
    r_ready = 1;

    r_done = 0;

    for (cyc = 0; cyc < 5000 && !r_done; cyc++) begin
      tick();

      if (debug && cyc < 30)
        $display("  [rd cyc=%0d] ar_v=%b ar_r=%b r_v=%b r_r=%b",
                 cyc, ar_valid, ar_ready, r_valid, r_ready);

      // Don't deassert ar_valid — the bridge accepts it when ready.
      // If we deassert too early, the bridge may miss it.
      // ar_valid stays high — bridge will ignore it once it moves past R_IDLE.

      if (r_valid && r_ready) begin
        r_done = 1;
        data64 = r_data;
        ok = (r_resp == 2'b00);
      end
    end
    if (!r_done) begin
      $display("  RD64 TIMEOUT addr=0x%08h (cyc=%0d)", addr, cyc);
      ok = 0;
      data64 = '0;
    end
    // Drain R_RESPONSE → R_IDLE while r_ready is still 1
    ar_valid = 0;
    tick();
    axi_cleanup();
  endtask

  task automatic axi_read32(
    input  logic [TL_AW-1:0]      addr,
    input  logic [AxiIdWidth-1:0]  id,
    input  logic                   debug,
    output logic [31:0]            data32,
    output logic                   ok
  );
    logic [TL_DW-1:0] data64;
    logic [TL_AW-1:0] aligned;
    aligned = {addr[TL_AW-1:3], 3'b000};
    axi_read64(aligned, id, debug, data64, ok);
    data32 = addr[2] ? data64[63:32] : data64[31:0];
  endtask

  // ---------------------------------------------------------------
  // Test
  // ---------------------------------------------------------------
  initial begin
    logic [31:0] rdata, status, err_bits;
    logic ok;
    int poll;
    int window_fails;

    $display("=== tb_otbn_axi: starting ===");
    wait (rst_ni === 1'b1);

    // Wait for secure wipe
    $display("Waiting for secure wipe...");
    poll = 0;
    status = 32'hFF;
    while (status != 32'd0 && poll < 200000) begin
      repeat(500) tick();
      axi_read32(ADDR_STATUS, 4'd0, 1'b0, status, ok);
      if (poll % 200 == 0) $display("  STATUS=%0d ok=%0b (poll %0d)", status, ok, poll);
      poll++;
    end
    $display("STATUS = %0d after %0d polls", status, poll);

    if (status != 32'd0) begin
      $display("OTBN not idle. Aborting.");
      $finish;
    end

    // ---- IMEM window boundary test (verifies the 16 KiB window fix) ----
    // IMEM_SIZE stays 0x2000 (ImemIndexWidth=11, SRAM[i] = a_address[13:3]).
    // The bus window must be 16 KiB [0x4000:0x7FFF] to reach slot 2026 (0x7F50).
    $display("\n--- IMEM window boundary test ---");
    window_fails = 0;

    // Slot 1023 (bus addr 0x5FF8): last slot in old 8 KiB window
    axi_write32(ADDR_IMEM_BASE + 32'h1FF8, 32'hAA55_0FFF, 4'd6, 1'b0, ok);
    axi_read32 (ADDR_IMEM_BASE + 32'h1FF8, 4'd7, 1'b0, rdata, ok);
    if (rdata === 32'hAA55_0FFF)
      $display("  IMEM[1023] (0x5FF8): 0x%08h  PASS", rdata);
    else begin
      $display("  IMEM[1023] (0x5FF8): 0x%08h  FAIL (expect 0xAA550FFF)", rdata);
      window_fails++;
    end

    // Slot 1024 (bus addr 0x6000): first slot past old 8 KiB boundary
    axi_write32(ADDR_IMEM_BASE + 32'h2000, 32'hAA55_1000, 4'd6, 1'b0, ok);
    axi_read32 (ADDR_IMEM_BASE + 32'h2000, 4'd7, 1'b0, rdata, ok);
    if (rdata === 32'hAA55_1000)
      $display("  IMEM[1024] (0x6000): 0x%08h  PASS (window fix OK)", rdata);
    else begin
      $display("  IMEM[1024] (0x6000): 0x%08h  FAIL -- window fix missing!", rdata);
      window_fails++;
    end

    // Slot 2026 (bus addr 0x7F50): last P-384 instruction slot
    axi_write32(ADDR_IMEM_BASE + 32'h3F50, 32'hAA55_07EA, 4'd6, 1'b0, ok);
    axi_read32 (ADDR_IMEM_BASE + 32'h3F50, 4'd7, 1'b0, rdata, ok);
    if (rdata === 32'hAA55_07EA)
      $display("  IMEM[2026] (0x7F50): 0x%08h  PASS (P-384 range OK)", rdata);
    else begin
      $display("  IMEM[2026] (0x7F50): 0x%08h  FAIL -- P-384 out of range!", rdata);
      window_fails++;
    end

    if (window_fails == 0)
      $display("  Window test: ALL PASS");
    else
      $display("  Window test: %0d FAILURES", window_fails);

    // Write ECALL to IMEM[0] — debug on
    $display("\n--- Write ECALL to IMEM[0] ---");
    axi_write32(ADDR_IMEM_BASE, 32'h0000_0073, 4'd1, 1'b1, ok);

    if (!ok) begin
      $display("\n--- Read IMEM[0] (debug) ---");
      axi_read32(ADDR_IMEM_BASE, 4'd2, 1'b1, rdata, ok);
      $display("IMEM[0] = 0x%08h ok=%0b", rdata, ok);
      $display("=== TEST ABORTED (IMEM inaccessible) ===");
      $finish;
    end

    // Read back
    axi_read32(ADDR_IMEM_BASE, 4'd2, 1'b1, rdata, ok);
    $display("IMEM[0] = 0x%08h (expect 0x73) ok=%0b", rdata, ok);

    // Execute
    $display("\n--- CMD = Execute ---");
    axi_write32(ADDR_CMD, 32'h0000_00d8, 4'd3, 1'b0, ok);
    repeat(50) tick();

    // Poll STATUS
    poll = 0; status = 32'hFF;
    while (status != 32'd0 && poll < 10000) begin
      axi_read32(ADDR_STATUS, 4'd4, 1'b0, status, ok);
      if (poll % 100 == 0) $display("  STATUS=%0d (poll %0d)", status, poll);
      repeat(10) tick();
      poll++;
    end

    axi_read32(ADDR_ERR_BITS, 4'd5, 1'b0, err_bits, ok);
    $display("ERR_BITS = 0x%08h", err_bits);

    if (err_bits == 0 && ok && window_fails == 0) $display("\n=== TEST PASSED ===");
    else $display("\n=== TEST FAILED (err_bits=0x%08h window_fails=%0d) ===", err_bits, window_fails);

    repeat(20) tick();
    $finish;
  end

  initial begin
    #200_000_000;
    $display("FATAL: Global timeout");
    $finish;
  end

endmodule
