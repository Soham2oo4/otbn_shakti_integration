/* 
Copyright (c) 2018, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and/or other materials provided 
 with the distribution.  
* Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or 
  promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------------------------
*/
package pwm;
	

	`include "pwm.defines"


	import Clocks::*;
	import ClockDiv::*;
	import ConcatReg::*;
	import Semi_FIFOF::*;
	import BUtils ::*;
 	import AXI4_Lite_Types::*;
  	import AXI4_Types::*;
	import Vector::*;
	import pwm_clock_divider::*;
	`include "Logger.bsv"

  	export Ifc_pwm_axi4lite   (..);
  	export Ifc_pwm_axi4       (..);
  	export mkpwm_axi4;
  	export mkpwm_axi4lite;
  	export PWMIO              (..);

  	typedef enum {Byte=0, HWord=1, Word=2, DWord=3} AccessSize deriving(Bits,Eq,FShow);

  	(*always_ready, always_enabled*)
	interface PWMIO;
		method Vector#(`Pwm_Channels,Bit#(1)) pwm_o;
		method Vector#(`Pwm_Channels,Bit#(1)) pwm_comp;
	endinterface
	interface User_ifc#(numeric type addr_width, numeric type data_width, numeric type pwmwidth);
		method ActionValue#(Tuple2#(Bool, Bit#(data_width))) read_req(Bit#(addr_width) addr, Bit#(2) size);
		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, Bit#(2) size);
		interface PWMIO io;
    	method Vector#(`Pwm_Channels,Bit#(1)) sb_interrupt;
	endinterface
	//generic module
	module mkpwm#(Clock ext_clock, Reset ext_reset)(User_ifc#(addr_width,data_width,pwmwidth))
			provisos(
				Add#(a__, pwmwidth, data_width),
				Add#(b__, 16, data_width),
				Mul#(16, c__, data_width),
				Mul#(pwmwidth, d__, data_width),
				Add#(e__,16,pwmwidth)
				);
		let bus_clock <- exposeCurrentClock;
		let bus_reset <- exposeCurrentReset;

		//Input-registers
		Vector#(`Pwm_Channels,Reg#(Bit#(pwmwidth))) period_in <- replicateM(mkReg(0));
		Vector#(`Pwm_Channels,Reg#(Bit#(pwmwidth))) duty_cycle_in <- replicateM(mkReg(0));

		// ================= Control register ==================== //
		// bits 15 to 13 are reserved
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_pwm_update_enable	 		<- replicateM(mkReg(0));//bit 12
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_rise_interrupt		 		<- replicateM(mkReg(0));//bit 11
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_fall_interrupt		 		<- replicateM(mkReg(0));//bit 10
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_halfperiod_interrupt 		<- replicateM(mkReg(0));//bit 9
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_rise_interrupt_enable 		<- replicateM(mkReg(0));//bit 8
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_fall_interrupt_enable 		<- replicateM(mkReg(0));//bit 7
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_halfperiod_interrupt_enable <- replicateM(mkReg(0));//bit 6
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_comp_out_enable				<- replicateM(mkReg(0));//bit 5
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_counter_reset 				<- replicateM(mkReg(0));//bit 4
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_output_polarity 			<- replicateM(mkReg(0));//bit 3
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_output_enable 				<- replicateM(mkReg(0));//bit 2
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_pwm_start 					<- replicateM(mkReg(0));//bit 1
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) cr_pwm_enable 					<- replicateM(mkReg(0));//bit 0

		Vector#(`Pwm_Channels,Reg#(Bit#(16))) control;
		for(Integer i=0; i< `Pwm_Channels; i=i+1) begin
			control[i] = concatReg14(readOnlyReg(3'd0),cr_pwm_update_enable[i],
									readOnlyReg(cr_rise_interrupt[i]),readOnlyReg(cr_fall_interrupt[i]),
									readOnlyReg(cr_halfperiod_interrupt[i]),
									cr_rise_interrupt_enable[i],cr_fall_interrupt_enable[i],cr_halfperiod_interrupt_enable[i],
									cr_comp_out_enable[i],cr_counter_reset[i],cr_output_polarity[i],cr_output_enable[i],
									cr_pwm_start[i],cr_pwm_enable[i]);
		end

		// ================ Clock Control Register ===============//
		Reg#(Bit#(15)) clk_prescaller 		<- mkReg(0);
		Reg#(Bit#(1))  clk_select 			<- mkReg(0);
		Reg#(Bit#(16)) rg_clk_control = concatReg2(clk_prescaller,clk_select);
		Vector#(`Pwm_Channels,Reg#(Bit#(16))) deadbanddelay_in 		<- replicateM(mkReg(0));

		MakeResetIfc control_reset <- mkReset(1,False,bus_clock);
		rule generate_reset;
			if(cr_counter_reset[0] == 1)
				control_reset.assertReset;
		endrule
		Reset overall_reset <- mkResetEither(bus_reset,control_reset.new_rst);

		MuxClkIfc clock_selection <-mkUngatedClockMux(ext_clock,bus_clock);
		Reset async_reset <- mkAsyncResetFromCR(0,clock_selection.clock_out);
		rule select_clock;
			clock_selection.select(clk_select==1);
		endrule

		Reg#(Bit#(15)) sync_clock_divisor <- mkSyncRegFromCC(0, clock_selection.clock_out);
		rule transfer_data_from_clock_domains;
			sync_clock_divisor <= clk_prescaller;
		endrule

		Ifc_pwm_clock_divider#(15) clock_divider <- mkpwm_clock_divider(clocked_by clock_selection.clock_out, reset_by async_reset);
		let downclock = clock_divider.slowclock;
		Reset downreset <- mkAsyncReset(0,overall_reset,downclock);	
	    rule generate_slow_clock;
	      	clock_divider.divisor(sync_clock_divisor);
	    endrule
	
		// ======= Actual Counter and PWM signal generation ======== //
		// Registers at Down clock
	    Vector#(`Pwm_Channels,Reg#(Bit#(1))) pwm_output 		<- replicateM(mkReg(0,clocked_by downclock,reset_by downreset));
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) pwm_comp_output <- replicateM(mkReg(0,clocked_by downclock, reset_by downreset));
	    Vector#(`Pwm_Channels,Reg#(Bit#(pwmwidth))) counter 	<- replicateM(mkReg(100,clocked_by downclock,reset_by downreset));
	    Vector#(`Pwm_Channels,Reg#(Bit#(1))) interrupt 		<- replicateM(mkReg(0,clocked_by downclock,reset_by downreset));
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) pwm_rise_interrupt <- replicateM(mkReg(0,clocked_by downclock,reset_by downreset));
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) pwm_fall_interrupt <- replicateM(mkReg(0,clocked_by downclock,reset_by downreset));
		Vector#(`Pwm_Channels,Reg#(Bit#(1))) pwm_halfperiod_interrupt <- replicateM(mkReg(0,clocked_by downclock, reset_by downreset));	

		// Registers at bus clock
		Vector#(`Pwm_Channels,Reg#(Bit#(pwmwidth))) duty_cycle 	<- replicateM(mkReg(0));                           
        Vector#(`Pwm_Channels,Reg#(Bit#(pwmwidth))) period 		<- replicateM(mkReg(0));
		Vector#(`Pwm_Channels,Reg#(Bit#(16))) deadbanddelay 		<- replicateM(mkReg(0));

		// Wires which sync value from down clock to bus clock
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(1))) pwm_signal;
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(1))) pwm_comp_signal;
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(1))) interrupt_signal;
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(pwmwidth))) sync_counter;
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(1))) sync_rise_interrupt;
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(1))) sync_fall_interrupt;
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(1))) sync_halfperiod_interrupt;
		for(Integer i=0; i< `Pwm_Channels; i=i+1) begin
			pwm_signal[i] 					<- 	mkNullCrossingWire(bus_clock,pwm_output[i]);
			pwm_comp_signal[i] 				<-	mkNullCrossingWire(bus_clock,pwm_comp_output[i]);
			interrupt_signal[i]				<-	mkNullCrossingWire(bus_clock,interrupt[i]);
			sync_counter[i]					<-	mkNullCrossingWire(bus_clock,counter[i]);
			sync_rise_interrupt[i]			<-	mkNullCrossingWire(bus_clock,pwm_rise_interrupt[i]);
			sync_fall_interrupt[i]			<-	mkNullCrossingWire(bus_clock,pwm_fall_interrupt[i]);
			sync_halfperiod_interrupt[i]	<-	mkNullCrossingWire(bus_clock,pwm_halfperiod_interrupt[i]);	
		end	

		// Wires which sync value from bus clock to down clock
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(pwmwidth))) sync_duty_cycle;
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(pwmwidth))) sync_period;
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(1))) sync_pwm_enable;
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(16))) sync_deadbanddelay;
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(1))) sync_rise_interrupt_enable;
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(1))) sync_fall_interrupt_enable;
		Vector#(`Pwm_Channels,ReadOnly#(Bit#(1))) sync_halfperiod_interrupt_enable;
		for(Integer i=0; i<`Pwm_Channels; i=i+1) begin
			sync_duty_cycle[i] 					<- mkNullCrossingWire(downclock,duty_cycle[i]); 
			sync_period[i]						<- mkNullCrossingWire(downclock,period[i]);
			sync_pwm_enable[i] 					<- mkNullCrossingWire(downclock,cr_pwm_enable[i]);
			sync_deadbanddelay[i] 				<- mkNullCrossingWire(downclock,deadbanddelay[i]);
			sync_rise_interrupt_enable[i] 		<- mkNullCrossingWire(downclock,cr_rise_interrupt_enable[i]);
			sync_fall_interrupt_enable[i] 		<- mkNullCrossingWire(downclock,cr_fall_interrupt_enable[i]);
			sync_halfperiod_interrupt_enable[i] <- mkNullCrossingWire(downclock,cr_halfperiod_interrupt_enable[i]);
		end 	
		// Update values at Rising edge
		for(Integer i=0; i<`Pwm_Channels; i=i+1) begin
			rule reload_input_values_at_rising_edge((sync_counter[i] == 0 || cr_pwm_start[i] == 1) && cr_pwm_update_enable[i] == 1);
				deadbanddelay[i] <= deadbanddelay_in[i];
				duty_cycle[i] <= duty_cycle_in[i];
				period[i] <= period_in[i];
				cr_pwm_update_enable[i] <= 0;
				cr_pwm_start[i] <= 0;
			endrule
		end

		// Update values at Falling edge
		for(Integer i=0; i<`Pwm_Channels; i=i+1) begin
			rule reload_input_values_at_falling_edge(sync_counter[i] == duty_cycle[i]-2 && cr_pwm_update_enable[i] == 1);   
		     	duty_cycle[i] <= duty_cycle_in[i];                                                  
		        period[i] <= period_in[i];                                                          
				cr_pwm_update_enable[i] <= 0;
			endrule 
		end

		// Update interrupt values from down clock to bus clock
		for(Integer i=0; i<`Pwm_Channels; i=i+1) begin
			rule rl_update_interrupts;
				cr_rise_interrupt[i] <= sync_rise_interrupt[i];
				cr_fall_interrupt[i] <= sync_fall_interrupt[i];
				cr_halfperiod_interrupt[i] <= sync_halfperiod_interrupt[i];
			endrule
 		end
		// PWM operation
		for(Integer i=0; i<`Pwm_Channels; i=i+1) begin
			rule compare_and_generate_pwm(sync_pwm_enable[i]==1);                                      
					Bit#(pwmwidth) temp_cntr;                                                                  
		            if(counter[i] >= sync_period[i]-1)                                                 
		                temp_cntr = 0;                                                                      
		            else                                                                                    
		                temp_cntr = counter[i] + 1;
					counter[i] <= temp_cntr;
					if(temp_cntr < zeroExtend(sync_deadbanddelay[i]))
					begin
						pwm_output[i] <= 0;
						pwm_comp_output[i] <= 0;
					end
					else if(temp_cntr < sync_duty_cycle[i])
					begin
						pwm_comp_output[i] <= 0;
						pwm_output[i] <= 1;
					end
					else if(temp_cntr < sync_duty_cycle[i]+zeroExtend(sync_deadbanddelay[i]))
					begin
						pwm_output[i] <= 0;
						pwm_comp_output[i] <= 0;
					end
					else
					begin
						pwm_comp_output[i] <= 1; 
						pwm_output[i] <= 0;
					end
					let half_period = sync_period[i] >> 1;
					Bit#(1) temp_rise = 0; 
					Bit#(1) temp_fall = 0; 
					Bit#(1) temp_halfperiod = 0;
					if(temp_cntr == sync_period[i] - 1)                                                    
		            begin                                                                               
		                pwm_rise_interrupt[i] <= 0;                                                        
		                pwm_fall_interrupt[i] <= 0;                                                        
		                pwm_halfperiod_interrupt[i] <= 0;                                                  
		            end
					else begin 
						if(temp_cntr == 0)
						begin
							temp_rise = 1;
							pwm_rise_interrupt[i] <= 1;
						end
						if(temp_cntr == sync_duty_cycle[i])
						begin
							temp_fall = 1;
							pwm_fall_interrupt[i] <= 1;
						end
						if(temp_cntr == half_period)
						begin
							temp_halfperiod = 1;
							pwm_halfperiod_interrupt[i] <= 1;
						end
					end
					interrupt[i] <= ((temp_rise & sync_rise_interrupt_enable[i]) | (temp_fall & sync_fall_interrupt_enable[i]) | (temp_halfperiod & sync_halfperiod_interrupt_enable[i]));                                        
					`logLevel( pwm, 0, $format("PWM %d : Counter : %h, sync_period : %h, sync_deadbanddelay = %h, sync_duty_cycle = %h  \n",i,counter[i],sync_period[i],sync_deadbanddelay[i],sync_duty_cycle[i]))
		 	endrule
		end

		method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width) addr, Bit#(2) size);
			Bool succ = True;
			let pw = valueOf(pwmwidth);
			Bit#(2) allowed_size=(pw==8)?0:(pw==16)?1:2;
			Bit#(data_width) data = 0;
			if(addr[7:0] == `Pwm_clock && size == 1)
				data = duplicate(rg_clk_control);
			else begin
				if(addr[7:0] <= fromInteger(`Pwm_Channels* 16))
				begin
					for(Integer i=0; i < `Pwm_Channels; i=i+1) begin
						Integer channel_base = i*16;
						Integer channel_end	= channel_base + 16;
						if(addr[7:0] > fromInteger(channel_base) && addr[7:0] <= fromInteger(channel_end))
						begin 
							if(addr[7:0] == fromInteger(channel_base + `Pwm_control) && size == 1)
								data = duplicate(control[i]);
							else if(addr[7:0] == fromInteger(channel_base + `Pwm_period) && size == allowed_size)
								data = duplicate(period[i]);
							else if(addr[7:0] == fromInteger(channel_base + `Pwm_duty_cycle) && size == allowed_size)
								data = duplicate(duty_cycle[i]);
							else if(addr[7:0] == fromInteger(channel_base + `Pwm_deadband_delay) && size == 1)
								data = duplicate(deadbanddelay[i]);
							else
								succ = False;
						end
					end
				end
				else
					succ = False;
			end
			return tuple2(succ,data);
		endmethod

		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, Bit#(2) size);
			Bool succ = True;
			let pw = valueOf(pwmwidth);
			Bit#(2) allowed_size = (pw == 8)?0:(pw==16)?1:2;
			if(addr[7:0] == `Pwm_clock && size == 1)                                     
                rg_clk_control <= truncate(data);                                                    
            else begin                                                                              
                if(addr[7:0] <= fromInteger(`Pwm_Channels* 16))                                     
                begin                                                                               
                    for(Integer i=0; i < `Pwm_Channels; i=i+1) begin                            
                        Integer channel_base = i*16;                                                
                        Integer channel_end = channel_base + 16;                                    
                        if(addr[7:0] > fromInteger(channel_base) && addr[7:0] <= fromInteger(channel_end))
                        begin                                       
							                                
                            if(addr[7:0] == fromInteger(channel_base + `Pwm_control) && size == 1)                          
                                control[i] <= truncate(data);                                       
                            else if(addr[7:0] == fromInteger(channel_base + `Pwm_period) && size == allowed_size)            
                                period_in[i] <= truncate(data);                                       
                            else if(addr[7:0] == fromInteger(channel_base + `Pwm_duty_cycle) && size == allowed_size)        
                                duty_cycle_in[i] <= truncate(data);                                    
                            else if(addr[7:0] == fromInteger(channel_base + `Pwm_deadband_delay) && size == 1)                
                                deadbanddelay_in[i] <= truncate(data);                                
                            else                                                                    
                                succ = False; 
				`logLevel( pwm, 0, $format("PWM %d : write req : addr = %h, data = %h, succ = %h \n",i,addr,data,succ))    
                        end                                                                          
                    end                                                                              
                end                                                                                  
                else                                                                                 
                    succ = False;
				`logLevel( pwm, 0, $format("PWM : write req : addr = %h, data = %h, succ = %h \n",addr,data,succ))
			 end
			return succ;
		endmethod
		interface io=interface PWMIO
			method pwm_o;
				Vector#(`Pwm_Channels,Bit#(1)) temp_o;
				for(Integer i=0; i<`Pwm_Channels; i=i+1) begin	
					temp_o[i]=cr_output_enable[i]==0?0:cr_output_polarity[i]==1?pwm_signal[i]:~pwm_signal[i];
				end
				return temp_o;
			endmethod
			method pwm_comp;
				Vector#(`Pwm_Channels,Bit#(1)) temp_comp;
				for(Integer i=0; i<`Pwm_Channels; i=i+1) begin 
					temp_comp[i]=cr_comp_out_enable[i]==0?0:cr_output_polarity[i]==1?pwm_comp_signal[i]:~pwm_comp_signal[i];
				end
				return temp_comp;
			endmethod
		endinterface;
		method Vector#(`Pwm_Channels,Bit#(1)) sb_interrupt;
			Vector#(`Pwm_Channels,Bit#(1)) temp;
			for(Integer i=0; i< `Pwm_Channels; i=i+1) begin
					temp[i]=interrupt_signal[i];
			end
			return temp;
		endmethod
	endmodule:mkpwm

	//axi4lite
	interface Ifc_pwm_axi4lite#(numeric type addr_width, numeric type data_width, numeric type user_width, numeric type pwmwidth);
		interface AXI4_Lite_Slave_IFC#(addr_width, data_width, user_width) slave;
		interface PWMIO io;
    	method Vector#(`Pwm_Channels,Bit#(1)) sb_interrupt;
	endinterface

	module mkpwm_axi4lite#(Clock ext_clock, Reset ext_reset)(Ifc_pwm_axi4lite#(addr_width,data_width,user_width, pwmwidth))
		provisos(
				Add#(a__, pwmwidth, data_width),
				Add#(b__, 16, data_width),
				Mul#(16, c__, data_width),
				Mul#(pwmwidth, d__, data_width),
				Add#(e__,16,pwmwidth)
				);
		User_ifc#(addr_width,data_width,pwmwidth) pwm <-mkpwm(ext_clock, ext_reset);
		AXI4_Lite_Slave_Xactor_IFC#(addr_width,data_width,user_width)  s_xactor <- mkAXI4_Lite_Slave_Xactor();

		rule read_request;
	  		let req <- pop_o (s_xactor.o_rd_addr);
      		let {succ,data} <- pwm.read_req(req.araddr,unpack(truncate(req.arsize)));
	  		let resp= AXI4_Lite_Rd_Data {rresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, 
                                    rdata:data, ruser: ?};
	  		s_xactor.i_rd_data.enq(resp);
     	endrule

     	rule write_request;
       		let addreq <- pop_o(s_xactor.o_wr_addr);
       		let datareq <- pop_o(s_xactor.o_wr_data);
       		let succ <- pwm.write_req(addreq.awaddr, datareq.wdata,unpack(truncate(addreq.awsize)));
       		let resp = AXI4_Lite_Wr_Resp {bresp: succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: ?};
       		s_xactor.i_wr_resp.enq(resp);
     	endrule

     	interface io = pwm.io;
     	interface slave = s_xactor.axi_side;
     	method sb_interrupt=pwm.sb_interrupt;
	endmodule

	//axi4
	interface Ifc_pwm_axi4#(numeric type addr_width, numeric type data_width, numeric type user_width, numeric type pwmwidth);
		interface AXI4_Slave_IFC#(addr_width,data_width,user_width)	slave;
		interface PWMIO io;
    	method Vector#(`Pwm_Channels,Bit#(1)) sb_interrupt;
	endinterface
	module mkpwm_axi4#(Clock ext_clock, Reset ext_reset)(Ifc_pwm_axi4#(addr_width,data_width,user_width, pwmwidth))
		provisos(
				Add#(a__, pwmwidth, data_width),
				Add#(b__, 16, data_width),
				Mul#(16, c__, data_width),
				Mul#(pwmwidth, d__, data_width),
				Add#(e__,16,pwmwidth)
				);
		User_ifc#(addr_width,data_width,pwmwidth) pwm <-mkpwm(ext_clock, ext_reset);
		AXI4_Slave_Xactor_IFC#(addr_width,data_width,user_width) s_xactor<-mkAXI4_Slave_Xactor();
		Reg#(Bit#(8)) rg_rdburst_count <- mkReg(0);
		Reg#(Bit#(8)) rg_wrburst_count <- mkReg(0);

		Reg#(AXI4_Rd_Addr#(addr_width,user_width)) rg_rdpacket <- mkReg(?);
 		Reg#(AXI4_Wr_Addr#(addr_width,user_width)) rg_wrpacket <- mkReg(?);


		rule read_request(rg_rdburst_count==0);
			let req<-pop_o(s_xactor.o_rd_addr);
			let {succ,data}<-pwm.read_req(req.araddr,unpack(truncate(req.arsize)));
			rg_rdpacket<=req;	

			if(req.arlen!=0)
				rg_rdburst_count<=1;
			let resp= AXI4_Rd_Data{rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:req.arid,rlast:(req.arlen==0),rdata:data, ruser: ?};
			s_xactor.i_rd_data.enq(resp);
		endrule
		
		rule read_burst(rg_rdburst_count!=0);
			let rd_req=rg_rdpacket;
			let {succ,data}<-pwm.read_req(rd_req.araddr,unpack(truncate(rd_req.arsize)));
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
	        let succ <- pwm.write_req(addreq.awaddr, datareq.wdata,unpack(truncate(addreq.awsize)));
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

    	method sb_interrupt=pwm.sb_interrupt;
		interface io=pwm.io;
		interface slave = s_xactor.axi_side;
	endmodule

endpackage
