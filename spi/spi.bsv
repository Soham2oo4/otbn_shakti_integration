package spi;

import Semi_FIFOF        :: *;
import AXI4_Types   :: *;
import AXI4_Fabric  :: *;


typedef struct{
		Bit#(`ADDR) addr;
		Bit#(3) burst_size;
		Bit#(`WDC) wdata;
} Write_req deriving (Bits, Eq);

typedef struct{
		Bit#(`ADDR) addr;
		Bit#(3)  burst_size;
} Read_req deriving (Bits, Eq);

typedef struct{
	Bit#(16) rsvd;
	bit 	 bidimode;
	bit		 bidioe;
	bit		 crcen;
	bit		 crcnext;
	bit		 crcl;
	bit		 rxonly;
	bit		 ssm;
	bit		 ssi;
	bit		 lsbfirst;
	bit		 spe;
	Bit#(3)  br;
	bit		 mstr;
	bit		 cpol;
	bit		 cpha;
} Cr1_cfg deriving (Bits, Eq);

typedef struct{
	Bit#(17) rsvd;
	bit		 ldma_tx;
	bit		 ldma_rx;
	bit		 frxth;
	Bit#(4)	 ds;
	bit		 txeie;
	bit		 rxneie;
	bit		 errie;
	bit 	 frf;
	bit		 nssp;
	bit		 ssoe;
	bit		 txdmaen;
	bit		 rxdmaen;
} Cr2_cfg deriving (Bits, Eq);

typedef struct{
	Bit#(19) rsvd1; 
	Bit#(2)  ftlvl;
	Bit#(2)  frlvl;
	bit 	 fre;
	bit 	 bsy;
	bit		 ovr;
	bit		 modf;
	bit 	 crcerr;
	Bit#(2)  rsvd2;
	bit		 txe;
	bit		 rxne;
} Sr_cfg deriving (Bits, Eq);

	


interface Ifc_spi_out;
	method bit mosi;
	method bit sclk;
	method Action miso(bit dat);
    method bit nss;
endinterface

interface Ifc_spi_app;
	method Bit#(`WDC) data_to_app;
	method Action read_request(Read_req rd_req);
	method Action write_request(Write_req wr_req);
endinterface

interface Ifc_spi;
	interface Ifc_spi_out spi_out;
	interface Ifc_spi_app app_interface;
endinterface

interface Ifc_spi_controller;
	interface Ifc_spi_out spi_out;
    interface AXI4_Lite_Slave_IFC#(`ADDR, `WDC, `USERSPACE) axi4_slave;
endinterface
	

module mkspi(Ifc_spi);

Reg#(Bit#(Cr1_cfg)) rg_spi_cfg_cr1    <- mkReg(0);
Reg#(Bit#(Cr2_cfg)) rg_spi_cfg_cr2    <- mkReg(0);
Reg#(Bit#(Sr_cfg))	rg_spi_cfg_sr     <- mkReg(0);
Reg#(Bit#(32))		rg_spi_cfg_dr     <- mkReg(0);
Reg#(Bit#(32))		rg_spi_cfg_crcpr  <- mkReg(0);
Reg#(Bit#(32))		rg_spi_cfg_rxcrcr <- mkReg(0);
Reg#(Bit#(32))		rg_spi_cfg_txcrcr <- mkReg(0);
Reg#(Bit#(3))

