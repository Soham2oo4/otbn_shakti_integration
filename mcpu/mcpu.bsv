/*
Copyright (c) 2013, IIT Madras
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

*  Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
*  Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
*  Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
/*

Author: Deepa N Sarma
Email id: deepans.88@gmail.com

This module
1.Transalates  AXI master request to mcpu master request
2.Manages dynamic bus sizing which is a feature of mcpu
3.Transalates mcpu response to AXI response
4.Includes a transactor converting 64 bit transactions to multiple 32 bit transactions
5.Modifies the data alignment as per endianness of the slave addressed
*/
package mcpu;

	/* ======== Package imports ======= */
	import Vector				::*;
	import FIFO					::*;
	import ConfigReg		::*;
	import  AXI4_Types  ::*;
	import  AXI4_Fabric ::*;
	import  Semi_FIFOF ::*;
 	import BUtils::*;
	/*================================== */

	/*========= Project imports ======== */
	`include "mcpu_parameters.bsv"
	import FIFOF					::*;
	import mcpu_master :: *;
  import mcpu_defines :: *;
	/*================================== */
	interface Ifc_mcpu_top;
  interface Mcpu_out proc_ifc;
	interface  Data_bus_inf proc_dbus;
	interface AXI4_Slave_IFC#(`PADDR,`Reg_width,`USERSPACE) slave_axi_mcpu;
	method Action rd_ipl(Bit#(3) ip);
		/*-============================================================================= */
	endinterface

	typedef enum {DATA,INST} Priority_cache deriving (Bits, Eq, FShow);
	typedef enum
  {DATA_MODE_8_READ,DATA_MODE_16_READ,DATA_MODE_32_READ,DATA_MODE_8_WRITE,
  DATA_MODE_16_WRITE,DATA_MODE_32_WRITE,DATA_MODE_64_READ1,DATA_MODE_64_WRITE1,DATA_MODE_64_READ2,DATA_MODE_64_WRITE2,INST_MODE}
  Data_mode deriving (Bits, Eq, FShow);

  function Bit#(2) modeconv_mcpu(Bit#(3) transfer_size );
  
  if(transfer_size==0)//8 bit transfer
       return 2'b01;
  else if (transfer_size==1)//16 bit transfer
       return 2'b10;
  else
       return 2'b00;//32 bit transfer

  endfunction
          
	(*synthesize*)
	module mkmcpu_top(Ifc_mcpu_top);
		
		AXI4_Slave_Xactor_IFC #(`PADDR,`Reg_width,`USERSPACE) s_xactor <- mkAXI4_Slave_Xactor;
	  Mcpu_master proc_master <-mkmcpumaster;
		Reg#(Bit#(`Reg_width_mcpu_slave)) response_buff  <-mkReg(0);//To buffer multiple cycle transfers
    FIFOF#(Bit#(4)) ff_id <-mkSizedFIFOF(2);//To store request address of instruction
    FIFOF#(Bit#(`Reg_width_mcpu_slave)) ff_address <-mkSizedFIFOF(2);//To store request address of instruction
		FIFOF#(Data_mode) ff_req<-mkSizedFIFOF(2);//To keep track of last pending request
    Reg#(Bit#(2)) rg_port_count <- mkReg(0);
    Reg#(Bit#(3)) rg_endian  <- mkReg(0);
    Reg#(Bool) dw_write <- mkReg(False);
    Reg#(Bool) dw_read  <-mkReg(False);
    Reg#(Bool) err_buff  <-mkReg(False);
    Reg#(Bit#(1)) response_berr  <-mkReg(0);
    Reg#(Bit#(`PADDR)) dw_addr <-mkReg(0);
    Reg#(Bit#(`PADDR)) dw_read_addr <-mkReg(0);
    Reg#(Bit#(32))dw_data<-mkReg(0);
    Reg#(Bit#(32))data_buff<-mkReg(0);//for 32 to 64 transaction+
//.......................SEND_REQUEST_TO_MEMORY.................................................//
		rule check_wr_request_to_memory(!dw_write && !dw_read);
      let info<-pop_o(s_xactor.o_wr_addr);
      let data<-pop_o(s_xactor.o_wr_data);
      //For the first four cycles SRAM remains little endian
      Bool sram_big =False;
      if (rg_endian<2)
        rg_endian <= rg_endian+1;
      else
        sram_big  = True;
      `ifdef verbose $display("Data: %h",data.wdata); `endif
      let request=Req_mcpu{addr:truncate(info.awaddr),wr_data:truncate(data.wdata),
      mode:modeconv_mcpu(info.awsize),fun_code:3'b010,rd_req:0,endian_big:sram_big};
      if(info.awsize==3'b011 && endian(info.awaddr,True)==Big)
      request.wr_data = data.wdata[63:32];
      if(info.awaddr[31:4]==28'hFFFF_FFF)
			request.fun_code=3'b111;	
      proc_master.get_req(request);
      ff_id.enq(info.awid);
      `ifdef verbose $display("Enqueuing write request onto mcpu");`endif
      //`ifdef verbose $display("Enqueing write request onto mcpu for address %h with id %h with mode%h endianness:%b rg_endian :%h data:%h transfer_size:%h",info.awaddr,info.awid,request.mode,sram_big,rg_endian,request.wr_data,info.awsize);`endif
      ff_address.enq(info.awaddr);
      case(request.mode)
	  		2'b00 :if(info.awsize==3'b011)
               ff_req.enq(DATA_MODE_64_WRITE1);
               else
               ff_req.enq(DATA_MODE_32_WRITE);
      	2'b01 :ff_req.enq(DATA_MODE_8_WRITE);
      	2'b10 :ff_req.enq(DATA_MODE_16_WRITE);
      endcase
      if(info.awsize==3'b011)begin
        dw_write<=True;
        dw_addr<=info.awaddr;
        if(endian(info.awaddr,True)==Big)
        begin
          dw_data<=data.wdata[31:0];
          `ifdef verbose $display("Data_to_be_written_in _next_cycle :%h",data.wdata[31:0]);`endif
        end
        else
        begin
          dw_data<=data.wdata[63:32];
          `ifdef verbose $display("Data_to_be_written_in _next_cycle :%h",data.wdata[63:32]);`endif
        end
      end

  	endrule

		rule check_wr_request_to_memory_dw_write(dw_write);
      Bool sram_big =False;
      if (rg_endian<2)
        rg_endian <= rg_endian+1;
      else
        sram_big  = True;
      let request=Req_mcpu{addr:dw_addr+4,wr_data:dw_data,mode:2'b00,fun_code:3'b010,rd_req:0,endian_big:sram_big};
      if(dw_addr[31:4]==28'hFFFF_FFF)
 			request.fun_code=3'b111;	
      proc_master.get_req(request);
      //ff_id.enq(info.awid);
      `ifdef verbose $display("Enqueing write request onto mcpu for address %h with id %h with mode %h endianness: %b rg_endian :%h data:%h",dw_addr+4,ff_id.first,request.mode,sram_big,rg_endian,dw_data);`endif

      ff_address.enq(dw_addr);
      dw_write<=False;
      ff_req.enq(DATA_MODE_64_WRITE2);

  	endrule

	rule check_read_request_to_memory(!dw_write && !dw_read);
      let info<- pop_o(s_xactor.o_rd_addr);
      ff_id.enq(info.arid);
      ff_address.enq(info.araddr);
      Bool sram_big=False;
      if (rg_endian <2)
        rg_endian <= rg_endian+1;
      else
        sram_big = True;
      let request=Req_mcpu{addr:truncate(info.araddr),wr_data:?,mode:modeconv_mcpu(info.arsize),
      fun_code:3'b010,rd_req:1,endian_big:sram_big};
      if (info.araddr[31:4]==28'hFFFF_FFF)
       request.fun_code=3'b111;
   //incude mode 32 and send the address
      `ifdef verbose $display("Enqueing read request onto mcpu for address %h with id %h with mode\
       %h endianness %b rg_endian:%h",info.araddr,info.arid,request.mode,sram_big,rg_endian);`endif

        case(request.mode)
			  2'b00 :if(info.arsize ==3'b011)
                ff_req.enq(DATA_MODE_64_READ1);
               else
                ff_req.enq(DATA_MODE_32_READ);
      	2'b01 :ff_req.enq(DATA_MODE_8_READ);
      	2'b10 :ff_req.enq(DATA_MODE_16_READ);
      endcase
      proc_master.get_req(request);
      if(info.arsize==3'b011)begin
        dw_read<=True;
        dw_read_addr<=info.araddr;
      end
 endrule

	rule check_read_request_to_memory_dw_read(dw_read);
      ff_address.enq(dw_read_addr);
      Bool sram_big=False;
      if (rg_endian <2)
        rg_endian <= rg_endian+1;
      else
        sram_big = True;
      let request=Req_mcpu{addr:dw_read_addr+4,wr_data:?,mode:2'b00,
      fun_code:3'b010,rd_req:1,endian_big:sram_big};
      if (dw_read_addr[31:4]==28'hFFFF_FFF)
       request.fun_code=3'b111;
   //incude mode 32 and send the address
`ifdef verbose $display("Enqueing read request onto mcpu for address %h with id %h with mode\
      %h endianness %b rg_endian:%h",dw_read_addr+4,ff_id.first,request.mode,sram_big,rg_endian);`endif

      proc_master.get_req(request);		
      dw_read<=False;
      ff_req.enq(DATA_MODE_64_READ2);
 endrule


  (* preempts = "check_read_request_to_memory,check_wr_request_to_memory"*)
  (* preempts = "check_read_request_to_memory_dw_read,check_wr_request_to_memory_dw_write"*)

//...................................SEND RESPONSE TO MEMORY...............................//
//While sending response to memory slave_width is checked. If slave width is lesser than 
//requested transfer size,we receive data in multiple cycles.Wait till we receive requested data
//and send the response back to core

	(* mutually_exclusive="send_read_response_from_memory_to_mem_stage_8,\
  send_read_response_from_memory_to_mem_stage_16,send_read_response_from_memory_to_mem_stage_32,\
  send_write_response_from_memory_to_mem_stage_8,send_write_response_from_memory_to_mem_stage_16,\
  send_write_response_from_memory_to_mem_stage_32"*)

  rule send_read_response_from_memory_to_mem_stage_8(ff_req.first==DATA_MODE_8_READ); 
    let response =proc_master.put_resp(); 
		ff_req.deq();
    let r = AXI4_Rd_Data {rresp: AXI4_OKAY, rdata:duplicate(response.data[7:0]),
    rlast:True, ruser: 0, rid: ff_id.first };
   	if(response.berr==1'b1)
		r.rresp = AXI4_SLVERR;
		ff_address.deq();
		s_xactor.i_rd_data.enq(r);
    `ifdef verbose
    if (response.berr==1'b1)
		 $display("MCPU:SLV_ERR");`endif
		`ifdef verbose $display("Data received %h with id %h to mem_stage",response.data,ff_id.first());`endif
		ff_id.deq();
	endrule
                
      
	rule send_read_response_from_memory_to_mem_stage_16(ff_req.first==DATA_MODE_16_READ);
			let response =proc_master.put_resp();
			if(response.port_type==2'b10 )begin
					ff_req.deq();
          let r = AXI4_Rd_Data {rresp: AXI4_OKAY,rdata:duplicate(response.data[15:0]),rlast:True,
          ruser: 0, rid: ff_id.first };
    			if(response.berr==1'b1)
					r.rresp = AXI4_SLVERR;
					ff_address.deq();
					s_xactor.i_rd_data.enq(r);
		      ff_id.deq();
					`ifdef verbose $display("Data received %h with id %h to mem_stage",response.data,ff_id.first());`endif

			end						
			else if(response.port_type==2'b01)//If slave_port is 8
          if(rg_port_count==0)begin
            response_buff<=response.data;
            if(response.berr==1'b1)
            response_berr<=1'b1;
            rg_port_count<=rg_port_count+1;
          end
          else begin	
            ff_req.deq();
            let r = AXI4_Rd_Data {rresp: AXI4_OKAY,rdata:duplicate({response.data[7:0],
            response_buff[7:0]}),rlast:True,ruser: 0,rid: ff_id.first };
            if(endian(ff_address.first,response.endian_big)==Big)
            r = AXI4_Rd_Data {rresp: AXI4_OKAY, rdata:duplicate({response_buff[7:0],
            response.data[7:0]}),rlast:True,ruser: 0,rid: ff_id.first };
            if(response.berr==1'b1||response_berr==1'b1)
            r.rresp = AXI4_SLVERR; 
            rg_port_count<=0;
            ff_address.deq();
            s_xactor.i_rd_data.enq(r);
            response_buff<=0;
            response_berr<=0;
            ff_id.deq();
            `ifdef verbose
            if(endian(ff_address.first,response.endian_big)==Big)
            `ifdef verbose $display("Data received %h with id %h to mem_stage",{response_buff[7:0],
            response.data[7:0]},ff_id.first());`endif
            else
            `ifdef verbose $display("Data received %h with id %h to mem_stage",{response.data[7:0],
            response_buff[7:0]},ff_id.first());`endif
          `endif

          end

			else begin
					ff_req.deq();
					rg_port_count<=0;
					response_buff<=0;
          response_berr<=0;
          let r = AXI4_Rd_Data{rresp: AXI4_OKAY,rdata:duplicate(response.data[15:0]),
          rlast:True,ruser: 0,rid: ff_id.first };
    			if(response.berr==1'b1)
					r.rresp = AXI4_SLVERR;
					ff_address.deq();
			   	ff_id.deq();
          s_xactor.i_rd_data.enq(r);
					`ifdef verbose $display("Data received %h with id %h mem_stage",{response.data[15:0]},ff_id.first());`endif

				end
	endrule

  rule send_read_response_from_memory_to_mem_stage_32(ff_req.first==DATA_MODE_32_READ); 
			let response =proc_master.put_resp();
      if(response.port_type==2'b00) begin		
			  ff_req.deq();
        let r = AXI4_Rd_Data{rresp: AXI4_OKAY, rdata:duplicate({response.data}),rlast:True,ruser: 0,
        rid: ff_id.first };
    		if(response.berr == 1'b1)
			  r.rresp = AXI4_SLVERR;
				ff_address.deq;
        s_xactor.i_rd_data.enq(r);
		    ff_id.deq();
				`ifdef verbose $display("Data received %h with id %h from mem_stage from address %h ",response.data,ff_id.first(),ff_address.first());`endif
      end

			// SLAVE_PORT is 16 bit
      else if(response.port_type==2'b10)
			if(rg_port_count==0)
			begin
				response_buff<=response.data;
        if(response.berr==1'b1)
        response_berr<=1'b1;
				rg_port_count<=rg_port_count+1;
			end
			else
			begin	
				ff_id.deq();
				ff_req.deq();
				rg_port_count<=0;
				response_buff<=0;
        let r = AXI4_Rd_Data{rresp: AXI4_OKAY, rdata:duplicate({response.data[15:0],
        response_buff[15:0]}),rlast:True,ruser: 0,rid: ff_id.first };
	      if(endian(ff_address.first,response.endian_big)==Big)
	      r = AXI4_Rd_Data{rresp: AXI4_OKAY,rdata:duplicate({response_buff[15:0],
        response.data[15:0]}),rlast:True,ruser:0,rid: ff_id.first };
      	if(response.berr==1'b1||response_berr==1'b1)
				r.rresp = AXI4_SLVERR;
				ff_address.deq;
        response_berr<=1'b0;
        s_xactor.i_rd_data.enq(r);
	      `ifdef verbose $display("mcpu: Data received %h with id %h from mem_stage from address %h",  {response.data[15:0],response_buff[15:0]},ff_id.first(),ff_address.first());`endif
        `ifdef verbose
	      if(endian(ff_address.first,response.endian_big)==Big)
	       $display("mcpu :Data received %h with id %h from mem_stage from address %h",{response_buff[15:0],response.data[15:0]},ff_id.first(),ff_address.first());`endif
			end

			else if(response.port_type==2'b01)
			begin
			if(rg_port_count<3)
				begin
					if(endian(ff_address.first,response.endian_big) == Big )begin
          `ifdef verbose $display("Data received from mem_stage_8_bit %h response_buff: %h",response.data[7:0],response_buff);`endif
          if(response.berr==1'b1)
            response_berr<=1'b1;
					  response_buff<={response_buff[23:0],response.data[7:0]};
          end
          else begin
          `ifdef verbose $display("Data received from mem_stage_8_bit_le %h",response.data[7:0]);
          if(response.berr==1'b1)
            response_berr<=1'b1;
          response_buff<={response.data[7:0],response_buff[31:8]};`endif

          end
					rg_port_count<=rg_port_count+1;
				end
		  else
				begin
					ff_req.deq();
					rg_port_count<=0;
					response_buff<=0;
          response_berr<=0;
          let r = AXI4_Rd_Data{rresp: AXI4_OKAY, rdata:duplicate({
          response.data[7:0],response_buff[31:8]}),rlast:True,ruser:0,rid: ff_id.first };
	        if(endian(ff_address.first,response.endian_big)==Big)
          r = AXI4_Rd_Data{rresp: AXI4_OKAY,rdata:duplicate({response_buff[23:0],response.data[7:0]}),rlast:True,ruser: 0,rid: ff_id.first };
    			if(response.berr==1'b1||response_berr==1'b1)    		
					r.rresp = AXI4_SLVERR; 
					ff_address.deq;
					s_xactor.i_rd_data.enq(r);
		    	 ff_id.deq();
           `ifdef verbose
	        if(endian(ff_address.first,response.endian_big)!=Big)
		   		`ifdef verbose $display("Data received %h with id %h to mem_stage",{response.data[7:0],
          response_buff[31:8]},ff_id.first());`endif

          else
		   		`ifdef verbose $display("Data received %h with id %h to mem_stage",{response.data[23:0],
          response_buff[7:0]},ff_id.first());`endif
          `endif
				end
      end
		endrule

  rule send_read_response_from_memory_to_mem_stage_64_READ1(ff_req.first==DATA_MODE_64_READ1); 
			let response = proc_master.put_resp();
      if(response.port_type==2'b00) begin		
			  ff_req.deq();
        data_buff<=response.data;
    		if(response.berr == 1'b1)
			  err_buff <= True;
				ff_address.deq;
				`ifdef verbose $display("Data received %h with id %h from mem_stage from address %h ",response.data,
        ff_id.first(),ff_address.first());`endif

			end
			// SLAVE_PORT is 16 bit
      else if(response.port_type==2'b10)
			if(rg_port_count==0)
			begin
				response_buff<=response.data;
				rg_port_count<=rg_port_count+1;
        if(response.berr==1'b1)
        response_berr<=1'b1;
			end
			else
			begin	
				ff_req.deq();
				rg_port_count<=0;
				response_buff<=0;
	      if(endian(ff_address.first,response.endian_big)==Big)
	      data_buff <={response_buff[15:0],response.data[15:0]};
        else
        data_buff<={response.data[15:0],response_buff[15:0]};
      	if(response.berr==1'b1||response_berr==1'b1)
		    err_buff<=True;
				ff_address.deq;
	      `ifdef verbose $display("Data received %h with id %h from mem_stage",{response.data[15:0],
        response_buff[15:0]},ff_id.first());`endif
        `ifdef verbose
	      if(endian(ff_address.first,response.endian_big)==Big)
	       $display("Data received %h with id %h from mem_stage",{response_buff[15:0],
        response.data[15:0]},ff_id.first());`endif

			end

			else if(response.port_type==2'b01)
			begin
			if(rg_port_count<3)
				begin
					if(endian(ff_address.first,response.endian_big) == Big )begin
          `ifdef verbose $display("Data received from mem_stage_8_bit %h response_buff: %h",response.data[7:0],response_buff);`endif
					response_buff<={response_buff[23:0],response.data[7:0]};
      	  if(response.berr==1'b1)
		       response_berr<=1'b1;
          end
          else begin
          `ifdef verbose $display("Data received from mem_stage_8_bit_le %h",response.data[7:0]);`endif
					response_buff<={response.data[7:0],response_buff[31:8]};
      	  if(response.berr==1'b1)
		       response_berr<=1'b1;
            
          end
					rg_port_count<=rg_port_count+1;
				end
		  else
				begin
					ff_req.deq();
					rg_port_count<=0;
					response_buff<=0;
          response_berr<=0;
	        if(endian(ff_address.first,response.endian_big)==Big)
          data_buff<={response_buff[23:0],response.data[7:0]};
          else
          data_buff<={response.data[7:0],response_buff[31:8]};
    			if(response.berr==1'b1||response_berr==1'b1)    		
				  err_buff<=True; 
					ff_address.deq;
          `ifdef verbose
	        if(endian(ff_address.first,response.endian_big)!=Big)
		   		`ifdef verbose $display("Data received %h with id %h to mem_stage",{response.data[7:0],
          response_buff[31:8]},ff_id.first());`endif
          else
		   		`ifdef verbose $display("Data received %h with id %h to mem_stage",{response.data[23:0],
          response_buff[7:0]},ff_id.first());`endif
          `endif
				end
      end
		endrule

  rule send_read_response_from_memory_to_mem_stage_64_READ2(ff_req.first==DATA_MODE_64_READ2); 
			let response =proc_master.put_resp();
      if(response.port_type==2'b00) begin		
			  ff_req.deq();
        let r = AXI4_Rd_Data{rresp: AXI4_OKAY, rdata:{response.data,data_buff},rlast:True,ruser: 0,
        rid: ff_id.first };
        if(endian((ff_address.first),True)==Big)
        r = AXI4_Rd_Data{rresp: AXI4_OKAY, rdata:duplicate({data_buff,response.data}),rlast:True,ruser: 0,
        rid: ff_id.first };
    		if(response.berr == 1'b1||err_buff)
			  r.rresp = AXI4_SLVERR;
				ff_address.deq;
        s_xactor.i_rd_data.enq(r);
		    ff_id.deq();
				`ifdef verbose $display("Data received %h with id %h from mem_stage from address %h ",     response.data,
        ff_id.first(),ff_address.first());`endif

			end

			// SLAVE_PORT is 16 bit
      else if(response.port_type==2'b10)
			if(rg_port_count==0)
			begin
				response_buff<=response.data;
				rg_port_count<=rg_port_count+1;
        if(response.berr==1'b1)
        response_berr<=1;
			end
			else
			begin	
				ff_id.deq();
				ff_req.deq();
				rg_port_count<=0;
				response_buff<=0;
        response_berr<=1'b0;
        let r = AXI4_Rd_Data{rresp: AXI4_OKAY, rdata:duplicate({response.data[15:0],
        response_buff[15:0],data_buff}),rlast:True,ruser: 0,rid: ff_id.first };
	      if(endian(ff_address.first,response.endian_big)==Big)
	      r = AXI4_Rd_Data{rresp: AXI4_OKAY,rdata:duplicate({data_buff,response_buff[15:0],
        response.data[15:0]}),rlast:True,ruser:0,rid: ff_id.first };
      	if(response.berr==1'b1||err_buff||response_berr==1'b1)
				r.rresp = AXI4_SLVERR;
				ff_address.deq;
        s_xactor.i_rd_data.enq(r);
	      `ifdef verbose $display("Data received %h with id %h from mem_stage",{response.data[15:0],
        response_buff[15:0],data_buff},ff_id.first());`endif
        `ifdef verbose
	      if(endian(ff_address.first,response.endian_big)==Big)
	       $display("Data received %h with id %h from mem_stage",{data_buff,response_buff[15:0],
        response.data[15:0]},ff_id.first());`endif

			end

			else if(response.port_type==2'b01)
			begin
			if(rg_port_count<3)
				begin
					if(endian(ff_address.first,response.endian_big) == Big )begin
          `ifdef verbose $display("Data received from mem_stage_8_bit %h response_buff: %h",response.data[7:0],response_buff);`endif
          if(response.berr==1'b1)
          response_berr<=1;
					response_buff<={response_buff[23:0],response.data[7:0]};
          end
          else begin
          `ifdef verbose $display("Data received from mem_stage_8_bit_le %h",response.data[7:0]);
					response_buff<={response.data[7:0],response_buff[31:8]};`endif
          if(response.berr==1'b1)
          response_berr<=1;
          end
					rg_port_count<=rg_port_count+1;
				end
		  else
				begin
					ff_req.deq();
					rg_port_count<=0;
					response_buff<=0;
          response_berr<=0;
          let r = AXI4_Rd_Data{rresp: AXI4_OKAY, rdata:duplicate({
          response.data[7:0],response_buff[31:8],data_buff}),rlast:True,ruser:0,rid: ff_id.first };
	        if(endian(ff_address.first,response.endian_big)==Big)
          r = AXI4_Rd_Data{rresp: AXI4_OKAY,rdata:duplicate({data_buff,response_buff[23:0],response.data[7:0]}),rlast:True,ruser: 0,rid: ff_id.first };
    			if(response.berr==1'b1||err_buff||response_berr==1'b1)    		
					r.rresp = AXI4_SLVERR; 
					ff_address.deq;
					s_xactor.i_rd_data.enq(r);
		    	 ff_id.deq();
          `ifdef verbose
	        if(endian(ff_address.first,response.endian_big)!=Big)
		   		`ifdef verbose $display("Data received %h with id %h to mem_stage",{response.data[7:0],
          response_buff[31:8],data_buff},ff_id.first());`endif

          else
		   		`ifdef verbose $display("Data received %h with id %h to mem_stage",{data_buff,response.data[23:0],response_buff[7:0]},ff_id.first());`endif
          `endif
				end
      end
		endrule


		rule send_write_response_from_memory_to_mem_stage_8(ff_req.first==DATA_MODE_8_WRITE);//MEMORY WRITE RESP TO DCACHE
			let response =proc_master.put_resp();
			ff_req.deq();
		  let resp =  AXI4_Wr_Resp {bresp: AXI4_OKAY,  bid: ff_id.first};
			if (response.berr==1'b1)
			resp.bresp=AXI4_SLVERR;
			ff_id.deq();
			ff_address.deq();
	   	s_xactor.i_wr_resp.enq(resp);
	  	`ifdef verbose $display($time,"\t CORE: Received Write Response: from address %h id %h",
      ff_address.first,ff_id.first); `endif
		endrule
                
    rule send_write_response_from_memory_to_mem_stage_16(ff_req.first==DATA_MODE_16_WRITE);
			let response =proc_master.put_resp();
			`ifdef verbose $display("Received respons from port_type %h",response.port_type);`endif

			if(response.port_type==2'b10 )begin
			  ff_req.deq();
		   	ff_id.deq();
				`ifdef verbose $display($time,"CORE: Received Write Response:"); `endif
		    let resp =  AXI4_Wr_Resp {bresp: AXI4_OKAY, bid: ff_id.first};
			  ff_address.deq();
			  if (response.berr==1'b1)
			  resp.bresp=AXI4_SLVERR;
	    	s_xactor.i_wr_resp.enq(resp);
			end					
			else if(response.port_type==2'b01)
				if(rg_port_count==0)begin
					rg_port_count<=rg_port_count+1;
          if(response.berr==1'b1)
          response_berr<=1'b1;  
				end
				else begin	
				  ff_address.deq();
					ff_req.deq();
					rg_port_count<=0;
					`ifdef verbose $display($time,"CORE: Received Write Response:"); `endif
		      let resp =  AXI4_Wr_Resp {bresp: AXI4_OKAY, bid: ff_id.first};
				  if (response.berr==1'b1||response_berr==1'b1)
				  resp.bresp=AXI4_SLVERR;
          response_berr<=1'b0;
  				ff_id.deq();
	    		s_xactor.i_wr_resp.enq(resp);
				end
			else
				begin
					ff_address.deq();
					ff_req.deq();
					rg_port_count<=0;
					response_buff<=0;
          response_berr<=1'b0;
					`ifdef verbose $display($time,"CORE: Received Write Response:"); `endif
		      let resp =  AXI4_Wr_Resp {bresp: AXI4_OKAY, bid: ff_id.first};
					if (response.berr==1'b1)
					resp.bresp=AXI4_SLVERR;
					ff_id.deq();
	    		s_xactor.i_wr_resp.enq(resp);
				end
		endrule

  	rule send_write_response_from_memory_to_mem_stage_32(ff_req.first==DATA_MODE_32_WRITE); 
      let response =proc_master.put_resp();
      if(response.port_type==2'b00)
      begin

        ff_req.deq();
        `ifdef verbose $display($time,"CORE: Received Write Response:with id %h and address %h",
        ff_id.first,ff_address.first); `endif
        let resp =  AXI4_Wr_Resp {bresp: AXI4_OKAY, bid: ff_id.first};
        if (response.berr==1'b1)
        resp.bresp=AXI4_SLVERR;
        ff_id.deq();
        ff_address.deq();
        s_xactor.i_wr_resp.enq(resp);
		end

		else if(response.port_type==2'b10)
		if(rg_port_count==0)
		begin
      if(response.berr==1'b1)
      response_berr<=1'b1;  
			rg_port_count<=rg_port_count+1;
		end
		else
		begin	
			ff_req.deq();
			ff_address.deq();
			rg_port_count<=0;
		  ff_id.deq();
			let resp =  AXI4_Wr_Resp {bresp: AXI4_OKAY, bid: ff_id.first};
			if (response.berr==1'b1||response_berr==1'b1)
			resp.bresp=AXI4_SLVERR;
      response_berr<=1'b0;
	  	s_xactor.i_wr_resp.enq(resp);
			`ifdef verbose $display($time,"CORE: Received Write Response:"); `endif

		end
		else if(response.port_type==2'b01)
		begin
			if(rg_port_count<3)
				begin
        if(response.berr==1'b1)
          response_berr<=1'b1;  
					rg_port_count<=rg_port_count+1;
				end
			else
				begin
				ff_req.deq();
				ff_address.deq();
				rg_port_count<=0;
	     	let resp =  AXI4_Wr_Resp {bresp: AXI4_OKAY, bid: ff_id.first};
				if (response.berr==1'b1||response_berr==1'b1)
				resp.bresp=AXI4_SLVERR;
				ff_id.deq();
        response_berr<=1'b0;
	  		s_xactor.i_wr_resp.enq(resp);
				`ifdef verbose $display($time,"CORE: Received Write Response:"); `endif
				end
			end
		endrule

  	rule send_write_response_from_memory_to_mem_stage_64_WRITE1(ff_req.first==DATA_MODE_64_WRITE1); 
      let response =proc_master.put_resp();
      if(response.port_type==2'b00)
      begin		
        ff_req.deq();
        `ifdef verbose $display($time,"CORE: Received Write Response:with id %h and address %h",
        ff_id.first,ff_address.first); `endif
        let resp =  AXI4_Wr_Resp {bresp: AXI4_OKAY, bid: ff_id.first};
        if(response.berr==1'b1)
        err_buff<=True;
        ff_address.deq();
		end

		else if(response.port_type==2'b10)
		if(rg_port_count==0)
		begin
      if(response.berr==1'b1)
      response_berr<=1;
			rg_port_count<=rg_port_count+1;
       
		end
		else
		begin	
			ff_req.deq();
			ff_address.deq();
			rg_port_count<=0;
      if(response.berr==1'b1||response_berr==1'b1)
      err_buff<=True;
      response_berr<=1'b0;
			`ifdef verbose $display($time,"CORE: Received Write Response:"); `endif

		end
		else if(response.port_type==2'b01)
		begin
			if(rg_port_count<3)
				begin
          if(response.berr==1'b1)
            response_berr<=1;
          rg_port_count<=rg_port_count+1;
				end
			else
				begin
				ff_req.deq();
				ff_address.deq();
        if(response.berr==1'b1||response_berr==1'b1)
         err_buff<=True;
         response_berr<=1'b0;
				rg_port_count<=0;
				`ifdef verbose $display($time,"CORE: Received Write Response:"); `endif
				end
			end
		endrule

  	rule send_write_response_from_memory_to_mem_stage_64_WRITE2(ff_req.first==DATA_MODE_64_WRITE2); 
      let response =proc_master.put_resp();
      if(response.port_type==2'b00)
      begin		
        ff_req.deq();
        `ifdef verbose $display($time,"CORE: Received Write Response:with id %h and address %h",
        ff_id.first,ff_address.first); `endif
        let resp =  AXI4_Wr_Resp {bresp: AXI4_OKAY, bid: ff_id.first};
        if (response.berr==1'b1||err_buff)
        resp.bresp=AXI4_SLVERR;
        ff_id.deq();
        ff_address.deq();
        response_berr<=1'b0;
        s_xactor.i_wr_resp.enq(resp);
		end

		else if(response.port_type==2'b10)
		if(rg_port_count==0)
		begin
      if(response.berr==1'b1)
      response_berr<=1'b1;
			rg_port_count<=rg_port_count+1;
		end
		else
		begin	
			ff_req.deq();
			ff_address.deq();
			rg_port_count<=0;
		  ff_id.deq();
			let resp =  AXI4_Wr_Resp {bresp: AXI4_OKAY, bid: ff_id.first};
			if (response.berr==1'b1||err_buff||response_berr==1'b1)
			resp.bresp=AXI4_SLVERR;
      response_berr<=1'b0;
	  	s_xactor.i_wr_resp.enq(resp);
			`ifdef verbose $display($time,"CORE: Received Write Response:"); `endif

		end
		else if(response.port_type==2'b01)
		begin
			if(rg_port_count<3)
				begin
          if(response.berr==1'b1)
          response_berr<=1'b1;
					rg_port_count<=rg_port_count+1;
				end
			else
				begin
				ff_req.deq();
				ff_address.deq();
				rg_port_count<=0;
        response_berr<=1'b0;
			let resp =  AXI4_Wr_Resp {bresp: AXI4_OKAY, bid: ff_id.first};
				if (response.berr==1'b1||response_berr==1'b1||err_buff)
				resp.bresp=AXI4_SLVERR;
				ff_id.deq();
	  		s_xactor.i_wr_resp.enq(resp);
				`ifdef verbose $display($time,"CORE: Received Write Response:"); `endif
				end
			end
    err_buff<=False;
		endrule				
		interface proc_ifc  = proc_master.mcpu_interface;
		interface proc_dbus = proc_master.data_bus;
	  interface slave_axi_mcpu = s_xactor.axi_side;
endmodule
endpackage
