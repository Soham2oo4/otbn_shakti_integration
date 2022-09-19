package tb_sd_controller;

import AXI4_Types   :: *;
import AXI4_Fabric  :: *;
import Semi_FIFOF   :: *;
import Connectable  :: *;
import bsvmksdModelwrapper :: *;
import TriState     :: *;
import DReg::*;

`define PADDR 32
`define Reg_width 64
`define USERSPACE 0

typedef enum{
    IDLE,
    SET_BD_ISER,
    SET_COMMAND,
    SET_TIMEOUT,
    SET_NORMAL_INT_SIGNAL_ENABLE_REG,
    SET_ERROR_INT_SIGNAL_ENABLE_REG,
    SET_CLKDIV,
    RD_CAPA,
    RD_STATUS,
    RD_RESP,
    RD_CONTROLLER,
    RD_BLOCK,
    RD_POWER,
    RD_SOFTWARE,
    RD_TIMEOUT,
    RD_NORMAL_INT_REG,
    RD_CAPA1,
    RD_BD_STATUS,
    SET_ARGUMENT,
    SET_SOFTWARE,
    SET_TIMEOUT1,
    SET_CLKDIV1,
    SET_SOFTWARE1,
    SET_COMMAND1,
    SET_ARGUMENT1,
    RD_NORMAL_INT_REG1,
    SET_SOFTWARE2,
    SET_TIMEOUT2,
    SET_CLKDIV2,
    SET_SOFTWARE3,
    SET_COMMAND2,
    SET_ARGUMENT2,
    RD_NORMAL_INT_REG2,
    SET_COMMAND3,
    SET_ARGUMENT3,
    RD_NORMAL_INT_REG3,
    SET_COMMAND4,
    SET_ARGUMENT4,
    RD_NORMAL_INT_REG4,
    RD_RESP1,
    SET_COMMAND5,
    SET_ARGUMENT5,
    RD_NORMAL_INT_REG5,
    SET_COMMAND6,
    SET_ARGUMENT6,
    RD_NORMAL_INT_REG6,
    RD_RESP2,
    SET_COMMAND7,
    SET_ARGUMENT7,
    RD_NORMAL_INT_REG7,
    RD_RESP3,
    SET_SOFTWARE4,
    SET_TIMEOUT3,
    SET_CLKDIV3,
    SET_SOFTWARE5,
    SET_COMMAND8,
    SET_ARGUMENT8,
    RD_NORMAL_INT_REG8,
    SET_COMMAND9,
    SET_ARGUMENT9,
    RD_NORMAL_INT_REG9,
    SET_COMMAND10,
    SET_ARGUMENT10,
    RD_NORMAL_INT_REG10,
    SET_COMMAND11,
    SET_ARGUMENT11,
    RD_NORMAL_INT_REG11,
    RD_RESP4,
    SET_COMMAND12,
    SET_ARGUMENT12,
    RD_NORMAL_INT_REG12,
    RD_RESP5,
    SET_COMMAND13,
    SET_ARGUMENT13,
    RD_NORMAL_INT_REG13,
    RD_RESP6,
    SET_COMMAND14,
    SET_ARGUMENT14,
    RD_NORMAL_INT_REG14,
    SET_COMMAND15,
    SET_ARGUMENT15,
    RD_NORMAL_INT_REG15,
    SET_COMMAND16,
    SET_ARGUMENT16,
    RD_NORMAL_INT_REG16,
    SET_TIMEOUT4,
    SET_WRITE,  //86
    RD_BD_ISR,  //87
    WAIT_STATE,  //88 
    SET_BD_ISR, //89
    SET_READ,  //90
    RD_BD_ISR1 //91
} Command_controller_state deriving(Bits, Eq);



interface Ifc_sdcard_in;
    method Action sd_cmd_dat_i(bit cmd_dat);
    method bit sd_cmd_dat_o;
    method Action sd_cmd_oe_i(Bool cmd_oe_i);
    method Action sd_dat_i(Bit#(4) sd_dat);
    method Bit#(4) sd_dat_o;
    method Action sd_dat_oe(Bool dat_oe);
    method Action sd_clk (bit clk); //TODO whether it should be type clock or bit
endinterface


interface Ifc_test_sdc;
    interface AXI4_Master_IFC#(`PADDR, `Reg_width, `USERSPACE) master_test;
    interface AXI4_Slave_IFC#(`PADDR, `Reg_width, `USERSPACE) slave_test;
    interface Ifc_sdcard_in ifc_sdcard_in;
