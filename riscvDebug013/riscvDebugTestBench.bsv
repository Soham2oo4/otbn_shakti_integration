package riscvDebugTestBench;

    import jtagdtm::*;
    import riscvDebug013::*;
    import RBB_Shakti ::*;


    //import Rwire::*;

    import FIFO::*;
	import FIFOF::*;
	import SpecialFIFOs::*;
	import GetPut::*;
    //import Vector::*;
    import Clocks::*;
    
    import AXI4_Types::*;
	import AXI4_Fabric::*;

    interface Ifc_Soc;  //External Signals to dummy SOC
            
            Vector#(HartCount,Hart_Debug_Ifc) hartVec;
            
            (*always_ready,always_enabled*)
			method Action tms_i(Bit#(1) tms);
			(*always_ready,always_enabled*)
			method Action tdi_i(Bit#(1) tdi);
			(*always_ready,always_enabled*)
			method Action bs_chain_i(Bit#(1) bs_chain);
			(*always_ready,always_enabled*)
			method Bit#(1) shiftBscan2Edge;
			(*always_ready,always_enabled*)
			method Bit#(1) selectJtagInput;
			(*always_ready,always_enabled*)
			method Bit#(1) selectJtagOutput;
			(*always_ready,always_enabled*)
			method Bit#(1) updateBscan;
			(*always_ready,always_enabled*)
			method Bit#(1) bscan_in;
			(*always_ready,always_enabled*)
			method Bit#(1) scan_shift_en;
			(*always_ready,always_enabled*)
			method Bit#(1) tdo;
			(*always_ready,always_enabled*)
			method Bit#(1) tdo_oe;
	endinterface


    interface Ifc_DM_DTM;
        interface Get#(Bit#(32)) MessageToDM();
        interface Put#(Bit#(32)) ResponseFrDM();
    endinterface

    interface Hart_Debug_Ifc;
        method ActionValue#(Bit#(2) ) Write (Bit#(12)Address , Bit#('XLEN)Data); // Return ANy Error from the Abstractt comamnd write ;
        method ActionValue#(Bit#( /* Command to add Xlen +2*/)) Read  (Bit#(12)Address); // 2 biit error , Xlen Bit DATA
        method Action Fence();  // Coherence without a program buffer ??
        method Action HaltRequest();
        method Action ResumeRequest();
        method Bit#(40) DebugStatusWord(); // This is a Summary of state from the HART this also a side band to monitor core state
    endinterface

    interface riscvDebugInterface013
        riscvDMI_jtagDTM dtm;
        Vector#(HartCount,Hart_Debug_Ifc) hartVec;
        interface AXI4_Master_IFC#(`PADDR, `Reg_width, `USERSPACE) debug_master;
    endinterface 

    module DebugTb(Empty);
        
		MakeClockIfc#(Bit#(1)) tck_clk <-mkUngatedClock(1);
		MakeResetIfc trst <-mkReset(0,False,tck_clk.new_clk);
        
        Ifc_Soc soc <- mkSoc(reset_vector, clk0,tck_clk.new_clk, trst.new_rst);

        


    // Test Bench Jtag RBB instantiation Copied from C-Class - Slight modifications.

        Reg#(Bit#(2)) rg_init <- mkReg(0);
		Wire#(Maybe#(Bit#(5))) wr_cmd<-mkDWire(tagged Invalid);
		SyncPulseIfc read_tdo <-mkSyncPulseFromCC(tck_clk.new_clk);
		CrossingReg#(Bit#(1)) tdi<-mkNullCrossingReg(tck_clk.new_clk,0);
		CrossingReg#(Bit#(1)) tms<-mkNullCrossingReg(tck_clk.new_clk,0);
        
        CrossingReg#(Bit#(1)) rg_tdo<-mkNullCrossingWire(defaultclk,0,clocked_by tck_clk.new_clk, reset_by trst.new_rst);
    // Edit Reg-> Wire on tdo

        rule initialize(rg_init==0);
	  		let x<- init1;
			`ifdef verbose $display("DTM: Initialize"); `endif
			if(x!=0) begin
			`ifdef verbose 	$display($time,"\tDTM: Initialization failed"); `endif
				$finish(0);
			end
			else begin
	  			rg_init<=1;
			end
	  	endrule

		rule capture_tdo;
			rg_tdo<=soc.tdo;
		endrule

		rule connect_tck(rg_init == 1);
			let lv_cmd<- get_frame();
			wr_cmd<= tagged Valid (truncate(lv_cmd));
			tck_clk.setClockValue(lv_cmd[2]);
			if(lv_cmd[4]==1)
				trst.assertReset();
			tdi<=lv_cmd[0];
			tms<=lv_cmd[1];
		endrule

		rule connect_tap_inputs;
			soc.tdi_i(tdi.crossed);
			soc.tms_i(tms.crossed);
            soc.bs_chain_i(0);  
		endrule
		
		rule handle_tdo(wr_cmd matches tagged Valid .x);
			if(x[3]==1)
				send_tdo(rg_tdo.crossed);
		endrule


    endmodule;



    module dummySoc() #(Bit#(`VADDR) reset_vector,Clock clk0, Clock tck, Reset trst)    (Ifc_Soc);

        Ifc_jtagdtm tap <-mkjtagdtm(clocked_by tck, reset_by trst);

        rule drive_tmp_scan_outs;
            tap.scan_out_1_i(1'b0);
            tap.scan_out_2_i(1'b0);
            tap.scan_out_3_i(1'b0);
            tap.scan_out_4_i(1'b0);
            tap.scan_out_5_i(1'b0);
        endrule

        // Hart Vector <- replicateM(HartVec); // or Concat These together         
    //        Ifc_DebugModule core<-mkDebugModule(reset_vector); 
        //  mkConnection (fabric.v_to_slaves [fromInteger(valueOf(Debug_slave_num))],core.debug_slave); // No Way to test this on a dummy SOC :/

        // riscvDebugInterface013 
        // Populate w/ dummy hart and mkConnection.
        Hart_Debug_Ifc hart0 <- DummyHart();
        Hart_Debug_Ifc hart1 <- DummyHart();

        

        // Wrap with GET PUT - Cleaner ?
        SyncFIFOIfc#(Bit#(40)) sync_request_to_dm <-mkSyncFIFOToCC(1,tck,trst);
        SyncFIFOIfc#(Bit#(34)) sync_response_from_dm <-mkSyncFIFOFromCC(1,tck);


        // Rules to connect JTAG DTM and Debug Module 

        rule connect_tap_request_to_syncfifo;
            let x<-tap.request_to_dm;
            sync_request_to_dm.enq(x);
        endrule

        rule read_synced_request_to_dm;
            sync_request_to_dm.deq;
            core.request_from_dtm(sync_request_to_dm.first);
        endrule
        rule connect_debug_response_to_syncfifo;
            let x<-core.response_to_dtm;
            sync_response_from_dm.enq(x);
        endrule
        rule read_synced_response_from_dm;
            sync_response_from_dm.deq;
            tap.response_from_dm(sync_response_from_dm.first);
        endrule

        // Dummy SOC Debug Interface

        method Action tms_i(Bit#(1) tms);
            tap.tms_i(tms);
        endmethod
        method Action tdi_i(Bit#(1) tdi);
            tap.tdi_i(tdi);
        endmethod
        method Action bs_chain_i(Bit#(1) bs_chain);
            tap.bs_chain_i(bs_chain);
        endmethod
        method Bit#(1) shiftBscan2Edge=tap.shiftBscan2Edge;
        method Bit#(1) selectJtagInput=tap.selectJtagInput;
        method Bit#(1) selectJtagOutput=tap.selectJtagOutput;
        method Bit#(1) updateBscan=tap.updateBscan;
        method Bit#(1) bscan_in=tap.bscan_in;
        method Bit#(1) scan_shift_en=tap.scan_shift_en;
        method Bit#(1) tdo=tap.tdo;
        method Bit#(1) tdo_oe=tap.tdo_oe;

        // End of Dummy Soc Debug Interface

    endmodule

endpackage