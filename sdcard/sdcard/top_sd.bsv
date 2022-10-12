package top_sd;

import Semi_FIFOF       :: *;
import AXI4_Types       :: *;
import AXI4_Fabric      :: *;
import Connectable      :: *;
import sd_controller    :: *;
import tb_sd_controller :: *;

`define PADDR 32
`define Reg_width 64
`define USERSPACE 0

typedef 2 Num_Masters;
typedef 2 Num_Slaves;

function Tuple2 #(Bool, Bit#(TLog#(Num_Slaves))) fn_addr_to_slave_num  (Bit#(`PADDR) addr);
		if(addr>='hB0000000 && addr<= 'hBFFFFFFF)
			return tuple2(True, 0);
        else if(addr>='h00000000 && addr<= 'hAFFFFFFF)
				return tuple2(True, 1);
        else
		return tuple2(False,?);
endfunction

module mktop_sd(Empty);



   AXI4_Fabric_IFC #(Num_Masters, Num_Slaves, `PADDR, `Reg_width,`USERSPACE)
		 		fabric <- mkAXI4_Fabric(fn_addr_to_slave_num);

  Ifc_test_sdc          tb_sdcard       <- mktb_sd_controller(); 
  Ifc_sd_controller     sd_controller   <- mksd_controller();

   mkConnection (tb_sdcard.master_test, fabric.v_from_masters[0]);
   mkConnection (fabric.v_to_slaves[0], sd_controller.axi4_slave_sdc);

   mkConnection (sd_controller.axi4_master_sdc, fabric.v_from_masters[1]);
   mkConnection (fabric.v_to_slaves[1], tb_sdcard.slave_test);

   let tb   = tb_sdcard.ifc_sdcard_in;
   let sdc  = sd_controller.sd_controller_out;

   rule rl_dumpvars;
       $dumpvars();
   endrule
// all the rule name is respect to the sd_controller point view
   rule rl_sd_cmd_dat_out;
       tb.sd_cmd_dat_i(sdc.sd_cmd_dat_o);
   endrule

   rule rl_sd_cmd_dat_in;
       sdc.sd_cmd_dat_i(tb.sd_cmd_dat_o);
   endrule

   rule rl_sd_cmd_oe_out;
       tb.sd_cmd_oe_i(sdc.sd_cmd_oe_o);
   endrule

   rule rl_sd_dat_out;
       tb.sd_dat_i(sdc.sd_dat_o);
   endrule

   rule rl_sd_dat_i;
       sdc.sd_dat_i(tb.sd_dat_o);
   endrule

   rule rl_sd_dat_oe;
       tb.sd_dat_oe(sdc.sd_dat_oe);
   endrule

   rule rl_sd_clk;
       tb.sd_clk(sdc.sd_clk);
   endrule

endmodule
endpackage
