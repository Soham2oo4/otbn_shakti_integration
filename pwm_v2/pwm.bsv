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

/*
TODO : Add soft reset if required
*/
/*doc:overview:
PWM is a Pulse Width Modulator i.e. the GPIO can be configured as either input or output and read or written with different values. 

The number of ports can be configurable based on the passed number ionum which is passed as argument.

Registers provided:
1. GPIO_DIRECTION Register -- Configure the GPIO port as input or output.
2. GPIO DATA register -- Write / read the GPIO port.
3. GPIO SET register -- Sets the GPIO port when configured as output.
4. GPIO CLEAR register  -- Clears the GPIO port when configured as output.
5. GPIO TOGGLE register -- Toggles the GPIO port when configured as output.
6. GPIO Quality register -- Holds the number of input qualification cycles needed to filter the unwanted noise glitches.
7. GPIO Interrupt configuration register - set the polarity of the interrupt which are raised
using GPIOs. By default, the interrupts are active high, if active low interrupts are required that
particular GPIO bit in GPIOINTCONFIG register should be set.


Sequence of execution
^^^^^^^^^^^^^^^^^^^^^
Configure as input/output and use it.
1. Configure corresponding GPIO port as input/output.
2. If configured as input, read the corresponding port from GPIO data register.
3. if configured as output, set, clear or toggle using SET, CLEAR, TOGGLE & DATA register.

Configure GPIO as interrupt.
1. Configure corresponding GPIO port as input.
2. Configure the interrupt level (active high / active low) in interrupt configuration register.
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
	import clock_divider::*;
	`include "Logger.bsv"

  	export Ifc_pwm_axi4lite   (..);
  	export Ifc_pwm_axi4       (..);
  	export mkpwm_axi4;
  	export mkpwm_axi4lite;
  	export PWMIO              (..);

  	typedef enum {Byte=0, HWord=1, Word=2, DWord=3} AccessSize deriving(Bits,Eq,FShow);

  	(*always_ready, always_enabled*)
	interface PWMIO#(numeric type channels);
		method Vector#(channels,Bit#(1)) pwm_o;
		method Vector#(channels,Bit#(1)) pwm_comp;
	endinterface
	interface User_ifc#(numeric type addr_width, numeric type data_width, numeric type pwmwidth,numeric type channels);
		method ActionValue#(Tuple2#(Bool, Bit#(data_width))) read_req(Bit#(addr_width) addr, Bit#(2) size);
		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, Bit#(2) size);
		interface PWMIO#(channels) io;
    	method Vector#(channels,Bit#(1)) sb_interrupt;
	endinterface
	//generic module
	module mkpwm#(Clock ext_clock, Reset ext_reset)(User_ifc#(addr_width,data_width,pwmwidth,channels))
			provisos(
				Add#(a__, pwmwidth, data_width),
				Add#(b__, 16, data_width),
				Mul#(16, c__, data_width),
				Mul#(pwmwidth, d__, data_width),
				Add#(e__,16,pwmwidth),
				Add#(f__, TAdd#(TLog#(TAdd#(channels, 1)), 4), addr_width)
				);
		let bus_clock <- exposeCurrentClock;
		let bus_reset <- exposeCurrentReset;

		//Input-registers
		Vector#(channels,Reg#(Bit#(pwmwidth))) period_in <- replicateM(mkRegA(0));
		Vector#(channels,Reg#(Bit#(pwmwidth))) duty_cycle_in <- replicateM(mkRegA(0));

		// ================= Control register ==================== //
		// bits 15 to 13 are reserved
		Vector#(channels,Reg#(Bit#(1))) cr_pwm_update_enable	 		<- replicateM(mkRegA(0));//bit 12
		Vector#(channels,Reg#(Bit#(1))) cr_rise_interrupt		 		<- replicateM(mkRegA(0));//bit 11
		Vector#(channels,Reg#(Bit#(1))) cr_fall_interrupt		 		<- replicateM(mkRegA(0));//bit 10
		Vector#(channels,Reg#(Bit#(1))) cr_halfperiod_interrupt 		<- replicateM(mkRegA(0));//bit 9
		Vector#(channels,Reg#(Bit#(1))) cr_rise_interrupt_enable 		<- replicateM(mkRegA(0));//bit 8
		Vector#(channels,Reg#(Bit#(1))) cr_fall_interrupt_enable 		<- replicateM(mkRegA(0));//bit 7
		Vector#(channels,Reg#(Bit#(1))) cr_halfperiod_interrupt_enable <- replicateM(mkRegA(0));//bit 6
		Vector#(channels,Reg#(Bit#(1))) cr_comp_out_enable				<- replicateM(mkRegA(0));//bit 5
		Vector#(channels,Reg#(Bit#(1))) cr_counter_reset 				<- replicateM(mkRegA(0));//bit 4
		Vector#(channels,Reg#(Bit#(1))) cr_output_polarity 				<- replicateM(mkRegA(0));//bit 3
		Vector#(channels,Reg#(Bit#(1))) cr_output_enable 				<- replicateM(mkRegA(0));//bit 2
		Vector#(channels,Reg#(Bit#(1))) cr_pwm_start 					<- replicateM(mkRegA(0));//bit 1
		Vector#(channels,Reg#(Bit#(1))) cr_pwm_enable 					<- replicateM(mkRegA(0));//bit 0

		Vector#(channels,Reg#(Bit#(16))) control;
		for(Integer i=0; i<valueOf(channels); i=i+1) begin
			control[i] = concatReg14(readOnlyReg(3'd0),cr_pwm_update_enable[i],
									readOnlyReg(cr_rise_interrupt[i]),readOnlyReg(cr_fall_interrupt[i]),
									readOnlyReg(cr_halfperiod_interrupt[i]),
									cr_rise_interrupt_enable[i],cr_fall_interrupt_enable[i],cr_halfperiod_interrupt_enable[i],
									cr_comp_out_enable[i],cr_counter_reset[i],cr_output_polarity[i],cr_output_enable[i],
									cr_pwm_start[i],cr_pwm_enable[i]);
		end

		// ================ Clock Control Register ===============//
		Reg#(Bit#(15)) clk_prescaller 		<- mkRegA(0);
		Reg#(Bit#(1))  clk_select 			<- mkRegA(0);
		Reg#(Bit#(16)) rg_clk_control = concatReg2(clk_prescaller,clk_select);
		Vector#(channels,Reg#(Bit#(16))) deadbanddelay_in 		<- replicateM(mkRegA(0));


		MuxClkIfc clock_selection <-mkUngatedClockMux(ext_clock,bus_clock);
		Reset async_reset <- mkAsyncResetFromCR(0,clock_selection.clock_out);
		rule select_clock;
			clock_selection.select(clk_select==1);
		endrule

		Reg#(Bit#(15)) sync_clock_divisor <- mkSyncRegFromCC(0, clock_selection.clock_out);
		rule transfer_data_from_clock_domains;
			sync_clock_divisor <= clk_prescaller;
		endrule

		Ifc_clock_divider#(15) clk_divider <- mkclock_divider(clocked_by clock_selection.clock_out, reset_by async_reset);
		let downclock = clk_divider.slowclock;
		Reset downreset <- mkAsyncReset(0,bus_reset,downclock);	
	    rule generate_slow_clock;
	      	clk_divider.divisor(sync_clock_divisor);
	    endrule
	
		// ======= Actual Counter and PWM signal generation ======== //
		// Registers written at Down clock read at bus_clock
	    Vector#(channels,SyncBitIfc#(Bit#(1))) pwm_output 		<- replicateM(mkSyncBit(downclock,downreset,bus_clock));
		Vector#(channels,SyncBitIfc#(Bit#(1))) pwm_comp_output <- replicateM(mkSyncBit(downclock,downreset,bus_clock));
		Vector#(channels,SyncBitIfc#(Bit#(1))) interrupt 		<- replicateM(mkSyncBit(downclock,downreset,bus_clock));
		Vector#(channels,SyncBitIfc#(Bit#(1))) pwm_rise_interrupt <- replicateM(mkSyncBit(downclock,downreset,bus_clock));
		Vector#(channels,SyncBitIfc#(Bit#(1))) pwm_fall_interrupt <- replicateM(mkSyncBit(downclock,downreset,bus_clock));
		Vector#(channels,SyncBitIfc#(Bit#(1))) pwm_halfperiod_interrupt <- replicateM(mkSyncBit(downclock,downreset,bus_clock));
		Vector#(channels,SyncBitIfc#(Bool)) rg_update 			<- replicateM(mkSyncBit(downclock,downreset,bus_clock));
		
		// Registers written and read at down_clock
	    Vector#(channels,Reg#(Bit#(pwmwidth))) counter 	<- replicateM(mkRegA(-1,clocked_by downclock,reset_by downreset));

		// Registers written at bus_clock read at down clock
		Vector#(channels,Reg#(Bit#(pwmwidth))) duty_cycle 	<- replicateM(mkSyncReg(0,bus_clock,bus_reset,downclock));                           
        Vector#(channels,Reg#(Bit#(pwmwidth))) period 		<- replicateM(mkSyncReg(0,bus_clock,bus_reset,downclock));
		Vector#(channels,Reg#(Bit#(16))) deadbanddelay 		<- replicateM(mkSyncReg(0,bus_clock,bus_reset,downclock));
		Vector#(channels,Reg#(Bit#(1))) sync_pwm_enable  					<- replicateM(mkSyncReg(0,bus_clock,bus_reset,downclock));
		Vector#(channels,Reg#(Bit#(1))) sync_counter_reset					<- replicateM(mkSyncReg(0,bus_clock,bus_reset,downclock));
		Vector#(channels,Reg#(Bit#(1))) sync_output_polarity				<- replicateM(mkSyncReg(0,bus_clock,bus_reset,downclock));
		Vector#(channels,Reg#(Bit#(1))) sync_rise_interrupt_enable			<- replicateM(mkSyncReg(0,bus_clock,bus_reset,downclock));
		Vector#(channels,Reg#(Bit#(1))) sync_fall_interrupt_enable			<- replicateM(mkSyncReg(0,bus_clock,bus_reset,downclock));
		Vector#(channels,Reg#(Bit#(1))) sync_halfperiod_interrupt_enable	<- replicateM(mkSyncReg(0,bus_clock,bus_reset,downclock));

		for(Integer i=0; i<valueOf(channels); i=i+1) begin
			(*conflict_free="reload_input_values_at_rising_edge, reload_input_values_at_falling_edge"*)
			// Update values at Rising edge
			rule reload_input_values_at_rising_edge((rg_update[i].read || cr_pwm_start[i] == 1) && cr_pwm_update_enable[i] == 1);
				deadbanddelay[i] <= deadbanddelay_in[i];
				duty_cycle[i] <= duty_cycle_in[i];
				period[i] <= period_in[i];
				cr_pwm_update_enable[i] <= 0;
				cr_pwm_start[i] <= 0;
			endrule
			// Update values at Falling edge
			rule reload_input_values_at_falling_edge(rg_update[i].read && cr_pwm_update_enable[i] == 1);   
		     	duty_cycle[i] <= duty_cycle_in[i];                                                  
		        period[i] <= period_in[i];                                                          
				cr_pwm_update_enable[i] <= 0;
			endrule 
			// Update interrupt values from down clock to bus clock
			rule rl_update_interrupts;
				cr_rise_interrupt[i] <= pwm_rise_interrupt[i].read;
				cr_fall_interrupt[i] <= pwm_fall_interrupt[i].read;
				cr_halfperiod_interrupt[i] <= pwm_halfperiod_interrupt[i].read;
			endrule
			// Reset counter reset once the PWM counter is reset
			rule rl_reset_counter_reset(cr_counter_reset[i] == 1);
				cr_counter_reset[i] <= 0;
				sync_counter_reset[i] <= 0;
			endrule
			// PWM operation
			rule compare_and_generate_pwm(sync_pwm_enable[i]==1);                                      
					Bit#(pwmwidth) temp_cntr;
					let half_period = period[i] >> 1;
					Bit#(1) temp_rise = 0; 
					Bit#(1) temp_fall = 0; 
					Bit#(1) temp_halfperiod = 0;                                                          
		            if((counter[i] >= period[i]-1) || (sync_counter_reset[i] == 1))                                                 
		                temp_cntr = 0;                                                                      
		            else                                                                                    
		                temp_cntr = counter[i] + 1;
					counter[i] <= temp_cntr;
					if(temp_cntr == 0 || temp_cntr == duty_cycle[i] - 2)
						rg_update[i].send(True);
					else
						rg_update[i].send(False);
					if(temp_cntr < zeroExtend(deadbanddelay[i]))
					begin
						pwm_output[i].send(0);
						pwm_comp_output[i].send(0);
					end
					else if(temp_cntr < duty_cycle[i])
					begin
						pwm_comp_output[i].send(0);
						pwm_output[i].send(1);
					end
					else if(temp_cntr < duty_cycle[i]+zeroExtend(deadbanddelay[i]))
					begin
						pwm_output[i].send(0);
						pwm_comp_output[i].send(0);
					end
					else
					begin
						pwm_comp_output[i].send(1); 
						pwm_output[i].send(0);
					end

					if(temp_cntr == zeroExtend(deadbanddelay[i])) begin
						if(sync_output_polarity[i] == 1)
							temp_rise = 1;
						else
							temp_fall = 1;
					end
					else if(temp_cntr == duty_cycle[i]) begin
						if(sync_output_polarity[i] == 1)
							temp_fall = 1;
						else
							temp_rise = 1;
					end
					else if(temp_cntr == half_period)
						temp_halfperiod = 1;
					pwm_halfperiod_interrupt[i].send(temp_halfperiod);
					pwm_fall_interrupt[i].send(temp_fall);
					pwm_rise_interrupt[i].send(temp_rise);
					
					interrupt[i].send(((temp_rise & sync_rise_interrupt_enable[i]) | (temp_fall & sync_fall_interrupt_enable[i]) | (temp_halfperiod & sync_halfperiod_interrupt_enable[i])));                                        
					`logLevel( pwm, 0, $format("PWM %d : Counter : %h, period : %h, deadbanddelay = %h, duty_cycle = %h  \n",i,counter[i],period[i],deadbanddelay[i],duty_cycle[i]))
		 	endrule
		end

		method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width) addr, Bit#(2) size);
			Bool succ = False;
			let pw = valueOf(pwmwidth);
			Bit#(2) allowed_size=(pw==8)?0:(pw==16)?1:2;
			Bit#(data_width) data = 0;
			Bit#(TAdd#(TLog#(TAdd#(channels,1)),4)) addr_temp = truncate(addr);
			if(addr_temp == `Pwm_clock && size == 1) begin
				data = duplicate(rg_clk_control);
				succ = True;
			end
			else begin
				if(addr_temp <= fromInteger(valueOf(channels)* 16))
				begin
					for(Integer i=0; i<valueOf(channels); i=i+1) begin
						Integer channel_base = i*16;
						Integer channel_end	= channel_base + 16;
						if(addr_temp > fromInteger(channel_base) && addr_temp <= fromInteger(channel_end))
						begin
							succ = True; 
							if(addr_temp == fromInteger(channel_base + `Pwm_control) && size == 1)
								data = duplicate(control[i]);
							else if(addr_temp == fromInteger(channel_base + `Pwm_period) && size == allowed_size)
								data = duplicate(period_in[i]);
							else if(addr_temp == fromInteger(channel_base + `Pwm_duty_cycle) && size == allowed_size)
								data = duplicate(duty_cycle_in[i]);
							else if(addr_temp == fromInteger(channel_base + `Pwm_deadband_delay) && size == 1)
								data = duplicate(deadbanddelay_in[i]);
							else
								succ = False;
						`logLevel( pwm, 0, $format("PWM %d : read req : addr = %h, temp_addr = %h, data = %h, succ = %h \n",i,addr, addr_temp,data,succ))    
						end
					end
				end
				else
					succ = False;
				`logLevel( pwm, 0, $format("PWM : read req : addr = %h, temp_addr = %h, data = %h, succ = %h \n",addr, addr_temp,data,succ))    
			end
			return tuple2(succ,data);
		endmethod

		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, Bit#(2) size);
			Bool succ = False;
			let pw = valueOf(pwmwidth);
			Bit#(2) allowed_size = (pw == 8)?0:(pw==16)?1:2;
			Bit#(TAdd#(TLog#(TAdd#(channels,1)),4)) addr_temp = truncate(addr);
			if(addr_temp == `Pwm_clock && size == 1) begin                                     
				rg_clk_control <= truncate(data);         
				succ = True;
			end                                           
            else begin                                                                              
                if(addr_temp <= fromInteger(valueOf(channels)*16))                                     
                begin                                                                               
                    for(Integer i=0; i<valueOf(channels); i=i+1) begin                            
                        Integer channel_base = i*16;                                                
                        Integer channel_end = channel_base + 16;                                    
                        if(addr_temp > fromInteger(channel_base) && addr_temp <= fromInteger(channel_end))
                        begin                                       
							succ = True;                    
                            if(addr_temp == fromInteger(channel_base + `Pwm_control) && size == 1) begin                          
								control[i] <= truncate(data);
								sync_pwm_enable[i] 					<= data[0];
								sync_output_polarity[i]				<= data[3];
								sync_counter_reset[i] 				<= data[4];
								sync_halfperiod_interrupt_enable[i] <= data[6]; 
								sync_fall_interrupt_enable[i] 		<= data[7];
								sync_rise_interrupt_enable[i] 		<= data[8];

							end                                       
                            else if(addr_temp == fromInteger(channel_base + `Pwm_period) && size == allowed_size)            
                                period_in[i] <= truncate(data);                                       
                            else if(addr_temp == fromInteger(channel_base + `Pwm_duty_cycle) && size == allowed_size)        
                                duty_cycle_in[i] <= truncate(data);                                    
                            else if(addr_temp == fromInteger(channel_base + `Pwm_deadband_delay) && size == 1)                
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
				Vector#(channels,Bit#(1)) temp_o;
				for(Integer i=0; i<valueOf(channels); i=i+1) begin	
					temp_o[i]=cr_output_enable[i]==0?0:cr_output_polarity[i]==1?pwm_output[i].read:~pwm_output[i].read;
				end
				return temp_o;
			endmethod
			method pwm_comp;
				Vector#(channels,Bit#(1)) temp_comp;
				for(Integer i=0; i<valueOf(channels); i=i+1) begin 
					temp_comp[i]=cr_comp_out_enable[i]==0?0:cr_output_polarity[i]==1?pwm_comp_output[i].read:~pwm_comp_output[i].read;
				end
				return temp_comp;
			endmethod
		endinterface;
		method Vector#(channels,Bit#(1)) sb_interrupt;
			Vector#(channels,Bit#(1)) temp;
			for(Integer i=0; i<valueOf(channels); i=i+1) begin
					temp[i]=interrupt[i].read;
			end
			return temp;
		endmethod
	endmodule:mkpwm

	//axi4lite
	interface Ifc_pwm_axi4lite#(numeric type addr_width, numeric type data_width, numeric type user_width, numeric type pwmwidth, numeric type channels);
		interface AXI4_Lite_Slave_IFC#(addr_width, data_width, user_width) slave;
		interface PWMIO#(channels) io;
    	method Vector#(channels,Bit#(1)) sb_interrupt;
	endinterface

	module mkpwm_axi4lite#(Clock ext_clock, Reset ext_reset)(Ifc_pwm_axi4lite#(addr_width,data_width,user_width, pwmwidth,channels))
		provisos(
				Add#(a__, pwmwidth, data_width),
				Add#(b__, 16, data_width),
				Mul#(16, c__, data_width),
				Mul#(pwmwidth, d__, data_width),
				Add#(e__,16,pwmwidth),
				Add#(f__, TAdd#(TLog#(TAdd#(channels, 1)), 4), addr_width)
				);
		User_ifc#(addr_width,data_width,pwmwidth,channels) pwm <-mkpwm(ext_clock, ext_reset);
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
	interface Ifc_pwm_axi4#(numeric type addr_width, numeric type data_width, numeric type user_width, numeric type pwmwidth,numeric type channels);
		interface AXI4_Slave_IFC#(addr_width,data_width,user_width)	slave;
		interface PWMIO#(channels) io;
    	method Vector#(channels,Bit#(1)) sb_interrupt;
	endinterface
	module mkpwm_axi4#(Clock ext_clock, Reset ext_reset)(Ifc_pwm_axi4#(addr_width,data_width,user_width, pwmwidth,channels))
		provisos(
				Add#(a__, pwmwidth, data_width),
				Add#(b__, 16, data_width),
				Mul#(16, c__, data_width),
				Mul#(pwmwidth, d__, data_width),
				Add#(e__,16,pwmwidth),
				Add#(f__, TAdd#(TLog#(TAdd#(channels, 1)), 4), addr_width)		
		);
		User_ifc#(addr_width,data_width,pwmwidth,channels) pwm <-mkpwm(ext_clock, ext_reset);
		AXI4_Slave_Xactor_IFC#(addr_width,data_width,user_width) s_xactor<-mkAXI4_Slave_Xactor();
		Reg#(Bit#(8)) rg_rdburst_count <- mkRegA(0);
		Reg#(Bit#(8)) rg_wrburst_count <- mkRegA(0);

		Reg#(AXI4_Rd_Addr#(addr_width,user_width)) rg_rdpacket <- mkRegA(?);
 		Reg#(AXI4_Wr_Addr#(addr_width,user_width)) rg_wrpacket <- mkRegA(?);


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
