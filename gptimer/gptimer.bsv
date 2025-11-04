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
		`ifndef gpt_clk_gate_en
		  (*always_enabled, always_ready*)
		`endif
		method Action input_signal(Bit#(1) signal_in);
		method Bit#(1) timer_out;
	endinterface

	interface Ifc_gptimer#(numeric type addr_width, numeric type data_width, numeric type gptimer_width);
		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, Bit#(2) size);
		method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width) addr, Bit#(2) size);
		interface Ifc_gptimer_io io;
		method Bit#(1) sb_interrupt;
	endinterface : Ifc_gptimer

	module mkgptimer(Ifc_gptimer#(addr_width,data_width,gptimer_width))
					provisos(Add#(16,d__,data_width),
							 Add#(32,e__,data_width),
							 Add#(gptimer_width,f__,data_width),
							 Mul#(16,a__,data_width),
							 Mul#(gptimer_width,b__,data_width),
							 Mul#(32,c__,data_width),
							 Add#(4,g__,data_width),
							 Mul#(4,h__,data_width)
							);

`ifndef gpt_clk_gate_loc_rst_en
			Reg#(Bit#(16)) rg_clk_divider <- mkRegA(0);
			Reg#(bit) rg_clk_src <- mkRegA(0);
      Reg#(Bit#(32)) rg_clock_control = concatReg3(readOnlyReg(15'd0),rg_clk_divider,rg_clk_src);
      
`endif

			Reg#(Bit#(gptimer_width)) rg_input_capture <- mkRegA(0);
			Reg#(bit) rg_prev_input <- mkRegA(0);

		`ifdef IQC
			Reg#(Bit#(4)) rg_qual_cycles <- mkRegA(0);
			Ifc_iqc#(1) gptimer_input_qual <- mkiqc(rg_qual_cycles);
		`endif


                // original
	        Reg#(Bit#(gptimer_width)) rg_counter 		    <- mkRegA(0);   //og
	        Reg#(Bit#(gptimer_width)) rg_repeated_count <- mkRegA(0);  //og
		Reg#(bit) rg_count_mode 			    <- mkRegA(1);  //og

		//Reg#(Bit#(16))             rg_clk_divider          <- mkRegA(0);
	    
		Wire#(bit) wr_output               <- mkDWire(0);       
		Wire#(bit) wr_pwm_fall_intr        <- mkDWire(0); 
		Wire#(bit) wr_pwm_rise_intr        <- mkDWire(0); 
		Wire#(bit) wr_cntr_overflow_intr   <- mkDWire(0); 
		Wire#(bit) wr_cntr_underflow_intr  <- mkDWire(0);
		//Wire#(bit) wr_interrupt            <- mkDWire(0);

		// =========== Control registers ================== //

		Reg#(bit) gpt_enable              <- mkRegA(0);        // bit-0
		Reg#(bit) gpt_reset               <- mkRegA(0);        // bit-1
		Reg#(Bit#(2)) gpt_mode            <- mkRegA(0);				// bit-2:3
		Reg#(bit) gpt_output_en           <- mkRegA(0);			  // bit-4
		Reg#(bit) count_reset             <- mkRegA(0);				// bit-5
		Reg#(bit) continuous_count        <- mkRegA(0);			  // bit-6
		Reg#(bit) pwm_fall_intr_en        <- mkRegA(0);			  // bit-7
		Reg#(bit) pwm_rise_intr_en        <- mkRegA(0);			  // bit-8
		Reg#(bit) cntr_overflow_intr_en   <- mkRegA(0);	      // bit-9
		Reg#(bit) cntr_underflow_intr_en  <- mkRegA(0);	      // bit-10
		Reg#(bit) pwm_fall_intr           <- mkRegA(0);			  // bit-11
		Reg#(bit) pwm_rise_intr           <- mkRegA(0);			  // bit-12
		Reg#(bit) cntr_overflow_intr      <- mkRegA(0);		    // bit-13
		Reg#(bit) cntr_underflow_intr     <- mkRegA(0);		    // bit-14
		Reg#(bit) capture_input           <- mkRegA(0);			  // bit-15
		Reg#(Bit#(16)) rg_control = concatReg15(capture_input,readOnlyReg(cntr_underflow_intr),readOnlyReg(cntr_overflow_intr),readOnlyReg(pwm_rise_intr),readOnlyReg(pwm_fall_intr),
												                    cntr_underflow_intr_en,cntr_overflow_intr_en,pwm_rise_intr_en,pwm_fall_intr_en,
		                                        continuous_count,count_reset,gpt_output_en,gpt_mode,gpt_reset,gpt_enable);

		// ================================================ //

		Reg#(Bit#(gptimer_width)) rg_period 			       <- mkRegA(0);  //og
		Reg#(Bit#(gptimer_width)) rg_duty_cycle 		     <- mkRegA(0);    //og



		(*conflict_free = "rl_pwm_operation,rl_up_counter"*)
		(*conflict_free = "rl_pwm_operation,rl_down_counter"*)
		(*conflict_free = "rl_pwm_operation,rl_up_down_counter"*)
		(*conflict_free = "rl_up_counter,rl_down_counter"*)
		(*conflict_free = "rl_up_counter,rl_up_down_counter"*)
		(*conflict_free = "rl_down_counter,rl_up_down_counter"*)

	    (* descending_urgency = "rl_gpt_reset,rl_pwm_operation" *)
	    (* descending_urgency = "rl_gpt_reset,rl_up_counter" *)
	    (* descending_urgency = "rl_gpt_reset,rl_down_counter" *)
	    (* descending_urgency = "rl_gpt_reset,rl_up_down_counter" *)


		rule rl_gpt_reset(count_reset == 1 || gpt_reset == 1);                   
                   if(gpt_reset == 1)begin 
                   rg_control<= 0; 
                   rg_period <= 0; 
                   rg_duty_cycle <= 0;
                   rg_input_capture <= 0;
                   rg_prev_input <= 0; end  
                   else begin    
                    count_reset <= 0; end 
			rg_counter <= 0;
			rg_repeated_count <= 0;
			rg_count_mode <= 1;

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
				wr_output <= 1;
			else
				wr_output <= 0;
				
			if(temp_cntr == rg_duty_cycle) begin
				  pwm_fall_intr <= 1;
				wr_pwm_fall_intr <= 1;
			end
			else if(temp_cntr == 0) begin
				  pwm_rise_intr <= 1;
				wr_pwm_rise_intr <= 1;
			end