function Action fn_wr_cfg_reg(Bit#(32) data, Bit#(`ADDR) address);
   
   action
   Bit#(8) addr = truncate(address);
   case(truncate(addr)) 

       `CR1    : rg_spi_cfg_cr1		<= Cr1_cfg{
											rsvd : 0,
											bidimode  : data[15],
											bidioe    : data[14],
											crcen     : data[13],
											crcnext   : data[12],
											crcl	  : data[11],
											rxonly	  : data[10],
											ssm		  : data[9],
											ssi		  : data[8],
											lsbfirst  : data[7],
											spe		  : data[6],
											br		  : data[5:3],
											mstr	  : data[2],
											cpol	  : data[1],
											cpha	  : data[0]
										}; 

       `CR2    : rg_spi_cfg_cr2		<= Cr2_cfg{
											rsvd	: 0,
											ldma_tx : data[14],
											ldma_rx : data[13],
											frxth	: data[12],
											ds		: data[11:8],
											txeie	: data[7],
											rxneie  : data[6],
											errie	: data[5],
											frf		: data[4],
											nssp	: data[3],
											ssoe    : data[2],
											txdmaen : data[1],
											rxdmaen : data[0]
										};
       
       `SR     : rg_spi_cfg_sr		<= Sr_cfg{
											rsvd1  : 0,
											ftlvl  : data[12:11],
											frlvl  : data[10:9],
											fre	   : data[8],
//											bsy	   : data[7], // read_only reg
											ovr	   : data[6],
											modf   : data[5],
											crcerr : data[4],
											rsvd2  : 0,
											txe	   : data[1],
											rxne   : data[0]};
      
       `DR     : rg_spi_cfg_dr		<= data;
      
       `CRCPR  : rg_spi_cfg_crcpr   <= data;
      
       `RXCRCR : rg_spi_cfg_rxcrcr  <= data;
      
       `TXCRCR : rg_spi_cfg_txcrcr  <= data;
      
       default          : noAction;
   endcase
  endaction 
endfunction

function Bit#(32) fn_rd_cfg_reg(Bit#(addr_cntrl_width) address);
  Bit#(8) addr = truncate(address);
  case(addr)

       `CR1    : return rg_spi_cfg_cr1;

       `CR2    : return rg_spi_cfg_cr2;
       
       `SR     : return rg_spi_cfg_sr;
      
       `DR     : return rg_spi_cfg_dr;
      
       `CRCPR  : return rg_spi_cfg_crcpr;
      
       `RXCRCR : return rg_spi_cfg_rxcrcr;
      
       `TXCRCR : return rg_spi_cfg_txcrcr;
      
   endcase
endfunction

rule rl_write_to_cfg;
	fn_wr_cfg_reg(wr_write_data, wr_write_addr);
endrule

rule rl_read_from_cfg;
	wr_rd_data <= fn_rd_cfg_reg(wr_rd_addr);
endrule
// This rule generates the clock according to software specified baudrate
rule rl_generate_clk_baud_rate;
	if(rg_spi_cfg_cr1.br == rg_clk_counter) begin
		rg_clk <= ~rg_clk;
		rg_clk_counter <= 0;
	end
	else
		rg_clk_counter <= rg_clk_counter + 1;
endrule

rule rl_transmit_idle(rg_transmit_state == IDLE)
	if()
endrule

interface Ifc_spi_app app_interface;
	method Bit#(`WDC) data_to_app;
		return wr_rd_data; // TODO hook created need to be changed later
	endmethod
	method Action read_request(Read_req rd_req);
		wr_rd_addr <= rd_req.addr; // TODO hook created and burst size if needed to be added or 
								  // to removed from the method and struct
	endmethod		
	method Action write_request(Write_req wr_req);
		wr_write_addr <= wr_req.addr; //TODO hook created and if needed in future use burst size
		wr_write_data <= wr_req.data; // or remove from the struct itself
	endmethod
endinterface

endmodule


module mkspi_controller#(Clock slow_clk, Reset slow_rst)(Ifc_spi_controller);



AXI4_Lite_Slave_Xactor_IFC #(`ADDR, `WDC, `USERSPACE)  s_xactor_spi <- mkAXI4_Lite_Slave_Xactor;

Ifc_spi spi <- mkspi(clocked_by slow_clk, reset_by slow_rst);

Reg#(Bit#(4)) rg_rid <- mkReg(0);

SyncFIFOIfc#(Write_req) 		ff_wr_req       	<- mkSyncFIFOFromCC(1, slow_clk);
// SyncFIFO is not used yet since the error in spi is not defined, after
// defining the error this SyncFIFO maybe used
//SyncFIFOIfc#(AXI4_Lite_Resp) 	ff_sync_wr_resp 	<- mkSyncFIFOToCC(1, slow_clk, slow_rst);
SyncFIFOIfc#(Read_req)			ff_rd_req    		<- mkSyncFIFOFromCC(1, slow_clk);
// This SyncFIFO only used for data may be in future the whole AXI response
// will be used
SyncFIFOIfc#(Bit#(`WDC))		ff_sync_rd_resp	    <- mkSyncFIFOToCC(1, slow_clk, slow_rst);

// considering spi controller wont get burst transaction address and data are
// popped from same rule(moreover AXI_Lite is used which doesnt support burst mode), otherwise 
// there should be a separate rule to pop address and data
rule rl_write_request_from_core;
	let aw <- pop_o(s_xactor_spi.o_wr_addr);
	let w  <- pop_o(s_xactor_spi.o_wr_data);
 	ff_wr_req.enq(Write_req {
							  addr : truncate(aw.awaddr),
							  burst_size : aw.awsize,
							  wdata : w.wdata });	

	let w_resp = AXI4_Wr_Resp {bresp: AXI4_OKAY, buser: 0, bid: aw.awid};
    s_xactor_spi.i_wr_resp.enq(w_resp);
endrule

rule rl_write_request_to_controller;
	let w = ff_wr_req.first();	
	spi.app_interface.write_request(w);
	ff_wr_req.deq();
endrule

rule rl_read_request_from_core;      		
	let ar <- pop_o(s_xactor_spi.o_rd_addr);
	rg_rid <= ar.arid;
	ff_rd_req.enq(Read_req {
							addr : ar.araddr,
							burst_size : ar.arsize});
endrule

rule rl_read_request_to_controller;
	let r = ff_rd_req.first();
	spi.app_interface.read_request(r);
	ff_rd_req.deq();
endrule

rule rl_read_response_from_controller;
	ff_sync_rd_resp.enq(spi.app_interface.data_to_app);
endrule

rule rl_read_response_to_core;
	let rdata = ff_sync_rd_resp.first();
	ff_sync_rd_resp.deq();
	let r = AXI4_Rd_Data {rresp: AXI4_OKAY, rdata: rdata, rlast: True,
	 ruser: 0, rid: rg_rid};
	s_xactor_spi.i_rd_data.enq(r);
endrule

endmodule

endpackage

