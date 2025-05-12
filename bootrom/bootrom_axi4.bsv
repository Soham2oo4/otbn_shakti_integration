/* 
see LICENSE.iitm

Author: Neel Gala, Deepa N Sarma
Email id: neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package bootrom_axi4;
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

  `include "Logger.bsv"
  export mkbootrom_axi4;
  export Ifc_bootrom_axi4   (..);


  interface UserInterface#(numeric type addr_width,  numeric type data_width, 
                            numeric type index_size);
    method Action read_request (Bit#(addr_width) addr, AccessSize size);
    method Action write_request (Tuple3#(Bit#(addr_width), Bit#(data_width),  
                                                            Bit#(TDiv#(data_width, 8))) req);
    method ActionValue#(Tuple2#(Bool, Bit#(data_width))) read_response;
    method ActionValue#(Bool) write_response;
  endinterface
 
  // to make it synthesizable replace addr_width with Physical Address width
  // data_width with data lane width
  module mkbootrom#(parameter Integer slave_base)(UserInterface#(addr_width, data_width, index_size))
    provisos(Add#(data_width, a, `ifndef iclass 64 `else 128 `endif ),
             Mul#(8, a__, data_width), // data_width should always be multiple of 8, 16 and 32.
             Mul#(16, b__, data_width),
             Mul#(32, c__, data_width));
  
    Integer byte_offset = valueOf(TLog#(TDiv#(data_width, 8)));
    Bit#(addr_width) base_address=fromInteger(slave_base);

    BRAM_PORT#(Bit#(index_size), Bit#(data_width)) boot <- mkBRAMCore1Load(valueOf(TExp#(index_size)), False, "bootfile", False);
    Reg#(Bool) read_request_sent <-mkDReg(False);
    Reg#(Tuple2#(Bit#(TAdd#(1,TDiv#(data_width,32))),AccessSize)) rg_req<- mkReg(tuple2(0,Byte));
    `ifdef fesvr_sim
      Reg#(Bit#(1)) rg_initialized <- mkReg(0);
    `endif

    `ifdef fesvr_sim
      rule rl_initialize(rg_initialized == 0);
        Bit#(index_size) index_address = 'h1;
        Bit#(data_width) data = 'h0000000080000000000000000000006f;

        // patch for fesvr_sim: replace jump to 0x80000000 to self-loop at the end of boot code
        boot.put(True, index_address, data);
        rg_initialized <= 1;
      endrule
    `endif

    // A write request to bootrom has no significance.
    method Action write_request (Tuple3#(Bit#(addr_width), Bit#(data_width),  Bit#(TDiv#(data_width, 8))) req);
      `logLevel( bootrom, 0, $format("BootROM: Illegal Write operation on BootROM"))
    endmethod
  
    // The write response will always be an error.
    method ActionValue#(Bool) write_response;
      return True;
    endmethod
  
    // capture a read_request and latch the address on a BRAM.
    method Action read_request (Bit#(addr_width) addr, AccessSize size) `ifdef fesvr_sim if(rg_initialized == 1) `endif ;
      Bit#(index_size) index_address=(addr-(base_address))[byte_offset+ valueOf(index_size) -1 :  byte_offset];
      rg_req<= tuple2(addr[byte_offset:0],size);
      boot.put(False, index_address, ?);
      read_request_sent<= True;
      `logLevel( bootrom, 0, $format("BootROM: Received Read Request for Address: %h Index Address: %h b: %d", addr, index_address, byte_offset))
    endmethod
  
    // respond with data from the BRAM.
    method ActionValue#(Tuple2#(Bool, Bit#(data_width))) read_response if(read_request_sent);
      let {offset, size}=rg_req;
      Bit#(data_width) data=boot.read();
      return tuple2(False, data);
    endmethod
  endmodule

  interface Ifc_bootrom_axi4#(numeric type addr_width, numeric type id_width, numeric type data_width, 
                              numeric type user_width, numeric type index_size);
  interface AXI4_Slave_IFC#(addr_width, id_width, data_width, user_width) slave; 
  endinterface

  typedef enum {Idle, Burst} Mem_State deriving(Eq, Bits, FShow);

  module mkbootrom_axi4#(parameter Integer slave_base)(Ifc_bootrom_axi4#(addr_width, id_width, data_width,
                                                                          user_width, index_width))
    provisos(Add#(data_width, a, `ifndef iclass 64 `else 128 `endif ),
             Mul#(8, a__, data_width), 
             Mul#(16, b__, data_width), 
             Mul#(32, c__, data_width),
             Mul#(64, e__, data_width),
             Add#(3, d__, TLog#(data_width)));
    UserInterface#(addr_width, data_width, index_width) dut <- mkbootrom(slave_base);
    AXI4_Slave_Xactor_IFC #(addr_width, id_width, data_width, user_width)  s_xactor <- mkAXI4_Slave_Xactor;
    Reg#(Bit#(id_width)) rg_rd_id <-mkReg(0);
    Reg#(Mem_State) read_state <-mkReg(Idle);
    Reg#(Mem_State) write_state <-mkReg(Idle);
    Reg#(Bit#(8)) rg_readburst_counter<-mkReg(0);
    Reg#(AXI4_Rd_Addr#(addr_width, id_width, user_width)) rg_read_packet <-mkReg(?);
    Reg#(AXI4_Wr_Resp#(id_width, user_width)) rg_write_response <-mkReg(?);
    Integer byte_offset = valueOf(TLog#(TDiv#(data_width, 8)));

    // If the request is single then send ERR. If it is a burst write request then change
    // state to Burst and do not send response.
    rule write_request_address_channel(write_state==Idle);
      let aw <- pop_o (s_xactor.o_wr_addr);
      let w  <- pop_o (s_xactor.o_wr_data);
      let b = AXI4_Wr_Resp {bresp: AXI4_SLVERR, buser: aw.awuser, bid:aw.awid};
      if(!w.wlast)
        write_state<= Burst;
      else
        s_xactor.i_wr_resp.enq (b);
      rg_write_response<= b;
    endrule
    // if the request is a write burst then keeping popping all the data on the data_channel and
    // send a error response on receiving the last data.
    rule write_request_data_channel(write_state==Burst);
      let w  <- pop_o (s_xactor.o_wr_data);
      if(w.wlast)begin
        s_xactor.i_wr_resp.enq (rg_write_response);
        write_state<= Idle;
      end
    endrule
    // read first request and send it to the dut. If it is a burst request then change state to
    // Burst. capture the request type and keep track of counter.
    rule read_request_first(read_state==Idle);
      let ar<- pop_o(s_xactor.o_rd_addr);
      dut.read_request(ar.araddr, unpack(truncate(ar.arsize)));
      rg_rd_id<= ar.arid;
      if(ar.arlen!=0)
        read_state<=Burst;
      rg_readburst_counter<= 0;
      rg_read_packet<=ar;
    endrule
    // incase of burst read,  generate the new address and send it to the dut until the burst
    // count has been reached.
    rule read_request_burst(read_state==Burst);
      if(rg_readburst_counter==rg_read_packet.arlen)
        read_state<=Idle;
      else begin
        let address=axi4burst_addrgen(rg_read_packet.arlen, rg_read_packet.arsize, 
            rg_read_packet.arburst, rg_read_packet.araddr);
        rg_read_packet.araddr<=address;
        rg_readburst_counter<= rg_readburst_counter+1;
        dut.read_request(address,unpack(truncate(rg_read_packet.arsize)));
      end
    endrule
    // get data from the bootrom. send response.
    rule read_response;
      let {err, data0}<-dut.read_response;
      let transfer_size=rg_read_packet.arsize;

      Bit#(data_width) data_extracted = zeroExtend (data0) >> (rg_read_packet.araddr[6:0] << 3);
      data_extracted = (transfer_size == 'h0) ? data_extracted & 'hff
                                              : ((transfer_size == 'h1) ? data_extracted & 'hffff
                                                                        : ( ((transfer_size == 'h2) ? data_extracted & 'hffffffff
                                                                                                    : ((transfer_size == 'h3) ? data_extracted & 'hffffffffffffffff : data_extracted) ) ) );

      AXI4_Rd_Data#(id_width, data_width, user_width) r = AXI4_Rd_Data {rresp: AXI4_OKAY, rdata: data_extracted, 
        rlast:rg_readburst_counter==rg_read_packet.arlen, ruser: 0, rid:rg_read_packet.arid};
      `logLevel( bootrom, 1, $format("BootROM : Responding Read Request with Data: %h ", data_extracted))
      s_xactor.i_rd_data.enq(r);
    endrule
    interface slave = s_xactor.axi_side;
  endmodule
  
endpackage