//			else if(temp_cntr == rg_period -1) begin
//				pwm_fall_intr <= 0;
//				pwm_rise_intr <= 0;
//			end
		endrule
		
		

		rule rl_up_counter(gpt_mode == 1 && gpt_enable == 1);
			if(rg_counter < rg_period - 1) begin
				rg_counter <= rg_counter + 1;
//				   cntr_overflow_intr <= 0; 
			end
			else begin
				   cntr_overflow_intr <= 1; 
				   wr_cntr_overflow_intr <= 1; 
				  
				if(continuous_count == 1) begin
					rg_counter <= 0;
					rg_repeated_count <= rg_repeated_count + 1;
				end
			end
		endrule




		rule rl_down_counter(gpt_mode == 2 && gpt_enable == 1);
			if(rg_counter > 0) begin
				rg_counter <= rg_counter - 1;
//				cntr_underflow_intr <= 0;
				
			end
			else begin
				if(rg_count_mode == 1) begin
					rg_counter <= rg_period - 2;
					rg_count_mode <= 0;
				end
				else begin
					wr_cntr_underflow_intr <= 1;
					cntr_underflow_intr <= 1;  
					if(continuous_count == 1) begin	
						rg_counter <= rg_period - 1;
						rg_repeated_count <= rg_repeated_count + 1;
					end
				end
			end
		endrule



		rule rl_up_down_counter(gpt_mode == 3 && gpt_enable == 1);
			if(rg_count_mode == 1) begin
				if(rg_counter < rg_period - 1) begin
					rg_counter <= rg_counter + 1;
//					 cntr_underflow_intr <= 0;
				end
				else begin
					rg_count_mode <= 0;
					rg_counter <= rg_counter - 1;
					  cntr_overflow_intr <= 1;
					  wr_cntr_overflow_intr <= 1;
				end
			end
			else begin
				if(rg_counter > 0) begin
					rg_counter <= rg_counter - 1;
