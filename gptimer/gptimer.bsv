package gptimer;
	
	import Clocks::*;
	import ConcatReg::*;
	import Semi_FIFOF::*;
	import BUtils ::*;
 	import AXI4_Lite_Types::*;
  	import AXI4_Types::*;
	import Vector::*;
	import clock_divider::*;
`ifdef IQC
	import iqc::*;
`endif
	`include "Logger.bsv"
	`include "gptimer.defines"	

	interface Ifc_gptimer_io;
		//(*always_ready,always_enabled*)
		method Action input_signal(Bit#(1) signal_in);
		method Bit#(1) timer_out;
	endinterface

	interface Ifc_gptimer#(numeric type addr_width, numeric type data_width, numeric type gptimer_width);
		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, Bit#(2) size);
		method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width) addr, Bit#(2) size);
		interface Ifc_gptimer_io io;
		method Bit#(1) sb_interrupt;
	endinterface : Ifc_gptimer

	module mkgptimer#(Clock ext_clock, Reset ext_reset)(Ifc_gptimer#(addr_width,data_width,gptimer_width))
					provisos(Add#(16,d__,data_width),
							 Add#(32,e__,data_width),
							 Add#(gptimer_width,f__,data_width),
							 Mul#(16,a__,data_width),
							 Mul#(gptimer_width,b__,data_width),
							 Mul#(32,c__,data_width),
							 Add#(4,g__,data_width),
							 Mul#(4,h__,data_width)
							);
			let bus_clock <- exposeCurrentClock;
		  let bus_reset <- exposeCurrentReset;

			Reg#(Bit#(16)) rg_clk_divider <- mkRegA(0);
			Reg#(bit) rg_clk_src <- mkRegA(0);
      Reg#(Bit#(32)) rg_clock_control = concatReg3(readOnlyReg(15'd0),rg_clk_divider,rg_clk_src);
      
      Reg#(bit) gpt_reset               <- mkRegA(0);				// bit-1

			Reg#(Bit#(gptimer_width)) rg_input_capture <- mkRegA(0);
			Reg#(bit) rg_prev_input <- mkRegA(0);

		`ifdef IQC
			Reg#(Bit#(4)) rg_qual_cycles <- mkRegA(0);
			Ifc_iqc#(1) gptimer_input_qual <- mkiqc(rg_qual_cycles);
		`endif

	    MakeResetIfc control_reset <- mkReset(1,False, bus_clock);
	    rule generate_reset;
	      if(gpt_reset==1) begin
			control_reset.assertReset;
			gpt_reset <= 0;
		  end
	    endrule
	    Reset overall_reset <- mkResetEither(bus_reset,control_reset.new_rst);

	    // Select between bus clock or external clock 
	    MuxClkIfc clock_selection <- mkClockMux(ext_clock,bus_clock);
	    Reset async_reset <- mkAsyncResetFromCR(2,clock_selection.clock_out);
	    rule select_busclk_extclk;
	      clock_selection.select(rg_clk_src==1);
	    endrule

	    // The following register is required to transfer the divisor value from bus_clock to 
	    // external clock domain. This is necessary if the clock divider needs to operate on the
	    // external clock. In this case, the divisor value should also come from the same clock domain.
	    Reg#(Bit#(16)) clock_divisor_sync <- mkSyncRegFromCC(0, clock_selection.clock_out); 
	    rule transfer_data_from_clock_domains;
	      clock_divisor_sync <= rg_clk_divider;
	    endrule
	    
	    // The PWM can operate on a slowed-down clock. The following module generates a slowed-down
	    // clock based on the value given in register divisor. Since the clock_divider works on a muxed
	    // clock domain of the external clock or bus_clock, the divisor (which operates on the bus_clock
	    // will have to be synchronized and sent to the divider
	    Ifc_clock_divider#(16) clk_divider <- mkclock_divider(clocked_by clock_selection.clock_out, 
	                                         reset_by async_reset);
	    let downclock = clk_divider.slowclock; 
	    Reset downreset <- mkAsyncReset(2,overall_reset,downclock);
	    rule generate_slow_clock;
	      clk_divider.divisor(clock_divisor_sync);
	    endrule

	  Reg#(Bit#(gptimer_width)) rg_counter 		    <- mkRegA(0,clocked_by downclock,reset_by downreset);
	  Reg#(Bit#(gptimer_width)) rg_repeated_count <- mkRegA(0,clocked_by downclock,reset_by downreset);
		Reg#(bit) rg_count_mode 			    <- mkRegA(1,clocked_by downclock,reset_by downreset);

		SyncBitIfc#(Bit#(1)) rg_output <- mkSyncBit(downclock,downreset,bus_clock);
		SyncBitIfc#(Bit#(1)) rg_pwm_fall_intr <- mkSyncBit(downclock,downreset,bus_clock);
		SyncBitIfc#(Bit#(1)) rg_pwm_rise_intr <- mkSyncBit(downclock,downreset,bus_clock);
		SyncBitIfc#(Bit#(1)) rg_cntr_overflow_intr <- mkSyncBit(downclock,downreset,bus_clock);
		SyncBitIfc#(Bit#(1)) rg_cntr_underflow_intr <- mkSyncBit(downclock,downreset,bus_clock);
		SyncBitIfc#(Bit#(1)) rg_interrupt <- mkSyncBit(downclock,downreset,bus_clock);

		// =========== Control registers ================== //
		Reg#(bit) gpt_enable              <- mkSyncReg(0,bus_clock,bus_reset,downclock);        // bit-0
		Reg#(Bit#(2)) gpt_mode            <- mkSyncReg(0,bus_clock,bus_reset,downclock);				// bit-2:3
		Reg#(bit) gpt_output_en           <- mkRegA(0);			  // bit-4
		Reg#(bit) count_reset             <- mkSyncReg(0,bus_clock,bus_reset,downclock);				// bit-5
		Reg#(bit) continuous_count        <- mkSyncReg(0,bus_clock,bus_reset,downclock);			  // bit-6
		Reg#(bit) pwm_fall_intr_en        <- mkSyncReg(0,bus_clock,bus_reset,downclock);			  // bit-7
		Reg#(bit) pwm_rise_intr_en        <- mkSyncReg(0,bus_clock,bus_reset,downclock);			  // bit-8
		Reg#(bit) cntr_overflow_intr_en   <- mkSyncReg(0,bus_clock,bus_reset,downclock);	      // bit-9
		Reg#(bit) cntr_underflow_intr_en  <- mkSyncReg(0,bus_clock,bus_reset,downclock);	      // bit-10
		Reg#(bit) pwm_fall_intr           <- mkRegA(0);			  // bit-11
		Reg#(bit) pwm_rise_intr           <- mkRegA(0);			  // bit-12
		Reg#(bit) cntr_overflow_intr      <- mkRegA(0);		    // bit-13
		Reg#(bit) cntr_underflow_intr     <- mkRegA(0);		    // bit-14
		Reg#(bit) capture_input           <- mkRegA(0);			  // bit-15
		Reg#(Bit#(16)) rg_control = concatReg15(capture_input,readOnlyReg(cntr_underflow_intr),readOnlyReg(cntr_overflow_intr),readOnlyReg(pwm_rise_intr),readOnlyReg(pwm_fall_intr),
												                    cntr_underflow_intr_en,cntr_overflow_intr_en,pwm_rise_intr_en,pwm_fall_intr_en,
		                                        continuous_count,count_reset,gpt_output_en,gpt_mode,gpt_reset,gpt_enable);

		// ================================================ //

		Reg#(Bit#(9)) sync_control                        <- mkSyncReg(0,downclock,downreset,bus_clock);

		Reg#(Bit#(gptimer_width)) rg_sync_counter		     <- mkSyncReg(0,downclock,downreset,bus_clock);
		Reg#(Bit#(gptimer_width)) rg_sync_repeated_count <- mkSyncReg(0,downclock,downreset,bus_clock);
		Reg#(Bit#(gptimer_width)) rg_period 			       <- mkSyncReg(0,bus_clock,bus_reset,downclock);
		Reg#(Bit#(gptimer_width)) rg_duty_cycle 		     <- mkSyncReg(0,bus_clock,bus_reset,downclock);

                Reg#(Bit#(gptimer_width))sync_period 		  <- mkSyncReg(0,downclock,downreset,bus_clock); //new 
		Reg#(Bit#(gptimer_width)) sync_duty_cycle 	  <- mkSyncReg(0,downclock,downreset,bus_clock);  //new



		(*conflict_free = "rl_pwm_operation,rl_up_counter"*)
		(*conflict_free = "rl_pwm_operation,rl_down_counter"*)
		(*conflict_free = "rl_pwm_operation,rl_up_down_counter"*)
		(*conflict_free = "rl_up_counter,rl_down_counter"*)
		(*conflict_free = "rl_up_counter,rl_up_down_counter"*)
		(*conflict_free = "rl_down_counter,rl_up_down_counter"*)

    (* descending_urgency = "rl_counter_reset, rl_pwm_operation" *)
    (* descending_urgency = "rl_counter_reset, rl_up_counter" *)
    (* descending_urgency = "rl_counter_reset, rl_down_counter" *)
    (* descending_urgency = "rl_counter_reset, rl_up_down_counter" *)

             rule rl1_update_reg_dclk_to_sclk; // new
                 sync_period <= rg_period; 
              endrule		

	     rule rl2_update_reg_dclk_to_sclk; // new 
                 sync_duty_cycle <= rg_duty_cycle; 
               endrule

	     rule rl3_update_reg_dclk_to_sclk; // new 	 
		  sync_control <= { cntr_underflow_intr_en, cntr_overflow_intr_en, pwm_rise_intr_en , pwm_fall_intr_en, continuous_count, count_reset, gpt_mode, gpt_enable};
              endrule

		rule rl_update_interrupts;
			pwm_rise_intr <= rg_pwm_rise_intr.read;
			pwm_fall_intr <= rg_pwm_fall_intr.read;
			cntr_overflow_intr <= rg_cntr_overflow_intr.read;
			cntr_underflow_intr <= rg_cntr_underflow_intr.read;
		endrule

		rule rl_update_counter;
			rg_sync_counter <= rg_counter;
    endrule

    rule rl_update_repeated_count;
			rg_sync_repeated_count <= rg_repeated_count;
		endrule
	
		rule rl_counter_reset(count_reset == 1);
			rg_counter <= 0;
			rg_repeated_count <= 0;
			rg_count_mode <= 1;
			rg_output.send(0);
			rg_pwm_fall_intr.send(0);
			rg_pwm_rise_intr.send(0);
			rg_cntr_overflow_intr.send(0);
			rg_cntr_underflow_intr.send(0);
			rg_interrupt.send(0);
		endrule
	
    rule rl_reset_counter_reset(sync_control[3] == 1);
      count_reset <= 0;
    endrule
	
		rule rl_pwm_operation(gpt_mode == 0 && gpt_enable == 1);
			Bit#(gptimer_width) temp_cntr;
			if(rg_counter >= rg_period-1 || rg_count_mode == 1) begin
        temp_cntr = 0;
        rg_count_mode <= 0;
      end
			else
				temp_cntr = rg_counter + 1;
			rg_counter <= temp_cntr;
	    	if(temp_cntr < rg_duty_cycle)
				rg_output.send(1);
			else
				rg_output.send(0);
			bit temp_fall_intr = 0;
			bit temp_rise_intr = 0;
			if(temp_cntr == rg_duty_cycle) begin
				rg_pwm_fall_intr.send(1);
				temp_fall_intr = 1;
			end
			else if(temp_cntr == 0) begin
				rg_pwm_rise_intr.send(1);
				temp_rise_intr = 1;
			end
			else if(temp_cntr == rg_period -1) begin
				rg_pwm_fall_intr.send(0);
				rg_pwm_rise_intr.send(0);
			end
			rg_interrupt.send(((pwm_rise_intr_en & temp_rise_intr) | (pwm_fall_intr_en & temp_fall_intr)));
		endrule

		rule rl_up_counter(gpt_mode == 1 && gpt_enable == 1);
			bit temp_overflow_intr = 0;
			if(rg_counter < rg_period - 1) begin
				rg_counter <= rg_counter + 1;
				rg_cntr_overflow_intr.send(0);
			end
			else begin
				temp_overflow_intr = 1;
				rg_cntr_overflow_intr.send(1);
				if(continuous_count == 1) begin
					rg_counter <= 0;
					rg_repeated_count <= rg_repeated_count + 1;
				end
			end

			rg_interrupt.send(cntr_overflow_intr_en & temp_overflow_intr);
		endrule

		rule rl_down_counter(gpt_mode == 2 && gpt_enable == 1);
			bit temp_underflow_intr =0;
			if(rg_counter > 0) begin
				rg_counter <= rg_counter - 1;
				rg_cntr_underflow_intr.send(0);
			end
			else begin
				if(rg_count_mode == 1) begin
					rg_counter <= rg_period - 2;
					rg_count_mode <= 0;
				end
				else begin
					temp_underflow_intr = 1;
					rg_cntr_underflow_intr.send(1);
					if(continuous_count == 1) begin	
						rg_counter <= rg_period - 1;
						rg_repeated_count <= rg_repeated_count + 1;
					end
				end
			end
			rg_interrupt.send(cntr_underflow_intr_en & temp_underflow_intr);
		endrule

		rule rl_up_down_counter(gpt_mode == 3 && gpt_enable == 1);
			bit temp_overflow_intr = 0;
			bit temp_underflow_intr = 0;
			if(rg_count_mode == 1) begin
				if(rg_counter < rg_period - 1) begin
					rg_counter <= rg_counter + 1;
					rg_cntr_underflow_intr.send(0);
				end
				else begin
					rg_count_mode <= 0;
					rg_counter <= rg_counter - 1;
					temp_overflow_intr = 1;
					rg_cntr_overflow_intr.send(1);
				end
			end
			else begin
				if(rg_counter > 0) begin
					rg_counter <= rg_counter - 1;
					rg_cntr_overflow_intr.send(0);
				end
				else begin
					temp_underflow_intr = 1;
					rg_cntr_underflow_intr.send(1);
					if(continuous_count == 1) begin
						rg_count_mode <= 1;
						rg_counter <= rg_counter + 1;
						rg_repeated_count <= rg_repeated_count + 1;
					end
				end
			end
			rg_interrupt.send(((cntr_overflow_intr_en & temp_overflow_intr) | (cntr_underflow_intr_en & temp_underflow_intr)));
		endrule
		
		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, Bit#(2) size);
			Bool success = True;
			if(addr[7:0] == `GPTimer_ctrl && size == 1)
				rg_control <= truncate(data);
			else if(addr[7:0] == `GPTimer_clk_ctrl && size ==2)
				rg_clock_control <= truncate(data);
			else if(addr[7:0] == `GPTimer_compare && size == 2)
				rg_duty_cycle <= truncate(data);
			else if(addr[7:0] == `GPTimer_countref && size ==2)
				rg_period <= truncate(data);
		`ifdef IQC
			else if(addr[7:0] == `GPTimer_input_qual && size ==0)
				rg_qual_cycles <= truncate(data);
		`endif
			else
				success = False;
			return success;
		endmethod
		method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width) addr, Bit#(2) size);
			Bool success = True;
			Bit#(data_width) data = 0;
      if(addr[7:0] == `GPTimer_ctrl && size == 1) begin
        Bit#(16) lv_control = {capture_input,cntr_underflow_intr,cntr_overflow_intr,pwm_rise_intr,pwm_fall_intr,sync_control[8],sync_control[7],
                              sync_control[6],sync_control[5],sync_control[4],sync_control[3],gpt_output_en,sync_control[2:1],gpt_reset,sync_control[0] };
        data = duplicate(lv_control);
      end
			else if(addr[7:0] == `GPTimer_clk_ctrl && size ==2)
				data = duplicate(rg_clock_control);
			else if(addr[7:0] == `GPTimer_counter && size ==2)
				data = duplicate(rg_sync_counter);
			else if(addr[7:0] == `GPTimer_repeat_count && size ==2)
				data = duplicate(rg_sync_repeated_count);
			else if(addr[7:0] == `GPTimer_compare && size == 2)
				data = duplicate(sync_duty_cycle);
			else if(addr[7:0] == `GPTimer_countref && size ==2)
				data = duplicate(sync_period);
			else if(addr[7:0] == `GPTimer_capture && size ==2)
				data = duplicate(rg_input_capture);
		`ifdef IQC
			else if(addr[7:0] == `GPTimer_input_qual && size ==0)
				data = zeroExtend(rg_qual_cycles);
		`endif
			else
				success = False;
			return tuple2(success,data);
		endmethod
		interface io = interface Ifc_gptimer_io;
			method Action input_signal(Bit#(1) signal_in);
			`ifdef IQC
				let temp <- gptimer_input_qual.qualify(signal_in);
			`else
				let temp = signal_in;
			`endif
				if(temp == capture_input && rg_prev_input != temp && sync_control[0] == 1)
					rg_input_capture <= rg_sync_counter;
				rg_prev_input <= temp;
			endmethod
			method timer_out = gpt_output_en == 1 ? rg_output.read : 0;
		endinterface;
		method sb_interrupt = rg_interrupt.read;
	endmodule
	
	//axi4lite
	interface Ifc_gptimer_axi4lite#(numeric type addr_width, numeric type data_width, numeric type user_width, numeric type gptimer_width);
		interface AXI4_Lite_Slave_IFC#(addr_width, data_width, user_width) slave;
		interface Ifc_gptimer_io io;
		(*always_ready,always_enabled*)
    	method Bit#(1) sb_interrupt;
	endinterface

	module mkgptimer_axi4lite#(Clock ext_clock, Reset ext_reset `ifdef testmode , Bool test_mode, Clock test_clk `endif)(Ifc_gptimer_axi4lite#(addr_width,data_width,user_width,gptimer_width))
					provisos(Add#(a__,16,data_width),
							 Add#(b__,32,data_width),
							 Add#(c__,gptimer_width,data_width),
							 Mul#(d__,16,data_width),
							 Mul#(e__,32,data_width),
							 Mul#(f__,gptimer_width,data_width),
							 Add#(g__,4,data_width),
							 Mul#(4,h__,data_width),
							 Add#(i__, 1, data_width),
							  Mul#(8, j__, data_width)
		 );
		 GatedClockIfc gpt_clk_gated <- mkGatedClockFromCC(False); 
		GatedClockIfc gpt_ext_clk_gated <- mkGatedClock(False,ext_clock);					
		Ifc_gptimer#(addr_width,data_width,gptimer_width) gptimer <-mkgptimer(clocked_by gpt_clk_gated.new_clk,gpt_ext_clk_gated.new_clk, ext_reset);
		AXI4_Lite_Slave_Xactor_IFC#(addr_width,data_width,user_width)  s_xactor <- mkAXI4_Lite_Slave_Xactor();
		Reg#(bit) rg_clk_en <- mkRegA(0);
		Wire#(AXI4_Lite_Wr_Addr #(addr_width, user_width)) addreq <- mkWire;
		Wire#(AXI4_Lite_Wr_Data #(data_width)) datareq <- mkWire;
		
		rule ext_clock_en;    
	          gpt_ext_clk_gated.setGateCond(unpack(rg_clk_en));	         
	    endrule
	        
		rule clock_en;    
	          gpt_clk_gated.setGateCond(unpack(rg_clk_en));	         
	    endrule

		rule read_request;
	  		let req <- pop_o (s_xactor.o_rd_addr);
	  		Bool succ = False;
		        Bit#(data_width) data = 0 ; 
		   if (req.araddr[6:0] == `GPT_Ext_Clk_en && req.arsize == 0) begin 
		           succ = True; 
		           data = duplicate({7'b0,rg_clk_en});  	         
	         end 
	         else begin
			{succ,data} <- gptimer.read_req(req.araddr,unpack(truncate(req.arsize)));
		end    
	  		let resp= AXI4_Lite_Rd_Data {rresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, 
                                    rdata:data, ruser: ?};
	  		s_xactor.i_rd_data.enq(resp);
     	endrule

     	rule write_request_start;
       		let addreq_temp <- pop_o(s_xactor.o_wr_addr);
       		let datareq_temp <- pop_o(s_xactor.o_wr_data);
			addreq <= addreq_temp;
			datareq <= datareq_temp;
     	endrule


		rule write_clk_en(addreq.awaddr[6:0] == `GPT_Ext_Clk_en && addreq.awsize == 0);
			rg_clk_en <= truncate(datareq.wdata);
			let resp = AXI4_Lite_Wr_Resp {bresp: AXI4_LITE_OKAY, buser: ?};
       		s_xactor.i_wr_resp.enq(resp);
		endrule

		rule write_gpt(addreq.awaddr[6:0] != `GPT_Ext_Clk_en);
			let succ <- gptimer.write_req(addreq.awaddr, datareq.wdata,unpack(truncate(addreq.awsize)));
			let resp = AXI4_Lite_Wr_Resp {bresp: succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: ?};
       		s_xactor.i_wr_resp.enq(resp);
		endrule

     	interface io = gptimer.io;
     	interface slave = s_xactor.axi_side;
     	method sb_interrupt=gptimer.sb_interrupt;
	endmodule

	//axi4
	interface Ifc_gptimer_axi4#(numeric type addr_width, numeric type data_width, numeric type user_width,numeric type gptimer_width);
		interface AXI4_Slave_IFC#(addr_width,data_width,user_width)	slave;
		interface Ifc_gptimer_io io;
    	method Bit#(1) sb_interrupt;
	endinterface
	module mkgptimer_axi4#(Clock ext_clock, Reset ext_reset)(Ifc_gptimer_axi4#(addr_width,data_width,user_width,gptimer_width))
					provisos(Add#(a__,16,data_width),
							 Add#(b__,32,data_width),
							 Add#(c__,gptimer_width,data_width),
							 Mul#(d__,16,data_width),
							 Mul#(e__,32,data_width),
							 Mul#(f__,gptimer_width,data_width),
							 Add#(g__,4,data_width),
							 Mul#(4,h__,data_width)
							);
		Ifc_gptimer#(addr_width,data_width,gptimer_width) gptimer <-mkgptimer(ext_clock, ext_reset);
		AXI4_Slave_Xactor_IFC#(addr_width,data_width,user_width) s_xactor<-mkAXI4_Slave_Xactor();
		Reg#(Bit#(8)) rg_rdburst_count <- mkRegA(0);
		Reg#(Bit#(8)) rg_wrburst_count <- mkRegA(0);

		Reg#(AXI4_Rd_Addr#(addr_width,user_width)) rg_rdpacket <- mkRegA(?);
 		Reg#(AXI4_Wr_Addr#(addr_width,user_width)) rg_wrpacket <- mkRegA(?);

		rule read_request(rg_rdburst_count==0);
			let req<-pop_o(s_xactor.o_rd_addr);
			let {succ,data}<-gptimer.read_req(req.araddr,unpack(truncate(req.arsize)));
			rg_rdpacket<=req;	

			if(req.arlen!=0)
				rg_rdburst_count<=1;
			let resp= AXI4_Rd_Data{rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:req.arid,rlast:(req.arlen==0),rdata:data, ruser: ?};
			s_xactor.i_rd_data.enq(resp);
		endrule
		rule read_burst(rg_rdburst_count!=0);
			let rd_req=rg_rdpacket;
			let {succ,data}<-gptimer.read_req(rd_req.araddr,unpack(truncate(rd_req.arsize)));
			succ=False;
			if(rg_rdburst_count==rd_req.arlen)
				rg_rdburst_count<=0;
			else
				rg_rdburst_count<=rg_rdburst_count+1;
			let resp= AXI4_Rd_Data{rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:rd_req.arid,rlast:(rd_req.arlen==0),rdata:data, ruser: ?};
			s_xactor.i_rd_data.enq(resp);
		endrule
		rule write_request(rg_wrburst_count==0);
			let addreq <- pop_o(s_xactor.o_wr_addr);
	        let datareq <- pop_o(s_xactor.o_wr_data);
	        rg_wrpacket<=addreq;
	        let succ <- gptimer.write_req(addreq.awaddr, datareq.wdata,unpack(truncate(addreq.awsize)));
	        if(addreq.awlen!=0)
	        	rg_wrburst_count<=1;
	        
	        let resp = AXI4_Wr_Resp {bresp: succ?AXI4_SLVERR:AXI4_OKAY, buser: ?, bid:addreq.awid};
	        if(datareq.wlast)
	        	s_xactor.i_wr_resp.enq(resp);
		endrule
		rule write_burst(rg_wrburst_count!=0);
			let addreq=rg_wrpacket;
	        let datareq <- pop_o(s_xactor.o_wr_data);
	 		Bool succ=False;
			let resp = AXI4_Wr_Resp {bresp: succ?AXI4_SLVERR:AXI4_OKAY, buser: ?, bid:addreq.awid};
			if(datareq.wlast)begin
	      		s_xactor.i_wr_resp.enq(resp);//enqueuing the write response
	      		rg_wrburst_count<=0;
	      	end
		endrule

    	method sb_interrupt=gptimer.sb_interrupt;
		interface io=gptimer.io;
		interface slave = s_xactor.axi_side;
	endmodule
endpackage
