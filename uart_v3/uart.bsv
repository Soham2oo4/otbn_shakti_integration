/* 
Copyright (c) 2018, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and/or other materials provided 
 with the distribution.  
* Neither the name of IIT Madras nor the names of its contributors may be used to endorse or 
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

Author : Arjun Menon
Email id : c.arjunmenon@gmail.com
Details: Uart with following features:
          -> Programmable character size, stop bits, parity
          -> Status registers and programmable inteerrupts for break error, frame error, overrun
             and parity error.
          -> Output enable signal with programmable delay

--------------------------------------------------------------------------------------------------
*/
package uart;
	`include "Logger.bsv"       // for logging display statements.
  `include "uart.defines"

	import AXI4_Lite_Types::*;
	import AXI4_Lite_Fabric::*;
	import AXI4_Types::*;
	import AXI4_Fabric::*;
	import Semi_FIFOF::*;
	import RS232_modified::*;
	import GetPut::*;
	import FIFO::*;
	import Clocks::*;
	import BUtils::*;
  import device_common::*;
	import ConcatReg				 ::*;
`ifdef IQC
  import iqc::*;
`endif

  export RS232             (..);
  export Ifc_uart_axi4lite (..);
  export Ifc_uart_axi4     (..);
  export UserInterface     (..);
  export mkuart_axi4lite;
  export mkuart_axi4;
  export mkuart_user;

	interface UserInterface#(numeric type addr_width ,numeric type data_width,  numeric type depth);
		method ActionValue#(Tuple2#(Bit#(data_width),Bool)) read_req (Bit#(addr_width) addr, 
																									AccessSize size);
		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, 
																									AccessSize size);
//		(*always_ready, always_enabled*)
    interface RS232 io;
