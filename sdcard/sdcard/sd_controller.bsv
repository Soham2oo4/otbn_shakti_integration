package sd_controller;

import Semi_FIFOF        :: *;
import AXI4_Types   :: *;
import AXI4_Fabric  :: *;
import DReg::*;
import bsvmksdc_controller ::*;


`define PADDR 32
`define Reg_width 64
`define USERSPACE 0

`define BLOCK_SIZE 32'd512
`define SUPPLY_VOLTAGE 8'b0000_111_1

`define     ARGUMENT        8'h00
`define     COMMAND         8'h04
`define     STATUS          8'h08
`define     RESP1           8'h0C
`define     CONTROLLER      8'h1C
`define     BLOCK           8'h20
`define     POWER           8'h24
`define     SOFTWARE        8'h28
`define     TIMEOUT         8'h2C
`define     NORMAL_ISR      8'h30
`define     ERROR_ISR       8'h34
`define     NORMAL_ISER     8'h38
`define     ERROR_ISER      8'h3C
`define     CAPA            8'h48
`define     CLOCK_D         8'h4C
`define     BD_STATUS       8'h50
`define     BD_ISR          8'h54
`define     BD_ISER         8'h58
`define     BD_RX           8'h60
`define     BD_TX           8'h80



interface Ifc_sd_controller_out;
    method bit sd_cmd_dat_o;
    method Action sd_cmd_dat_i(bit cmd_dat_in);
    method Bool sd_cmd_oe_o;
    method Bit#(4) sd_dat_o;
    method Action sd_dat_i(Bit#(4) sd_dat_in);
    method Bool sd_dat_oe;
    method bit sd_clk; //TODO whether it should be type clock or bit
endinterface

interface Ifc_sd_controller;
    interface AXI4_Slave_IFC#(`PADDR, `axi4_id_width, `Reg_width, `USERSPACE) axi4_slave_sdc;
    interface AXI4_Master_IFC#(`PADDR, `axi4_id_width, `Reg_width, `USERSPACE) axi4_master_sdc;
    interface Ifc_sd_controller_out sd_controller_out;
endinterface

module mksd_controller(Ifc_sd_controller);

Wire#(bit) wr_wb_cyc   <- mkDWire(0);
Wire#(bit) wr_wb_stb   <- mkDWire(0);

Reg#(Bit#(4)) rg_axi_id <- mkRegA(0);
Reg#(bit)     rg_we     <- mkRegA(0);

// Configuration register

Reg#(Bit#(32)) rg_argument                     <- mkRegA(0);
Reg#(Bit#(16)) rg_cmd_setting                  <- mkRegA(0);
Reg#(Bit#(16)) rg_status                       <- mkRegA(0);
Reg#(Bit#(32)) rg_cmd_resp_1                   <- mkRegA(0);
Reg#(Bit#(16)) rg_control_setting              <- mkRegA('b0000_0000_0000_0010);
Reg#(Bit#(32)) rg_block_size                   <- mkRegA(`BLOCK_SIZE); //512 bytes
Reg#(Bit#(8))  rg_power_control                <- mkRegA(`SUPPLY_VOLTAGE);
Reg#(Bit#(8))  rg_software_reset               <- mkRegA(0);
Reg#(Bit#(16)) rg_time_out                     <- mkRegA(0);
Reg#(Bit#(16)) rg_normal_int_status            <- mkRegA(0);
Reg#(Bit#(16)) rg_error_int_status             <- mkRegA(0);
Reg#(Bit#(16)) rg_normal_int_signal_enable     <- mkRegA(0);
Reg#(Bit#(16)) rg_error_int_signal_enable      <- mkRegA(0);
Reg#(Bit#(8))  rg_clock_divider                <- mkRegA(0);
Reg#(Bit#(16)) rg_capabilites                  <- mkRegA(0);
Reg#(Bit#(16)) rg_Bd_status                    <- mkRegA(0);
Reg#(Bit#(8))  rg_Bd_isr                       <- mkRegA(0);
Reg#(Bit#(8))  rg_Bd_isr_enable                <- mkRegA(0);

