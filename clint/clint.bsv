/* 
see LICENSE.iitm
--------------------------------------------------------------------------------------------------

Author: Aditya Mathur, Neel Gala
*/
package clint;

	`include "clint.defines"

	/*=== library imports === */ 
	import ConfigReg::*;
	import Semi_FIFOF::*;
	import AXI4_Lite_Types::*;
	import AXI4_Types::*;
	import BUtils ::*;
  import device_common::*;
  import GetPut::*;
  import Assert::*;
  import Vector::*;
  `include "Logger.bsv"

  export Ifc_clint_axi4       (..);
  export mkclint_axi4;
  //`ifndef axi4_128b
  //  export Ifc_clint_axi4lite   (..);
  //  export mkclint_axi4lite;
  //`endif

	interface User_ifc#(numeric type addr_width, numeric type data_width, numeric type msip_size,
      numeric type tick_count);//giving msipsize as a parameter 
    method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, AccessSize
        size);
		method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width) addr, AccessSize size);
    interface Get#(Bit#(msip_size)) sb_clint_msip;
    interface Get#(Bit#(msip_size)) sb_clint_mtip;
    interface Get#(Bit#(64)) sb_clint_mtime;
    method Action ma_stop_count (Bit#(1) _stop);
	endinterface

	function Reg#(t) writeSideEffect(Reg#(t) r,Action a);
		return (interface Reg;
			method t _read =r._read;
			method Action _write(t x);
			r._write(x);
			a;
			endmethod
			endinterface);
	endfunction

	module mkclint(User_ifc#(addr_width,data_width,msip_size, tick_count))
		provisos(
        `ifndef axi4_128b
      Add#(b__, data_width, 64),
      Add#(d__, TDiv#(data_width, 8), 8),
      Mul#(msip_size, a__, 64),
      Add#(e__, msip_size, data_width),
      Mul#(data_width, c__, 64),
    `else
      Add#(b__, data_width, 128),
      Add#(d__, TDiv#(data_width, 8), 16),
      Mul#(msip_size, a__, 128),
      Add#(e__, msip_size, data_width),
      Mul#(data_width, c__, 128),
      Mul#(64, j__, data_width),
    `endif
    Mul#(8, f__, data_width),
    Mul#(16, g__, data_width),
    Mul#(32, h__, data_width),
    Add#(k__, 1, data_width),
    Log#(tick_count, i__)
			);	

    staticAssert(valueOf(TExp#(i__))==valueOf(tick_count),"tick count has to be power of 2");
    let dvalue=valueOf(data_width);
		Wire#(Bool) wr_mtimecmp_written<-mkDWire(False);
        Wire#(Bit#(1)) wr_stop_count <- mkDWire(0);
		Vector#(msip_size,Reg#(Bit#(1))) msip <-replicateM(mkRegA(0)); // Msip_size has been parameterised
		Vector#(msip_size,Reg#(Bit#(1))) mtip <-replicateM(mkRegA(0));
		Reg#(Bit#(64)) rgmtime<-mkRegA(0);
		Vector#(msip_size,Reg#(Bit#(64))) rgmtimecmp<-replicateM(mkRegA('hFFFFFFFFFFFFFFFF));
			Vector#(msip_size,Reg#(Bit#(64))) csr_mtimecmp <-replicateM(mkRegA(0));
			let k=valueOf(msip_size);
					// rule rl_display_status;
					//   `logLevel( clint, 2, $format("CLINT: msip %h mtip %h rgmtime %h rgmtimecmp %h csr_mtimecmp %h rg_tick %h # wr_mtimecmp_written %h", msip, mtip, rgmtime, rgmtimecmp, csr_mtimecmp, rg_tick, wr_mtimecmp_written))
					// endrule
			for(Integer i=0;i<k ;i=i+1)
				csr_mtimecmp[i]=writeSideEffect(rgmtimecmp[i],wr_mtimecmp_written._write(True));
		Reg#(Bit#(TLog#(tick_count))) rg_tick <-mkRegA(0);
               /* rule rl_display_status;
                  `logLevel( clint, 2, $format("CLINT: msip %h mtip %h rgmtime %h rgmtimecmp %h csr_mtimecmp %h rg_tick %h # wr_mtimecmp_written %h", msip, mtip, rgmtime, rgmtimecmp, csr_mtimecmp, rg_tick, wr_mtimecmp_written))
                endrule
*/
		rule generate_time_interrupt(!wr_mtimecmp_written);
			for (Integer i = 0; i < k; i = i + 1) begin
					mtip[i] <= pack(rgmtime >= rgmtimecmp[i]); 
				end
		endrule
		rule clear_interrupt(wr_mtimecmp_written);
			for(Integer i=0;i<k;i=i+1) begin
					mtip[i]<=0; 
					end
		endrule
		rule increment_timer(wr_stop_count==0);
			if(rg_tick==0)begin
				rgmtime<=rgmtime+1;
			end
			rg_tick<=rg_tick+1;
		endrule

		method ActionValue#(Tuple2#(Bool, Bit#(data_width))) read_req(Bit#(addr_width) addr,AccessSize size);
			Bool success=True;

			Bit#(data_width) data=0;			
			
      Bit#(6) shift_amt=zeroExtend(addr[2:0])<<3;
      `ifndef axi4_128b
        Bit#(64) temp=0;
      `else
        Bit#(128) temp=0;
      `endif
			if( addr[15:0]>=`msipreg && addr[15:0] < `msipreg + (fromInteger(k)*4) )
			begin
				for(Integer i=0;i<k;i=i+1) begin
					if(addr[15:0]>=(`msipreg+(fromInteger(i)*4)) &&  addr[15:0]< (`msipreg+((fromInteger(i)+1)*4)))
						temp = zeroExtend(msip[i]);
				end
			end
			else if ( addr[15:0]>=`mtimecmpreg && addr[15:0] < `mtimecmpreg+(fromInteger(k)*8) ) 
				begin
				  for(Integer i=0;i<k;i=i+1) begin
					if(addr[15:0]>=(`mtimecmpreg+(fromInteger(i)*8)) &&  addr[15:0]< (`mtimecmpreg+((fromInteger(i)+1)*8)))
					temp=duplicate(csr_mtimecmp[i]);
				end
			end
			else if( addr[15:0]>=`mtimereg && addr[15:0] <= `mtimereg+7 )
				temp=duplicate(rgmtime);
			else
				success=False;	

      temp = temp>>shift_amt;

      if(size==Byte && dvalue%8==0)
        temp=duplicate(temp[7:0]);
      if(size==HWord && dvalue%16==0)
        temp=duplicate(temp[15:0]);
      else if(size==Word && dvalue%32==0)
        temp=duplicate(temp[31:0]);
    `ifdef axi4_128b
      else if(size == DWord && dvalue%64==0)	
        temp=duplicate(temp[63:0]);
    `endif
      data=truncate(temp);
			return tuple2(success,data);
		endmethod

    method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, AccessSize
        size);
        Bool success=True;
        `ifndef axi4_128b
          Bit#(64) temp = 0;
          Bit#(64) mask=size==Byte?'hff:size==HWord?'hFFFF:size==Word?'hFFFFFFFF:'1;
        `else
          Bit#(128) temp = 0;
          Bit#(128) mask=size==Byte?'hff:size==HWord?'hFFFF:size==Word?'hFFFFFFFF:'1;
        `endif
        data=case (size)
          Byte: duplicate(data[7:0]);
          HWord: duplicate(data[15:0]);
          Word: duplicate(data[31:0]);
        `ifdef axi4_128b
          DWord: duplicate(data[63:0]);
        `endif
          default: data;
        endcase;
        Bit#(6) shift_amt=zeroExtend(addr[2:0])<<3;
        mask=mask<<shift_amt;
        `ifndef axi4_128b
          Bit#(64) datamask=duplicate(data)&mask;
        `else 
          Bit#(128) datamask= duplicate(data) & mask;
        `endif
        let notmask=~mask;
		  	if (addr[15:0] >= `msipreg && addr[15:0] < `msipreg + (fromInteger(k) * 4)) begin
			for (Integer i = 0; i < k; i = i + 1) begin
				if (addr[15:0] >= (`msipreg + (fromInteger(i) * 4)) &&
					addr[15:0] <  (`msipreg + ((fromInteger(i) + 1) * 4)))
				msip[i] <= truncate(data);
			end
		end
		else if (addr[15:0] >= `mtimecmpreg && addr[15:0] < `mtimecmpreg + (fromInteger(k) * 8)) begin
	
          `ifndef axi4_128b
            for (Integer i = 0; i < k; i = i + 1) begin
					if (addr[15:0] >= (`mtimecmpreg + (fromInteger(i) * 8)) &&
						addr[15:0] <  (`mtimecmpreg + ((fromInteger(i) + 1) * 8)))
						csr_mtimecmp[i] <= (csr_mtimecmp[i] & notmask) | datamask;
				end
          `else
            for (Integer i = 0; i < k; i = i + 1) begin
					if (addr[15:0] >= (`mtimecmpreg + (fromInteger(i) * 8)) &&
						addr[15:0] <  (`mtimecmpreg + ((fromInteger(i) + 1) * 8)))
						csr_mtimecmp[i] <= truncate((zeroExtend(csr_mtimecmp[i]) & notmask) | datamask);	
				end			
          `endif
        end
		    else
		  		success=False;	
        return success;
    endmethod
    interface sb_clint_msip= interface Get
      method ActionValue#(Bit#(msip_size)) get();
        Bit#(msip_size) msip_concat=0;
			Bit#(data_width) temp;
			for(Integer i=0;i<k;i=i+1) begin
				temp=zeroExtend(msip[i]);
				msip_concat[i]=temp[0];
			end
				return msip_concat;
      endmethod
    endinterface;
    interface sb_clint_mtip = interface Get
      method ActionValue#(Bit#(msip_size)) get();
	Bit#(msip_size) mtip_concat=0;
			Bit#(data_width) temp;
			for(Integer i=0;i<k;i=i+1) begin
				temp=zeroExtend(mtip[i]);
				mtip_concat[i]=temp[0];
			end
				return mtip_concat;
      endmethod
    endinterface;
    interface  sb_clint_mtime= interface Get
      method ActionValue#(Bit#(64)) get();
        return rgmtime;
      endmethod
    endinterface;
    method Action ma_stop_count (Bit#(1) _stop);
      wr_stop_count <= _stop;
    endmethod:ma_stop_count
	endmodule:mkclint

  `ifndef axi4_128b
	 interface Ifc_clint_axi4lite#(numeric type addr_width, numeric type data_width, 
      numeric type user_width, numeric type msip_size, numeric type tick_count);
	 	interface AXI4_Lite_Slave_IFC#(addr_width,data_width,user_width) slave;
    interface Get#(Bit#(msip_size)) sb_clint_msip;
    interface Get#(Bit#(msip_size)) sb_clint_mtip;
    interface Get#(Bit#(64)) sb_clint_mtime;
    method Action ma_stop_count (Bit#(1) _stop);
	 endinterface

//	 module mkclint_axi4lite(Ifc_clint_axi4lite#(addr_width,data_width,user_width,msip_size,
//     tick_count))
//	 	provisos(
//        Add#(b__, data_width, 64),
//        Add#(d__, TDiv#(data_width, 8), 8),
//        Mul#(msip_size, a__, 64),
//        Add#(e__, msip_size, data_width),
//    Mul#(8, f__, data_width),
//    Mul#(16, g__, data_width),
//    Mul#(32, h__, data_width),
//    Mul#(data_width, c__, 64)
//			);
//	 	User_ifc#(addr_width,data_width,msip_size, tick_count) clint<-mkclint;
//	 	AXI4_Lite_Slave_Xactor_IFC#(addr_width,data_width,user_width)  s_xactor <- 
//        mkAXI4_Lite_Slave_Xactor();
//
//	 	rule axi_read_transaction;
//	 		let req <- pop_o(s_xactor.o_rd_addr);
//			let {succ,data}<-clint.read_req(req.araddr,unpack(truncate(req.arsize)));
//	 		let r = AXI4_Lite_Rd_Data {rresp: succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, rdata: data, ruser: 0};
//	 		s_xactor.i_rd_data.enq(r);
//	 	endrule
//		
//	 	rule axi_write_transaction;
//	 		let aw <- pop_o(s_xactor.o_wr_addr);
//	 		let w <- pop_o(s_xactor.o_wr_data);
//	 		let succ <- clint.write_req(aw.awaddr,w.wdata,unpack(truncate(aw.awsize)));
//	 		let r = AXI4_Lite_Wr_Resp {bresp: succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: 0 };
//	 		s_xactor.i_wr_resp.enq (r);
//	 	endrule
//	 	interface slave = s_xactor.axi_side;
//    interface sb_clint_msip=clint.sb_clint_msip;
//    interface sb_clint_mtip=clint.sb_clint_mtip;
//    interface sb_clint_mtime=clint.sb_clint_mtime;
//    method ma_stop_count=clint.ma_stop_count;
//	 endmodule:mkclint_axi4lite
//  `endif

	 interface Ifc_clint_axi4#(numeric type addr_width, numeric type id_width, numeric type data_width, 
      numeric type user_width, numeric type msip_size, numeric type tick_count);
	 	interface AXI4_Slave_IFC#(addr_width,id_width,data_width,user_width) slave;
    interface Get#(Bit#(msip_size)) sb_clint_msip;
    interface Get#(Bit#(msip_size)) sb_clint_mtip;
    interface Get#(Bit#(64)) sb_clint_mtime;
    method Action ma_stop_count (Bit#(1) _stop);
	 endinterface


	 module mkclint_axi4(Ifc_clint_axi4#(addr_width,id_width,data_width,user_width,msip_size,tick_count))
		provisos(
	`ifndef axi4_128b
          Add#(b__, data_width, 64),
          Add#(d__, TDiv#(data_width, 8), 8),
          Mul#(msip_size, a__, 64),
        `else
          Add#(b__, data_width, 128),
          Add#(d__, TDiv#(data_width, 8), 16),
          Mul#(msip_size, a__, 128),
          Mul#(64, j__, data_width),
        `endif
        Add#(e__, msip_size, data_width),
    Mul#(8, f__, data_width),
    Mul#(16, g__, data_width),
    Mul#(32, h__, data_width),
    Add#(k__, 1, data_width),
    	`ifndef axi4_128b
      	  Mul#(data_width, c__, 64)
    	`else
      Mul#(data_width, c__, 128)
    	`endif
			);
	 	User_ifc#(addr_width,data_width,msip_size, tick_count) clint<-mkclint;
	 	AXI4_Slave_Xactor_IFC#(addr_width,id_width,data_width,user_width)  s_xactor <- mkAXI4_Slave_Xactor();
	 	Reg#(Bit#(8)) rg_rdburst_count <- mkRegA(0);
		Reg#(Bit#(8)) rg_wrburst_count <- mkRegA(0);

		Reg#(AXI4_Rd_Addr#(addr_width,id_width,user_width)) rg_rdpacket <- mkRegA(?);
 		Reg#(AXI4_Wr_Addr#(addr_width,id_width,user_width)) rg_wrpacket <- mkRegA(?);

	 	rule axi_read_transaction(rg_rdburst_count==0);
	 		let req <- pop_o(s_xactor.o_rd_addr);
	 		let {succ,data}<-clint.read_req(req.araddr,unpack(truncate(req.arsize)));
	 		rg_rdpacket<=req;
	 		if(req.arlen!=0)
	 			rg_rdburst_count<=1;
	 		let r = AXI4_Rd_Data {rresp: succ?AXI4_OKAY:AXI4_SLVERR,rid:req.arid,rlast:(req.arlen==0), 
          rdata: data, ruser: 0};
	 		s_xactor.i_rd_data.enq(r);
	 	endrule
		
		rule read_burst_traction(rg_rdburst_count!=0);
			let rd_req=rg_rdpacket;
			let {succ,data}<-clint.read_req(rd_req.araddr,unpack(truncate(rd_req.arsize)));
			succ=False;
			if(rg_rdburst_count==rd_req.arlen)
				rg_rdburst_count<=0;
			else
				rg_rdburst_count<=rg_rdburst_count+1;
			let resp= AXI4_Rd_Data{rresp:succ?AXI4_OKAY:AXI4_SLVERR, rid:rd_req.arid,
          rlast:(rd_req.arlen==0),rdata:data, ruser: ?};
			s_xactor.i_rd_data.enq(resp);		
		endrule

	 	rule axi_write_transaction(rg_wrburst_count==0);
	 		let aw <- pop_o(s_xactor.o_wr_addr);
	 		let w <- pop_o(s_xactor.o_wr_data);
	 		rg_wrpacket<=aw;
	 		let succ <- clint.write_req(aw.awaddr,w.wdata,unpack(truncate(aw.awsize)));
	 		if(aw.awlen!=0)
	 			rg_wrburst_count<=1;
	 		let r = AXI4_Wr_Resp {bresp: succ?AXI4_OKAY:AXI4_SLVERR, buser: 0 , bid:aw.awid};
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
	 	endrule
	 	interface slave = s_xactor.axi_side;
    interface sb_clint_msip=clint.sb_clint_msip;
    interface sb_clint_mtip=clint.sb_clint_mtip;
    interface sb_clint_mtime=clint.sb_clint_mtime;
    method ma_stop_count=clint.ma_stop_count;
	 endmodule:mkclint_axi4
endpackage:clint