//				            cntr_overflow_intr <= 0;
				end
				else begin
                                          wr_cntr_underflow_intr <= 1; 
					  cntr_underflow_intr <= 1;
					if(continuous_count == 1) begin
						rg_count_mode <= 1;
						rg_counter <= rg_counter + 1;
						rg_repeated_count <= rg_repeated_count + 1;
					end
				end
			end
		endrule
		
		
		
		
		
		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, Bit#(2) size);
			Bool success = True;
			if(addr[7:0] == `GPTimer_ctrl && size == 1) begin
				rg_control <= truncate(data);
				if (data[14]==1'b1)
					cntr_underflow_intr <= 0;
				if (data[13]==1'b1)
					cntr_overflow_intr <= 0;
				if (data[12]==1'b1)
					pwm_rise_intr <= 0;
				if (data[11]==1'b1)
					pwm_fall_intr <= 0;
			end
`ifndef gpt_clk_gate_loc_rst_en
			else if(addr[7:0] == `GPTimer_clk_ctrl && size ==2)
				rg_clock_control <= truncate(data);
`endif
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
			    data = duplicate(rg_control);
      end
`ifndef gpt_clk_gate_loc_rst_en
			else if(addr[7:0] == `GPTimer_clk_ctrl && size ==2)
				data = duplicate(rg_clock_control);
`endif
			else if(addr[7:0] == `GPTimer_counter && size ==2)
				data = duplicate(rg_counter);
			else if(addr[7:0] == `GPTimer_repeat_count && size ==2)
				data = duplicate(rg_repeated_count);
			else if(addr[7:0] == `GPTimer_compare && size == 2)
				data = duplicate(rg_duty_cycle);
			else if(addr[7:0] == `GPTimer_countref && size ==2)
				data = duplicate(rg_period);
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
				if(temp == capture_input && rg_prev_input != temp && gpt_enable == 1)
					rg_input_capture <= rg_counter;
				rg_prev_input <= temp;
			endmethod
			method timer_out = gpt_output_en == 1 ? wr_output: 0;
		endinterface;
		
		method sb_interrupt =  ((pwm_rise_intr_en & wr_pwm_rise_intr) | (pwm_fall_intr_en & wr_pwm_fall_intr) | (cntr_overflow_intr_en & wr_cntr_overflow_intr) | (cntr_underflow_intr_en & wr_cntr_underflow_intr)); 
		
		
	endmodule
	
	//axi4lite
	interface Ifc_gptimer_axi4lite#(numeric type addr_width, numeric type data_width, numeric type user_width, numeric type gptimer_width);
		interface AXI4_Lite_Slave_IFC#(addr_width, data_width, user_width) slave;
		`ifndef gpt_clk_gate_en
		  (*always_enabled, always_ready*)
		`endif		
		interface Ifc_gptimer_io io;
		(*always_ready,always_enabled*)
    	method Bit#(1) sb_interrupt;
	endinterface

	module mkgptimer_axi4lite#(Clock ext_clock `ifdef testmode , Bool test_mode `endif )(Ifc_gptimer_axi4lite#(addr_width,data_width,user_width,gptimer_width))
					provisos(Add#(a__,16,data_width),
							 Add#(b__,32,data_width),
							 Add#(c__,gptimer_width,data_width),
							 Mul#(d__,16,data_width),
							 Mul#(e__,32,data_width),
							 Mul#(f__,gptimer_width,data_width),
							 Add#(g__,4,data_width),
							 Mul#(4,h__,data_width),
							 Add#(i__, 1, data_width),
							  Mul#(8, j__, data_width),
							   Add#(k__, 2, data_width)
							);
		 
		 let bus_clock <- exposeCurrentClock;
		 let bus_reset <- exposeCurrentReset;
		 `ifdef gpt_clk_gate_en
		Reg#(bit)                rg_clk_en               <- mkRegA(0);
		`endif		 
		Reg#(Bit#(1)) rg_rst <- mkRegA(0);
	        Reg#(bit)                rg_clk_src              <- mkRegA(0);
	        Reg#(Bit#(16))           rg_clk_divider          <- mkRegA(0);
                Reg#(Bit#(32))           rg_clock_control = concatReg5(readOnlyReg(13'd0),`ifdef gpt_loc_rst_en rg_rst  `else readOnlyReg(1'b0) `endif , `ifdef gpt_clk_gate_en rg_clk_en `else readOnlyReg(1'b0) `endif ,rg_clk_divider,rg_clk_src);
                 
                
			`ifdef gpt_clk_gate_en    
                MuxClkIfc      clock_selection     <- mkClockMux(ext_clock,bus_clock);   // first mux external and internal sel  clk                 
			`else  
				MuxClkIfc      clock_selection     <- mkUngatedClockMux(ext_clock,bus_clock);   // first mux external and internal sel  clk 
			`endif            
                Reset async_reset <- mkAsyncResetFromCR(2,clock_selection.clock_out);    // first rst
                 
                Ifc_clock_divider#(16) clk_divider <- mkclock_divider(clocked_by clock_selection.clock_out,reset_by async_reset);      
                
                let downclock           = clk_divider.slowclock;   // div clk                           
                Reset downreset                   <- mkAsyncReset(2,bus_reset,downclock);    // div rst 
		 `ifdef gpt_loc_rst_en
				MakeResetIfc reg_reset <-mkReset(0,False,bus_clock);            // create a new reset for curr_clk
                Reset gpt_curr_reset <- mkResetEither(reg_reset.new_rst,bus_reset);     // OR default and new_rst 
				Reset async_rg_reset <- mkAsyncReset(2,gpt_curr_reset,downclock);
		`endif                
`ifdef gpt_clk_gate_en								                   
		GatedClockIfc  gpt_clk_gated       <- mkGatedClock(False,downclock,clocked_by downclock,reset_by downreset);
`endif                
`ifdef gpt_clk_gate_en								
		 `ifdef gpt_loc_rst_en							
		Ifc_gptimer#(addr_width,data_width,gptimer_width) gptimer <-mkgptimer(clocked_by gpt_clk_gated.new_clk , reset_by async_rg_reset);		
		`else
		Ifc_gptimer#(addr_width,data_width,gptimer_width) gptimer <-mkgptimer(clocked_by gpt_clk_gated.new_clk , reset_by downreset);		
		`endif
`else
		 `ifdef gpt_loc_rst_en							
		Ifc_gptimer#(addr_width,data_width,gptimer_width) gptimer <-mkgptimer(clocked_by downclock , reset_by async_rg_reset);
		`else
		Ifc_gptimer#(addr_width,data_width,gptimer_width) gptimer <-mkgptimer(clocked_by downclock , reset_by downreset);		
		`endif	
`endif	
		AXI4_Lite_Slave_Xactor_IFC#(addr_width,data_width,user_width)  s_xactor <- mkAXI4_Lite_Slave_Xactor();

		`ifdef gpt_clk_gate_en
		SyncBitIfc#(Bit#(1)) sync_rg_clk_en <- mkSyncBit(bus_clock, bus_reset, downclock); // 
		`endif
		
                Reg#(Bit#(16)) clock_divisor_sync <- mkSyncRegFromCC(0, clock_selection.clock_out);		
	
	    
	    
	    rule transfer_data_from_clock_domains;
	      clock_divisor_sync <= rg_clk_divider;
     	endrule

`ifdef gpt_loc_rst_en
		rule reset_gpt(rg_rst == 1);
          reg_reset.assertReset;
        endrule
`endif                 
	     rule generate_slow_clock;
	      clk_divider.divisor(clock_divisor_sync);
     	endrule

		`ifdef gpt_clk_gate_en
	     rule clock_en;    
	          gpt_clk_gated.setGateCond(unpack(sync_rg_clk_en.read));	         
	      endrule
	    
		`endif
	    
	     rule clk_select;
               clock_selection.select(rg_clk_src==1);
		`ifdef gpt_clk_gate_en
                sync_rg_clk_en.send(rg_clk_en); 
		`endif
             endrule 
                
		`ifdef gpt_clk_gate_en  		
  		SyncFIFOIfc#(AXI4_Lite_Rd_Addr#(addr_width,user_width)) ff_rd_request        <-  mkSyncFIFOFromCC(3,gpt_clk_gated.new_clk);
  		SyncFIFOIfc#(AXI4_Lite_Wr_Addr#(addr_width,user_width)) ff_wr_request        <-  mkSyncFIFOFromCC(3,gpt_clk_gated.new_clk);
  		SyncFIFOIfc#(AXI4_Lite_Wr_Data#(data_width))            ff_wdata_request     <-  mkSyncFIFOFromCC(3,gpt_clk_gated.new_clk);
  		SyncFIFOIfc#(AXI4_Lite_Rd_Data#(data_width,user_width)) ff_rd_response       <-  mkSyncFIFOToCC(3,gpt_clk_gated.new_clk,downreset);
  		SyncFIFOIfc#(AXI4_Lite_Wr_Resp#(user_width))            ff_wr_response       <-  mkSyncFIFOToCC(3,gpt_clk_gated.new_clk,downreset);
		`else
  		SyncFIFOIfc#(AXI4_Lite_Rd_Addr#(addr_width,user_width)) ff_rd_request        <-  mkSyncFIFOFromCC(3,downclock);
  		SyncFIFOIfc#(AXI4_Lite_Wr_Addr#(addr_width,user_width)) ff_wr_request        <-  mkSyncFIFOFromCC(3,downclock);
  		SyncFIFOIfc#(AXI4_Lite_Wr_Data#(data_width))            ff_wdata_request     <-  mkSyncFIFOFromCC(3,downclock);
  		SyncFIFOIfc#(AXI4_Lite_Rd_Data#(data_width,user_width)) ff_rd_response       <-  mkSyncFIFOToCC(3,downclock,downreset);
  		SyncFIFOIfc#(AXI4_Lite_Wr_Resp#(user_width))            ff_wr_response       <-  mkSyncFIFOToCC(3,downclock,downreset);
		`endif  		
  		//capturing the read requests
  		rule capture_read_request;   
  			let rd_req <- pop_o (s_xactor.o_rd_addr);
			     Bool succ = False;
		         Bit#(data_width) rdata = 0 ;
`ifdef gpt_clk_gate_loc_rst_en
				if (rd_req.araddr[7:0] == `GPTimer_clk_ctrl  && rd_req.arsize == 2) begin	 
			       succ = True; 
		           rdata = duplicate(rg_clock_control); 
		           let lv_resp= AXI4_Lite_Rd_Data {rresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, 
      	                                                      rdata: rdata, ruser: ?}; //TODO user?
  			       s_xactor.i_rd_data.enq(lv_resp);//sending back the response
					    end 
`endif
				`ifndef gpt_clk_gate_loc_rst_en
				ff_rd_request.enq(rd_req); 
				`elsif gpt_clk_gate_en
				else if(rg_clk_en == 1)   begin 
					ff_rd_request.enq(rd_req); 	
				end  //core domain 
				`else
				else
					ff_rd_request.enq(rd_req); 	
				`endif
				`ifdef gpt_clk_gate_en
				else begin
				let lv_resp= AXI4_Lite_Rd_Data {rresp: AXI4_LITE_SLVERR, 
															rdata: rdata, ruser: ?}; //TODO user?
				s_xactor.i_rd_data.enq(lv_resp);//sending back the response
				end
				`endif
  		endrule
  
  		rule perform_read; 
  			let rd_req = ff_rd_request.first;   //peripheral domain  
  			ff_rd_request.deq;
  			let {succ,rdata} <- gptimer.read_req(rd_req.araddr,unpack(truncate(rd_req.arsize)));
  			let lv_resp= AXI4_Lite_Rd_Data {rresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, 
      	                                                      rdata: rdata, ruser: ?}; //TODO user?
  			ff_rd_response.enq(lv_resp);   //peripheral domain
  		endrule
  
  		rule send_read_response;  
  			ff_rd_response.deq;    // core domain
  			s_xactor.i_rd_data.enq(ff_rd_response.first);//sending back the response
  		endrule              
  
  		// capturing write requests
  		  		rule capture_write_request;  // core domain
  			let wr_req  <- pop_o(s_xactor.o_wr_addr);
  			let wr_data <- pop_o(s_xactor.o_wr_data);
			 Bool succ = False;
`ifdef gpt_clk_gate_loc_rst_en
			if (wr_req.awaddr[7:0] == `GPTimer_clk_ctrl && wr_req.awsize == 2) begin 
				 rg_clock_control <= truncate(wr_data.wdata); 
       			        succ = True;
				let lv_resp = AXI4_Lite_Wr_Resp {bresp: succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: ?};
      	        s_xactor.i_wr_resp.enq(lv_resp);
       		end
`endif
`ifndef gpt_clk_gate_loc_rst_en
			   ff_wr_request.enq(wr_req);
			   ff_wdata_request.enq(wr_data); 
			`elsif gpt_clk_gate_en
			else if(rg_clk_en == 1) begin
			ff_wr_request.enq(wr_req);
			ff_wdata_request.enq(wr_data); 
			end 
			`else
			else begin
				ff_wr_request.enq(wr_req);
				ff_wdata_request.enq(wr_data); 
			end
			`endif
			`ifdef gpt_clk_gate_en
			else begin
			let lv_resp = AXI4_Lite_Wr_Resp {bresp: AXI4_LITE_SLVERR, buser: ?};
				s_xactor.i_wr_resp.enq(lv_resp);
			end
			`endif
  		endrule
  
  		rule perform_write;   // peripheral domain 
  			let wr_req  = ff_wr_request.first;
  			let wr_data = ff_wdata_request.first;
  			
  			let succ <- gptimer.write_req(wr_req.awaddr,wr_data.wdata,wr_req.awsize);
      		let lv_resp = AXI4_Lite_Wr_Resp {bresp: succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: ?};
  			ff_wr_response.enq(lv_resp);
			  ff_wr_request.deq;
			  ff_wdata_request.deq;
  		endrule
  
  		rule send_write_response; // core domain
  			ff_wr_response.deq;
      		s_xactor.i_wr_resp.enq(ff_wr_response.first);//enqueuing the write response
  		endrule
		
	SyncBitIfc#(Bit#(1)) sync_gpt_out <- mkSyncBit(downclock, downreset,  bus_clock);
	SyncBitIfc#(Bit#(1)) sync_gpt_in <- mkSyncBit(bus_clock, bus_reset,  downclock);
	SyncBitIfc#(Bit#(1)) sync_interrupt <- mkSyncBit(downclock, downreset,  bus_clock);
	
	rule syncbits_out; 
	   sync_gpt_out.send(gptimer.io.timer_out); 
	   sync_interrupt.send(gptimer.sb_interrupt); 
	endrule 
	
	rule syncbits_in; 
	   gptimer.io.input_signal(sync_gpt_in.read);
	endrule 
				
     
     	interface io = interface Ifc_gptimer_io
     	   method timer_out = sync_gpt_out.read;
     	   method Action input_signal(Bit#(1) signal_in);
     	                  sync_gpt_in.send(signal_in);
			endmethod
     	
     	 endinterface;
     	interface slave = s_xactor.axi_side;
     	method sb_interrupt= sync_interrupt.read;
	endmodule

	//axi4
	interface Ifc_gptimer_axi4#(numeric type addr_width,numeric type id_width, numeric type data_width, numeric type user_width,numeric type gptimer_width);
		interface AXI4_Slave_IFC#(addr_width,id_width,data_width,user_width)	slave;
		interface Ifc_gptimer_io io;
    	method Bit#(1) sb_interrupt;
	endinterface
	module mkgptimer_axi4#(Clock ext_clock, Reset ext_reset)(Ifc_gptimer_axi4#(addr_width,id_width,data_width,user_width,gptimer_width))
					provisos(Add#(a__,16,data_width),
							 Add#(b__,32,data_width),
							 Add#(c__,gptimer_width,data_width),
							 Mul#(d__,16,data_width),
							 Mul#(e__,32,data_width),
							 Mul#(f__,gptimer_width,data_width),
							 Add#(g__,4,data_width),
							 Mul#(4,h__,data_width)
							);
		Ifc_gptimer#(addr_width,data_width,gptimer_width) gptimer <-mkgptimer;
		AXI4_Slave_Xactor_IFC#(addr_width,id_width,data_width,user_width) s_xactor<-mkAXI4_Slave_Xactor();
		Reg#(Bit#(8)) rg_rdburst_count <- mkRegA(0);
		Reg#(Bit#(8)) rg_wrburst_count <- mkRegA(0);

		Reg#(AXI4_Rd_Addr#(addr_width,id_width,user_width)) rg_rdpacket <- mkRegA(?);
 		Reg#(AXI4_Wr_Addr#(addr_width,id_width,user_width)) rg_wrpacket <- mkRegA(?);

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