//Register Control
Reg#(bit) rg_Bd_isr_reset                      <- mkRegA(0);
Reg#(bit) rg_normal_isr_reset                  <- mkRegA(0);
Reg#(bit) rg_error_isr_reset                   <- mkRegA(0);
Reg#(Bit#(`Reg_width)) rg_dat_in_m_rx_bd       <- mkRegA(0); //Data in to Rx_bd from Master
Reg#(Bit#(`Reg_width)) rg_dat_in_m_tx_bd       <- mkRegA(0);

Reg#(bit) rg_new_cmd                           <- mkDRegA(0);
Reg#(bit) rg_int_busy                          <- mkRegA(0);
Reg#(bit) rg_cmd_int_busy                      <- mkDRegA(0);
Reg#(bit) rg_we_ack                            <- mkDRegA(0);
Reg#(bit) rg_int_ack                           <- mkRegA(1);
Reg#(bit) rg_ack_o                             <- mkRegA(0);
Reg#(bit) rg_we_m_rx_bd                        <- mkRegA(0);
Reg#(bit) rg_we_m_tx_bd                        <- mkRegA(0);

Reg#(Bit#(2)) rg_we_we                         <- mkRegA(0);
Reg#(bit)     rg_bd_rx                         <- mkRegA(0);
Reg#(bit)     rg_bd_tx                         <- mkRegA(0);

Reg#(Bit#(32))       rg_resp_data              <- mkRegA(0);
Reg#(bit)            rg_m_wb_ack_i             <- mkDRegA(0); 

Reg#(bit)    rg_read_req_en                    <- mkRegA(0);
Reg#(bit)    rg_disable_read_request           <- mkRegA(0);

Reg#(bit)    rg_en_cmd_int_busy                <- mkRegA(0);

Reg#(Bit#(10)) rg_count                        <- mkRegA(0);

Reg#(bit)  wr_config                          <- mkDRegA(0);   

Reg#(Bit#(3)) rg_new_count                    <- mkRegA(0);


AXI4_Slave_Xactor_IFC#(`PADDR, `axi4_id_width, `Reg_width, `USERSPACE)  s_xactor_sdc_slave   <- mkAXI4_Slave_Xactor;
AXI4_Master_Xactor_IFC#(`PADDR, `axi4_id_width, `Reg_width, `USERSPACE) s_xactor_sdc_master <- mkAXI4_Master_Xactor;

Ifc_sdc_controller sdc_controller <- mksdc_controller;