endinterface


module mktb_sd_controller(Ifc_test_sdc);


Reg#(Command_controller_state) rg_command_state    <- mkReg(SET_BD_ISER);

Ifc_sdModelwrapper    sd_model     <- mksdModelwrapper;

AXI4_Master_Xactor_IFC#(`PADDR, `Reg_width, `USERSPACE) tb_master_xactor <- mkAXI4_Master_Xactor;
AXI4_Slave_Xactor_IFC#(`PADDR, `Reg_width, `USERSPACE)  tb_slave_xactor   <- mkAXI4_Slave_Xactor;

Reg#(Bool)     wr_cmd_en            <- mkReg(False);
Reg#(Bool)     wr_dat_en            <- mkReg(False);
Reg#(Bit#(1))  wr_cmd_dat           <- mkReg(0);
Reg#(Bit#(4))  wr_sd_dat_i          <- mkReg(0);
Reg#(Bit#(64)) rg_response_data     <- mkReg(0);
Reg#(bit)      rg_resp              <- mkReg(0);
Reg#(bit)      rg_set_write_second  <- mkReg(0);
Reg#(bit)      rg_sd_clk            <- mkReg(0);

Reg#(Bit#(10)) rg_count             <- mkReg(0);

Reg#(Bit#(10)) rg_data_count        <- mkReg(0);

Reg#(bit)   rg_set_second_write_seq <- mkReg(0);

Reg#(bit)   rg_switch_data          <- mkReg(0);
//TriState#(Bit#(1))   tri_cmd        <- mkTriState(wr_cmd_en, wr_cmd_dat);
//TriState#(Bit#(4))   tri_dat        <- mkTriState(wr_dat_en, wr_sd_dat_i);
//
//
//mkConnection (tri_cmd.io, sd_model.cmd);
//mkConnection (tri_dat.io, sd_model.dat);

// state machine for inititating sdcard controller

rule rl_init_idle_state(rg_command_state == IDLE); // TODO ?
//    $finish();
//    rg_command_state <= SET_TIMEOUT;
endrule

