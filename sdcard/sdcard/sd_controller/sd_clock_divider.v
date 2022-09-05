`include "/scratch/work/securedigital_controller/src/verilog/sd_defines.v"
`define SIM
module sd_clock_divider (
  input wire CLK,
  input  [7:0] DIVIDER,
  input wire RST,
  output  SD_CLK 
  );
  
  reg [7:0] ClockDiv;
  reg SD_CLK_O;
`ifdef SYN
  `ifdef ACTEL
  CLKINT CLKA
  (.A (SD_CLK_O),
   .Y (SD_CLK) 
   );
   `endif
 `endif
 
 `ifdef SIM
   assign SD_CLK = SD_CLK_O;
`endif 
 
always @ (posedge CLK or posedge RST)
begin
 if (RST) begin
    ClockDiv <=8'b0000_0000;
    SD_CLK_O  <= 0;
    $display($stime(),"clock_divider: reset is going");
 end 
 else if (ClockDiv == DIVIDER )begin
    ClockDiv  <= 0;
    SD_CLK_O <=  ~SD_CLK_O;
    $display($stime(),"clock_divider: sd_clk_o toggling");
 end else begin
    ClockDiv  <= ClockDiv + 1;
    SD_CLK_O <=  SD_CLK_O;
end
 
end
 endmodule
 
 
