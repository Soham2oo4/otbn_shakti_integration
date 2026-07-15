// BSV package: BVI import for the OTBN AXI4 wrapper (via the Verilog shim).
// Provides Ifc_otbn_axi4 which contains an AXI4_Slave_IFC for the fabric.

package otbn_axi_import;

import AXI4_Types :: *;

`include "ccore_params.defines"
`include "Soc.defines"

// ============================================================
// Interface exposed to Soc.bsv
// ============================================================
interface Ifc_otbn_axi4;
  interface AXI4_Slave_IFC#(`paddr, `axi4_id_width, `buswidth, `USERSPACE) slave;
endinterface

// ============================================================
// BVI import of the Verilog shim (otbn_shakti_shim)
// ============================================================
import "BVI" otbn_shakti_shim =
  module mkotbn_axi4 (Ifc_otbn_axi4);
    default_clock clk (CLK);
    default_reset rst (RST_N);

    interface AXI4_Slave_IFC slave;
      // AW channel
      method m_awvalid (AWVALID, AWADDR, AWSIZE, AWUSER, AWPROT, AWLEN, AWBURST, AWID) enable((*inhigh*)EN_awvalid);
      method AWREADY m_awready;

      // W channel
      method m_wvalid (WVALID, WDATA, WSTRB, WLAST, WID) enable((*inhigh*)EN_wvalid);
      method WREADY m_wready;

      // B channel
      method BVALID m_bvalid;
      method BRESP  m_bresp;
      method BUSER  m_buser;
      method BID    m_bid;
      method m_bready (BREADY) enable((*inhigh*)EN_bready);

      // AR channel
      method m_arvalid (ARVALID, ARADDR, ARSIZE, ARUSER, ARPROT, ARLEN, ARBURST, ARID) enable((*inhigh*)EN_arvalid);
      method ARREADY m_arready;

      // R channel
      method RVALID m_rvalid;
      method RRESP  m_rresp;
      method RDATA  m_rdata;
      method RLAST  m_rlast;
      method RUSER  m_ruser;
      method RID    m_rid;
      method m_rready (RREADY) enable((*inhigh*)EN_rready);
    endinterface

    // Scheduling: all methods are always_ready/always_enabled and conflict-free
    schedule (slave_m_awvalid, slave_m_awready,
              slave_m_wvalid, slave_m_wready,
              slave_m_bvalid, slave_m_bresp, slave_m_buser, slave_m_bid, slave_m_bready,
              slave_m_arvalid, slave_m_arready,
              slave_m_rvalid, slave_m_rresp, slave_m_rdata, slave_m_rlast, slave_m_ruser, slave_m_rid, slave_m_rready)
    CF
    (slave_m_awvalid, slave_m_awready,
     slave_m_wvalid, slave_m_wready,
     slave_m_bvalid, slave_m_bresp, slave_m_buser, slave_m_bid, slave_m_bready,
     slave_m_arvalid, slave_m_arready,
     slave_m_rvalid, slave_m_rresp, slave_m_rdata, slave_m_rlast, slave_m_ruser, slave_m_rid, slave_m_rready);

  endmodule

endpackage