rule rl_set_bd_iser(rg_command_state == SET_BD_ISER && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000058, awlen: 0, awsize:3,awburst:'b01}; //timeout register
    let w = AXI4_Wr_Data {wdata: 'hFF, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_COMMAND;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_BD_ISER");
endrule

rule rl_set_command(rg_command_state == SET_COMMAND && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'hFFFF, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_TIMEOUT;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND");
endrule

rule rl_set_timeout(rg_command_state == SET_TIMEOUT && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB000002C, awlen: 0, awsize:3,awburst:'b01}; // clock_divider
    let w = AXI4_Wr_Data {wdata: 'hFFFF, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_NORMAL_INT_SIGNAL_ENABLE_REG;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_TIMEOUT");
endrule

rule rl_set_normal_int_signal(rg_command_state == SET_NORMAL_INT_SIGNAL_ENABLE_REG && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000038, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'hFFFF, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ERROR_INT_SIGNAL_ENABLE_REG;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_NORMAL_INT_SIGNAL_ENABLE_REG");
endrule

rule rl_set_error_int(rg_command_state == SET_ERROR_INT_SIGNAL_ENABLE_REG && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB000003C, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'hFFFF, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_CLKDIV;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ERROR_INT_SIGNAL_ENABLE_REG");
endrule

rule rl_set_clock_divider(rg_command_state == SET_CLKDIV && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB000004C, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'hFF, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_CAPA;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_CLKDIV");
endrule


// state machine for sending command to the sdcard

rule rl_read_capa(rg_command_state == RD_CAPA && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000048, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
//    if(rg_response_data == 1)
    rg_command_state <= RD_STATUS;    
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_CAPA");
endrule

rule rl_read_status(rg_command_state == RD_STATUS && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000008, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    rg_command_state <= RD_RESP;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_STATUS ");
endrule

rule rl_read_resp(rg_command_state == RD_RESP && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB000000C, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    rg_command_state <= RD_CONTROLLER;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_RESP");
endrule

rule rl_read_controller(rg_command_state == RD_CONTROLLER && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB000001C, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
//    if(rg_response_data == 1)
        rg_command_state <= RD_BLOCK;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_CONTROLLER");
endrule

rule rl_read_block(rg_command_state == RD_BLOCK && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000020, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    rg_command_state <= RD_POWER;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_BLOCK");
endrule

rule rl_read_power(rg_command_state == RD_POWER && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000024, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    rg_command_state <= RD_SOFTWARE;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_POWER");
endrule

rule rl_read_software(rg_command_state == RD_SOFTWARE && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000028, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
//    if(rg_response_data == 1)
    rg_command_state <= RD_TIMEOUT;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_SOFTWARE");
endrule

rule rl_read_timeout(rg_command_state == RD_TIMEOUT && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB000002C, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
//    if(rg_response_data == 1)
    rg_command_state <= RD_NORMAL_INT_REG;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_TIMEOUT");
endrule

rule rl_normal_interrupt_reg(rg_command_state == RD_NORMAL_INT_REG && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
//    if(rg_response_data == 1)
    rg_command_state <= RD_CAPA1;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG");
endrule

rule rl_read_capa1(rg_command_state == RD_CAPA1 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000048, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
//    if(rg_response_data == 1)
    rg_command_state <= RD_BD_STATUS;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_CAPA1");
endrule

rule rl_read_bd_status(rg_command_state == RD_BD_STATUS && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000050, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
//    if(rg_response_data == 1)
    rg_command_state <= SET_ARGUMENT;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_BD_STATUS");
endrule

rule rl_set_argument(rg_command_state == SET_ARGUMENT && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'hFFFFFFFF, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_SOFTWARE;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT");
endrule

rule rl_set_software(rg_command_state == SET_SOFTWARE && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000028, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h01, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_TIMEOUT1;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_SOFTWARE");
endrule

rule rl_set_timeout1(rg_command_state == SET_TIMEOUT1 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB000002c, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'hFF, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_CLKDIV1;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_TIMEOUT1");
endrule

rule rl_set_clockdiv1(rg_command_state == SET_CLKDIV1 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB000004C, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_SOFTWARE1;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_CLKDIV1");
endrule

rule rl_set_software1(rg_command_state == SET_SOFTWARE1 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000028, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_COMMAND1;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_SOFTWARE1");
endrule

rule rl_set_command1(rg_command_state == SET_COMMAND1 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT1;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND1");
endrule

rule rl_set_argument1(rg_command_state == SET_ARGUMENT1 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG1;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT1");
endrule

rule rl_read_normal_int_reg1(rg_command_state == RD_NORMAL_INT_REG1 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5)
    rg_command_state <= SET_SOFTWARE2;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG1");
endrule

rule rl_set_software2(rg_command_state == SET_SOFTWARE2 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000028, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h1, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_TIMEOUT2;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_SOFTWARE2");
endrule

rule rl_set_timeout2(rg_command_state == SET_TIMEOUT2 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB000002C, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h2FF, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_CLKDIV2;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_TIMEOUT2");
endrule

rule rl_set_clkdiv2(rg_command_state == SET_CLKDIV2 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB000004C, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_SOFTWARE3;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_CLKDIV2");
endrule

rule rl_set_software3(rg_command_state == SET_SOFTWARE3 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000028, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_COMMAND2;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_SOFTWARE3");
endrule

rule rl_set_command2(rg_command_state == SET_COMMAND2 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT2;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND2");
endrule

rule rl_set_argument2(rg_command_state == SET_ARGUMENT2 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG2;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT2");
endrule

rule rl_read_normal_int_reg2(rg_command_state == RD_NORMAL_INT_REG2 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5)
    rg_command_state <= SET_COMMAND3;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG2");
endrule

rule rl_set_command3(rg_command_state == SET_COMMAND3 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h802, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT3;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND3");
endrule

rule rl_set_argument3(rg_command_state == SET_ARGUMENT3 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG3;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT3");
endrule

rule rl_read_normal_int_reg3(rg_command_state == RD_NORMAL_INT_REG3 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5 || rg_response_data == 'h8004)
    rg_command_state <= SET_COMMAND4;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG3");
endrule

rule rl_set_command4(rg_command_state == SET_COMMAND4 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h371A, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT4;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND4");
endrule

rule rl_set_argument4(rg_command_state == SET_ARGUMENT4 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG4;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT4");
endrule

rule rl_read_normal_int_reg4(rg_command_state == RD_NORMAL_INT_REG4 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5 || rg_response_data == 'h8004)
    rg_command_state <= SET_COMMAND5;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG4");
endrule

rule rl_read_resp1(rg_command_state == RD_RESP1 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB000000C, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    rg_command_state <= SET_COMMAND6;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_RESP1");
endrule


rule rl_set_command5(rg_command_state == SET_COMMAND5 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h2902, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT5;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND5");
endrule

rule rl_set_argument5(rg_command_state == SET_ARGUMENT5 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG5;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT5");
endrule

rule rl_read_normal_int_reg5(rg_command_state == RD_NORMAL_INT_REG5 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5)
    rg_command_state <= RD_RESP1;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG5");
endrule

rule rl_set_command6(rg_command_state == SET_COMMAND6 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h209, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT6;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND6");
endrule

rule rl_set_argument6(rg_command_state == SET_ARGUMENT6 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG6;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT6");
endrule

rule rl_read_normal_int_reg6(rg_command_state == RD_NORMAL_INT_REG6 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5)
    rg_command_state <= RD_RESP2;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG6");
endrule

rule rl_read_resp2(rg_command_state == RD_RESP2 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB000000C, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    rg_command_state <= SET_COMMAND7;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_RESP2");
endrule

rule rl_set_command7(rg_command_state == SET_COMMAND7 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h30A, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT7;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND7");
endrule

rule rl_set_argument7(rg_command_state == SET_ARGUMENT7 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG7;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT7");
endrule

rule rl_read_normal_int_reg7(rg_command_state == RD_NORMAL_INT_REG7 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5)
    rg_command_state <= RD_RESP3;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG7");
endrule

rule rl_read_resp3(rg_command_state == RD_RESP3 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB000000C, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    rg_command_state <= SET_SOFTWARE4;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_RESP3");
endrule


rule rl_set_software4(rg_command_state == SET_SOFTWARE4 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000028, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h1, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_TIMEOUT3;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_SOFTWARE4");
endrule

rule rl_set_timeout3(rg_command_state == SET_TIMEOUT3 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB000002C, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h2FF, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_CLKDIV3;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_TIMEOUT3");
endrule

rule rl_set_clkdiv3(rg_command_state == SET_CLKDIV3 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB000004C, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_SOFTWARE5;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_CLKDIV3");
endrule

rule rl_set_software5(rg_command_state == SET_SOFTWARE5 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000028, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_COMMAND8;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_SOFTWARE5");
endrule

rule rl_set_command8(rg_command_state == SET_COMMAND8 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT8;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND8");
endrule

rule rl_set_argument8(rg_command_state == SET_ARGUMENT8 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG8;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT8");
endrule

rule rl_read_normal_int_reg8(rg_command_state == RD_NORMAL_INT_REG8 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5)
    rg_command_state <= SET_COMMAND9;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG8");
endrule

rule rl_set_command9(rg_command_state == SET_COMMAND9 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h802, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT9;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND9");
endrule

rule rl_set_argument9(rg_command_state == SET_ARGUMENT9 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG9;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT9");
endrule

rule rl_read_normal_int_reg9(rg_command_state == RD_NORMAL_INT_REG9 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h8004)
    rg_command_state <= SET_COMMAND10;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG9");
endrule

rule rl_set_command10(rg_command_state == SET_COMMAND10 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h371A, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT10;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND10");
endrule

rule rl_set_argument10(rg_command_state == SET_ARGUMENT10 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG10;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT10");
endrule

rule rl_read_normal_int_reg10(rg_command_state == RD_NORMAL_INT_REG10 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5)
    rg_command_state <= RD_RESP4;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG10");
endrule

rule rl_read_resp4(rg_command_state == RD_RESP4 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB000000C, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    rg_command_state <= SET_COMMAND12;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_RESP4");
endrule

//rule rl_set_command11(rg_command_state == SET_COMMAND11 && rg_resp == 0);
//    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
//    let w = AXI4_Wr_Data {wdata: 'h2902, wstrb: 8'b11111111, wlast: True};
//    tb_master_xactor.i_wr_addr.enq(aw);
//    tb_master_xactor.i_wr_data.enq(w);
//    rg_command_state <= SET_ARGUMENT11;
//    rg_resp <= 1;
//    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND11");
//endrule
//
//rule rl_set_argument11(rg_command_state == SET_ARGUMENT11 && rg_resp == 0);
//    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
//    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
//    tb_master_xactor.i_wr_addr.enq(aw);
//    tb_master_xactor.i_wr_data.enq(w);
//    rg_command_state <= RD_NORMAL_INT_REG11;
//    rg_resp <= 1;
//    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT11");
//endrule
//
//rule rl_read_normal_int_reg11(rg_command_state == RD_NORMAL_INT_REG11 && rg_resp == 0);
//    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
//    tb_master_xactor.i_rd_addr.enq(read_request);
//    if(rg_response_data == 'h5)
//    rg_command_state <= SET_COMMAND12;
//    rg_resp <= 1;
//    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG11");
//endrule

rule rl_set_command12(rg_command_state == SET_COMMAND12 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h209, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT12;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND12");
endrule

rule rl_set_argument12(rg_command_state == SET_ARGUMENT12 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG12;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT12");
endrule

rule rl_read_normal_int_reg12(rg_command_state == RD_NORMAL_INT_REG12 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5)
    rg_command_state <= RD_RESP5;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG12");
endrule

rule rl_read_resp5(rg_command_state == RD_RESP5 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB000000C, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    rg_command_state <= SET_COMMAND13;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_RESP5");
endrule


rule rl_set_command13(rg_command_state == SET_COMMAND13 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h30A, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT13;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND13");
endrule

rule rl_set_argument13(rg_command_state == SET_ARGUMENT13 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG13;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT13");
endrule

rule rl_read_normal_int_reg13(rg_command_state == RD_NORMAL_INT_REG13 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5)
    rg_command_state <= RD_RESP6;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG13");
endrule

rule rl_read_resp6(rg_command_state == RD_RESP6 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB000000C, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    rg_command_state <= SET_COMMAND14;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_RESP6");
endrule

rule rl_set_command14(rg_command_state == SET_COMMAND14 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h70A, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT14;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND14");
endrule

rule rl_set_argument14(rg_command_state == SET_ARGUMENT14 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h2000070A, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG14;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT14");
endrule

rule rl_read_normal_int_reg14(rg_command_state == RD_NORMAL_INT_REG14 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5)
    rg_command_state <= SET_COMMAND15;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG14");
endrule

rule rl_set_command15(rg_command_state == SET_COMMAND15 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h371A, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT15;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND15");
endrule

rule rl_set_argument15(rg_command_state == SET_ARGUMENT15 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG15;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT15");
endrule

rule rl_read_normal_int_reg15(rg_command_state == RD_NORMAL_INT_REG15 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5)
    rg_command_state <= SET_COMMAND16;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG15");
endrule

rule rl_set_command16(rg_command_state == SET_COMMAND16 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000004, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h61A, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= SET_ARGUMENT16;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_COMMAND16");
endrule

rule rl_set_argument16(rg_command_state == SET_ARGUMENT16 && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000000, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h2, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_NORMAL_INT_REG16;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_ARGUMENT16");
endrule

rule rl_read_normal_int_reg16(rg_command_state == RD_NORMAL_INT_REG16 && rg_resp == 0);
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000030, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    if(rg_response_data == 'h5 || rg_response_data == 'h8004) // since the data in the reg 30 get updated immediately so need to use interrupt
    rg_command_state <= SET_WRITE;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state RD_NORMAL_INT_REG16");
endrule

//rule rl_set_timeout4(rg_command_state == SET_TIMEOUT4 && rg_resp == 0);
//    let aw = AXI4_Wr_Addr{awaddr: 'hB000002C, awlen: 0, awsize:3,awburst:'b01}; // software reset
//    let w = AXI4_Wr_Data {wdata: 'h3FF, wstrb: 8'b11111111, wlast: True};
//    tb_master_xactor.i_wr_addr.enq(aw);
//    tb_master_xactor.i_wr_data.enq(w);
//    rg_command_state <= SET_WRITE;
//    rg_resp <= 1;
//    $display($stime(),": tb_sd_controller: rg_command_state SET_TIMEOUT4");
//endrule

rule rl_set_write(rg_command_state == SET_WRITE && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000080, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    if(rg_set_write_second == 1) begin
        rg_command_state <= RD_BD_ISR;
        rg_set_write_second <= 0;
    end
    else
        rg_set_write_second <= 1;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_WRITE");
endrule

rule rl_read_bd_isr(rg_command_state == RD_BD_ISR && rg_resp == 0);
    if(rg_count == 57) begin
    if(rg_response_data == 'h1) begin
    rg_command_state <= WAIT_STATE;
    rg_response_data <= 0;
    end
    else begin
    let read_request = AXI4_Rd_Addr{araddr: 'hB0000054, arlen:0, arsize:3, arburst:'b01};
    tb_master_xactor.i_rd_addr.enq(read_request);
    rg_resp <= 1;
    end
    rg_count <= 0;
    $display($stime(),": tb_sd_controller: rg_command_state RD_BD_ISR");
    end
    else 
    rg_count <= rg_count + 1;
endrule

rule rl_wait_after_write(rg_command_state == WAIT_STATE);
    if(rg_count == 100) begin
        rg_count <= 0;
//        if(rg_set_second_write_seq == 0) begin
//            rg_command_state <= SET_SOFTWARE2;
//            rg_set_second_write_seq <= 1;
//        end
//        else
            rg_command_state <= SET_READ;
    end
    else
        rg_count <= rg_count + 1;
endrule

rule rl_set_bd_isr(rg_command_state == SET_BD_ISR && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000054, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    rg_command_state <= RD_BD_ISR1;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_BD_ISR");
endrule

rule rl_set_read(rg_command_state == SET_READ && rg_resp == 0);
    let aw = AXI4_Wr_Addr{awaddr: 'hB0000060, awlen: 0, awsize:3,awburst:'b01}; // software reset
    let w = AXI4_Wr_Data {wdata: 'h0, wstrb: 8'b11111111, wlast: True};
    tb_master_xactor.i_wr_addr.enq(aw);
    tb_master_xactor.i_wr_data.enq(w);
    if(rg_set_write_second == 1) begin
        rg_command_state <= SET_BD_ISR;
        rg_set_write_second <= 0;
    end
    else
        rg_set_write_second <= 1;
    rg_resp <= 1;
    $display($stime(),": tb_sd_controller: rg_command_state SET_READ");
endrule

rule rl_read_bd_isr1(rg_command_state == RD_BD_ISR1 && rg_resp == 0);
    if(rg_count == 57) begin
        if(rg_response_data == 'h1) begin
            rg_command_state <= IDLE;
            rg_response_data <= 0;
        end
        else begin
            let read_request = AXI4_Rd_Addr{araddr: 'hB0000054, arlen:0, arsize:3, arburst:'b01};
            tb_master_xactor.i_rd_addr.enq(read_request);
            rg_resp <= 1;
        end
        rg_count <= 0;
        $display($stime(),": tb_sd_controller: rg_command_state RD_BD_ISR1");
    end
    else 
    rg_count <= rg_count + 1;
endrule


rule rl_write_response_pop;
    let response <- pop_o(tb_master_xactor.o_wr_resp);
    $display($stime(),": tb_sd_controller: Slave write response");
    rg_resp <= 0;
endrule

rule rl_read_response_pop;
    let response <- pop_o(tb_master_xactor.o_rd_data);
    rg_response_data <= response.rdata;
    rg_resp <= 0;
    $display($stime(),": tb_sd_controller: Slave read response %x", response.rdata);
endrule

/* slave interface for memory */

rule rl_slave_mem_write_response;
    let aw <- pop_o(tb_slave_xactor.o_wr_addr);
    let w  <- pop_o(tb_slave_xactor.o_wr_data);
    let w_resp = AXI4_Wr_Resp {bresp: AXI4_OKAY, buser: 0, bid: aw.awid};
    tb_slave_xactor.i_wr_resp.enq(w_resp);
    $display($stime(),": tb_sd_controller: Write request addr: %x data: %x",
    aw.awaddr, w.wdata);
endrule

rule rl_master_mem_read_response;
    let ar <- pop_o(tb_slave_xactor.o_rd_addr);
    Bit#(64) data;
    if(rg_switch_data == 0) begin 
    data = 'hDEADBEEF;
    rg_switch_data <= 1;
    end
    else begin
    data = 'hBABECAFE;
    rg_switch_data <= 0;
    end
    let resp = AXI4_Rd_Data{rresp: AXI4_OKAY,rdata: data, rlast:True
    , ruser:0, rid: ar.arid};
    tb_slave_xactor.i_rd_data.enq(resp);
    rg_data_count <= rg_data_count + 1;
    $display($stime(),": tb_sd_controller: Read request for slave mem");
endrule


interface Ifc_sdcard_in ifc_sdcard_in;
    method Action sd_cmd_dat_i(bit cmd_dat);
        sd_model.isd_cmd_dat_i(cmd_dat);
    endmethod
    method bit sd_cmd_dat_o;
        return sd_model.osd_cmd_dat_o;
    endmethod
    method Action sd_cmd_oe_i(Bool cmd_oe_i);
        sd_model.isd_cmd_oe_i(pack(cmd_oe_i));
    endmethod
    method Action sd_dat_i(Bit#(4) sd_dat);
        sd_model.isd_dat_i(sd_dat);
    endmethod
    method Bit#(4) sd_dat_o;
        return sd_model.osd_dat_o;
    endmethod
    method Action sd_dat_oe(Bool dat_oe);
        sd_model.isd_dat_oe_i(pack(dat_oe));
    endmethod
    method Action sd_clk (bit clk); //TODO whether it should be type clock or bit
        sd_model.isdClk(clk);
    endmethod
endinterface

    interface master_test = tb_master_xactor.axi_side;
    interface slave_test = tb_slave_xactor.axi_side;

endmodule
endpackage















