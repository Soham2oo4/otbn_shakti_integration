// P-384 OTBN standalone testbench.
// Loads P-384 IMEM/DMEM from hex files, runs keygen, checks ERR_BITS and ok.

`timescale 1ns / 1ps

module tb_p384
  import tlul_pkg::*;
  import top_pkg::*;
(
  input logic clk_i,
  input logic rst_ni
);

  localparam int unsigned AxiIdWidth = 4;

  // Register offsets
  localparam logic [31:0] ADDR_CMD       = 32'h0000_0010;
  localparam logic [31:0] ADDR_STATUS    = 32'h0000_0018;
  localparam logic [31:0] ADDR_ERR_BITS  = 32'h0000_001C;
  localparam logic [31:0] ADDR_INSN_CNT  = 32'h0000_0024;
  localparam logic [31:0] ADDR_IMEM_BASE = 32'h0000_4000;
  localparam logic [31:0] ADDR_DMEM_BASE = 32'h0000_8000;

  // P-384 DMEM byte offsets
  localparam logic [31:0] DMEM_OFF_MODE  = 32'h0140;
  localparam logic [31:0] DMEM_OFF_OK    = 32'h0144;
  localparam logic [31:0] DMEM_OFF_X     = 32'h0220;
  localparam logic [31:0] DMEM_OFF_Y     = 32'h0260;

  localparam logic [31:0] MODE_KEYGEN        = 32'h0000_03CC;
  localparam logic [31:0] HARDENED_BOOL_TRUE = 32'h0000_0739;
  localparam logic [7:0]  CMD_EXECUTE        = 8'hD8;

  localparam int IMEM_WORDS = 2027;
  localparam int DMEM_WORDS = 80;     // .data constants only

  // AXI signals
  reg                    aw_valid = 0;
  reg [31:0]             aw_addr  = 0;
  reg [7:0]              aw_len   = 0;
  reg [2:0]              aw_size  = 0;
  reg [1:0]              aw_burst = 0;
  reg [AxiIdWidth-1:0]   aw_id    = 0;
  reg                    w_valid  = 0;
  reg [TL_DW-1:0]        w_data   = 0;
  reg [TL_DBW-1:0]       w_strb   = 0;
  reg                    w_last   = 0;
  reg                    b_ready  = 0;
  reg                    ar_valid = 0;
  reg [31:0]             ar_addr  = 0;
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

  task automatic tick();
    @(posedge clk_i);
  endtask

  task automatic axi_cleanup();
    aw_valid = 0; w_valid = 0; b_ready = 0;
    ar_valid = 0; r_ready = 0;
  endtask

  task automatic axi_write64(
    input logic [31:0]            addr,
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
      if (debug && cyc < 20)
        $display("  [wr cyc=%0d] aw_v=%b aw_r=%b w_v=%b w_r=%b b_v=%b",
                 cyc, aw_valid, aw_ready, w_valid, w_ready, b_valid);
      // Do NOT de-assert aw_valid inside the loop.  In Verilator's compiled
      // timing model the de-assertion happens in the same delta-cycle as the
      // always_ff AW-acceptance, which reverts wr_state_d back to W_IDLE
      // before it can be latched — causing the AW to never stick.
      // axi_cleanup() clears aw_valid after the transaction completes.
      if (b_valid && b_ready) begin
        b_done = 1;
        ok = (b_resp == 2'b00);
      end
    end
    if (!b_done) begin
      $display("  WR64 TIMEOUT addr=0x%08h", addr);
      ok = 0;
    end
    axi_cleanup();
    // Two settle cycles: one lets the bridge latch W_IDLE, one lets aw_ready
    // propagate before the next transaction presents aw_valid.
    tick();
    tick();
  endtask

  task automatic axi_write32(
    input logic [31:0]            addr,
    input logic [31:0]            data32,
    input logic [AxiIdWidth-1:0]  id,
    input logic                   debug,
    output logic                  ok
  );
    logic [31:0] aligned;
    aligned = {addr[31:3], 3'b000};
    axi_write64(aligned, {data32, data32}, 8'hFF, id, debug, ok);
  endtask

  task automatic axi_read64(
    input  logic [31:0]            addr,
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
      if (debug && cyc < 20)
        $display("  [rd cyc=%0d] ar_v=%b ar_r=%b r_v=%b",
                 cyc, ar_valid, ar_ready, r_valid);
      // Do not de-assert ar_valid here (same Verilator timing race as AW).
      if (r_valid && r_ready) begin
        r_done = 1;
        data64 = r_data;
        ok = (r_resp == 2'b00);
      end
    end
    if (!r_done) begin
      $display("  RD64 TIMEOUT addr=0x%08h", addr);
      ok = 0;
      data64 = '0;
    end
    axi_cleanup();
    tick();
  endtask

  task automatic axi_read32(
    input  logic [31:0]            addr,
    input  logic [AxiIdWidth-1:0]  id,
    input  logic                   debug,
    output logic [31:0]            data32,
    output logic                   ok
  );
    logic [TL_DW-1:0] data64;
    logic [31:0] aligned;
    aligned = {addr[31:3], 3'b000};
    axi_read64(aligned, id, debug, data64, ok);
    data32 = addr[2] ? data64[63:32] : data64[31:0];
  endtask

  // ---------------------------------------------------------------
  // IMEM and DMEM data loaded from hex files
  // ---------------------------------------------------------------
  logic [31:0] imem_data [0:IMEM_WORDS-1];
  logic [31:0] dmem_data [0:DMEM_WORDS-1];

  initial begin
    $readmemh("/home/soham/shakti/p384/gen/run_p384_imem.hex", imem_data);
    $readmemh("/home/soham/shakti/p384/gen/run_p384_dmem.hex", dmem_data);
    $display("[init] IMEM[0]=0x%08h IMEM[1]=0x%08h DMEM[0]=0x%08h",
             imem_data[0], imem_data[1], dmem_data[0]);
  end

  // ---------------------------------------------------------------
  // Main test
  // ---------------------------------------------------------------
  initial begin
    logic [31:0] status, err_bits, insn_cnt, ok32;
    logic [63:0] data64;
    logic        ok;
    int poll, i;
    int pass;

    pass = 1;

    $display("=== P-384 OTBN standalone test ===");
    wait (rst_ni === 1'b1);
    repeat(10) tick();

    // ------------------------------------------------------------------
    // 1. Wait for OTBN to finish secure wipe (STATUS → IDLE = 0x00)
    // ------------------------------------------------------------------
    $display("[1] Waiting for OTBN idle (post-reset secure wipe)...");
    poll = 0;
    status = 32'hFF;
    while (status !== 32'h00 && poll < 500000) begin
      repeat(500) tick();
      axi_read32(ADDR_STATUS, 4'd0, 1'b0, status, ok);
      if (poll % 1000 == 0)
        $display("  STATUS=0x%02h (poll %0d, time=%0t)", status, poll, $time);
      poll++;
    end
    if (status !== 32'h00) begin
      $display("ERROR: OTBN not idle after reset (STATUS=0x%02h)", status);
      $finish;
    end
    $display("  OTBN idle at poll=%0d", poll);

    // ------------------------------------------------------------------
    // 2. Load IMEM: 2027 instructions at stride-8
    //    Each write: lower 32 bits = instruction, upper 32 bits = 0
    // ------------------------------------------------------------------
    $display("[2] Loading IMEM (%0d instructions)...", IMEM_WORDS);
    for (i = 0; i < IMEM_WORDS; i++) begin
      axi_write64(ADDR_IMEM_BASE + i * 8,
                  {32'h0, imem_data[i]},
                  8'hFF, 4'd0, (i < 6), ok);
      if (!ok) begin
        $display("ERROR: IMEM write failed at i=%0d", i);
        pass = 0;
      end
      if (i % 500 == 0) $display("  IMEM[%0d] written", i);
    end
    $display("  IMEM load done");

    // Verify first word
    axi_read32(ADDR_IMEM_BASE, 4'd0, 1'b0, ok32, ok);
    $display("  IMEM[0] readback = 0x%08h (expect 0x%08h)",
             ok32, imem_data[0]);

    // ------------------------------------------------------------------
    // 3. Load DMEM .data constants: 80 words packed into 40 64-bit writes
    // ------------------------------------------------------------------
    $display("[3] Loading DMEM constants (%0d words)...", DMEM_WORDS);
    for (i = 0; i < DMEM_WORDS / 2; i++) begin
      axi_write64(ADDR_DMEM_BASE + i * 8,
                  {dmem_data[2*i+1], dmem_data[2*i]},
                  8'hFF, 4'd0, 1'b0, ok);
      if (!ok) begin
        $display("ERROR: DMEM write failed at i=%0d", i);
        pass = 0;
      end
    end
    $display("  DMEM constants loaded");

    // ------------------------------------------------------------------
    // 4. Write mode = MODE_KEYGEN at DMEM offset 0x140
    // ------------------------------------------------------------------
    $display("[4] Writing MODE_KEYGEN (0x%08h) to DMEM[0x140]", MODE_KEYGEN);
    axi_write32(ADDR_DMEM_BASE + DMEM_OFF_MODE, MODE_KEYGEN, 4'd0, 1'b0, ok);
    if (!ok) begin
      $display("ERROR: mode write failed");
      pass = 0;
    end

    // ------------------------------------------------------------------
    // 5. Issue CMD = EXECUTE
    // ------------------------------------------------------------------
    $display("[5] Issuing CMD=EXECUTE (0xD8)");
    axi_write32(ADDR_CMD, {24'h0, CMD_EXECUTE}, 4'd0, 1'b0, ok);
    if (!ok) begin
      $display("ERROR: CMD write failed");
      pass = 0;
    end
    repeat(50) tick();

    // ------------------------------------------------------------------
    // 6. Poll STATUS until IDLE (P-384 keygen takes ~2M OTBN cycles)
    // ------------------------------------------------------------------
    $display("[6] Waiting for P-384 keygen completion...");
    poll = 0;
    status = 32'hFF;
    while (status !== 32'h00 && poll < 100000) begin
      repeat(10000) tick();
      axi_read32(ADDR_STATUS, 4'd0, 1'b0, status, ok);
      if (poll % 100 == 0)
        $display("  STATUS=0x%02h (poll %0d, time=%0t)", status, poll, $time);
      poll++;
    end
    $display("  STATUS=0x%02h after %0d polls (time=%0t)", status, poll, $time);

    if (status !== 32'h00) begin
      $display("ERROR: OTBN did not return to idle (STATUS=0x%02h)", status);
      pass = 0;
    end

    // ------------------------------------------------------------------
    // 7. Read ERR_BITS
    // ------------------------------------------------------------------
    axi_read32(ADDR_ERR_BITS, 4'd0, 1'b0, err_bits, ok);
    $display("[7] ERR_BITS = 0x%08h", err_bits);
    if (err_bits !== 32'h0) begin
      $display("ERROR: ERR_BITS non-zero");
      pass = 0;
    end

    // Read INSN_CNT for reference
    axi_read32(ADDR_INSN_CNT, 4'd0, 1'b0, insn_cnt, ok);
    $display("    INSN_CNT = %0d", insn_cnt);

    // ------------------------------------------------------------------
    // 8. Read ok flag at DMEM[0x144]
    // ------------------------------------------------------------------
    axi_read32(ADDR_DMEM_BASE + DMEM_OFF_OK, 4'd0, 1'b0, ok32, ok);
    $display("[8] ok flag = 0x%08h (expect 0x%08h = HARDENED_BOOL_TRUE)",
             ok32, HARDENED_BOOL_TRUE);
    if (ok32 !== HARDENED_BOOL_TRUE) begin
      $display("ERROR: P-384 keygen reported failure");
      pass = 0;
    end

    // ------------------------------------------------------------------
    // 9. Read public key (x, y) — each 48 bytes = 6 x 64-bit reads
    // ------------------------------------------------------------------
    $display("[9] Public key X (48 bytes from DMEM[0x220]):");
    for (i = 0; i < 6; i++) begin
      axi_read64(ADDR_DMEM_BASE + DMEM_OFF_X + i*8, 4'd0, 1'b0, data64, ok);
      $display("  x[%0d..%0d] = 0x%016h", i*8, i*8+7, data64);
    end

    $display("[9] Public key Y (48 bytes from DMEM[0x260]):");
    for (i = 0; i < 6; i++) begin
      axi_read64(ADDR_DMEM_BASE + DMEM_OFF_Y + i*8, 4'd0, 1'b0, data64, ok);
      $display("  y[%0d..%0d] = 0x%016h", i*8, i*8+7, data64);
    end

    // ------------------------------------------------------------------
    // Result
    // ------------------------------------------------------------------
    if (pass)
      $display("\n=== P-384 KEYGEN PASSED ===");
    else
      $display("\n=== P-384 KEYGEN FAILED ===");

    repeat(20) tick();
    $finish;
  end

  // No SV global timeout — the C++ main_p384.cpp controls wall-clock cutoff.

endmodule
