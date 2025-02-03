package random;

`include "random.defines"


import Randomizable :: * ;
import GetPut::*;
import FIFO::*;
import AXI4_Lite_Types   :: *;
import Semi_FIFOF        :: *;


export mkrandom;
export Ifc_rndseed_io (..);
export Ifc_random_axi4lite   (..);
export AccessSize (..);
export mkrandom_axi4lite;

typedef enum {Byte=0, HWord=1, Word=2, DWord=3} AccessSize deriving(Bits,Eq,FShow);

interface Ifc_rndseed_io#(numeric type addr_width, numeric type data_width);
    /*doc : method : method to receive write requests from AXI */
	method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, AccessSize size);
	/*doc : method : method to receive read requests from AXI */
	method ActionValue#(Tuple2#(Bool,Bit#(data_width))) read_req(Bit#(addr_width)addr,AccessSize size);

endinterface

module mkrandom(Ifc_rndseed_io#(addr_width,data_width))
	provisos(
	Add#(a__,4,data_width),
	Add#(b__, data_width, 64),
	Add#(c__, 1, data_width)
	);

Randomize#(Bit#(data_width)) rnd_seed<- mkGenericRandomizer;
FIFO#(Bit#(data_width)) fifo <- mkFIFO ;
Reg#(Bool) begining <- mkReg(True) ;
Reg#(Bool) rg_en <- mkRegA(False);

rule strt (begining && rg_en);
	begining <= False;
	rnd_seed.cntrl.init;
endrule

rule run (!begining && rg_en);
	let val <-rnd_seed.next;
	fifo.enq(val);
endrule


/*doc : method : method to receive write requests from AXI. Decodes the address value and writes the value into the corresponding register. */
method ActionValue#(Bool) write_req(Bit#(addr_width) addr, Bit#(data_width) data, AccessSize size);
	Bool success=True;
	Bit#(data_width) mask='h00000001;
	Bit#(data_width) datamask=zeroExtend(data)&mask;

	if( addr[6:0]>=`enb_reg && addr[6:0]<`res_reg)
		rg_en<=unpack(datamask[0]);
	else
		success=False;
	return success;
endmethod

/*doc : method : method to process receive/read requests from AXI. Decodes the address value and reads the value and return it to AXI interface. */
method ActionValue#(Tuple2#(Bool, Bit#(data_width))) read_req (Bit#(addr_width) addr, AccessSize size);
			Bool success= True;
			Bit#(data_width) data=0;
			Bit#(data_width) temp =0;//parameterised

			if( addr[6:0]>=`enb_reg && addr[6:0]<`res_reg ) begin
					temp=zeroExtend(pack(rg_en));
			end
			else if(addr[6:0]>=`res_reg  && addr[6:0]< (`res_reg + 8)) begin
					temp=fifo.first();
					fifo.deq;
			end
			else
					success=False;

      		data=truncate(temp);
			return tuple2(success,data);
endmethod

endmodule:mkrandom

/*doc : interface : RANDOMIZER axi4lite interface using AXI4lite . */
interface Ifc_random_axi4lite#(numeric type addr_width, numeric type data_width, numeric type user_width);
	/*doc : subifc : subinterface for AXI4lite slave interface. */
	interface AXI4_Lite_Slave_IFC#(addr_width, data_width,user_width) slave;
endinterface

/*doc:module: random AXI4lite module. This module is accessed from soc level and has complete control and configuring and accessing the RANDOMIZER port from AXI4lite interface of core. */
module mkrandom_axi4lite(Ifc_random_axi4lite#(addr_width,data_width,user_width))
		provisos(
				Add#(a__,4,data_width),
				Add#(b__, data_width, 64),
				Add#(c__, 1, data_width)
			);

		Ifc_rndseed_io#(addr_width,data_width) random <-mkrandom;
		AXI4_Lite_Slave_Xactor_IFC#(addr_width,data_width,user_width)  s_xactor <- mkAXI4_Lite_Slave_Xactor();

	/*doc:rule: This rule fires whenever write request from core of the AXI4lite is raised.  Configures the internal registers of RANDOMIZER through AXI4.*/
	rule write_request;
			let addreq <- pop_o (s_xactor.o_wr_addr);
			let datareq  <- pop_o (s_xactor.o_wr_data);
			let succ <- random.write_req(addreq.awaddr, datareq.wdata,unpack(truncate(addreq.awsize)));
		  let ls = AXI4_Lite_Wr_Resp {bresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: addreq.awuser};
		  s_xactor.i_wr_resp.enq (ls);			
		endrule

	/*doc:rule: This rule fires whenever read request from core of the AXI4lite is raised.  Reads the internal registers of RANDOMIZER through AXI4 and the returns the value to AXI4lite interface along with response status.*/
	rule read_request;
			let req <- pop_o(s_xactor.o_rd_addr);
			let {succ,data}<- random.read_req(req.araddr,unpack(truncate(req.arsize)));
			let resp= AXI4_Lite_Rd_Data {rresp:succ?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, 
                                    rdata:data, ruser: ?};
	  		s_xactor.i_rd_data.enq(resp);
		endrule
	 	interface slave = s_xactor.axi_side;
endmodule:mkrandom_axi4lite

endpackage
