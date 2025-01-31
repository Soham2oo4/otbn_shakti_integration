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

Author: Aditya Mathur
Email id: aditya.mathur96@outlook.com
Details:

--------------------------------------------------------------------------------------------------
*/
package clic;
	import Vector::*;
	import ConfigReg::*;
	import Semi_FIFOF::*;
	import AXI4_Lite_Types::*;
	import AXI4_Lite_Fabric::*;
	import AXI4_Types::*;
	import AXI4_Fabric::*;	
	import BUtils ::*;
	import ConcatReg ::*;
	import device_common::*;
	import encoder::*;
	import GetPut::*;
	
	`include "clic.defines"
	`include "Logger.bsv"

	export Ifc_clic_axi4lite (..);
	export Ifc_clic_axi4 (..);
	export mkclic_axi4;
	export mkclic_axi4lite;
	export Clic_io (..);

//support for all three modes(M,S,U) in c-class and only M,U mode in E-class 
//ifdef definition for C-class and E-class which will set the value of nmbit in cliccfg

//this means since the upper two bits of clicintctr will be used to describe the 
//privilege modes, the remaining 6 bits can be used to define levels, priority or both
// 



//================================interface===========================================//
interface Clic_io#(numeric type number_of_interrupt);
	method Action clic_ip_io(Vector#(number_of_interrupt,Bit#(1)) inp);
endinterface
interface User_ifc#(numeric type addr_width, numeric type data_width, numeric type user_width, numeric type number_of_interrupt);
	method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width) addr, AccessSize size);
	method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, AccessSize size);	
	interface Clic_io#(number_of_interrupt)	io;// interface for io

//	interface Get#(Bit#(1))	 sb_clic_hvec;//sideband for selecting between mtvec or mtvt

//sideband for providing the index number, actual interrupt value(clicintctr), selective hardware vectoring bit
//and 0 bit for conveying to the core that interrupt is pending in CLIC
	interface Get#(Bit#(20)) sb_interrupt;
endinterface


