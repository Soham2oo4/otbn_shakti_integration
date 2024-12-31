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

Author: Sadhana S	
Email id: sadhashan118@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
/*doc:overview:
GPIO is a general purpose input output i.e. the GPIO can be configured as either input or output and read or written with different values. 

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
package gpio;

`include "gpio.defines"

	/*==== Package imports ==== */
	import TriState          	::*;
	import Vector				::*;
	import BUtils				::*;	
	import ConfigReg			::*;
  import GetPut     ::*;
  import Clocks::*;
	/*===== Project Imports ===== */
	import Semi_FIFOF        :: *;
	import AXI4_Lite_Types   :: *;
	import AXI4_Lite_Fabric  :: *;
	import AXI4_Types 		 ::*;
	import AXI4_Fabric 		 ::*;
	import device_common	 ::*;
`ifdef IQC
	import iqc				 ::*;
`endif


	export Ifc_gpio_axi4lite   (..);
  export Ifc_gpio_axi4       (..);
  export User_ifc (..);
  export GPIO (..);
  export mkgpio_axi4;
  export mkgpio_axi4lite;

 	/*doc: interface: interface for GPIO module. Takes three methods. One for input, one for output and last one for output enable.  */
	 interface GPIO#(numeric type ionum);
		method Action gpio_in (Vector#(ionum,Bit#(1)) inp);
		method Vector#(ionum,Bit#(1))   gpio_out;
		method Vector#(ionum,Bit#(1))   gpio_out_en;
  endinterface
 	/*doc: interface: interface for GPIO axi user interface module. */
	 interface User_ifc#(numeric type addr_width, numeric type data_width,numeric type ionum);
//    (*always_ready,always_enabled*)
	// /*doc : subifc : subinterface which uses get method to pass interrupt to plic */
	// interface Get#(Vector#(ionum ,Bit#(1))) sb_gpio_to_plic;
	method Bit#(1) interrupt;
 	/*doc : subifc : subinterface which uses GPIO interface for configuring the GPIO and updates the values */
	 interface GPIO#(ionum) io;
		/*doc : method : method to receive write requests from AXI */
		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, AccessSize size);
		/*doc : method : method to receive read requests from AXI */
		method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width)addr,AccessSize size);
	endinterface

