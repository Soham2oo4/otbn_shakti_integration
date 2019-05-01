/* 
Copyright (c) 2018, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and / or other materials provided 
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

Author : Neel Gala
Email id : neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package dmi_tap;
	import Clocks::*;
  import FIFO :: *;
  import SpecialFIFOs :: *;
  `include "Logger.bsv"

  interface Ifc_dmi_tap;
    (*always_enabled, always_ready*)
    method Action capture (Bit#(1) in);
    (*always_enabled, always_ready*)
    method Action select (Bit#(1) in);
    (*always_enabled, always_ready*)
    method Action shift (Bit#(1) in);
    (*always_enabled, always_ready*)
    method Action update (Bit#(1) in);
	  (*always_enabled, always_ready*)
  	method Action tms (Bit#(1) in);
	  (*always_enabled, always_ready*)
  	method Action tdi (Bit#(1) in);
	  (*always_ready*)
	  method Bit#(1) tdo;

	  method Action response_from_dm(Bit#(34) responsedm);
	  method ActionValue#(Bit#(40)) request_to_dm;
  endinterface

  module mkdmi_tap(Ifc_dmi_tap);
    String jtag = "" ; // for logger
  	Clock def_clk <- exposeCurrentClock;
	  Clock invert_clock <- invertCurrentClock;
  	Reset invert_reset <- mkAsyncResetFromCR(0, invert_clock);

    Wire#(Bit#(1)) wr_capture <- mkDWire(0);
    Wire#(Bit#(1)) wr_select <- mkDWire(0);
    Wire#(Bit#(1)) wr_shift <- mkDWire(0);
    Wire#(Bit#(1)) wr_update <- mkDWire(0);
  	Wire#(Bit#(1)) wr_tms <- mkDWire(0);
	  Wire#(Bit#(1)) wr_tdi <- mkDWire(0);
	
	  Reg#(Bit#(1)) rg_tdo <- mkRegA(0, clocked_by invert_clock, reset_by invert_reset);
    ReadOnly#(Bit#(1)) crossed_output_tdo <- mkNullCrossingWire(def_clk,rg_tdo);
	
	  Reg#(Bit#(40)) dmiaccess_shiftreg[2] <- mkCReg(2,'d2);
  	Reg#(Bit#(2))	response_status <- mkReg(0);

    // ------------ FIFOs to communicate with the DM --------- //
  	FIFOF#(Bit#(40)) request_to_DM <- mkUGFIFOF1();
	  FIFOF#(Bit#(34)) response_from_DM <- mkUGFIFOF1();
  	// -------------------------------------------------------- //

    rule shift_capture_update(wr_select == 1);
      if(wr_capture) begin
				if(response_from_DM.notEmpty)begin 
					let x = response_from_DM.first[33 : 0];
					`logLevel( jtag, 0, $format("\tDTM : Getting response : data %h op: %h",x[33 : 2],x[1 : 0]))
					x[1 : 0] = x[1 : 0]|response_status;// keeping the lower 2 bits sticky
					dmiaccess_shiftreg[0][33 : 0] <= x; 
					response_status <= x[1 : 0];
					response_from_DM.deq; 
					 `logLevel( jtag, 0, $format("\tDTM : New DMIACCESS value: %h",x))
					capture_repsonse_from_dm <= False;
					dmistat <= x[1 : 0];
				end
				else begin
					if(capture_repsonse_from_dm)
						response_status <= 3;
   				`logLevel( jtag, 0, $format("\tDTM : RESPONSE NOT AVAILABLE. DMIACCESS: %h",
                                                                            dmiaccess_shiftreg[0]))
      end
      else if(wr_shift == 1)begin
        dmiaccess_shiftreg[0]<={wr_tdi,dmiaccess_shiftreg[0][39:1]};
      end
      if(wr_update == 1) begin
				if(request_to_DM.notFull && dmiaccess_shiftreg[0][1:0]!=0 && capture_repsonse_from_dm==False)begin
					request_to_DM.enq(dmiaccess_shiftreg[0]);
					dmiaccess_shiftreg[0][1:0]<='d3;
					capture_repsonse_from_dm<=True;
					`logLevel( jtag, 0, $format("\tDTM: Sending request to Debug: %h",dmiaccess_shiftreg[0]))
				end
				else begin
				  `logLevel( jtag, 0, $format("\tDTM: REQUEST NOT SERVED capture: %b DMIACCESS: %h",
                                                    capture_repsonse_from_dm,dmiaccess_shiftreg[0]))
				end
      end
    endrule
    
    method Action capture (Bit#(1) in);
      wr_capture <= in;
    endmethod

    method Action select (Bit#(1) in);
      wr_select <= in;
    endmethod

    method Action shift (Bit#(1) in);
      wr_shift <= in;
    endmethod

    method Action update (Bit#(1) in);
      wr_update <= in;
    endmethod

    method Action tms (Bit#(1) in);
		  wr_tms <= in;
  	endmethod
  	method Action tdi(Bit#(1) in);
	  	wr_tdi <= tdi;
  	endmethod
	  method tdo = crossed_output_tdo;
	  method Action response_from_dm(Bit#(34) responsedm) if(response_from_DM.notFull);
		  if(capture_repsonse_from_dm)
			  response_from_DM.enq(responsedm);
  	endmethod
	  method ActionValue#(Bit#(40)) request_to_dm if(request_to_DM.notEmpty);
		  request_to_DM.deq;
  		return request_to_DM.first;
	  endmethod
  endmodule
endpackage