module mkclic(User_ifc#(addr_width,data_width,user_width,number_of_interrupt))
	provisos(
		Add#(a__, data_width, 64),
    	Add#(b__, 8, data_width),
		Mul#(data_width,c__,64),
	    Mul#(8, f__, data_width),
    	Mul#(16, g__, data_width),
	    Mul#(32, h__, data_width)


	);


	Ifc_enc#(number_of_interrupt) enc <- mkmain;//instantiating encoder
	
	//====================control registers=====================//

	//this reg defines the mode, level and priority of the interrupt
	Vector#(number_of_interrupt,Reg#(Bit#(8)))	clicintctr <- replicateM(mkRegA(0));
	//manipulation of interrupt enable bits will be set by software while the pending bits are set by the io pins
	Vector#(number_of_interrupt,Reg#(Bit#(1))) clicint_ie <- replicateM(mkRegA(0));//interrupt enable 
	Vector#(number_of_interrupt,Reg#(Bit#(1))) clicint_ip <- replicateM(mkRegA(0));//interrupt pending

	//this reg defines the number of bits in clicintctr which are dedicated for modes, levels, priorities
	Reg#(Bit#(1)) res_cliccfg <- mkRegA(0);//reserved bit 7
	res_cliccfg=readOnlyReg(0);
	Reg#(Bit#(2)) cliccfg_nm <- mkRegA(1);// number of bits for mode, the default value is set to 1, meaning machine and user mode are available

//===============================setting for the cliccfg mode support bits============================//
//`ifdef supervisor 
//	cliccfg_nm='b10;
//`else
//	cliccfg_nm='b01;
//`endif	


	Reg#(Bit#(4)) cliccfg_nl <- mkRegA(0);// number of bits for levels and the remaining bit will be treated for defining priority
	
	// this describes interrupt as vectored or not vectored (0 or 1)
	// if it is 1 then the least significant of clicintctr further controls the vectoring behaviour, 0 means follow default mtvec, 1 means follow new CSR mtvt
	Reg#(Bit#(1)) cliccfg_vec <- mkRegA(0);// this describes whether the interrupt is selectively hardware vectored or not (1 or 0), this acts as the global enable bit for the selective vectoring
	Reg#(Bit#(8)) cliccfg = concatReg4(res_cliccfg,cliccfg_nm,cliccfg_nl,cliccfg_vec);

	Reg#(Bit#(8)) int_winner<- mkRegA(0);
	Reg#(Bit#(10)) int_index <- mkRegA(0);//for storing the index of the selected interrupt
	Reg#(Bit#(1)) rg_pending <- mkRegA(0);//this register will go via side band indicating that an interrupt is pending
	Vector#(number_of_interrupt,Reg#(Bit#(1))) clic_hvec <-replicateM(mkRegA(0));//hardware vectoring for individual interrupt, if the global vectoring bit in the cliccfg is set
	Reg#(Bit#(1)) rg_hvec <- mkRegA(0);//single bit reg which will be sent out as sideband for hvectoring
	Reg#(Bit#(20)) rg_sb_int = concatReg4(int_index,int_winner,rg_hvec,rg_pending);//sideband for the core

	Reg#(Bool) done <- mkRegA(False);//this to avoid conflicts between encoder_out and method write_req
		
	Integer limit=valueOf(number_of_interrupt);
	//rule for interrupt selection, vectored or not vectored decision, and giving input to encoder
	rule winner_int;
		Vector#(number_of_interrupt,Bit#(8)) temp_vec=replicate(0);
		Bit#(1) temp_pending=0;
		for(Integer i=0; i<limit;i=i+1)
		begin
			temp_vec[i]=(unpack(clicint_ie[i])&&unpack(clicint_ip[i]))?clicintctr[i]:0;// creating a temp vector	
			if(unpack(cliccfg_vec))//only if selective vectoring is globally enabled
				clic_hvec[i]<=(unpack(cliccfg[0])&&unpack(clicintctr[i][0]))?1:0;//updating the hardware vectoring  bit for selected interrupt, else clic_hvec remains 0, as it was initialized
			if(unpack(clicint_ie[i])&&unpack(clicint_ip[i]))
				temp_pending=1;//even if any interrupt has enable and pending set then it needs to be communicated to the core

				`logLevel(2, $format("\ninside winner int rule, checking the ie :0x%0x and ip :0x%0x bits, if both set then clicintctr : 0x%0x, clic_hvec ;0x%0x,\n pending_bit for this interrupt:0x%0x,
					    value of loop variable =0x%0x \n",clicint_ie[i],clicint_ip[i],temp_vec[i], clic_hvec[i], temp_pending,i))
		end

		enc.inp(temp_vec);//giving the input to the encoder
		rg_pending<=temp_pending;//stating the core that there is some interrupt pending to be served sideband
	endrule
	rule encoder_out(done);
		let {winnerint,index} = enc.out;// recieving the output from the encoder
		int_winner<=winnerint;// updating the sideband register 8-bit clicint_ctr reg
		int_index<=index;// updating the sideband register 10-bit index reg
		rg_hvec<=clic_hvec[index];//updating the single bit sideband
		done<=False;
			`logLevel(2, $format("encoder_out  : winner int. clic_ctr val : 0x%0x, winner interrupt index : 0x%0x, hw_vec : 0x%0x \n",int_winner,int_index,clic_hvec[index]))

	endrule
	method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width) addr, AccessSize size);
		Bool success=True;
		Bit#(6) shift_amt=zeroExtend(addr[4:2])<<3;// lower 3 bits define the offset for the shift in 64 bit data
		//upper 4 bits define the offset for the address,
		//shifting by 6 == multiply by 64, 4 bits are taken because 1024/64=16, thus the complete
		//1024 section is divided into 16 equal sections
		Bit#(10) base=addr[11:2];
		let d_value=valueOf(data_width);
		Bit#(64) temp=0;
		Bit#(data_width) data=0;
		// this is needed when the number_of_interrupt in less than 64 than for loop should only run
		//number_of_interrupt times while for greater than 64 it should only run for max 64 times because the max length support by bus is 64bits
		Integer loop=(limit>64)?64:limit;//where limit is the number of interrupts
		
	// always taking the LSB byte and writing it in the LSB byte of the address	
		if(addr >=`clicintcontrol && addr<`clicint_ie)
		begin
				temp=zeroExtend(clicintctr[base]);//taking 64 bit in temp in accordance with the addr
				`logLevel(2, $format("				CLIC:		reading CLIC controlregister with base_addr:=%0h, temp=0x%0x \n",base,temp))
		end
		else if(addr>=`clicint_ie && addr<`clicint_ip)
		begin
					temp=zeroExtend(clicint_ie[base]);
					`logLevel(2, 	$format("				CLIC:		reading CLIC enable register with base_addr:=%0h, temp:=%0h, clicint_ie:=0x%0x \n",base,temp,clicint_ie[base]))
		end
		else if(addr>=`clicint_ip && addr<`clicconfig)
		begin
				temp=zeroExtend(clicint_ip[base]);
					`logLevel(2, $format("				CLIC:		reading CLIC pending register with base_addr:=%0h, temp=%0h, clicint_ip=0x%0x \n",base,temp,clicint_ip[base]))
		end
		else if(addr==`clic_final_int)
		begin
				temp=zeroExtend(int_winner);//sending winner interrupt
					`logLevel(2, $format("				CLIC:		reading CLIC winnner interrupt register with base_addr:=%0h, temp:=%0h, int_winnner=0x%0x \n",base,temp,int_winner))
		end
		else if(addr==`clic_int_index)
		begin
				temp=zeroExtend(int_index);
					`logLevel(2, $format("				CLIC:		reading CLIC winnner interrupt index with base_addr:=%0h, temp:=%0h, int_index=0x%0x \n",base,temp,int_index))			
		end
		else if(addr==`clicconfig)
		begin
			temp=zeroExtend(cliccfg);
				`logLevel(2, $format("				CLIC:		reading CLIC config reg with base_addr:=%0h, temp=0%0h, cliccfg=0x%0x \n",base,temp,cliccfg))
		end

		if(size==Byte && d_value%8==0)	
			temp=duplicate(temp[7:0]);
		else if(size==HWord && d_value%16==0)	
			temp=duplicate(temp[15:0]);
		else if(size==Word && d_value%32 ==0)	
			temp=duplicate(temp[31:0]);
		else if(size==DWord && d_value%64==0)
			temp=temp;
		else 
			success=False;
		data=truncate(temp);

			`logLevel(2, $format("	CLIC: final value of the data that begin returned by the read function : 0x%0x   \n",data))			

			return tuple2(success,data);
	endmethod

	method ActionValue#(Bool) write_req(Bit#(addr_width) addr,Bit#(data_width) data, AccessSize size)if(!done);
		Bool success =True;
		Bit#(64) temp=0;
		Bit#(6) shift_amt=zeroExtend(addr[2:0])<<3;
