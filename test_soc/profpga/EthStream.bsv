package EthStream;

import FIFO::*;
import FIFOF::*;
import Semi_FIFOF::*;
import GetPut::*;
import Connectable::*;

import AXI4_Types::*;
import AXI4_Fabric::*;

`include "Soc.defines"

typedef Bit#(`paddr) Addr;


// --------------------------------------------------
// EthernetLite register map
// --------------------------------------------------

Addr ethBase     = 'h00044000;
Addr eth_tx_buf  = ethBase;
Addr eth_tx_len  = ethBase + 'h7F4;
Addr eth_tx_ctrl = ethBase + 'h7FC;



// --------------------------------------------------
// Interface
// --------------------------------------------------

interface Ifc_ethstream;

   interface AXI4_Master_IFC#(`paddr, `axi4_id_width, `buswidth, `USERSPACE) master;

   method Action start(Bit#(`paddr) addr, Bit#(32) bytes);

endinterface



// --------------------------------------------------
// Module
// --------------------------------------------------

module mkEthStream(Ifc_ethstream);

   AXI4_Master_Xactor_IFC#(`paddr, `axi4_id_width, `buswidth, `USERSPACE)
      master_xactor <- mkAXI4_Master_Xactor;



   // --------------------------------------------------
   // State registers
   // --------------------------------------------------

   Reg#(Bit#(`paddr)) bram_addr <- mkReg(0);
   Reg#(Bit#(32)) remaining <- mkReg(0);

   Reg#(Bit#(32)) pkt_size <- mkReg(0);
   Reg#(Bit#(32)) eth_offset <- mkReg(0);

   Reg#(Bool) running <- mkReg(False);

   Reg#(Bool) send_hi <- mkReg(False);
   Reg#(Bit#(32)) hi_buf <- mkReg(0);

   Reg#(Bool) tx_len_written <- mkReg(False);

   Reg#(Bit#(2)) header_index <- mkReg(0);
   Reg#(Bool) send_header <- mkReg(False);



   // --------------------------------------------------
   // Consume AXI write responses
   // --------------------------------------------------

   rule consume_bresp (master_xactor.o_wr_resp.notEmpty);
      master_xactor.o_wr_resp.deq;
   endrule



   // --------------------------------------------------
   // Send Ethernet header
   // --------------------------------------------------

   rule send_eth_header (running && send_header &&
                         master_xactor.i_wr_addr.notFull &&
                         master_xactor.i_wr_data.notFull);

      Bit#(32) data = 0;

      case(header_index)
         0: data = 32'hFFFFFFFF;
         1: data = 32'hFFFF0200;
         2: data = 32'h00000001;
         3: data = 32'h12340000;
      endcase


      AXI4_Wr_Addr#(`paddr,`axi4_id_width,`USERSPACE) wa =
      AXI4_Wr_Addr{
         awaddr  : eth_tx_buf + eth_offset,
         awuser  : 0,
         awlen   : 0,
         awsize  : 2,
         awburst : 0,
         awid    : 0,
         awprot  : 0
      };


      AXI4_Wr_Data#(`axi4_id_width,`buswidth) wd =
      AXI4_Wr_Data{
         wdata : zeroExtend(data),
         wstrb : 'hF,
         wlast : True
      };


      master_xactor.i_wr_addr.enq(wa);
      master_xactor.i_wr_data.enq(wd);

      eth_offset   <= eth_offset + 4;
      header_index <= header_index + 1;

      if(header_index == 3)
         send_header <= False;

   endrule



   // --------------------------------------------------
   // Request BRAM read (64-bit)
   // --------------------------------------------------

   rule send_read (running && !send_header && remaining > 0 &&
                   master_xactor.i_rd_addr.notFull);

      AXI4_Rd_Addr#(`paddr,`axi4_id_width,`USERSPACE) ra =
      AXI4_Rd_Addr{
         araddr  : bram_addr,
         aruser  : 0,
         arlen   : 0,
         arsize  : 3,      // 64bit
         arburst : 0,
         arid    : 0,
         arprot  : 0
      };

      master_xactor.i_rd_addr.enq(ra);

      bram_addr <= bram_addr + 8;
      remaining <= remaining - 8;

   endrule



   // --------------------------------------------------
   // Receive read data and split to 32-bit writes
   // --------------------------------------------------

   rule recv_data (running && !send_header &&
                   (send_hi || master_xactor.o_rd_data.notEmpty) &&
                   master_xactor.i_wr_addr.notFull &&
                   master_xactor.i_wr_data.notFull);

      if(!send_hi)
      begin

         let resp = master_xactor.o_rd_data.first;
         master_xactor.o_rd_data.deq;

         Bit#(32) lo = resp.rdata[31:0];
         Bit#(32) hi = resp.rdata[63:32];

         hi_buf <= hi;

         AXI4_Wr_Addr#(`paddr,`axi4_id_width,`USERSPACE) wa =
         AXI4_Wr_Addr{
            awaddr  : eth_tx_buf + eth_offset,
            awuser  : 0,
            awlen   : 0,
            awsize  : 2,
            awburst : 0,
            awid    : 0,
            awprot  : 0
         };


         AXI4_Wr_Data#(`axi4_id_width,`buswidth) wd =
         AXI4_Wr_Data{
            wdata : zeroExtend(lo),
            wstrb : 'hF,
            wlast : True
         };


         master_xactor.i_wr_addr.enq(wa);
         master_xactor.i_wr_data.enq(wd);

         eth_offset <= eth_offset + 4;
         send_hi <= True;

      end

      else
      begin

         AXI4_Wr_Addr#(`paddr,`axi4_id_width,`USERSPACE) wa =
         AXI4_Wr_Addr{
            awaddr  : eth_tx_buf + eth_offset,
            awuser  : 0,
            awlen   : 0,
            awsize  : 2,
            awburst : 0,
            awid    : 0,
            awprot  : 0
         };


         AXI4_Wr_Data#(`axi4_id_width,`buswidth) wd =
         AXI4_Wr_Data{
            wdata : zeroExtend(hi_buf),
            wstrb : 'hF,
            wlast : True
         };


         master_xactor.i_wr_addr.enq(wa);
         master_xactor.i_wr_data.enq(wd);

         eth_offset <= eth_offset + 4;
         send_hi <= False;

      end

   endrule



   // --------------------------------------------------
   // Write TX length
   // --------------------------------------------------

   rule write_tx_len (running &&
                      remaining == 0 &&
                      !send_hi &&
                      !tx_len_written &&
                      master_xactor.i_wr_addr.notFull &&
                      master_xactor.i_wr_data.notFull);

      AXI4_Wr_Addr#(`paddr,`axi4_id_width,`USERSPACE) wa =
      AXI4_Wr_Addr{
         awaddr  : eth_tx_len,
         awuser  : 0,
         awlen   : 0,
         awsize  : 2,
         awburst : 0,
         awid    : 0,
         awprot  : 0
      };


      AXI4_Wr_Data#(`axi4_id_width,`buswidth) wd =
      AXI4_Wr_Data{
         wdata : zeroExtend(pkt_size),
         wstrb : 'hF,
         wlast : True
      };


      master_xactor.i_wr_addr.enq(wa);
      master_xactor.i_wr_data.enq(wd);

      tx_len_written <= True;

   endrule



   // --------------------------------------------------
   // Start TX
   // --------------------------------------------------

   rule start_tx (running && tx_len_written &&
                  master_xactor.i_wr_addr.notFull &&
                  master_xactor.i_wr_data.notFull);

      AXI4_Wr_Addr#(`paddr,`axi4_id_width,`USERSPACE) wa =
      AXI4_Wr_Addr{
         awaddr  : eth_tx_ctrl,
         awuser  : 0,
         awlen   : 0,
         awsize  : 2,
         awburst : 0,
         awid    : 0,
         awprot  : 0
      };


      AXI4_Wr_Data#(`axi4_id_width,`buswidth) wd =
      AXI4_Wr_Data{
         wdata : 1,
         wstrb : 'hF,
         wlast : True
      };


      master_xactor.i_wr_addr.enq(wa);
      master_xactor.i_wr_data.enq(wd);

      running <= False;
      eth_offset <= 0;
      tx_len_written <= False;

   endrule



   // --------------------------------------------------
   // Start method
   // --------------------------------------------------

   method Action start(Bit#(`paddr) addr, Bit#(32) bytes);

      bram_addr <= addr;
      remaining <= bytes;

      pkt_size <= bytes;

      eth_offset <= 0;

      header_index <= 0;
      send_header <= True;

      send_hi <= False;
      tx_len_written <= False;

      running <= True;

   endmethod



   interface master = master_xactor.axi_side;

endmodule

endpackage