//		(*always_ready, always_enabled*)
	  method Bit#(1) interrupt;
	endinterface

	module mkuart_user#(parameter Bit#(16) baudrate, Bit#(2) stopbits, Bit#(2) parity)
      (UserInterface#(addr_width,data_width, depth))
      provisos(Mul#(32, a__, data_width),
              Add#(d__, 8, data_width),    
              Mul#(8, b__, data_width),
              Mul#(4, f__, data_width),
              Add#(c__, 32, data_width), 
              Add#(g__, 16, data_width), 
              Mul#(16, h__, data_width),
							Add#(i__, 9, data_width),
              Add#(2, e__, depth),
              Add#(j__, TLog#(TAdd#(depth, 1)), 8),
              Add#(k__, TLog#(TAdd#(depth, 1)), data_width),
			  Add#(l__, 1, data_width)
);

		Reg#(Bit#(16)) baud_value <- mkRegA(baudrate);
    	Reg#(Bit#(16)) rg_delay_control <- mkRegA(0);
		Reg#(StopBits) rg_stopbits <- mkRegA(unpack(stopbits));
	        Reg#(Bit#(5))  rg_modem    <- mkRegA(30);
		Reg#(Bit#(1))  auto_rts    <- mkRegA(0);
		Reg#(Parity)   rg_parity   <- mkRegA(unpack(parity));
		Reg#(Bit#(6))  rg_charsize <- mkRegA(8);
		Reg#(Bit#(1))  rg_stickparity <- mkRegA(0);
  `ifdef IQC
    Reg#(Bit#(8)) rg_qual_cycles <- mkRegA(0);
    Ifc_iqc#(1) iqc <- mkiqc(rg_qual_cycles);
  `endif
    Reg#(UInt#(TLog#(TAdd#(depth,1)))) rg_rx_threshold <- mkRegA(unpack('1)*4/5);

		//Reg#(Bit#(9)) rg_control= concatReg3(rg_charsize, rg_parity, rg_stopbits);
/* Instantiating a UART module with the respective parameters */
		UART#(depth) uart <-mkUART(auto_rts,rg_modem,rg_charsize, rg_parity, rg_stopbits, baud_value, rg_delay_control,rg_stickparity); // charasize,Parity,Stop Bits,BaudDIV, Delay_control
		Reg#(Bit#(16)) rg_interrupt_en <-mkRegA(0);
/* Combines all the status bits into one complete status register */
    let status= { uart.modem_status[7:1],uart.error_status, pack(uart.receiver_full), pack(uart.receiver_not_empty),
                  pack(uart.transmittor_full), pack(uart.transmittor_empty) }; //Remember uart.modem_status[0]
    /* Sends the value in the threshold register for every instance so that it is verifed if threshold is reached. */
    rule rl_send_rx_threshold;
      uart.rx_threshold(rg_rx_threshold);
    endrule
    /* If Loopback is enabled connects the transmitter section and the receiver section together */
    rule rl_loopback(rg_modem[0]==1'b1);
         uart.rs232.sin(uart.rs232.sout);
         uart.rs232.cts(uart.rs232.rts);
         uart.rs232.dsr(uart.rs232.dtr);
         uart.rs232.ri(uart.rs232.out1);
         uart.rs232.dcd(uart.rs232.out2);
         //the MODEM Control output pins are forced to their inactive state (high).
    endrule

   /* Used for reading  data from the respective register by using its address */
		method ActionValue#(Tuple2#(Bit#(data_width),Bool)) read_req (Bit#(addr_width) addr, 
	AccessSize size);
      /* Returns the status register's data */
      if( addr[5:0]==`StatusReg && size==HWord)begin
        return tuple2(duplicate(status),True);
      end      
      /* Returns the receiver register's data if data is present and DCD, RI , DSR and CTS are active */
			else if(addr[5:0]==`RxReg) begin
				Bit#(32) data =0;
				if(uart.receiver_not_empty && uart.modem_status[3:0] == 4'b1111)
					data<-uart.tx.get; 
		`logLevel( uart, 1, $format("UART read data: %h %c", data, data))
		data= data >> (32-rg_charsize);
				return tuple2(duplicate(data),True);
			end
       /* Returns the control register's data */
			else if(addr[5:0]==`ControlReg) begin
				return tuple2(duplicate({14'b0,uart.modem_status[0],auto_rts,rg_modem,rg_charsize, pack(rg_parity), pack(rg_stopbits), rg_stickparity}),True);
			end
			/* Returns the baud register's data */
			else if(addr[5:0]==`BaudReg) begin
				return tuple2(duplicate(baud_value),True);
			end
      /* Returns the delay register's data */
      else if(addr[5:0]==`DelayReg && size==HWord) begin
				return tuple2(duplicate(rg_delay_control),True);
      end
      /* Returns the interrupt enable register's data */
      else if(addr[5:0]==`InterruptEn && size==HWord) begin
				return tuple2(duplicate(rg_interrupt_en), True);
      end
     /* If Input Qualification Cycles are implemented returns the qualification register's value */
    `ifdef IQC
      else if(addr[5:0]==`IQ_cycles && size==Byte) begin
				return tuple2(duplicate(rg_qual_cycles), True);
      end
    `endif
      /* Returns the  threshold register's data */
      else if(addr[5:0]==`RX_Threshold && size==Byte) begin
        Bit#(8) lv1= zeroExtend(pack(rg_rx_threshold));
				return tuple2(duplicate(lv1), True);
      end
			else
				return tuple2(?,False);
		endmethod
                /*  Used for writing data from the respective register by using its address  */
		method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, 
																									AccessSize size);	
			/* Call the put method of the TX Register using the data . */																				
			if(addr[5:0]==`TxReg) begin
				uart.rx.put(truncate(data));//putting write data in the UART
        `logLevel( uart, 0, $format("Sending ASCII: %c", data[7:0]))
				return True;
			end
			/* Write the baud value from the input data */																
			else if(addr[5:0]==`BaudReg && size==HWord) begin
				baud_value<=truncate(data);
				return True;
			end
			/* Write the delay register value from the input data. */																				
			else if(addr[5:0]==`DelayReg && size==HWord) begin
				rg_delay_control<=truncate(data);
				return True;
			end
		        /* Write the individual controls parts from the input data. */																				
			else if(addr[5:0]==`ControlReg) begin
				auto_rts<= data[16];
				rg_modem<= data[15:11];
				rg_charsize<= data[10:5];
				rg_parity<= unpack(data[4:3]);
				rg_stopbits<= unpack(data[2:1]);
				rg_stickparity<= data[0];
				//rg_control<= truncate(data);
				return True;
			end
      /* Write the interrupt enable register value from the input data. */																				
      else if(addr[5:0]==`InterruptEn && size==HWord) begin
				rg_interrupt_en<= {6'd0, data[9:0]};
				return True;
			end
      /* Clears the status register value based on the input data. */																				
      else if(addr[5:0]==`StatusReg && size==HWord) begin
        Bit#(12) clear_status_errors= data[15:4];
        uart.clear_status(clear_status_errors);
        return True;
      end
     /* If Input Qualification Cycles are implemented writes the qualification register's value from the input data */
    `ifdef IQC
      else if(addr[5:0]==`IQ_cycles && size==Byte) begin
        rg_qual_cycles<= truncate(data);
				return True;
      end
    `endif
      /* Clears the transmitter and receiver FIFOs based on the bits set and writes the Receiver Threshold value. */																				
      else if(addr[5:0]==`RX_Threshold && size==Byte) begin
        if(data[7] == 1'b1)
        begin
        uart.transmittor_clear;
        uart.receiver_clear;
        end
        else
        begin
        if(data[5] == 1'b1)
           uart.transmittor_clear;
        if(data[6] == 1'b1)
           uart.receiver_clear;
        end
        rg_rx_threshold<= unpack(truncate(data));
				return True;
      end
			else
				return False;
		endmethod
	
	  interface RS232 io;
      /* Receives data from any other UART compatible device to our UART. */
      method Action sin(Bit#(1) x);
      `ifdef IQC
        let lv_qualified_inputs<- iqc.qualify(x);
      `else
        let lv_qualified_inputs=x;
      `endif
        uart.rs232.sin(lv_qualified_inputs);
      endmethod
      /* Sends out data from the UART to the other UART compatible device. */
      method sout= uart.rs232.sout;
      method sout_en= uart.rs232.sout_en;
      /*Clear To Send pin is an input pin which takes in a signal to a modem and decides if it is ready to receive data
      depending upon the same */
      method    Action      cts(Bit#(1) x);
		uart.rs232.cts(x);
      endmethod
      /* Data Set Ready pin is an input pin which takes in a signal to a modem and decides if it can expect incoming data
      for reception.  */
      method    Action     dsr(Bit#(1) x);
		uart.rs232.dsr(x);
      endmethod
      /*Ring Indicator pin is an input pin which takes in a signal to a modem and decides if it can expect incoming data
      for reception. */
      method    Action      ri(Bit#(1) x);
		uart.rs232.ri(x);
      endmethod
      /*Data Carrier Detect pin is an input pin which takes in a signal to a modem and decides if it can expect incoming 
      data for reception. */
      method    Action      dcd(Bit#(1) x);
		uart.rs232.dcd(x);
      endmethod
      /* Request to Send is an output pin which gives out a signal to a modem to start sending data. */
      method    Bit#(1)     rts();
		return uart.rs232.rts();
      endmethod
      /* Data Terminal Ready is an output pin which gives out a signal to a modem that it is ready to receive data. */
      method    Bit#(1)     dtr();
		return uart.rs232.dtr();
      endmethod   
      /* Both OUT1 and OUT2 are ordinary output pins used to store arbitrary outputs. */
      method    Bit#(1)     out1();
		return uart.rs232.out1();
      endmethod   
      method    Bit#(1)     out2();
                return uart.rs232.out2();
      endmethod
	  method Bit#(2) dma_ready;
		return uart.rs232.dma_ready;
	endmethod
    endinterface
		method Bit#(1) interrupt;
		/* If Modem Status Interrupt is enabled and either DCTS,DDSR,DDCD,and TERI are enabled send interrupt */
				if(uart.modem_status[7:4] != 4'b0000 && rg_interrupt_en[9] == 1) 
					return 1;
	        /* If any other interrupt as well as the status is enabled return 1 */
				else
					return |(status[8:0] & rg_interrupt_en[8:0]);
		endmethod

	endmodule:mkuart_user

	interface Ifc_uart_axi4lite#(numeric type addr_width, 
                               numeric type data_width, 
                               numeric type user_width, 
                               numeric type depth);
		(*prefix=""*) interface AXI4_Lite_Slave_IFC#(addr_width, data_width, user_width) slave; 
//		(*always_ready, always_enabled*)
	  (*prefix=""*) interface RS232 io;
//		(*always_ready, always_enabled*)
		(*prefix=""*) method Bit#(1) interrupt;
  endinterface

	module mkuart_axi4lite#(Clock uart_clock, Reset uart_reset, parameter Bit#(16) baudrate,
                          parameter Bit#(2) stopbits, parameter Bit#(2) parity `ifdef testmode ,Bool test_mode `endif )
																			(Ifc_uart_axi4lite#(addr_width,data_width,user_width, depth))
	// same provisos for the uart
    provisos(Mul#(32, a__, data_width),
              Add#(d__, 8, data_width),    
              Mul#(8, b__, data_width),
              Mul#(4, f__, data_width),
              Add#(c__, 32, data_width), 
              Add#(g__, 16, data_width), 
              Mul#(16, h__, data_width),
							Add#(i__, 9, data_width),
              Add#(2, e__, depth),
              Add#(j__, TLog#(TAdd#(depth, 1)), 8),
              Add#(k__, TLog#(TAdd#(depth, 1)), data_width),
			  Add#(l__, 1, data_width)
);

		Clock core_clock<-exposeCurrentClock;
		Reset core_reset<-exposeCurrentReset;
		AXI4_Lite_Slave_Xactor_IFC#(addr_width,data_width,user_width)  s_xactor <- mkAXI4_Lite_Slave_Xactor();
		Reset uart_rst                   <- mkAsyncReset(2,core_reset,uart_clock);    // div rst
		GatedClockIfc   uart_clk_gated                   <- mkGatedClock(False,uart_clock, clocked_by uart_clock, reset_by uart_rst); 	
		Reset uart_internal_reset <- mkAsyncReset(2,uart_reset,uart_clk_gated.new_clk);
		UserInterface#(addr_width,data_width, depth) user_ifc<- mkuart_user(clocked_by uart_clk_gated.new_clk, 
                                                                    reset_by uart_internal_reset, baudrate,
                                                                    stopbits, parity);
		Reg#(bit) rg_clk_en <- mkRegA(0);
		SyncBitIfc#(bit) sync_rg_clk_en <- mkSyncBit(core_clock, core_reset, uart_clock);
			
		rule clock_en;    
			uart_clk_gated.setGateCond(unpack(sync_rg_clk_en.read));	         
		endrule
		
		rule clk_enable_send;
                	sync_rg_clk_en.send(rg_clk_en); 
             	endrule
             	
		`ifdef fast_clk
			//capturing the read requests
			rule capture_read_request;
				let req <- pop_o(s_xactor.o_rd_addr);
			Bool succ = False;
		        Bit#(data_width) data = 0 ; 
	       if (req.araddr[6:0] == `UART_Clk_en && req.arsize == 0) begin 
		           succ = True; 
		           data = duplicate({7'b0,rg_clk_en});  	         
	         end 
	          else begin
			{data, succ}<- user_ifc.read_req(req.araddr,unpack(truncate(req.arsize)));
			end
			let resp= AXI4_Lite_Rd_Data {rresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, 
                                    rdata:data, ruser: ?};
	  		s_xactor.i_rd_data.enq(resp);
			endrule              
			(*conflict_free = "io_dcd,capture_write_request"*)
			(*conflict_free = "io_ri,capture_write_request"*)
			(*conflict_free = "io_dsr,capture_write_request"*)
			(*conflict_free = "io_cts,capture_write_request"*)
			(*conflict_free = "user_ifc_rl_loopback,capture_write_request"*)
			(*conflict_free = "io_dcd,user_ifc_rl_loopback"*)
			(*conflict_free = "io_ri,user_ifc_rl_loopback"*)
			(*conflict_free = "io_dsr,user_ifc_rl_loopback"*)
			(*conflict_free = "io_cts,user_ifc_rl_loopback"*)
			// capturing write requests
			rule capture_write_request;
				Bool succ = False;
       		let addreq <- pop_o(s_xactor.o_wr_addr);
       		let datareq <- pop_o(s_xactor.o_wr_data);
       		if (addreq.awaddr[6:0] == `UART_Clk_en && addreq.awsize == 0) begin 
       		    rg_clk_en <= truncate(datareq.wdata); 
       		     succ = True;
       		 end 
       		 else begin 
				succ <- user_ifc.write_req(addreq.awaddr, datareq.wdata,unpack(truncate(addreq.awsize)));
			end
		  let ls = AXI4_Lite_Wr_Resp {bresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: addreq.awuser};
		  s_xactor.i_wr_resp.enq (ls);	
			endrule
			interface slave = s_xactor.axi_side;
			interface io= user_ifc.io;
			method interrupt= user_ifc.interrupt;
		`endif
		SyncFIFOIfc#(AXI4_Lite_Rd_Addr#(addr_width,user_width)) ff_rd_request        <-  mkSyncFIFOFromCC(3,uart_clk_gated.new_clk);
		SyncFIFOIfc#(AXI4_Lite_Wr_Addr#(addr_width,user_width)) ff_wr_request        <-  mkSyncFIFOFromCC(3,uart_clk_gated.new_clk);
		SyncFIFOIfc#(AXI4_Lite_Wr_Data#(data_width))            ff_wdata_request     <-  mkSyncFIFOFromCC(3,uart_clk_gated.new_clk);
		SyncFIFOIfc#(AXI4_Lite_Rd_Data#(data_width,user_width)) ff_rd_response       <-  mkSyncFIFOToCC(3,uart_clk_gated.new_clk,uart_internal_reset);
		SyncFIFOIfc#(AXI4_Lite_Wr_Resp#(user_width))            ff_wr_response       <-  mkSyncFIFOToCC(3,uart_clk_gated.new_clk,uart_internal_reset);
		
			//capturing the read requests
			rule capture_read_request;   
				let rd_req <- pop_o (s_xactor.o_rd_addr);
				Bool succ = False;
				Bit#(data_width) rdata = 0 ;
				if (rd_req.araddr[7:0] == `UART_Clk_en  && rd_req.arsize == 0) begin	 
					succ = True; 
					rdata = duplicate({7'b0,rg_clk_en}); 
					let lv_resp= AXI4_Lite_Rd_Data {rresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, 
																rdata: rdata, ruser: ?}; //TODO user?
					s_xactor.i_rd_data.enq(lv_resp);//sending back the response
						end 
					else if(rg_clk_en == 1) begin 
						ff_rd_request.enq(rd_req); end  //core domain 
					else begin
					let lv_resp= AXI4_Lite_Rd_Data {rresp: AXI4_LITE_SLVERR, 
																rdata: rdata, ruser: ?}; //TODO user?
					s_xactor.i_rd_data.enq(lv_resp);//sending back the response
					end
			endrule

			rule perform_read; 
				let rd_req = ff_rd_request.first;   //peripheral domain  
				ff_rd_request.deq;
				let {rdata,succ} <- user_ifc.read_req(rd_req.araddr,unpack(truncate(rd_req.arsize)));
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
			if (wr_req.awaddr[7:0] == `UART_Clk_en && wr_req.awsize == 0) begin 
				rg_clk_en <= truncate(wr_data.wdata); 
				succ = True;
				let lv_resp = AXI4_Lite_Wr_Resp {bresp: succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: ?};
					s_xactor.i_wr_resp.enq(lv_resp);
				end 
				else if(rg_clk_en == 1) begin 
				ff_wr_request.enq(wr_req);
				ff_wdata_request.enq(wr_data); end 
				else begin
				let lv_resp = AXI4_Lite_Wr_Resp {bresp: AXI4_LITE_SLVERR, buser: ?};
					s_xactor.i_wr_resp.enq(lv_resp);
				end
			endrule

			rule perform_write;   // peripheral domain 
				let wr_req  = ff_wr_request.first;
				let wr_data = ff_wdata_request.first;
				
				let succ <- user_ifc.write_req(wr_req.awaddr,wr_data.wdata,unpack(wr_req.awsize));
				let lv_resp = AXI4_Lite_Wr_Resp {bresp: succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: ?};
				ff_wr_response.enq(lv_resp);
				ff_wr_request.deq;
				ff_wdata_request.deq;
			endrule

			rule send_write_response; // core domain
				ff_wr_response.deq;
				s_xactor.i_wr_resp.enq(ff_wr_response.first);//enqueuing the write response
			endrule
		
	SyncBitIfc#(Bit#(1)) sync_rts <- mkSyncBit(uart_clk_gated.new_clk, uart_internal_reset,  core_clock);
	SyncBitIfc#(Bit#(1)) sync_dtr <- mkSyncBit(uart_clk_gated.new_clk, uart_internal_reset,  core_clock);
	SyncBitIfc#(Bit#(1)) sync_out1 <- mkSyncBit(uart_clk_gated.new_clk, uart_internal_reset,  core_clock);
	SyncBitIfc#(Bit#(1)) sync_out2 <- mkSyncBit(uart_clk_gated.new_clk, uart_internal_reset,  core_clock);
	SyncBitIfc#(Bit#(1)) sync_dma_ready0 <- mkSyncBit(uart_clk_gated.new_clk, uart_internal_reset,  core_clock);
	SyncBitIfc#(Bit#(1)) sync_dma_ready1 <- mkSyncBit(uart_clk_gated.new_clk, uart_internal_reset,  core_clock);
	SyncBitIfc#(Bit#(1)) sync_sout <- mkSyncBit(uart_clk_gated.new_clk, uart_internal_reset,  core_clock);
	SyncBitIfc#(Bit#(1)) sync_sout_en <- mkSyncBit(uart_clk_gated.new_clk, uart_internal_reset,  core_clock);
	SyncBitIfc#(Bit#(1)) sync_interrupt <- mkSyncBit(uart_clk_gated.new_clk, uart_internal_reset,  core_clock);
	SyncBitIfc#(Bit#(1)) sync_sin <- mkSyncBit(core_clock, core_reset,  uart_clk_gated.new_clk);
	SyncBitIfc#(Bit#(1)) sync_cts <- mkSyncBit(core_clock, core_reset,  uart_clk_gated.new_clk);
	SyncBitIfc#(Bit#(1)) sync_dsr <- mkSyncBit(core_clock, core_reset,  uart_clk_gated.new_clk);
	SyncBitIfc#(Bit#(1)) sync_ri <- mkSyncBit(core_clock, core_reset,  uart_clk_gated.new_clk);
	SyncBitIfc#(Bit#(1)) sync_dcd <- mkSyncBit(core_clock, core_reset,  uart_clk_gated.new_clk);

	rule syncbits_out; 
		sync_rts.send(user_ifc.io.rts); 
		sync_dtr.send(user_ifc.io.dtr); 
		sync_out1.send(user_ifc.io.out1); 
		sync_out2.send(user_ifc.io.out2); 
		sync_dma_ready0.send(user_ifc.io.dma_ready[0]);
		sync_dma_ready1.send(user_ifc.io.dma_ready[1]); 
		sync_sout.send(user_ifc.io.sout); 
		sync_sout_en.send(user_ifc.io.sout_en); 
		sync_interrupt.send(user_ifc.interrupt); 
	endrule 
	
	rule syncbits_in; 
		user_ifc.io.sin(sync_sin.read);
		user_ifc.io.cts(sync_cts.read);
		user_ifc.io.dsr(sync_dsr.read);
		user_ifc.io.ri(sync_ri.read);
		user_ifc.io.dcd(sync_dcd.read);
	endrule 
				
	
		interface io = interface RS232
			method rts= sync_rts.read;
			method dtr= sync_dtr.read;
			method out1= sync_out1.read;
			method out2= sync_out2.read;
			method dma_ready = {sync_dma_ready1.read,sync_dma_ready0.read};
			method sout= sync_sout.read;
			method sout_en= sync_sout_en.read;
			method cts=sync_cts.send;
			method dsr=sync_dsr.send;
			method ri=sync_ri.send;
			method dcd=sync_dcd.send;
			method sin=sync_sin.send;
		endinterface;
		interface slave = s_xactor.axi_side;
		method interrupt= sync_interrupt.read;
	endmodule:mkuart_axi4lite



 	interface Ifc_uart_axi4#(numeric type addr_width, 
                           numeric type data_width, 
                           numeric type user_width, 
                           numeric type depth);
		(*prefix=""*) interface AXI4_Slave_IFC#(addr_width, data_width, user_width) slave;
		// (*always_ready, always_enabled*)
		(*prefix=""*) interface RS232 io;
		// (*always_ready, always_enabled*)
		(*prefix=""*) method Bit#(1) interrupt;
 	endinterface

	module mkuart_axi4#(Clock uart_clock, Reset uart_reset,  parameter Bit#(16) baudrate,
                          parameter Bit#(2) stopbits, parameter Bit#(2) parity)
                                          (Ifc_uart_axi4#(addr_width,data_width,user_width, depth))
	// same provisos for the uart
    provisos(Mul#(32, a__, data_width),
              Add#(d__, 8, data_width),    
              Mul#(8, b__, data_width),
              Mul#(4, f__, data_width),
              Add#(c__, 32, data_width), 
              Add#(g__, 16, data_width), 
              Mul#(16, h__, data_width),
							Add#(i__, 9, data_width),
              Add#(2, e__, depth),
              Add#(j__, TLog#(TAdd#(depth, 1)), 8),
              Add#(k__, TLog#(TAdd#(depth, 1)), data_width),
			  Add#(l__, 1, data_width)
);
		Clock core_clock<-exposeCurrentClock;
		Reset core_reset<-exposeCurrentReset;
		Bool sync_required=(core_clock!=uart_clock);
		AXI4_Slave_Xactor_IFC #(addr_width,data_width,user_width)  s_xactor <- mkAXI4_Slave_Xactor();
		Reg#(Bit#(8)) rg_rdburst_count <- mkRegA(0, clocked_by uart_clock, reset_by uart_reset);
		Reg#(Bit#(8)) rg_wrburst_count <- mkRegA(0, clocked_by uart_clock, reset_by uart_reset);

		if(!sync_required)begin // If uart is clocked by core-clock.
			UserInterface#(addr_width,data_width, depth) user_ifc<- mkuart_user(clocked_by uart_clock, 
                                                                    reset_by uart_reset, baudrate,
                                                                    stopbits, parity);
		  Reg#(AXI4_Rd_Addr#(addr_width,user_width)) rg_rdpacket <- mkRegU;
  		Reg#(AXI4_Wr_Addr#(addr_width,user_width)) rg_wrpacket <- mkRegU;
			//capturing the read requests
			rule capture_read_request(rg_rdburst_count==0);
				let rd_req <- pop_o (s_xactor.o_rd_addr);
				let {rdata,succ} <- user_ifc.read_req(rd_req.araddr,unpack(truncate(rd_req.arsize)));
				rg_rdpacket<=rd_req;	
				if(rd_req.arlen!=0)
					rg_rdburst_count<=1;
				let lv_resp= AXI4_Rd_Data {rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:rd_req.arid, 
												rlast:(rd_req.arlen==0), rdata: rdata, ruser: ?}; //TODO user?
				s_xactor.i_rd_data.enq(lv_resp);//sending back the response
			endrule             

			rule burst_reads(rg_rdburst_count!=0);
				let rd_req=rg_rdpacket;
				let {rdata,succ} <- user_ifc.read_req(rd_req.araddr,unpack(truncate(rd_req.arsize)));
				if(rd_req.araddr[5:0]!=`RxReg || truncate(rd_req.arsize)!=pack(Byte) 
															|| rd_req.arburst!=00 /*FIXED*/)begin
					succ=False;
				end
				if(rg_rdburst_count==rd_req.arlen)
					rg_rdburst_count<=0;
				else
					rg_rdburst_count<=rg_rdburst_count+1;
				let lv_resp= AXI4_Rd_Data {rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:rd_req.arid, 
							rlast:(rd_req.arlen==rg_rdburst_count), rdata: rdata, ruser: ?}; //TODO user?
				s_xactor.i_rd_data.enq(lv_resp);//sending back the response
			endrule
	
			// capturing write requests
			rule capture_write_request(rg_wrburst_count==0);
				let wr_req  <- pop_o(s_xactor.o_wr_addr);
				let wr_data <- pop_o(s_xactor.o_wr_data);
				let succ <- user_ifc.write_req(wr_req.awaddr,wr_data.wdata,
																						unpack(truncate(wr_req.awsize)));
				rg_wrpacket<=wr_req;	
				if(wr_req.awlen!=0)
					rg_wrburst_count<=1;
      		let lv_resp = AXI4_Wr_Resp {bresp: succ?AXI4_OKAY:AXI4_SLVERR, buser: ?, bid:wr_data.wid};
				if(wr_data.wlast)
	      		s_xactor.i_wr_resp.enq(lv_resp);//enqueuing the write response
			endrule
			rule burst_writes(rg_wrburst_count!=0);
				let wr_req=rg_wrpacket;
				let wr_data <- pop_o(s_xactor.o_wr_data);
				let succ <- user_ifc.write_req(wr_req.awaddr,wr_data.wdata,
																						unpack(truncate(wr_req.awsize)));
				if(wr_req.awaddr[5:0]!=`TxReg || truncate(wr_req.awsize)!=pack(Byte) 
															|| wr_req.awburst!=00 /*FIXED*/)begin
					succ=False;
				end
				if(rg_wrburst_count==wr_req.awlen)
					rg_wrburst_count<=0;
				else
					rg_wrburst_count<=rg_wrburst_count+1;
      		let lv_resp = AXI4_Wr_Resp {bresp: succ?AXI4_OKAY:AXI4_SLVERR, buser: ?, bid:wr_data.wid};
				if(wr_data.wlast)
	      		s_xactor.i_wr_resp.enq(lv_resp);//enqueuing the write response
			endrule
			interface slave = s_xactor.axi_side;
			interface io= user_ifc.io;
			method interrupt= user_ifc.interrupt;
		end
		else begin // if core clock and uart_clock is different.
			UserInterface#(addr_width,data_width, depth) user_ifc<- mkuart_user(clocked_by uart_clock, 
                                                                    reset_by uart_reset, baudrate,
                                                                    stopbits, parity);
			SyncFIFOIfc#(AXI4_Rd_Addr#(addr_width,user_width)) ff_rd_request <- 
														                      									mkSyncFIFOFromCC(3,uart_clock);
			SyncFIFOIfc#(AXI4_Wr_Addr#(addr_width,user_width)) ff_wr_request <- 
																							                      mkSyncFIFOFromCC(3,uart_clock);
			SyncFIFOIfc#(AXI4_Wr_Data#(data_width)) ff_wdata_request <- mkSyncFIFOFromCC(3,uart_clock);
			SyncFIFOIfc#(AXI4_Rd_Data#(data_width,user_width)) ff_rd_response <- 
																				                  mkSyncFIFOToCC(3,uart_clock,uart_reset);
			SyncFIFOIfc#(AXI4_Wr_Resp#(user_width)) ff_wr_response <- 
																				                  mkSyncFIFOToCC(3,uart_clock,uart_reset);

			//capturing the read requests
			rule capture_read_request;
				let rd_req <- pop_o (s_xactor.o_rd_addr);
				ff_rd_request.enq(rd_req);
			endrule

			rule perform_read(rg_rdburst_count==0);
				let rd_req = ff_rd_request.first;
        if(rd_req.arlen!=0)
          rg_rdburst_count<=1;
        else
				  ff_rd_request.deq;
				let {rdata,succ} <- user_ifc.read_req(rd_req.araddr,unpack(truncate(rd_req.arsize)));
				let lv_resp= AXI4_Rd_Data {rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:rd_req.arid, 
                      rlast:(rg_rdburst_count==rd_req.arlen), rdata: rdata, ruser: ?}; //TODO user?
				ff_rd_response.enq(lv_resp);
			endrule

      rule perform_read_burst(rg_rdburst_count!=0);
				let rd_req = ff_rd_request.first;
				let {rdata,succ} <- user_ifc.read_req(rd_req.araddr,unpack(truncate(rd_req.arsize)));
				if(rd_req.araddr[5:0]!=`RxReg || truncate(rd_req.arsize)!=pack(HWord) 
															|| rd_req.arburst!=00 /*FIXED*/)begin
					succ=False;
				end
				if(rg_rdburst_count==rd_req.arlen)begin
					rg_rdburst_count<=0;
          ff_rd_request.deq;
        end
				else
					rg_rdburst_count<=rg_rdburst_count+1;
				let lv_resp= AXI4_Rd_Data {rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:rd_req.arid, 
							rlast:(rd_req.arlen==rg_rdburst_count), rdata: rdata, ruser: ?}; //TODO user?
				ff_rd_response.enq(lv_resp);//sending back the response
      endrule

			rule send_read_response;
				ff_rd_response.deq;
				s_xactor.i_rd_data.enq(ff_rd_response.first);//sending back the response
			endrule              
	
			// capturing write requests
			rule capture_writeaddr_request;
				let wr_req  <- pop_o(s_xactor.o_wr_addr);
				ff_wr_request.enq(wr_req);
			endrule
			
      rule capture_writedata_request;
				let wr_data <- pop_o(s_xactor.o_wr_data);
				ff_wdata_request.enq(wr_data);
			endrule

			rule perform_write(rg_wrburst_count==0);
				let wr_req  = ff_wr_request.first;
				let wr_data = ff_wdata_request.first;
        if( wr_req.awlen!=0)
          rg_wrburst_count<=1;
        else 
          ff_wr_request.deq;
  
        ff_wdata_request.deq;
				let succ <- user_ifc.write_req(wr_req.awaddr,wr_data.wdata,
																						unpack(truncate(wr_req.awsize)));
     		let lv_resp = AXI4_Wr_Resp {bresp: succ?AXI4_OKAY:AXI4_SLVERR, buser: ?,bid:wr_data.wid};
        if(wr_data.wlast)
  				ff_wr_response.enq(lv_resp);
			endrule
			
      rule perform_burst_writes(rg_wrburst_count!=0);
				let wr_req=ff_wr_request.first;
				let wr_data =ff_wdata_request.first;
				let succ <- user_ifc.write_req(wr_req.awaddr,wr_data.wdata,
																						unpack(truncate(wr_req.awsize)));
				if(wr_req.awaddr[5:0]!=`TxReg || truncate(wr_req.awsize)!=pack(HWord) 
															|| wr_req.awburst!=00 /*FIXED*/)begin
					succ=False;
				end
				if(rg_wrburst_count==wr_req.awlen)begin
					rg_wrburst_count<=0;
          ff_wr_request.deq;
        end
				else
					rg_wrburst_count<=rg_wrburst_count+1;
      	let lv_resp = AXI4_Wr_Resp {bresp: succ?AXI4_OKAY:AXI4_SLVERR, buser: ?, bid:wr_data.wid};
				if(wr_data.wlast)
				  ff_wr_response.enq(lv_resp);
			endrule

			rule send_write_response;
				ff_wr_response.deq;
      		s_xactor.i_wr_resp.enq(ff_wr_response.first);//enqueuing the write response
			endrule
			interface slave = s_xactor.axi_side;
			interface io= user_ifc.io;
			method interrupt= user_ifc.interrupt;
		end
	endmodule:mkuart_axi4
	
endpackage:uart

