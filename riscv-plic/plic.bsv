/*
see LICENSE.iitm

Author: Neel Gala, neelgala@incoresemi.com
Created on: Saturday 25 April 2020 08:58:16 AM IST

*/
package plic ;

import FIFOF        :: * ;
import Vector       :: * ;
import SpecialFIFOs :: * ;
import FIFOF        :: * ;
import ConfigReg    :: * ;

`include "Logger.bsv"
import Semi_FIFOF   :: * ;
import AXI4_Lite_Types::*;
import AXI4_Lite_Fabric::*;
import AXI4_Types::*;
import AXI4_Fabric::*;	
import BUtils   :: * ;

import Memory       :: * ;

function Bit#(m) reSize (Bit#(n) din) provisos( Add#(m,n,mn) );
  Bit#(mn) x = zeroExtend(din);
  return truncate(x);
endfunction:reSize

function Bit#(2) strb2size_2(Bit#(n) strb)
   `ifndef iclass
    provisos(Add#(a__, n, 8));
    Bit#(8) _t = zeroExtend(strb);
  `else
    provisos(Add#(a__, n, 16));
    Bit#(16) _t = zeroExtend(strb);
  `endif
  Bool isSz4 = ((_t>>3)&_t) != 0;
  Bool isSz2 = ((_t>>1)&_t) != 0;
  if (&_t == 1) return 3;
  else if (isSz4) return 2;
  else if (isSz2) return 1;
  else return 0;
endfunction



function Tuple2#(Bool,Bit#(n)) fn_adjust_read(Bit#(a) addr, 
                                              Bit#(2) sz, 
                                              Bit#(m) data, 
                                              Bit#(2) min,
                                              Bit#(2) max,
                                              Bit#(os) mask)
  provisos(
    Add#(a__, os, a),
    Mul#(TDiv#(n, 8), 8, n), // bus-side data-width should be multiples of 8
    Mul#(TDiv#(m, 8), 8, m), // register data-width should be multiples of 8
    `ifndef iclass
      Add#(n, b__, 64), // bus side data should be <= 64
    `else
      Add#(n, b__, 128),
    `endif
    Add#(m, c__, 64),  // register data should be <= 64
    Add#(TExp#(TLog#(n)),0,n), // bus-side should be a power of 2. 
    Add#(TExp#(TLog#(m)),0,m), // register side should be a power of 2
    `ifndef iclass
      Add#(d__, TDiv#(n, 8), 8)
    `else
      Add#(d__, TDiv#(n, 8), 16)
    `endif
  );
  let mi = valueOf(m);
  let ni = valueOf(n);
  Bit#(os) byteoffset = truncate(addr);
  Bool offset_match  = (mask | byteoffset) == mask;
  Bit#(os) _zeros = 0;
  if (mi > ni)
    data = data >> {byteoffset,_zeros};
  Bool access_allowed = (min <= sz) && (sz <= max);
  if (access_allowed && offset_match) return tuple2(True, reSize(data));
  else return tuple2(False,0);
endfunction:fn_adjust_read

/*doc:func:
address = the full address received on the bus
newdata = the full data received on the bus
strb    = the sull strobe bits received on the bus
data    = value currently present in the register
allowed = statically defined value indicating the smallest size read that is allowed on this register
mask    = even though the allowed indicates the size of op allowed, multiple such ops can exist within 
          the same register. For. consider regB is a 8-bit register, with allowed =  0. Now this 
          function is called when the index hits on regA. Within the 8 bytes allotted to regB, the 
          read operation could be for any other byte. But we want to perform a read only if the request is
          at the lowest byte. We achieve this by having a 3-bit mask of 000 which is checked against
          the lower 3 bits of the address.
notes: when the bus-side is smaller than the register side, then the bus-side contents and strobes
have to be properly byte shifted to ensure the correct bytes are updated in the larger register. 
 */
function ActionValue#(Tuple2#(Bool,Bit#(m))) fn_adjust_write(Bit#(a) addr, 
                              Bit#(n) newdata,
                              Bit#(TDiv#(n,8)) strb, 
                              Bit#(m) data, 
                              Bit#(2) min,
                              Bit#(2) max,
                              Bit#(os) mask)
  provisos(
    Add#(a__, os, a),
    Mul#(TDiv#(n, 8), 8, n), // bus-side data-width should be multiples of 8
    Mul#(TDiv#(m, 8), 8, m), // register data-width should be multiples of 8
    `ifndef iclass
      Add#(n, b__, 64), // bus side data should be <= 64
    `else
      Add#(n, b__, 128),
    `endif
    Add#(m, c__, 64),  // register data should be <= 64
    Add#(TExp#(TLog#(n)),0,n), // bus-side should be a power of 2. 
    Add#(TExp#(TLog#(m)),0,m), // register side should be a power of 2
    `ifndef iclass
      Add#(d__, TDiv#(n, 8), 8),
    `else
      Add#(d__, TDiv#(n, 8), 16),
    `endif
    Add#(TSub#(2, TLog#(TDiv#(n, 8))), e__, os)
  ) = actionvalue
      
  let mi = valueOf(m);
  let ni = valueOf(n);

  let sz = strb2size_2(strb);

  Bit#(os) byteoffset = truncate(addr);
  Bool offset_match  = (mask | byteoffset) == mask;

  Bit#(m) newdata1 = reSize(newdata);
  Bit#(TDiv#(m,8)) newstrb1 = reSize(strb);
  Bit#(3) _zeros = 0;

  if(mi > ni) begin
    if(byteoffset != 0) begin
      newdata1 = newdata1 << {byteoffset,_zeros};
      newstrb1 = newstrb1 << byteoffset;
    end
  end

  Bit#(m) upd_data;
  upd_data = updateDataWithMask(data, newdata1, newstrb1);
  Bool access_allowed = min <= sz && sz <= max;
  if (access_allowed && offset_match) return tuple2(True, upd_data);
  else return tuple2(False,upd_data);
endactionvalue;


interface Ifc_irq_sources;
  (*always_ready, always_enabled*)
  (*prefix=""*)
  method Action m_irq((*port="irq"*)Bool i);
endinterface:Ifc_irq_sources

interface User_ifc #( numeric type aw,
                      numeric type dw,
                      numeric type sources,
                      numeric type targets,
                      numeric type maxpriority
                    );
  (*always_ready*)
  interface Vector#(targets, Bool) sb_to_targets;
  (*always_ready, always_enabled, prefix=""*)
  method Action sb_frm_sources((*port="sb_frm_sources"*) Bit#(sources) irq);
  method ActionValue#(Tuple2#(Bool,Bit#(dw))) read(Bit#(aw) raddr, Bit#(2) size);
  method ActionValue#(Bool) write (Bit#(aw) raddr, Bit#(dw) data, Bit#(TDiv#(dw,8)) strb);
//  method Action show_PLIC_state;
endinterface:User_ifc

typedef 10 Max_source_wd;
typedef 5  Max_target_wd;

module mkplic#(parameter Integer slave_base)(User_ifc#(aw, dw, sources, targets, maxpriority))
  provisos(
    Add#(1,sources,nsources),
    Add#(nsources, _a, 1024),             // max sources is 1024
    Max#(TLog#(nsources),1, lg_nsources), // log of sources
    Max#(TLog#(maxpriority),1,lg_priority),  // log of priority
    Max#(TLog#(targets), 1,lg_targets),  // log of targets
    Add#(_b, lg_nsources, 10),

    Add#(h__, 10, dw),
    Add#(a__, 26, aw),
    Add#(8, b__, dw),         // data atleast 8 bits
    Mul#(TDiv#(dw,8),8, dw), // dw is a proper multiple of 8 bits
    Add#(c__, 2, aw),
    `ifndef iclass
      Add#(dw, d__, 64),
    `else
      Add#(dw, d__, 128),
    `endif
    Add#(TExp#(TLog#(dw)),0,dw),
    `ifndef iclass
      Add#(e__, TDiv#(dw, 8), 8),
    `else
      Add#(e__, TDiv#(dw, 8), 16),
    `endif
    Add#(f__, lg_priority, 32),
    Bits#(UInt#(TLog#(nsources)), lg_nsources),
    Add#(g__, 1, lg_priority)
  );

  let v_nsources = valueOf(nsources);
  let v_targets = valueOf(targets);
  let v_maxpriority = valueOf(maxpriority);

  Vector#( nsources, Reg#(Bit#(lg_priority))) vrg_source_priority  <- replicateM(mkRegA(0));
  Vector#( nsources, Reg#(Bool) )             vrg_source_pending    <- replicateM(mkConfigRegA(False));
  Vector#( targets, Vector#( nsources, Reg#(Bool) )) 
                                              v_target_ie <- replicateM(replicateM(mkRegA(False))) ;
  Vector#( targets, Reg#(Bit#(lg_priority))) v_target_threshold <- replicateM(mkRegA('1));

  Vector#( nsources, ConfigReg#(Bool) )             v_reg_source_busy  <- replicateM(mkConfigRegA(False));
   
  function Tuple2 #(Bit #(lg_priority), Bit #(lg_nsources))
                    fn_target_max_prio_and_max_id (Bit #(Max_target_wd)  target_id);

    // we set the default prioritiy of each interrupt to 0 if the source is not pending or if the
    // target has disabled it
    Vector#( nsources, Bit#(lg_priority)) lv_prios;
    for (Integer i = 0; i< v_nsources; i = i + 1) begin
      lv_prios[i] = signExtend(pack(v_target_ie[target_id][i])) & 
                    signExtend(pack(vrg_source_pending[i])) & 
                    vrg_source_priority[i];
    end

    // find the max priority by folding from 0th element to N and using the max operation
    Bit #(lg_priority)  max_prio = fold(max , lv_prios);
    let                 max_id   = fromMaybe(0,findElem(max_prio, lv_prios));


    /*Bit #(lg_priority)  max_prio = 0;
    Bit #(lg_nsources)  max_id   = 0;
    // Note: source_ids begin at 1, not 0.
    for (Integer source_id = 1; source_id < v_nsources; source_id = source_id + 1)
      if (   vrg_source_pending [source_id] && (vrg_source_priority [source_id] > max_prio)
                             	         && (v_target_ie [target_id][source_id])) begin
	      max_id   = fromInteger (source_id);
	      max_prio = vrg_source_priority[source_id];
			end*/
    return tuple2 (max_prio, pack(max_id));
  endfunction:fn_target_max_prio_and_max_id
   
  function Action fa_show_PLIC_state;
    action
	  `ifdef plic_verbose
	    $display ("----------------");
	    $write ("Src IPs  :");
	    for (Integer source_id = 0; source_id < v_nsources; source_id = source_id + 1)
	      $write (" %0d", pack (vrg_source_pending [source_id]));
	    $display ("");

	    $write ("Src Prios:");
	    for (Integer source_id = 0; source_id < v_nsources; source_id = source_id + 1)
	       $write (" %0d", vrg_source_priority [source_id]);
	    $display ("");

	    $write ("Src busy :");
	    for (Integer source_id = 0; source_id < v_nsources; source_id = source_id + 1)
	       $write (" %0d", pack (v_reg_source_busy [source_id]));
	    $display ("");

	    for (Integer target_id = 0; target_id < v_targets; target_id = target_id + 1) begin
	       $write ("T %0d IEs  :", target_id);
	       for (Integer source_id = 0; source_id < v_nsources; source_id = source_id + 1)
	          $write (" %0d", v_target_ie [target_id][source_id]);
	       match { .max_prio, .max_id } = fn_target_max_prio_and_max_id (fromInteger (target_id));
	       $display (" MaxPri %0d, Thresh %0d, MaxId %0d",
	           max_prio, v_target_threshold [target_id], max_id);
	    end
	  `endif
     endaction
  endfunction

  // ================================================================
  // Creator of each target interface

  function Bool fn_mk_target_ifc (Integer target_id);
	  match { .max_prio, .max_id } = fn_target_max_prio_and_max_id (fromInteger (target_id));
		Bool eip = (max_prio > v_target_threshold[target_id]);
		return eip;
  endfunction:fn_mk_target_ifc

    method ActionValue#(Tuple2#(Bool,Bit#(dw))) read(Bit#(aw) raddr, Bit#(2) size);
      let addr = raddr - fromInteger(slave_base);
      Bit#(26) offset = truncate(addr);
      Bool success = False;
      Bit#(dw) rdata = 0; // return data;
      `logLevel( plic, 0, $format("PLIC: Rd offset:%h sz:",offset,fshow(size)))
      if(offset < 'h1000 ) begin// source priorities
        Bit#(Max_source_wd) src_id = truncate(offset[11:2]); // source is after lower 2 bits
        Bit#(32) _t=  zeroExtend(vrg_source_priority[src_id]);
        {success, rdata} = fn_adjust_read(addr, size, _t, 0, 2, 2'b11);
        // ensure source ids within the instantiated number of sources
        if( src_id > 0 && src_id <= fromInteger(v_nsources-1) ) begin
          success = success ;
        end
      end

      else if ('h1000 <= offset && offset < 'h2000) begin // source ips
        
        // since ips are stored 32-sources per 4 bytes, we multiply by 32 to get the base id first
        Bit#(Max_source_wd) src_base = truncate({addr[11:0],5'h0});

        // function to correctly detect pending interrups within the base-id block
        // TODO: wouldn't a simple zeroExtend vrg_source_pending >> src_base work?
	      function Bool fn_ip_source_id (Integer source_id_offset);
	        let src_id = src_base + fromInteger (source_id_offset);
	        Bool ip_source_id = (  (src_id <= fromInteger (v_nsources-1)) ? vrg_source_pending [src_id]
                                                      				     : False);
	        return ip_source_id;
	      endfunction:fn_ip_source_id

	      if(src_base <= fromInteger (v_nsources-1)) begin
	        Bit #(32) v_ip = pack (genWith  (fn_ip_source_id));
          {success, rdata} = fn_adjust_read(addr, size, v_ip, 0, 2, 2'b11);
        end
      end

      else if ('h2000 <= offset && offset < 'h3000) begin // source IEs.
        Bit#(Max_target_wd) target_id = truncate(offset[11:7]);
        Bit#(Max_source_wd) src_base  = truncate({offset[6:2],5'h0});

        `logLevel( plic, 0, $format("PLIC: IEs:target_id:%d src_base:%d v_nsources:%d v_targets:%d",
          target_id,src_base, v_nsources, v_targets))

	      function Bool fn_ie_source_id (Integer source_id_offset);
	        let source_id = fromInteger (source_id_offset) + src_base;
	        return (  (source_id <= fromInteger (v_nsources - 1))? v_target_ie[target_id][source_id]
                                                		         : False);
	      endfunction:fn_ie_source_id

          Bit #(32) v_ie = pack (genWith  (fn_ie_source_id));
          {success, rdata} = fn_adjust_read(addr, size, v_ie, 0, 2, 2'b11);
        end

      else if ('h200000 <= offset && offset <= 'h3FFFFFF) begin // contexts
        Bit#(Max_target_wd) target_id = truncate(offset[25:12]);
        if(offset[11:0] == 0) begin // priority threshold registers per context
          if( target_id <= fromInteger(v_targets-1)) begin
            Bit#(32) _t = zeroExtend(v_target_threshold[target_id]);
            {success, rdata} = fn_adjust_read(addr, size, _t, 0, 2, 2'b11);
          end
        end
        else if(offset[11:0] == 4) begin // claim/complete register per context
	        match { .max_prio, .max_id } = fn_target_max_prio_and_max_id (target_id);
	        Bool eip = (max_prio > v_target_threshold [target_id]);
          if( target_id <= fromInteger(v_targets - 1)) begin
              success = True;
              if (max_id != 0 ) begin
                vrg_source_pending [max_id] <= False;
                v_reg_source_busy [max_id] <= True;
                rdata = reSize(max_id);
              `logLevel( plic, 0, $format("PLIC: Claiming interrupt-src:%d for target-id:%d",
                                                                                max_id, target_id))
            end
            // error
          end
        end
      end

      return tuple2(success, rdata);
    endmethod: read

    method ActionValue#(Bool) write (Bit#(aw) raddr, Bit#(dw) data, Bit#(TDiv#(dw,8)) strb);
      let addr = raddr - fromInteger(slave_base);
      Bit#(26) offset = truncate(addr);
      Bool success = False;
      Bit#(32) _temp = 0;
      `logLevel( plic, 0, $format("PLIC: Wr offset:%h data:%h strb:%h",offset, data, strb))
      if(offset < 'h1000 ) begin// source priorities
        Bit#(Max_source_wd) src_id = truncate(offset[11:2]); // source is after lower 2 bits
        `logLevel( plic, 0, $format("PLIC: WrPrio src_id:%d",src_id))
        // ensure source ids within the instantiated number of sources
        if( src_id <= fromInteger(v_nsources-1) ) begin
          _temp = zeroExtend(vrg_source_priority[src_id]);
          {success, _temp} <- fn_adjust_write(addr, data, strb, _temp, 0, 2, 2'b11);
        if(success && src_id > 0) vrg_source_priority[src_id] <= truncate(_temp);
        end
      end
      // source IPs are read-only so skipping their address map

      // source IEs
      else if( 'h2000 <= offset && offset < 'h3000) begin
        Bit#(Max_target_wd) target_id = truncate(offset[11:7]);
        Bit#(Max_source_wd) src_base  = truncate({offset[6:2],5'h0});
        `logLevel( plic, 0, $format("PLIC: WrIEs:target_id:%d src_base:%d v_nsources:%d v_targets:%d",
          target_id,src_base, v_nsources, v_targets))
    		  success = True;
    		  let _data = updateDataWithMask(0, data, strb);
	        for (Bit #(Max_source_wd)  k = 0; k < 32; k = k + 1) begin
	          Bit #(Max_source_wd)  source_id = src_base + k;
	          if (source_id <= fromInteger (v_nsources - 1)) begin
    		      v_target_ie[target_id][source_id] <= unpack(reSize(_data[k]));
	        end
	      end
      end

      // thresholds
      else if ('h200000 <= offset && offset <= 'h3FFFFFF) begin // contexts
        Bit#(Max_target_wd) target_id = truncate(offset[25:12]);
        if(offset[11:0] == 0) begin // priority threshold registers per context
          if(target_id <= fromInteger(v_targets-1)) begin
            _temp = zeroExtend(v_target_threshold[target_id]);
            {success, _temp} <- fn_adjust_write(addr, data, strb, _temp, 0, 2, 2'b11);
            if(success) v_target_threshold[target_id] <= truncate(_temp);
          end
        end
        else if(offset[11:0] == 4) begin // claim/complete register per context
	        Bit #(Max_source_wd)  source_id = truncate(data);
	        if(target_id <= fromInteger(v_targets -1) ) begin
              success = True;
	          if(source_id <= fromInteger(v_nsources - 1) && v_target_ie[target_id][source_id])begin
              v_reg_source_busy[source_id] <= False;
	            `logLevel( plic, 0, $format("PLIC: Completion for target-id:%d source-id:%d",
                                                                        target_id, source_id))
	          end
	          else
	            `logLevel( plic, 0, $format("PLIC: Ignoring Completion for target-id:%d source-id:%d",
                                                                        target_id, source_id))
	        end
        end
      end
      return success;
    endmethod:write
    // sources
    method Action sb_frm_sources(Bit#(sources) irq);
      for (Integer i = 0; i<valueOf(sources); i = i + 1) begin
		    if (! v_reg_source_busy [i+1] && !vrg_source_pending[i+1]) begin
  		    vrg_source_pending[i+1] <= unpack(irq[i]);
  		    if (irq[i]==1)
    		    `logLevel( plic, 0, $format("PLIC: interrupt registered for source-id:%d",i+1))
		    end
      end
    endmethod
    // targets
    interface  sb_to_targets = genWith  (fn_mk_target_ifc);
endmodule:mkplic

	interface Ifc_plic_axi4lite#( numeric type aw,
	                              numeric type dw,
	                              numeric type uw,
                                numeric type sources, 
                                numeric type targets, 
                                numeric type maxpriority);
			interface AXI4_Lite_Slave_IFC#(aw, dw, uw) slave;
      (*always_ready*)
      interface Vector#(targets, Bool) sb_to_targets;
      (*always_ready, always_enabled, prefix=""*)
      method Action sb_frm_sources((*port="sb_frm_sources"*) Bit#(sources) irq);
	endinterface

	module mkplic_axi4lite#(parameter Integer slave_base)(Ifc_plic_axi4lite#(aw, dw, uw, sources, targets, maxpriority))
      provisos(
        Add#(1,sources,nsources),
        Add#(nsources, _a, 1024),             // max sources is 1024
        Max#(TLog#(nsources),1, lg_nsources), // log of sources
        Max#(TLog#(maxpriority),1,lg_priority),  // log of priority
        Max#(TLog#(targets), 1,lg_targets),  // log of targets
        Add#(_b, lg_nsources, 10),
    
    Add#(h__, 10, dw),
        Add#(a__, 26, aw),
        Add#(8, b__, dw),         // data atleast 8 bits
        Mul#(TDiv#(dw,8),8, dw), // dw is a proper multiple of 8 bits
        Add#(c__, 2, aw),
        `ifndef iclass
          Add#(dw, d__, 64),
        `else
          Add#(dw, d__, 128),
        `endif
        Add#(TExp#(TLog#(dw)),0,dw),
        `ifndef iclass
          Add#(e__, TDiv#(dw, 8), 8),
        `else
          Add#(e__, TDiv#(dw, 8), 16),
        `endif
        Add#(f__, lg_priority, 32),
        Bits#(UInt#(TLog#(nsources)), lg_nsources),
        Add#(g__, 1, lg_priority)
      );

		AXI4_Lite_Slave_Xactor_IFC #(aw, dw, uw)  s_xactor <- mkAXI4_Lite_Slave_Xactor;
		User_ifc#(aw, dw, sources, targets, maxpriority) plic <- mkplic(slave_base);

		(*preempts="rl_config_plic_reg_read, rl_config_plic_reg_write"*)
			rule rl_config_plic_reg_write;
				let aw <- pop_o(s_xactor.o_wr_addr);
				let w <- pop_o(s_xactor.o_wr_data);
				let w_strobe = w.wstrb;
				Bit#(TLog#(TDiv#(dw,8))) byte_offset=0;
				for(Integer i=3; i >= 0; i=i-1) begin 
					if(w_strobe[i]==1)
						byte_offset=fromInteger(i);
				end
				let success <- plic.write(aw.awaddr, w.wdata, w.wstrb);
				let w_resp = AXI4_Lite_Wr_Resp {bresp: success?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, buser: 0 }; //TODO user value is null
				s_xactor.i_wr_resp.enq(w_resp);
			endrule

 			rule rl_config_plic_reg_read;

				let ar <- pop_o(s_xactor.o_rd_addr);
				let {success, x} <- plic.read(ar.araddr, ar.arsize);
				let r = AXI4_Lite_Rd_Data {rresp: success?AXI4_LITE_OKAY:AXI4_LITE_SLVERR, rdata: duplicate(x), ruser: 0};
				s_xactor.i_rd_data.enq(r);
			endrule

			interface slave = s_xactor.axi_side;
			method sb_frm_sources = plic.sb_frm_sources;
			interface sb_to_targets = plic.sb_to_targets;
	endmodule

	interface Ifc_plic_axi4#( numeric type aw,
                                numeric type iw,
	                              numeric type dw,
	                              numeric type uw,
                                numeric type sources, 
                                numeric type targets, 
                                numeric type maxpriority);
			interface AXI4_Slave_IFC#(aw, iw, dw, uw) slave;
      (*always_ready*)
      interface Vector#(targets, Bool) sb_to_targets;
      (*always_ready, always_enabled, prefix=""*)
      method Action sb_frm_sources((*port="sb_frm_sources"*) Bit#(sources) irq);
	endinterface
	module mkplic_axi4#(parameter Integer slave_base)(Ifc_plic_axi4#(aw,iw,dw,uw, sources, targets, maxpriority))
      provisos(
        Add#(1,sources,nsources),
        Add#(nsources, _a, 1024),             // max sources is 1024
        Max#(TLog#(nsources),1, lg_nsources), // log of sources
        Max#(TLog#(maxpriority),1,lg_priority),  // log of priority
        Max#(TLog#(targets), 1,lg_targets),  // log of targets
        Add#(_b, lg_nsources, 10),
    
    Add#(h__, 10, dw),
        Add#(a__, 26, aw),
        Add#(8, b__, dw),         // data atleast 8 bits
        Mul#(TDiv#(dw,8),8, dw), // dw is a proper multiple of 8 bits
        Add#(c__, 2, aw),
        `ifndef iclass
          Add#(dw, d__, 64),
        `else
          Add#(dw, d__, 128),
        `endif
        Add#(TExp#(TLog#(dw)),0,dw),
        `ifndef iclass
          Add#(e__, TDiv#(dw, 8), 8),
        `else
          Add#(e__, TDiv#(dw, 8), 16),
        `endif
        Add#(f__, lg_priority, 32),
        Bits#(UInt#(TLog#(nsources)), lg_nsources),
        Add#(g__, 1, lg_priority)
      );

		let strb_size = valueOf(TSub#(TDiv#(dw,8),1));

		AXI4_Slave_Xactor_IFC #(aw, iw, dw, uw)  s_xactor <- mkAXI4_Slave_Xactor;
		User_ifc#(aw, dw, sources, targets, maxpriority) plic <- mkplic(slave_base);

	 	Reg#(Bit#(8)) rg_rdburst_count <- mkRegA(0);
		Reg#(Bit#(8)) rg_wrburst_count <- mkRegA(0);

		Reg#(AXI4_Rd_Addr#(aw,iw,uw)) rg_rdpacket <- mkRegA(?);
 		Reg#(AXI4_Wr_Addr#(aw,iw,uw)) rg_wrpacket <- mkRegA(?);


		 (*preempts="rl_config_plic_reg_read,rl_config_plic_reg_write"*)
		 //because of the read method side effects (there is also a write to IP bits during the read method)
		 (*preempts="rl_config_plic_reg_read_burst,rl_config_plic_reg_write_burst"*)
		 (*preempts="rl_config_plic_reg_read,rl_config_plic_reg_write_burst"*)
		 (*preempts="rl_config_plic_reg_read_burst,rl_config_plic_reg_write"*)

			rule rl_config_plic_reg_write(rg_wrburst_count==0);
				let aw <- pop_o(s_xactor.o_wr_addr);
				let w <- pop_o(s_xactor.o_wr_data);
				let w_strobe = w.wstrb;
				Bit#(TLog#(TDiv#(dw,8))) byte_offset=0;
				for(Integer i=strb_size; i >= 0; i=i-1) begin 
					if(w_strobe[i]==1)
						byte_offset=fromInteger(i);
				end
				
				rg_wrpacket<=aw;
		 		if(aw.awlen!=0)
		 			rg_wrburst_count<=1;
				let success <- plic.write(aw.awaddr, w.wdata, w.wstrb);
				let w_resp = AXI4_Wr_Resp {bresp: success?AXI4_OKAY:AXI4_SLVERR, buser: 0,bid:aw.awid }; //TODO user value is null
				s_xactor.i_wr_resp.enq(w_resp);
			endrule

			rule rl_config_plic_reg_write_burst(rg_wrburst_count!=0);
				let wr_req=rg_wrpacket;
				let w <- pop_o(s_xactor.o_wr_data);
				let w_strobe = w.wstrb;
				Bit#(TLog#(TDiv#(dw,8))) byte_offset=0;
				for(Integer i=strb_size; i >= 0; i=i-1) begin 
					if(w_strobe[i]==1)
						byte_offset=fromInteger(i);
				end
				let success <-plic.write(wr_req.awaddr, w.wdata, w.wstrb);
				if(rg_wrburst_count==wr_req.awlen)
					rg_wrburst_count<=0;
				else
					rg_wrburst_count<=rg_wrburst_count+1;
				let resp= AXI4_Wr_Resp {bresp: success?AXI4_OKAY:AXI4_SLVERR, buser: 0,bid:wr_req.awid };
				s_xactor.i_wr_resp.enq(resp);
			endrule

 			rule rl_config_plic_reg_read(rg_rdburst_count==0);


				let ar <- pop_o(s_xactor.o_rd_addr);
				rg_rdpacket<=ar;
				if(ar.arlen!=0)
		 			rg_rdburst_count<=1;
				let {success,x} <- plic.read(ar.araddr, truncate(ar.arsize));
				let r = AXI4_Rd_Data {rresp: success?AXI4_OKAY:AXI4_SLVERR, rdata: duplicate(x), ruser: 0,rid:ar.arid,rlast:(ar.arlen==0)};
				s_xactor.i_rd_data.enq(r);
			endrule

			rule rl_config_plic_reg_read_burst(rg_rdburst_count!=0);
				let rd_req=rg_rdpacket;
				let {success, x} <- plic.read(rd_req.araddr, truncate(rd_req.arsize)); 			
		        success=False;
		        if(rg_rdburst_count==rd_req.arlen)
					rg_rdburst_count<=0;
				else
					rg_rdburst_count<=rg_rdburst_count+1;
				let r = AXI4_Rd_Data {rresp: success?AXI4_OKAY:AXI4_SLVERR, rdata: duplicate(x), ruser: 0,rid:rd_req.arid,rlast:(rd_req.arlen==0)};
				s_xactor.i_rd_data.enq(r);	
			endrule

			interface slave = s_xactor.axi_side;
			method sb_frm_sources = plic.sb_frm_sources;
			interface sb_to_targets = plic.sb_to_targets;
	endmodule

endpackage: plic