/*doc:module: GPIO module */
module mkgpio(User_ifc#(addr_width,data_width,ionum))
		provisos(
				Add#(a__,4,data_width),
				Add#(b__, data_width, 64),
        		Add#(c__, ionum, 64),
				Add#(d__, data_width, 32)
			);
			
	/* doc : vector : holds the GPIO ports direction configuration. If set, the corresponding port is configured as output else input. Vector length is equal to the number of IO ports required.*/
	Vector#(ionum ,ConfigReg#(Bool)) 	direction_reg		<-replicateM(mkConfigRegA(False));
	/* doc : vector : holds the GPIO ports data value. If set, the corresponding port value is 1 else 0. Vector length is equal to the number of IO ports required. */
	Vector#(ionum ,ConfigReg#(Bit#(1))) dataout_register	<-replicateM(mkConfigRegA(0));	

	/* doc : vector : holds the GPIO ports data value when configured as input. If set, the corresponding port value is 1 else 0. Vector length is equal to the number of IO ports required. */
		Vector#(ionum ,ConfigReg#(Bit#(1))) datain_register		<-replicateM(mkConfigRegA(0));
//		By default, GPIO sends only active high interrupts to PLIC, if
//		active_low interrupts are needed set the appropriate bit in
//		rg_interrupt_config register
	/* doc : vector : holds the GPIO ports interrupt polarity. If set, the corresponding interrupt port is configured as active low. else if the port is set to 0, the interrupt is configured as active high. By default the interrupts are active high. Vector length is equal to the number of IO ports required. */
	Vector#(ionum ,ConfigReg#(Bit#(1))) rg_interrupt_config <-replicateM(mkConfigRegA(0));
	/* doc : vector : holds the GPIO ports data value that is taken to the PLIC as interrupt. If set, the corresponding port's interrupt is taken to PLIC. Vector length is equal to the number of IO ports required. */
	Vector#(ionum ,ConfigReg#(Bit#(1))) toplic				<-replicateM(mkConfigRegA(0));
	
	`ifdef IQC
		/* doc : reg : holds the number of input qualification cycles needed to filter the unwanted noise glitches. Vector length is equal to the number of IO ports required. The max. number of cycles is 15. */
		Reg#(Bit#(4)) rg_qual_cycles <- mkRegA(0);
		Ifc_iqc#(ionum) gpio_input_qual <- mkiqc(rg_qual_cycles);
	`endif

 		let vionum = valueOf(ionum);
		let iocount = (vionum<32)?vionum:32;

	/*doc:rule: This rule fires always. The plic is given interrupt request whenever GPIO direction register is configured as input and interrupt configuration register is configured for active low(1)/high(0) and the data in register is low/high. */
	rule capture_interrupt;
			for(Integer i=0;i<vionum ;i=i+1)
				toplic[i]<=(!direction_reg[i])?(rg_interrupt_config[i]^datain_register[i]):0;
		endrule

 	/*doc: interface: interface for GPIO module. Takes three methods. One for input, one for output and last one for output enable.  */
	 interface io = interface GPIO#(ionum)
		/*doc : method : method to update the data in register with GPIO port input value after the programmed qualification cycles. */
		method Action gpio_in (Vector#(ionum,Bit#(1)) inp);
			`ifdef IQC
				let temp <- gpio_input_qual.qualify(pack(inp));
			`else
				let temp = pack(inp);
			`endif
				for(Integer i=0;i<vionum ;i=i+1)
			  		datain_register[i]<=temp[i];
			endmethod
		/*doc : method : method to output the values on the GPIO output port based on the value written into set, clear, data & toggle registers. */
		method Vector#(ionum,Bit#(1))   gpio_out;
			  	Vector#(ionum,Bit#(1)) temp;
			  	for(Integer i=0;i<vionum ;i=i+1)
			  		temp[i]=dataout_register[i];
			  	return temp;
			endmethod
		/*doc : method : method to enable/control the written values into GPIO output port based on the value of the direction register value. */
		method Vector#(ionum,Bit#(1))   gpio_out_en;
			  	Vector#(ionum,Bit#(1)) temp;
			  	for(Integer i=0;i<vionum ;i=i+1)
			  		temp[i]=pack(direction_reg[i]);
			  	return temp;
		  	endmethod
		endinterface;

		/*doc : method : method to receive write requests from AXI. Decodes the address value and writes the value into the corresponding register. */
		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, AccessSize size);

			Bool success=True;
			
			//this method is incorrect because it assumes that the data is always in the lower 8,16,32 bit of the data that is transfered,
			// thus we need a mechanism to shift the data in accordance and then pass the data
			//Bit#(32) temp_data=(size==Word)?truncate(data):(size==HWord)?zeroExtend(data[15:0]):(size==Byte)?zeroExtend(data[7:0]):0;

	    Bit#(32) mask=size==Byte?'hff:size==HWord?'hFFFF:'hFFFFFFFF;
	    Bit#(5) shift_amt=zeroExtend(addr[1:0])<<3;
	    mask=mask<<shift_amt;
	    Bit#(32) datamask=zeroExtend(data)&mask;


			if( addr[6:0]>=`dir_reg1 && addr[6:0]<`dir_reg2 )
				for(Integer i=0;i<iocount ;i=i+1)
					direction_reg[i]<=unpack(datamask[i]);
			else if( addr[6:0]>=`dir_reg2 && addr[6:0]<`dataout_reg1 )
			    for(Integer i=iocount;i<vionum ;i=i+1)
				    direction_reg[i]<=unpack(datamask[i-iocount]);
			else if(addr[6:0]>=`dataout_reg1  && addr[6:0]< `dataout_reg2 )
				for(Integer i=0;i<iocount ;i=i+1)
					dataout_register[i]<=datamask[i];
			else if(addr[6:0]>=`dataout_reg2  && addr[6:0]< `set_data1 )
				for(Integer i=iocount;i<vionum ;i=i+1)
					dataout_register[i]<=datamask[i-iocount];
			else if( addr[6:0] >= `set_data1 && addr[6:0] < `set_data2)
				for(Integer i=0;i<iocount; i=i+1) begin
					dataout_register[i] <= dataout_register[i] | datamask[i];
				end
			else if( addr[6:0] >= `set_data2 && addr[6:0] < `clear_data1)
				for(Integer i=iocount;i<vionum; i=i+1) begin
					dataout_register[i] <= dataout_register[i] | datamask[i-iocount];
				end
			else if( addr[6:0] >= `clear_data1 && addr[6:0] < `clear_data2)
				for(Integer i=0;i<iocount; i=i+1) begin
					dataout_register[i] <= dataout_register[i] & ~datamask[i];
				end
			else if( addr[6:0] >= `clear_data2 && addr[6:0] < `toggle_data1)
				for(Integer i=iocount;i<vionum; i=i+1) begin
					dataout_register[i] <= dataout_register[i] & ~datamask[i-iocount];
				end
			else if( addr[6:0] >= `toggle_data1 && addr[6:0] < (`toggle_data2))
				for(Integer i=0;i<iocount; i=i+1) begin
					dataout_register[i] <= dataout_register[i] ^ datamask[i];
				end
			else if( addr[6:0] >= `toggle_data2 && addr[6:0] < (`toggle_data2 + 4))
				for(Integer i=iocount;i<vionum; i=i+1) begin
					dataout_register[i] <= dataout_register[i] ^ datamask[i-iocount];
				end
		`ifdef IQC
			else if( addr[6:0] == `input_qual && size == Byte)
				rg_qual_cycles <= truncate(data);
		`endif
			else if( addr[6:0] >= `intr_config1 && addr[6:0] < (`intr_config2))
				for(Integer i=0; i<iocount; i=i+1)
					rg_interrupt_config[i] <= datamask[i];
			else if( addr[6:0] >= `intr_config2 && addr[6:0] < (`intr_config2 + 4))
				for(Integer i=iocount; i<vionum; i=i+1)
					rg_interrupt_config[i] <= datamask[i-iocount];
			else if( addr[6:0] >= `intr_status_reg1 && addr[6:0] < (`intr_status_reg2))
				for(Integer i=0;i<iocount;i=i+1)
						toplic[i] <= toplic[i]^datamask[i];
			else if( addr[6:0] >= `intr_status_reg2 && addr[6:0] < (`intr_status_reg2 + 4))
				for(Integer i=iocount;i<vionum;i=i+1)
						toplic[i] <= toplic[i]^datamask[i-iocount];
			else
				success=False;
			return success;	
		endmethod

		/*doc : method : method to process receive/read requests from AXI. Decodes the address value and reads the value and return it to AXI interface. */
		method ActionValue#(Tuple2#(Bool, Bit#(data_width))) read_req (Bit#(addr_width) addr, AccessSize size);

			let dvalue=valueOf(data_width);
			Bool success= True;
			Bit#(data_width) data=0;
			Bit#(5) shift_amt=zeroExtend(addr[1:0])<<3;//generating the shift amount
			Bit#(32) temp =0;//parameterised
			
			if( addr[6:0]>=`dir_reg1 && addr[6:0]<`dir_reg2 )
				for(Integer i=0;i<iocount ;i=i+1)
					temp[i]=pack(direction_reg[i]);
			else if( addr[6:0]>=`dir_reg2 && addr[6:0]<`dataout_reg1 )
			    for(Integer i=iocount;i<vionum ;i=i+1)
					temp[i-iocount]=pack(direction_reg[i]);
			else if(addr[6:0]>=`dataout_reg1  && addr[6:0]< `dataout_reg2 )
				for(Integer i=0;i<iocount ;i=i+1)
					temp[i]=datain_register[i];
			else if(addr[6:0]>=`dataout_reg2  && addr[6:0]< `set_data1 )
				for(Integer i=iocount;i<vionum ;i=i+1)
					temp[i-iocount]=datain_register[i];
		`ifdef IQC
			else if( addr[6:0] == `input_qual && size == Byte)
				temp = zeroExtend(rg_qual_cycles);
		`endif
			else if( addr[6:0] >= `intr_config1 && addr[6:0] < (`intr_config2))
				for(Integer i=0; i<iocount; i=i+1)
					temp[i] = rg_interrupt_config[i];
			else if( addr[6:0] >= `intr_config2 && addr[6:0] < (`intr_config2 + 4))
				for(Integer i=iocount; i<vionum; i=i+1)
					temp[i-iocount] = rg_interrupt_config[i];
			else if( addr[6:0] >= `intr_status_reg1 && addr[6:0] < (`intr_status_reg2))
				for(Integer i=0;i<iocount;i=i+1)
						temp[i] = toplic[i];
			else if( addr[6:0] >= `intr_status_reg2 && addr[6:0] < (`intr_status_reg2 + 4))
				for(Integer i=iocount;i<vionum;i=i+1)
						temp[i-iocount] = toplic[i];
			else
				success=False;

			// shifting temp to get the required byte to the lowest position				
			temp = temp>>shift_amt;	
			if(size==Byte && dvalue%8==0)
       			temp=duplicate(temp[7:0]);
       		if(size==HWord && dvalue%16==0)
       			temp=duplicate(temp[15:0]);
       		else if(size==Word && dvalue%32==0)
       			temp=duplicate(temp[31:0]);

      		data=truncate(temp);
			return tuple2(success,data);
		endmethod

	// 	/*doc : interface : interface to interrupt the PLIC gateway with GPIO port interrupt. has method which returns action value of returning the interrupt value of vecton of length ionum. */
	// 	interface sb_gpio_to_plic = interface Get
    //   method ActionValue#(Vector#(ionum ,Bit#(1))) get;
    //     Vector#(ionum,Bit#(1)) temp=readVReg(toplic);
    //     return temp;
    //   endmethod
    // endinterface;
	method Bit#(1) interrupt;
		Bit #(1) intr = 0;
		for(Integer i=0;i<vionum;i=i+1)
			intr = intr | toplic[i];
		return intr;
	endmethod
	endmodule:mkgpio

		/*doc : interface : GPIO axi4lite interface using AXI4lite . */
	interface Ifc_gpio_axi4lite#(numeric type addr_width, numeric type data_width, numeric type user_width,numeric type ionum);
		/*doc : subifc : subinterface for AXI4lite slave interface. */
		interface AXI4_Lite_Slave_IFC#(addr_width, data_width,user_width) slave;
//    (*always_ready,always_enabled*)
		// /*doc : subifc : subinterface for getting interrupt to PLIC. */
		// interface Get#(Vector#(ionum ,Bit#(1))) sb_gpio_to_plic;
		/*doc : subifc : subinterface configure and control GPIO.. */
    	interface GPIO#(ionum) io;
		method Bit#(1) interrupt;
	endinterface

/*doc:module: gpio AXI4lite module. This module is accessed from soc level and has complete control and configuring and accessing the GPIO port from AXI4lite interface of core. */
module mkgpio_axi4lite `ifdef testmode #(Bool test_mode) `endif (Ifc_gpio_axi4lite#(addr_width,data_width,user_width,ionum))
		provisos(
				Add#(a__,4,data_width),
				Add#(b__, data_width, 64),
        		Add#(c__, ionum, 64),
        		Add#(d__, 1, data_width),
        		Mul#(8, e__, data_width),
				Add#(f__, data_width, 32)
			);
		Reset core_reset<-exposeCurrentReset;
		GatedClockIfc gpio_clk_gated <- mkGatedClockFromCC(False);
		Reset gpio_internal_reset <- mkAsyncReset(2,core_reset,gpio_clk_gated.new_clk);
		User_ifc#(addr_width,data_width,ionum) gpio <-mkgpio(clocked_by gpio_clk_gated.new_clk, reset_by gpio_internal_reset);
		AXI4_Lite_Slave_Xactor_IFC#(addr_width,data_width,user_width)  s_xactor <- mkAXI4_Lite_Slave_Xactor();
		Reg#(bit) rg_clk_en <- mkRegA(0);
		
		
	rule clock_en;    
	       gpio_clk_gated.setGateCond(unpack(rg_clk_en));	         
	endrule

	/*doc:rule: This rule fires whenever write request from core of the AXI4lite is raised.  Configures the internal registers of GPIO through AXI4.*/
	rule write_request;
			Bool succ = False;
       		let addreq <- pop_o(s_xactor.o_wr_addr);
       		let datareq <- pop_o(s_xactor.o_wr_data);
       		if (addreq.awaddr[6:0] == `GPIO_Clk_en && addreq.awsize == 0) begin 
       		    rg_clk_en <= truncate(datareq.wdata); 
       		     succ = True;
       		 end 
       		 else begin 
			
			succ <- gpio.write_req(addreq.awaddr, datareq.wdata,unpack(truncate(addreq.awsize)));
		end
		  let ls = AXI4_Lite_Wr_Resp {bresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: addreq.awuser};
		  s_xactor.i_wr_resp.enq (ls);			
		endrule

	/*doc:rule: This rule fires whenever read request from core of the AXI4lite is raised.  Reads the internal registers of GPIO through AXI4 and the returns the value to AXI4lite interface along with response status.*/
	rule read_request;
			let req <- pop_o(s_xactor.o_rd_addr);
			Bool succ = False;
		        Bit#(data_width) data = 0 ; 
	       if (req.araddr[6:0] == `GPIO_Clk_en && req.arsize == 0) begin 
		           succ = True; 
		           data = duplicate({7'b0,rg_clk_en});  	         
	         end 
	          else begin
			{succ,data}<- gpio.read_req(req.araddr,unpack(truncate(req.arsize)));
		end
			let resp= AXI4_Lite_Rd_Data {rresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, 
                                    rdata:data, ruser: ?};
	  		s_xactor.i_rd_data.enq(resp);
		endrule
	 	interface slave = s_xactor.axi_side;
    // interface sb_gpio_to_plic=gpio.sb_gpio_to_plic;
	method interrupt = gpio.interrupt;
    interface io = gpio.io;
	endmodule:mkgpio_axi4lite


		/*doc : interface : GPIO axi4 interface using AXI4. */
		interface Ifc_gpio_axi4#(numeric type addr_width, numeric type data_width,numeric type user_width, numeric type ionum);
			/*doc : subifc : subinterface for AXI4 slave interface. */
			interface AXI4_Slave_IFC#(addr_width,data_width,user_width) slave;
		// /*doc : subifc : subinterface for getting interrupt to PLIC. */
		// interface Get#(Vector#(ionum ,Bit#(1))) sb_gpio_to_plic;
		method Bit#(1) interrupt;
		/*doc : subifc : subinterface configure and control GPIO.. */
		interface GPIO#(ionum) io;
	endinterface

/*doc:module: gpio AXI4 module. This module is accessed from soc level and has complete control and configuring and accessing the GPIO port from AXI4 interface of core. */
module mkgpio_axi4(Ifc_gpio_axi4#(addr_width, data_width,user_width,ionum))
		provisos(
				Add#(a__,4,data_width),
				Add#(b__, data_width, 64),
        		Add#(c__, ionum, 64),
				Add#(d__, data_width, 32)
			);

		User_ifc#(addr_width,data_width,ionum) gpio <- mkgpio;
		AXI4_Slave_Xactor_IFC#(addr_width,data_width,user_width) s_xactor <- mkAXI4_Slave_Xactor();
		
		Reg#(Bit#(8)) rg_rdburst_count <- mkRegA(0);
		Reg#(Bit#(8)) rg_wrburst_count <- mkRegA(0);
		Reg#(AXI4_Rd_Addr#(addr_width,user_width)) rg_rdpacket <- mkRegA(?);
 		Reg#(AXI4_Wr_Addr#(addr_width,user_width)) rg_wrpacket <- mkRegA(?);	

	/*doc:rule: This rule fires whenever write request from core of the AXI4lite is raised.  Configures the internal registers of GPIO through AXI4. Fires when burst count is equal to zero.*/
	rule write_request(rg_wrburst_count==0);
			let addreq <- pop_o (s_xactor.o_wr_addr);
			let datareq  <- pop_o (s_xactor.o_wr_data);

		 	rg_wrpacket<=addreq;	

			let succ <- gpio.write_req(addreq.awaddr, datareq.wdata,unpack(truncate(addreq.awsize)));
			if(addreq.awlen!=0)
				rg_wrburst_count <=1;
		   	let ls = AXI4_Wr_Resp {bresp:succ?AXI4_OKAY:AXI4_SLVERR, buser: addreq.awuser, bid: addreq.awid};
		   	s_xactor.i_wr_resp.enq (ls);			
		endrule

	/*doc:rule: This rule fires whenever write request from core of the AXI4 is raised.  Configures the internal registers of GPIO through AXI4. Fires when burst count is not equal to zero.*/
	rule write_burst_request(rg_wrburst_count!=0);
			let addreq=rg_wrpacket;
			let datareq <-pop_o(s_xactor.o_wr_data);
	 		Bool succ=False;
	 		let resp = AXI4_Wr_Resp {bresp: succ?AXI4_SLVERR:AXI4_OKAY, buser: addreq.awuser, bid:addreq.awid};
			if(datareq.wlast)begin
	      		s_xactor.i_wr_resp.enq(resp);//enqueuing the write response
	      		rg_wrburst_count<=0;
	      	end
		endrule

	/*doc:rule: This rule fires whenever read request from core of the AXI4 is raised.  Reads the internal registers of GPIO through AXI4 and the returns the value to AXI4 interface along with response status. Fires on burst count is equal to zero.*/
	rule read_request(rg_rdburst_count==0);
			let req <- pop_o(s_xactor.o_rd_addr);

			rg_rdpacket<=req;

			let {succ,data}<- gpio.read_req(req.araddr,unpack(truncate(req.arsize)));

			if(req.arlen!=0)
				rg_rdburst_count<=1;

			let resp= AXI4_Rd_Data {rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:req.arid,rlast:(req.arlen==0),rdata:data, ruser: ?};
	  		s_xactor.i_rd_data.enq(resp);
		endrule

	/*doc:rule: This rule fires whenever read request from core of the AXI4lite is raised.  Reads the internal registers of GPIO through AXI4 and the returns the value to AXI4 interface along with response status. Fires when burst count is not equal to zero.*/
	rule read_burst_request(rg_rdburst_count!=0);
			let rd_req=rg_rdpacket;
			let {succ,data}<-gpio.read_req(rd_req.araddr,unpack(truncate(rd_req.arsize)));
			succ=False;
			if(rg_rdburst_count==rd_req.arlen)
				rg_rdburst_count<=0;
			else
				rg_rdburst_count<=rg_rdburst_count+1;
			let resp= AXI4_Rd_Data{rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:rd_req.arid,rlast:(rd_req.arlen==0),rdata:data, ruser: ?};
			s_xactor.i_rd_data.enq(resp);

		endrule
	 	interface slave = s_xactor.axi_side;
    // interface sb_gpio_to_plic=gpio.sb_gpio_to_plic;
	method interrupt = gpio.interrupt;
    interface io = gpio.io;
	endmodule:mkgpio_axi4
endpackage:gpio
