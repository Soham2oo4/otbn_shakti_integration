package EthStream;

import Semi_FIFOF::*;
import FIFO::*;
import FIFOF::*;
import GetPut::*;
import Connectable::*;

import AXI4_Types::*;
import AXI4_Fabric::*;
import AXI4_Lite_Types::*;
import AXI4_Lite_Fabric::*;


// EthernetLite register offsets
typedef Bit#(`paddr) Addr;
typedef Bit#(32)     EthData;

Addr eth_tx_buf  = 'h0000;
Addr eth_tx_len  = 'h07F4;
Addr eth_tx_ctrl = 'h07FC;



interface Ifc_ethstream;

   interface AXI4_Master_IFC#(`paddr, `axi4_id_width, `buswidth, `USERSPACE) bram;
   interface AXI4_Lite_Master_IFC#(`paddr, 32, `USERSPACE) eth;

   method Action start(Bit#(`paddr) addr, Bit#(32) bytes);

endinterface

module mkEthStream(Ifc_ethstream);

   // AXI masters
   AXI4_Master_Xactor_IFC#(`paddr, `axi4_id_width, `buswidth, `USERSPACE)
      bramX <- mkAXI4_Master_Xactor;

   AXI4_Lite_Master_Xactor_IFC#(`paddr, 32, `USERSPACE)
      ethX <- mkAXI4_Lite_Master_Xactor;

   // State registers

   Reg#(Bit#(`paddr)) bram_addr <- mkReg(0);
   Reg#(Bit#(32)) remaining <- mkReg(0);
   Reg#(Bit#(32)) pkt_size <- mkReg(0);

   Reg#(Bool) running <- mkReg(False);

   Reg#(Bit#(32)) eth_offset <- mkReg(0);

   Reg#(Bool) send_hi <- mkReg(False);
   Reg#(Bit#(32)) hi_buf <- mkReg(0);

   Reg#(Bool) tx_len_written <- mkReg(False);

   // Ethernet header control
   Reg#(Bit#(4)) header_index <- mkReg(0);
   Reg#(Bool) send_header <- mkReg(False);

   // Send Ethernet Header

   rule send_eth_header (running && send_header);

      Bit#(32) data = 0;
// (Broadcast Mac FF:FF:FF:FF:FF:FF) (Src Mac 02:00:00:00:00:01) (Eth.type 0x1234) 
      case (header_index)
         0: data = 32'hFFFFFFFF;   // FF FF FF FF
         1: data = 32'hFFFF0200;   // FF FF 02 00
         2: data = 32'h00000001;   // 00 00 00 01
         3: data = 32'h12340000;   // EtherType + padding
      endcase

      AXI4_Lite_Wr_Addr#(`paddr, `USERSPACE) wa =
         AXI4_Lite_Wr_Addr{
            awaddr: eth_tx_buf + eth_offset,
            awprot: 0,
            awuser: 0
         };

      AXI4_Lite_Wr_Data#(32) wd =
         AXI4_Lite_Wr_Data{
            wdata: data,
            wstrb: 'hF
         };

      ethX.i_wr_addr.enq(wa);
      ethX.i_wr_data.enq(wd);

      eth_offset <= eth_offset + 4;
      header_index <= header_index + 1;

      if (header_index == 3)
         send_header <= False;

   endrule

   // AXI4 Read Request to BRAM

   rule send_read (running && !send_header && remaining > 0 && bramX.i_rd_addr.notFull);

      AXI4_Rd_Addr#(`paddr, `axi4_id_width, `USERSPACE) ra =
         AXI4_Rd_Addr{
            araddr:  bram_addr,
            arid:    0,
            arlen:   0,
            arsize:  3,
            arburst: 1,
            arprot:  0,
            aruser:  0
         };

      bramX.i_rd_addr.enq(ra);

      bram_addr <= bram_addr + 8;
      remaining <= remaining - 8;

   endrule


   // Receive BRAM data and write to Ethernet TX buffer

   rule recv_data (running && !send_header);

      if (!send_hi && bramX.o_rd_data.notEmpty) begin

         let resp = bramX.o_rd_data.first;
         bramX.o_rd_data.deq;

         Bit#(32) lo = resp.rdata[31:0];
         Bit#(32) hi = resp.rdata[63:32];

         hi_buf <= hi;

         AXI4_Lite_Wr_Addr#(`paddr, `USERSPACE) wa =
            AXI4_Lite_Wr_Addr{
               awaddr: eth_tx_buf + eth_offset,
               awprot: 0,
               awuser: 0
            };

         AXI4_Lite_Wr_Data#(32) wd =
            AXI4_Lite_Wr_Data{
               wdata: lo,
               wstrb: 'hF
            };

         ethX.i_wr_addr.enq(wa);
         ethX.i_wr_data.enq(wd);

         send_hi <= True;

      end
      else if (send_hi) begin

         AXI4_Lite_Wr_Addr#(`paddr, `USERSPACE) wa2 =
            AXI4_Lite_Wr_Addr{
               awaddr: eth_tx_buf + eth_offset + 4,
               awprot: 0,
               awuser: 0
            };

         AXI4_Lite_Wr_Data#(32) wd2 =
            AXI4_Lite_Wr_Data{
               wdata: hi_buf,
               wstrb: 'hF
            };

         ethX.i_wr_addr.enq(wa2);
         ethX.i_wr_data.enq(wd2);

         eth_offset <= eth_offset + 8;
         send_hi <= False;

      end

   endrule

   // Write TX length

   rule write_tx_len (running && eth_offset >= pkt_size && !tx_len_written);

      AXI4_Lite_Wr_Addr#(`paddr, `USERSPACE) wa_len =
         AXI4_Lite_Wr_Addr{
            awaddr: eth_tx_len,
            awprot: 0,
            awuser: 0
         };

      AXI4_Lite_Wr_Data#(32) wd_len =
         AXI4_Lite_Wr_Data{
            wdata: pkt_size,
            wstrb: 'hF
         };

      ethX.i_wr_addr.enq(wa_len);
      ethX.i_wr_data.enq(wd_len);

      tx_len_written <= True;

   endrule

   // Start Ethernet transmission

   rule start_tx (running && tx_len_written);

      AXI4_Lite_Wr_Addr#(`paddr, `USERSPACE) wa_ctrl =
         AXI4_Lite_Wr_Addr{
            awaddr: eth_tx_ctrl,
            awprot: 0,
            awuser: 0
         };

      AXI4_Lite_Wr_Data#(32) wd_ctrl =
         AXI4_Lite_Wr_Data{
            wdata: 1,
            wstrb: 'hF
         };

      ethX.i_wr_addr.enq(wa_ctrl);
      ethX.i_wr_data.enq(wd_ctrl);

      running <= False;
      eth_offset <= 0;
      tx_len_written <= False;

   endrule

   // Start streaming

   method Action start(Bit#(`paddr) addr, Bit#(32) bytes);

      bram_addr <= addr;
      remaining <= bytes;

      pkt_size <= bytes + 14;  // payload + ethernet header

      eth_offset <= 0;

      header_index <= 0;
      send_header <= True;

      running <= True;

   endmethod

   // Interface connections

   interface bram = bramX.axi_side;
   interface eth  = ethX.axi_side;

endmodule

endpackage