function fn_wr_config_reg(Bit#(8) addr, Bit#(32) data);
action
    case(addr)
        `ARGUMENT: begin
            rg_argument <= truncate(data);
            rg_new_cmd     <= 1; 
        end
        `COMMAND : begin
            rg_cmd_setting <= truncate(data);
            rg_int_busy    <= 1;
        end
        `SOFTWARE: begin
            rg_software_reset <= truncate(data);
        end
        `TIMEOUT : begin
            rg_time_out <= truncate(data);
        end
        `NORMAL_ISER: begin
            rg_normal_int_signal_enable <= truncate(data);
        end
        `ERROR_ISER: begin
            rg_error_int_signal_enable <= truncate(data);
        end
        `NORMAL_ISR: begin
            rg_normal_isr_reset <= 1;
        end
        `ERROR_ISR: begin
            rg_error_isr_reset <= 1;
        end
        `CLOCK_D: begin
            rg_clock_divider <= truncate(data);
        end
        `BD_ISR: begin
            rg_Bd_isr_reset <= 1;
        end
        `BD_ISER: begin
            rg_Bd_isr_enable <= truncate(data);
        end
        `BD_RX: begin
            if(rg_we_we == 0) begin
                rg_we_m_rx_bd       <= 0; 
                rg_int_ack          <= 0; 
                rg_we_we            <= rg_we_we + 1;
                rg_dat_in_m_rx_bd   <= extend(data);
                rg_bd_rx            <= 1;
            end
        end
        `BD_TX: begin
            if(rg_we_we == 0) begin
                rg_we_m_tx_bd        <= 0; 
                rg_int_ack           <= 0;
                rg_we_we             <= rg_we_we + 1;
                rg_bd_tx             <= 1;
                rg_dat_in_m_tx_bd    <= extend(data);
            end
        end
    endcase
endaction
endfunction

function Bit#(32) fn_rd_config_reg(Bit#(8) addr);
    case(addr)
        `ARGUMENT: begin
            return rg_argument;
        end
        `COMMAND : begin
            return extend(rg_cmd_setting);
        end
        `STATUS: begin
            return extend(rg_status);
        end
        `RESP1 : begin
            return rg_cmd_resp_1;
        end
        `CONTROLLER : begin
            return extend(rg_control_setting);
        end
        `BLOCK: begin
            return rg_block_size;
        end
        `POWER: begin
            return extend(rg_power_control);
        end
        `SOFTWARE: begin
            return extend(rg_software_reset);
        end
        `TIMEOUT : begin
            return extend(rg_time_out);
        end
        `NORMAL_ISER: begin
            return extend(rg_normal_int_signal_enable);
        end
        `ERROR_ISER: begin
            return extend(rg_error_int_signal_enable);
        end
        `NORMAL_ISR: begin
            return extend(rg_normal_int_status);
        end
        `ERROR_ISR: begin
            return extend(rg_error_int_status);
        end
        `CLOCK_D: begin
            return extend(rg_clock_divider);
        end
        `BD_STATUS: begin
            return extend(rg_Bd_status);
        end
        `CAPA: begin
            return extend(rg_capabilites);
        end
        `BD_ISR: begin
            return extend(rg_Bd_isr);
        end
        `BD_ISER: begin
            return extend(rg_Bd_isr_enable);
        end
//        `BD_RX:
//        `BD_TX:
    endcase
endfunction

rule rl_assign_ack_o;
	rg_ack_o <= wr_config & ~rg_ack_o & rg_int_ack;
    rg_en_cmd_int_busy <= ( wr_config | rg_ack_o);
endrule

rule rl_to_send_bd_tx(rg_bd_tx == 1);
   if(rg_we_we == 1) begin
       rg_we_m_tx_bd     <= 1;
       rg_int_ack        <= 0;
       rg_we_we          <= rg_we_we + 1;
   end
   else begin
       rg_int_ack           <= 1;
       rg_we_m_tx_bd        <= 0;
       rg_we_we             <= 0;
       rg_bd_tx             <= 0;
   end
endrule

rule rl_to_send_bd_rx(rg_bd_rx == 1);
   if(rg_we_we == 1) begin
       rg_int_ack          <= 0; 
       rg_we_m_rx_bd       <= 1; 
       rg_we_we            <= rg_we_we + 1;
   end
   else begin
       rg_int_ack           <= 1;
       rg_we_we             <= 0;
       rg_we_m_rx_bd        <= 0;
       rg_bd_rx             <= 0;
   end
endrule

rule rl_write_to_command_data_master(sdc_controller.owrite_req_s == True); 
    rg_new_cmd <= 1;
    rg_cmd_setting  <= sdc_controller.ocmd_set_s; 
    rg_argument     <= sdc_controller.ocmd_arg_s; 
    rg_cmd_int_busy    <= 1;
    rg_we_ack          <= 1;
//    rg_new_count    <= 1;
endrule
rule rl_write_to_command_data_master1;
    if(rg_new_count == 1 || rg_new_count == 2)
        rg_new_count <= rg_new_count + 1;
    else if(rg_new_count == 3) begin
        rg_new_cmd <= 1;
        rg_cmd_setting  <= sdc_controller.ocmd_set_s; 
        rg_argument     <= sdc_controller.ocmd_arg_s; 
        rg_cmd_int_busy    <= 1;
        rg_we_ack          <= 1;
        rg_new_count       <= 0;
    end
endrule

rule rl_int_busy(rg_status[0] == 1);
    rg_int_busy <= 0;
endrule

//Slave interface for writing into the control register
// write request from the host is popped in this rule and response is sent write away
rule rl_write_request_from_axi;
    let aw <- pop_o(s_xactor_sdc_slave.o_wr_addr);
    let w  <- pop_o(s_xactor_sdc_slave.o_wr_data);
    rg_we <= 1;
    Bit#(8) awaddr = aw.awaddr[7:0];
    Bit#(32) wdata = truncate(w.wdata);
    Bit#(4) sel = truncate(w.wstrb);
    fn_wr_config_reg(awaddr, wdata);
//    Bit#(addr_width) waddr = truncate(awaddr);
    wr_config <= 1;
//    wr_wb_cyc <= 1;
//    wr_wb_stb <= 1;
    let w_resp = AXI4_Wr_Resp {bresp: AXI4_OKAY, buser: 0, bid: aw.awid};
    s_xactor_sdc_slave.i_wr_resp.enq(w_resp);
    $display($stime(),": sd_controller: Slave Received write request %x",awaddr);
endrule

// read request is forwarded to the sd_controller 
rule rl_read_request_from_axi;
    let ar <- pop_o(s_xactor_sdc_slave.o_rd_addr);
//    rg_axi_id <= ar.arid;
    Bit#(8) araddr = ar.araddr[7:0];
    sdc_controller.iwb_adr_i(araddr);
//    wr_wb_cyc <= 1;
    wr_config <= 1;
    rg_we <= 0;
    sdc_controller.iwb_we_i(0);
//    wr_wb_stb <= 1;
    $display($stime(),": sd_controller: Slave Received read request %x",araddr);
    let resp = AXI4_Rd_Data{rresp: AXI4_OKAY,rdata: extend(fn_rd_config_reg(ar.araddr[7:0])), rlast:True
    , ruser:0, rid: ar.arid};
    s_xactor_sdc_slave.i_rd_data.enq(resp); 
endrule

//Master Interface for I/O operation 

rule rl_m_write_request(sdc_controller.om_wb_we_o == True && sdc_controller.om_wb_stb_o == True &&
                        sdc_controller.om_wb_cyc_o == True);
    let aw = AXI4_Wr_Addr {awaddr: extend(sdc_controller.om_wb_adr_o), awlen: 0,awuser: 0,awsize: 2,
    awburst:'b01};    
    let w = AXI4_Wr_Data {wdata: extend(sdc_controller.om_wb_dat_o), wstrb: extend(sdc_controller.om_wb_sel_o), 
    wlast: True};
    s_xactor_sdc_master.i_wr_addr.enq(aw);
    s_xactor_sdc_master.i_wr_data.enq(w);
    rg_m_wb_ack_i <= 1;
   $display($stime(),": sd_controller : write request from core_controller");
endrule

rule rl_m_write_response;
   let resp <- pop_o(s_xactor_sdc_master.o_wr_resp);
//   rg_m_wb_ack_i <= 1;
//   sdc_controller.im_wb_ack_i(1);
   $display($stime(),": sd_controller : write firing");
endrule

rule rl_enable_read_request(sdc_controller.om_wb_stb_o == True && sdc_controller.om_wb_cyc_o == True && rg_disable_read_request == 0);
    rg_read_req_en <= 1;
    rg_disable_read_request <= 1;
endrule

rule rl_m_read_request(sdc_controller.om_wb_we_o == False && rg_read_req_en == 1);
   let read_request = AXI4_Rd_Addr {araddr: extend(sdc_controller.om_wb_adr_o), aruser: 0, arlen: 0,
   arsize: 2, arburst:'b01}; // arburst: 00-FIXED 01-INCR 10-WRAP
   s_xactor_sdc_master.i_rd_addr.enq(read_request);
   $display($stime(),": sd_controller : read request from core_controller %h", sdc_controller.om_wb_adr_o);
   rg_read_req_en <= 0;
endrule

rule rl_m_read_response;
   let response <- pop_o(s_xactor_sdc_master.o_rd_data);
   rg_resp_data <= truncate(response.rdata);
   rg_count <= 1; 
   rg_m_wb_ack_i <= 1;
   $display($stime(),": sd_controller : read firing");
endrule

rule rl_enable_read_req(rg_count == 1);
    rg_disable_read_request <= 0;
    rg_count <= 0;
endrule

// control signals to sd_controller
rule rl_signal_to_sdc_controller;
    sdc_controller.iwb_cyc_i(?);
    sdc_controller.iwb_stb_i(?);
    sdc_controller.iwb_dat_i(?);
    sdc_controller.iwb_adr_i(?);
    sdc_controller.iwb_sel_i(?);
    sdc_controller.iwb_we_i(?);
    sdc_controller.inew_cmd(rg_new_cmd);
    sdc_controller.iint_busy(rg_int_busy);
    sdc_controller.icmd_int_busy(rg_cmd_int_busy);
    sdc_controller.iwe_ack(rg_we_ack);
    sdc_controller.iint_ack(rg_int_ack);
    sdc_controller.iwe_m_tx_bd(rg_we_m_tx_bd);
    sdc_controller.iwe_m_rx_bd(rg_we_m_rx_bd);
    sdc_controller.iargument_reg(rg_argument);
    sdc_controller.icmd_setting_reg(rg_cmd_setting);
    sdc_controller.isoftware_reset_reg(rg_software_reset);
    sdc_controller.itime_out_reg(rg_time_out);
    sdc_controller.inormal_int_signal_enable_reg(rg_normal_int_signal_enable);
    sdc_controller.ierror_int_signal_enable_reg(rg_error_int_signal_enable);
    sdc_controller.iclock_divider(rg_clock_divider);
    sdc_controller.iBd_isr_enable_reg(rg_Bd_isr_enable);
    sdc_controller.iBd_isr_reset(rg_Bd_isr_reset);
    sdc_controller.inormal_isr_reset(rg_normal_isr_reset);
    sdc_controller.ierror_isr_reset(rg_error_isr_reset);
    sdc_controller.idat_in_m_rx_bd(truncate(rg_dat_in_m_rx_bd));
    sdc_controller.idat_in_m_tx_bd(truncate(rg_dat_in_m_tx_bd));
    sdc_controller.icard_detect(1);
    sdc_controller.isd_clk_i_pad(?);
    sdc_controller.im_wb_dat_i(rg_resp_data);
    sdc_controller.im_wb_ack_i(rg_m_wb_ack_i);
endrule

rule rl_signal_from_sdc_controller;
   rg_status                    <= sdc_controller.ostatus_reg;
   rg_cmd_resp_1                <= sdc_controller.ocmd_resp_1;
   rg_normal_int_status         <= sdc_controller.onormal_int_status_reg;
   rg_error_int_signal_enable   <= sdc_controller.oerror_int_status_reg;
   rg_Bd_status                 <= sdc_controller.oBd_Status_reg;
   rg_Bd_isr                    <= sdc_controller.oBd_isr_reg;
endrule



interface Ifc_sd_controller_out sd_controller_out;
    method bit sd_cmd_dat_o;
        return pack(sdc_controller.osd_cmd_out_o);
    endmethod
    method Action sd_cmd_dat_i(bit cmd_dat_in);
        sdc_controller.isd_cmd_dat_i(cmd_dat_in);
    endmethod
    method Bool sd_cmd_oe_o;
        return sdc_controller.osd_cmd_oe_o;
    endmethod
    method Bit#(4) sd_dat_o;
        return sdc_controller.osd_dat_out_o;
    endmethod
    method Action sd_dat_i(Bit#(4) sd_dat_in);
        sdc_controller.isd_dat_dat_i(sd_dat_in);
    endmethod
    method Bool sd_dat_oe;
        return sdc_controller.osd_dat_oe_o;
    endmethod
    method bit sd_clk; //TODO whether it should be type clock or bit
        return pack(sdc_controller.osd_clk_o_pad);
    endmethod
endinterface

interface axi4_slave_sdc = s_xactor_sdc_slave.axi_side;
interface axi4_master_sdc = s_xactor_sdc_master.axi_side;



endmodule
endpackage
