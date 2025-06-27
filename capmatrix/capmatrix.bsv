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
//TODO
//1. Remove user fields in AXI and add id field
//2. Use AXI prot bits so that cap matrix can be written only in machine mode?

package capmatrix;
  import BRAMCore :: *;
	import DReg::*;
	import Semi_FIFOF        :: *;
	import AXI4_Types   :: *;
	import AXI4_Fabric  :: *;
	import AXI4_Lite_Types   :: *;
	import AXI4_Lite_Fabric  :: *;
	import BUtils::*;
  import GetPut::*;
	import device_common::*;
  import Assert::*;

  interface UserInterface#(numeric type addr_width,  numeric type data_width, numeric type mem_size);
    method Action read_request (Bit#(addr_width) addr);
    method Action write_request (Tuple3#(Bit#(addr_width), Bit#(data_width),  Bit#(TDiv#(data_width, 8))) req);
    method ActionValue#(Tuple2#(Bool, Bit#(data_width))) read_response;
    method Bool write_response;
  endinterface

  module mkcapmatrix#(Bit#(addr_width) slave_base, parameter String 
      msb_file, parameter String lsb_file, parameter String modulename)
      (UserInterface#(addr_width, data_width, mem_size))
    provisos(Add#(data_width, a, 64), // provisos ensures we support < 64-bit data width. 
             Add#(32, b, data_width),  // provisos ensures we support >32-bit data width.
             Add#(4, a__, TDiv#(data_width, 8)),  // wstrb is between 4 and 8
             Mul#(TDiv#(TSub#(data_width, 32), 4), 4, TSub#(data_width, 32)),
             Bits#(Maybe#(Bit#(TSub#(mem_size, 2))), b__));
    Integer verbosity = `VERBOSITY;
    Integer byte_offset = valueOf(TDiv#(data_width, 32));

  	// we create 2 32-bit BRAMs since the xilinx tool is easily able to map them to BRAM32BE cells
  	// which makes it easy to use data2mem for updating the bit file.
		BRAM_DUAL_PORT_BE#(Bit#(TSub#(mem_size,2)),Bit#(TSub#(data_width, 32)),4) dmemMSB <- 
                   mkBRAMCore2BELoad(valueOf(TExp#(TSub#(mem_size,2))),False,msb_file,False);
		BRAM_DUAL_PORT_BE#(Bit#(TSub#(mem_size,2)),Bit#(32),4) dmemLSB <- 
                   mkBRAMCore2BELoad(valueOf(TExp#(TSub#(mem_size,2))),False,lsb_file,False);
  
    Reg#(Bool) read_request_sent[2] <-mkCReg(2,False);
		Reg#(Bool) rg_unlocked <- mkRegA(True);
    
		method Action write_request (Tuple3#(Bit#(addr_width), Bit#(data_width),  Bit#(TDiv#(data_width, 8))) req);
      let {addr, data, strb}=req;

			Bit#(TSub#(mem_size,2)) index_address=(addr - slave_base)[valueOf(mem_size)-1:byte_offset+1];
			if(rg_unlocked==True) begin
				dmemLSB.b.put(truncate(strb),index_address,truncate(data));
				dmemMSB.b.put(truncateLSB(strb),index_address,truncateLSB(data));
			end

			if(index_address=='d-1) begin	//If a write is happening to the last index
				rg_unlocked<= False;
				if(verbosity!= 0)
        	$display($time, "\t",modulename,": CAP Matrix write access locking.");
			end
  		
			if(verbosity!= 0)
        $display($time, "\t",modulename,": Recieved Write Request for Address: %h Index: %h\
 Data: %h wrstrb: %h", addr, index_address, data, strb);
  	endmethod
  
    // The write response will be OKAY if rg_unlocked is True
    method Bool write_response;
      return rg_unlocked;
    endmethod
  
    // capture a read_request and latch the address on a BRAM.
    method Action read_request (Bit#(addr_width) addr);
			Bit#(TSub#(mem_size,2)) index_address=(addr - slave_base)[valueOf(mem_size)-1:byte_offset+1];
  		dmemLSB.a.put(0, index_address, ?);
      dmemMSB.a.put(0, index_address, ?);
      read_request_sent[1]<= True;
  		if(verbosity!= 0)
        $display($time, "\t",modulename,": Recieved Read Request for Address: %h Index: %h",  
                                                                            addr, index_address);
      `ifdef check_assert
        wr_read_index<= tagged Valid (index_address);
      `endif
  	endmethod
  
    // respond with data from the BRAM.
    method ActionValue#(Tuple2#(Bool, Bit#(data_width))) read_response if(read_request_sent[0]);
      read_request_sent[0]<=False;
      return tuple2(False, {dmemMSB.a.read(), dmemLSB.a.read()});
    endmethod
  endmodule



  interface Ifc_capmatrix_AXI4#(numeric type addr_width,numeric type id_width, numeric type data_width, numeric type user_width,
																																									numeric type mem_size);
    interface AXI4_Slave_IFC#(addr_width, id_width, data_width, user_width) slave; 
  endinterface

  typedef enum {Idle, Burst} Mem_State deriving(Eq, Bits, FShow);

  module mkcapmatrix_AXI4#(Bit#(awidth) base, parameter String mem_init_file1, 
        parameter String mem_init_file2, parameter String modulename)(Ifc_capmatrix_AXI4#(awidth, iwidth, dwidth, uwidth, mem_size))
    provisos(Add#(dwidth, a, 64), 
             Mul#(8, a__, dwidth), 
             Mul#(16, b__, dwidth), 
             Mul#(32, c__, dwidth), 
             Add#(32, b, dwidth), 
             Add#(4, d__, TDiv#(dwidth, 8)),
						 Add#(1, e__, mem_size));
    UserInterface#(awidth, dwidth, mem_size) dut <- mkcapmatrix(base, mem_init_file1, mem_init_file2, modulename);
	  AXI4_Slave_Xactor_IFC #(awidth, dwidth, uwidth)  s_xactor <- mkAXI4_Slave_Xactor;
    Integer verbosity = `VERBOSITY;
    Reg#(Bit#(id_width)) rg_rd_id <-mkRegA(0);
    Reg#(Mem_State) read_state <-mkRegA(Idle);
    Reg#(Mem_State) write_state <-mkRegA(Idle);
	  Reg#(Bit#(8)) rg_readburst_counter<-mkRegA(0);
	  Reg#(AXI4_Rd_Addr	#(awidth,iwidth, uwidth)) rg_read_packet <-mkRegA(?);
		Reg#(AXI4_Wr_Addr	#(awidth,iwidth, uwidth)) rg_write_packet<-mkRegA(?); 

    // If the request is single then simple send ERR. If it is a burst write request then change
    // state to Burst and do not send response.
    rule write_request_address_channel(write_state==Idle);
      let aw <- pop_o (s_xactor.o_wr_addr);
      let w  <- pop_o (s_xactor.o_wr_data);
      dut.write_request(tuple3(aw.awaddr, w.wdata, w.wstrb));
			AXI4_Resp bresp;
			if(dut.write_response)
				bresp=AXI4_OKAY;
			else
				bresp=AXI4_SLVERR;

	    let b = AXI4_Wr_Resp {bresp: bresp, buser: aw.awuser, bid:aw.awid};
      if(!w.wlast)
        write_state<= Burst;
      else
  	  	s_xactor.i_wr_resp.enq (b);
			rg_write_packet<=aw;
    endrule
    // if the request is a write burst then keeping popping all the data on the data_channel and
    // send a error response on receiving the last data.
    rule write_request_data_channel(write_state==Burst);
      let w  <- pop_o (s_xactor.o_wr_data);
  		let address=axi4burst_addrgen(rg_write_packet.awlen, rg_write_packet.awsize, 
            rg_write_packet.awburst, rg_write_packet.awaddr);
      dut.write_request(tuple3(address, w.wdata, w.wstrb));
			AXI4_Resp bresp;
			if(dut.write_response)
				bresp=AXI4_OKAY;
			else
				bresp=AXI4_SLVERR;
	    let b = AXI4_Wr_Resp {bresp: bresp, buser: rg_write_packet.awuser, 
                          bid:rg_write_packet.awid};
      rg_write_packet.awaddr<=address;
      if(w.wlast) begin	//TODO Check
	  	  s_xactor.i_wr_resp.enq (b);
        write_state<= Idle;
      end
    endrule
    // read first request and send it to the dut. If it is a burst request then change state to
    // Burst. capture the request type and keep track of counter.
    rule read_request_first(read_state==Idle);
		  let ar<- pop_o(s_xactor.o_rd_addr);
      dut.read_request(ar.araddr);
      rg_rd_id<= ar.arid;
      if(ar.arlen!=0)
        read_state<=Burst;
      rg_readburst_counter<=0;
		  rg_read_packet<=ar;
    endrule
    // incase of burst read,  generate the new address and send it to the dut untill the burst
    // count has been reached.
    rule read_request_burst(read_state==Burst);
      if(rg_readburst_counter==rg_read_packet.arlen)
        read_state<=Idle;
      else begin
  		  let address=axi4burst_addrgen(rg_read_packet.arlen, rg_read_packet.arsize, 
            rg_read_packet.arburst, rg_read_packet.araddr);
        rg_read_packet.araddr<=address;
        rg_readburst_counter<= rg_readburst_counter+1;
        dut.read_request(address);
      end
    endrule
    // get data from the memory. shift,  truncate, duplicate based on the size and offset.
    rule read_response;
      let {err, data0}<-dut.read_response;
  		let transfer_size=rg_read_packet.arsize;
      `ifdef RV64
        let shift_amount = {3'b0, rg_read_packet.araddr[2:0]}<<3;
      `else
        let shift_amount = {3'b0, rg_read_packet.araddr[1:0]}<<3;
      `endif
      data0=data0>>shift_amount;
      if(transfer_size=='d2)
        data0=duplicate(data0[31:0]);
      else if(transfer_size=='d1)
        data0=duplicate(data0[15:0]);
      else if(transfer_size=='d0)
        data0=duplicate(data0[7:0]);
      AXI4_Rd_Data#(iwidth,dwidth, uwidth) r = AXI4_Rd_Data {rresp: AXI4_OKAY, rdata: data0 , 
        rlast:rg_readburst_counter==rg_read_packet.arlen, ruser: rg_read_packet.aruser, rid:rg_read_packet.arid};
  		if(verbosity!=0) 
        $display($time, "\tCapMatrix : Responding Read Request with Data: %h ",data0);
      s_xactor.i_rd_data.enq(r);
    endrule
    interface slave = s_xactor.axi_side;
  endmodule


  interface Ifc_capmatrix_AXI4Lite#(numeric type addr_width, numeric type data_width,
                                    numeric type user_width, numeric type mem_size);
    interface AXI4_Lite_Slave_IFC#(addr_width, data_width, user_width) slave; 
  endinterface

  module mkcapmatrix_AXI4Lite#(Bit#(awidth) base, parameter String mem_init_file1, 
        parameter String mem_init_file2, parameter String modulename )(Ifc_capmatrix_AXI4Lite#(awidth, dwidth, uwidth, mem_size))
    provisos(Add#(dwidth, a, 64), 
             Mul#(8, a__, dwidth), 
             Mul#(16, b__, dwidth), 
             Mul#(32, c__, dwidth), 
             Add#(32, b, dwidth), 
             Add#(4, d__, TDiv#(dwidth, 8)),
					   Add#(1, e__, mem_size));
    UserInterface#(awidth, dwidth, mem_size) dut <- mkcapmatrix(base, mem_init_file1, mem_init_file2, modulename);
	  AXI4_Lite_Slave_Xactor_IFC #(awidth, dwidth, uwidth)  s_xactor <- mkAXI4_Lite_Slave_Xactor;
    Integer verbosity = `VERBOSITY;
    Integer byte_offset = valueOf(TDiv#(dwidth, 32));
    Reg#(Bit#(2)) rg_size <-mkRegA(3);
    Reg#(Bit#(TAdd#(1, TDiv#(dwidth, 32)))) rg_offset <-mkRegA(0);
		Reg#(Bit#(uwidth)) rg_aruser <- mkRegA(0);
    // If the request is single then simple send ERR. If it is a burst write request then change
    // state to Burst and do not send response.
    rule write_request_address_channel;
      let aw <- pop_o (s_xactor.o_wr_addr);
      let w  <- pop_o (s_xactor.o_wr_data);
      dut.write_request(tuple3(aw.awaddr, w.wdata, w.wstrb));
			AXI4_Lite_Resp bresp;
			if(dut.write_response)
				bresp=AXI4_LITE_OKAY;
			else
				bresp=AXI4_LITE_SLVERR;
	    let b = AXI4_Lite_Wr_Resp {bresp: bresp, buser: aw.awuser};
	  	s_xactor.i_wr_resp.enq (b);
    endrule
    // read first request and send it to the dut. If it is a burst request then change state to
    // Burst. capture the request type and keep track of counter.
    rule read_request_first;
		  let ar<- pop_o(s_xactor.o_rd_addr);
      dut.read_request(ar.araddr);
      rg_size<= ar.arsize;
      rg_offset<= ar.araddr[byte_offset:0];
			rg_aruser<= ar.aruser;
    endrule
    // get data from the memory. shift,  truncate, duplicate based on the size and offset.
    rule read_response;
      let {err, data0}<-dut.read_response;
  		let transfer_size=rg_size;
      let shift_amount = {3'b0, rg_offset}<<3;
      data0=data0>>shift_amount;
      if(transfer_size=='d2)
        data0=duplicate(data0[31:0]);
      else if(transfer_size=='d1)
        data0=duplicate(data0[15:0]);
      else if(transfer_size=='d0)
        data0=duplicate(data0[7:0]);
      AXI4_Lite_Rd_Data#(dwidth, uwidth) r = AXI4_Lite_Rd_Data {rresp: AXI4_LITE_OKAY, rdata: data0 , 
        ruser: rg_aruser};
  		if(verbosity!=0) 
        $display($time, "\tMainMem : Responding Read Request with Data: %h ",data0);
      s_xactor.i_rd_data.enq(r);
    endrule
    interface slave = s_xactor.axi_side;
  endmodule

endpackage
