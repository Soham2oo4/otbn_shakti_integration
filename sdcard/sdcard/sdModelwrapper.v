module sdModelwrapper(
  sdClk,
  sd_cmd_dat_i,
  sd_cmd_oe_i,
  sd_cmd_dat_o,
  sd_dat_i,
  sd_dat_oe_i,
  sd_dat_o  
);

input       sdClk;
input       sd_cmd_dat_i;
input       sd_cmd_oe_i;
output      sd_cmd_dat_o;
input[3:0]  sd_dat_i;
input       sd_dat_oe_i;
output[3:0] sd_dat_o; 

tri cmd;
tri dat;

assign cmd = sd_cmd_oe_i ? sd_cmd_dat_i : 'hz;
assign dat = sd_dat_oe_i ? sd_dat_i : 'hz;

assign sd_cmd_dat_o = cmd;
assign sd_dat_o = dat;

sdModel sd_model(
    .sdClk(sdClk),
    .cmd(cmd),
    .dat(dat)
)

endmodule