//		Bit#(10) base={6'd0,addr[6:3]}<<6;//taking 4 bits and multiplying them by 64
		Bit#(10) base=addr[11:2];
        data=case (size)
          Byte: duplicate(data[7:0]);
          HWord: duplicate(data[15:0]);
          Word: duplicate(data[31:0]);
        endcase;

		Bit#(64) mask=size==Byte?'hFF:size==HWord?'hFFFF:size==Word?'hFFFFFFFF:'1;
		mask=mask<<shift_amt;	
	    Bit#(64) datamask=duplicate(data)&mask;
        let notmask=~mask;
		
			`logLevel(2, $format("CLIC:     inside the write function, recieved data=0x%0x, received addr=0x%0x, base_addr=0x%0x\n",data,addr,base))


	 	if(addr<`clicint_ie && addr>=`clicintcontrol)			
		begin
				clicintctr[base]<=data[7:0];
				`logLevel(2, $format("				CLIC:		updating CLIC controlregister with base_addr:=0x%0x,data written:=0x%0x ,updated value:=0x%0x \n",base,data[7:0],clicintctr[base]))
		end		
		else if(addr<`clicint_ip && addr>=`clicint_ie)	
		begin
				//taking and with notmask helps in retaining the pervious values except the byte, hword etc.
				//to be updated and taking OR with datamask updates that perticular byte,word etc. which needs to be updated 
				//temp[8*i+7:8*i]=clicint_ie[base+i];
				//temp=(temp&notmask[8*i+7:8*i])|datamask[8*i+7:8*i];
				clicint_ie[base]<= data[0];

				`logLevel(2, $format("				CLIC:		updating CLIC enable register with base_addr:=%0h,clicint_ie=%0x,data:=0x%0x\n",base,clicint_ie[base],data[0]))
		end		
 		else if(addr<`clicconfig && addr>=`clicint_ip)	
		begin
				clicint_ip[base]<= data[0];

				`logLevel(2, $format("				CLIC:		updating CLIC pending register with base_addr:=%0h,clicint_ip:=%0x, data:=%0x  \n",base,clicint_ip[base],data[0]))
		end		

		else if(addr==`clicconfig)	
		begin	
			cliccfg<=data[7:0];
			`logLevel(2, $format("				CLIC:		updating CLIC config register with base_addr:=%0h, data=%0h \n",base,data[7:0]))
		end
		else
			success=False;
		done<=True;	
		return success;
	endmethod
	
	interface sb_interrupt=interface Get
		method ActionValue#(Bit#(20)) get();
			return rg_sb_int;
		endmethod
	endinterface;

	interface io=interface Clic_io#(number_of_interrupt)
		method Action clic_ip_io(Vector#(number_of_interrupt,Bit#(1)) inp);
			for(Integer i=0;i<valueOf(number_of_interrupt);i=i+1)
			begin 
				clicint_ip[i]<=inp[i];
			end
		endmethod
	endinterface;
endmodule:mkclic

interface Ifc_clic_axi4lite#(numeric type addr_width, numeric type data_width, numeric type user_width, numeric type number_of_interrupt);
	interface AXI4_Lite_Slave_IFC#(addr_width,data_width,user_width) slave;
	//interface Get#(Bit#(1)) sb_clic_hvec;
	interface Get#(Bit#(20)) sb_interrupt;	
	interface Clic_io#(number_of_interrupt)	io;// interface for io
endinterface

module mkclic_axi4lite(Ifc_clic_axi4lite#(addr_width,data_width,user_width,number_of_interrupt))
		provisos(
		Add#(a__, data_width, 64),
    	Add#(b__, 8, data_width),
		Mul#(data_width,c__,64),
		Mul#(8, f__, data_width),
 		Mul#(16, g__, data_width),
 		Mul#(32, h__, data_width)

	);
	User_ifc#(addr_width,data_width,user_width,number_of_interrupt) clic<-mkclic;
	AXI4_Lite_Slave_Xactor_IFC#(addr_width,data_width,user_width)  s_xactor <- mkAXI4_Lite_Slave_Xactor();

	rule read_req;
		let req <- pop_o(s_xactor.o_rd_addr);
		let {succ,data}<-clic.read_req(req.araddr,unpack(truncate(req.arsize)));
	 	let r = AXI4_Lite_Rd_Data {rresp: succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, rdata: data, ruser: 0};
	 	s_xactor.i_rd_data.enq(r);
	endrule
	
	rule write_req;
		let aw <- pop_o(s_xactor.o_wr_addr);
		let w <- pop_o(s_xactor.o_wr_data);
		let succ <- clic.write_req(aw.awaddr,w.wdata,unpack(truncate(aw.awsize)));
		let r = AXI4_Lite_Wr_Resp {bresp: succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: 0 };
		s_xactor.i_wr_resp.enq (r);
	endrule

	//interface sb_clic_hvec= clic.sb_clic_hvec;
	interface sb_interrupt=clic.sb_interrupt;	
	interface slave = s_xactor.axi_side;
	interface io=clic.io;	
endmodule

interface Ifc_clic_axi4#(numeric type addr_width,numeric type data_width,numeric type user_width,numeric type number_of_interrupt);
	interface AXI4_Slave_IFC#(addr_width,data_width,user_width) slave;
	//interface Get#(Bit#(1))	sb_clic_hvec;
	interface Get#(Bit#(20)) sb_interrupt;	
	interface Clic_io#(number_of_interrupt) io;
endinterface

module mkclic_axi4(Ifc_clic_axi4#(addr_width,data_width,user_width,number_of_interrupt))
			provisos(
		Add#(a__, data_width, 64),
    	Add#(b__, 8, data_width),
		Mul#(data_width,c__,64),
		Mul#(8, f__, data_width),
		Mul#(16, g__, data_width),
		Mul#(32, h__, data_width)

		);
	User_ifc#(addr_width,data_width,user_width,number_of_interrupt) clic<-mkclic;
	AXI4_Slave_Xactor_IFC#(addr_width,data_width,user_width)  s_xactor <- mkAXI4_Slave_Xactor();
	

	 	Reg#(Bit#(8)) rg_rdburst_count <- mkRegA(0);
		Reg#(Bit#(8)) rg_wrburst_count <- mkRegA(0);

		Reg#(AXI4_Rd_Addr#(addr_width,user_width)) rg_rdpacket <- mkRegA(?);
 		Reg#(AXI4_Wr_Addr#(addr_width,user_width)) rg_wrpacket <- mkRegA(?);

	 	rule axi_read_transaction(rg_rdburst_count==0);
	 		let req <- pop_o(s_xactor.o_rd_addr);
	 		let {succ,data}<-clic.read_req(req.araddr,unpack(truncate(req.arsize)));
	 		rg_rdpacket<=req;
	 		if(req.arlen!=0)
	 			rg_rdburst_count<=1;

				`logLevel(2, $format("CLIC:   Inside read ,read address =0%0x, read data =0%0x, successFromReadFunction =%0x\n",req.araddr,data,succ))

	 		let r = AXI4_Rd_Data {rresp: succ?AXI4_OKAY:AXI4_SLVERR,rid:req.arid,rlast:(req.arlen==0), 
          rdata: data, ruser: 0};
	 		s_xactor.i_rd_data.enq(r);
	 	endrule
		
		rule read_burst_traction(rg_rdburst_count!=0);
			let rd_req=rg_rdpacket;
			let {succ,data}<-clic.read_req(rd_req.araddr,unpack(truncate(rd_req.arsize)));
			succ=False;
			if(rg_rdburst_count==rd_req.arlen)
				rg_rdburst_count<=0;
			else
				rg_rdburst_count<=rg_rdburst_count+1;

				`logLevel(2, $format("CLIC:    Inside burst read ,read address =%0x, read data =%0x, successFromReadFunction =%0x\n",rd_req.araddr,data,succ))

			let resp= AXI4_Rd_Data{rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:rd_req.arid,
          rlast:(rd_req.arlen==0),rdata:data, ruser: ?};
			s_xactor.i_rd_data.enq(resp);		

		endrule

	 	rule axi_write_transaction(rg_wrburst_count==0);
	 		let aw <- pop_o(s_xactor.o_wr_addr);
	 		let w <- pop_o(s_xactor.o_wr_data);
	 		rg_wrpacket<=aw;
	 		let succ <- clic.write_req(aw.awaddr,w.wdata,unpack(truncate(aw.awsize)));
	 		if(aw.awlen!=0)
	 			rg_wrburst_count<=1;
	 		let r = AXI4_Wr_Resp {bresp: succ?AXI4_OKAY:AXI4_SLVERR, buser: 0 , bid:aw.awid};
				`logLevel(2, $format("CLIC:    Inside normal without burst write ,write address =%0x, write data =%0x, successFromWriteFunction =%0x\n",aw,w,succ))
	 		if(w.wlast)
	 			s_xactor.i_wr_resp.enq (r);
	 	endrule

	 	rule write_burst_traction(rg_wrburst_count!=0);
	 		let addreq=rg_wrpacket;
	 		let datareq<-pop_o(s_xactor.o_wr_data);
	 		Bool succ=False;
	 		let resp = AXI4_Wr_Resp {bresp: succ?AXI4_SLVERR:AXI4_OKAY, buser: ?, bid:addreq.awid};
			if(datareq.wlast)begin
	      		s_xactor.i_wr_resp.enq(resp);//enqueuing the write response
	      		rg_wrburst_count<=0;
	      	end
				`logLevel(2, $format("CLIC:   Inside burst write ,write address =%0x, write data =%0x, successFromWriteFunction =%0x\n",addreq,datareq,succ))

	 	endrule
	interface sb_interrupt=clic.sb_interrupt;	
	interface slave = s_xactor.axi_side;
	interface io=clic.io;
endmodule
endpackage
