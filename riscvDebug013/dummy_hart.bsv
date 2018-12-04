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
Author: P.George
Email id: command.paul@gmail.com
--------------------------------------------------------------------------------------------------
*/

// Template of an Ideal HART for debugging

package dummy_hart;
  import riscvDebug013::*;
  import Connectable::*;
  import debug_types::*;

  interface Hart_Debug_Ifc;
    method Action   abstractOperation(Tuple3#(Bit#(1),Bit#(AbstractAddrWidth),Bit#(XLEN))abstract_command);
    method ActionValue#(Bit#(XLEN)) abstractReadResponse;
    method Action   haltRequest(Bit#(1) halt_request);
    method Action   resumeRequest(Bit#(1) resume_request);
    method Action   hartReset(Bit#(1) hart_reset); // Change to reset type // Signal TO Reset HART -Active HIGH
    method Bit#(1)  isHalted;
    method Bit#(1)  isAvailable;
  endinterface

  instance Connectable #(Hart_Debug_Ifc,Debug_Hart_Ifc);
    module mkConnection #(Hart_Debug_Ifc hart,Debug_Hart_Ifc debug_module)(Empty);

      rule operation;
        //let x = debug_module.abstractOperation;
        hart.abstractOperation(debug_module.abstractOperation);
      endrule

      rule response;
        let x <- hart.abstractReadResponse();
        debug_module.abstractReadResponse(x);
      endrule
      
      rule run_control_request;
        hart.haltRequest(debug_module.haltRequest());
        hart.resumeRequest(debug_module.resumeRequest());
        hart.hartReset(debug_module.hart_reset());
      endrule
      
      rule hart_status;
        debug_module.setHalted(hart.isHalted());
        debug_module.setAvailable(hart.isAvailable());
      endrule
    endmodule
  endinstance
  (*synthesize*)
  module mkDummyHart(Hart_Debug_Ifc);

    Reg#(Bit#(1)) rg_halted <- mkReg(0);
    Reg#(Bit#(1)) rg_available <- mkReg(0);
    Reg#(Maybe#(Bit#(XLEN))) rg_abst_response <- mkReg(tagged Invalid);

    //   Interface Population   
    method Action   abstractOperation(Tuple3#(Bit#(1),Bit#(AbstractAddrWidth),Bit#(XLEN))abstract_command);
      //abst_addr = 
      //abst_data = 
      //abst_command = 
      rg_abst_response <= tagged Valid 32'hbebecafe ;
    endmethod

    method ActionValue#(Bit#(XLEN)) abstractReadResponse;
      rg_abst_response <= tagged Invalid;
      return validValue(rg_abst_response);
    endmethod

    method Action   haltRequest(Bit#(1) halt_request);
      // Do Something that does a halt req
    endmethod

    method Action   resumeRequest(Bit#(1) resume_request);
      // Do Something that does a resume req
    endmethod

    method Action   hartReset(Bit#(1) hart_reset); // Change to reset type // Signal TO Reset HART -Active HIGH
      // MAke this a reset type or use this to trigger the reset type
    endmethod

    method Bit#(1)  isHalted;
      return rg_halted;
    endmethod

    method Bit#(1)  isAvailable;
      return rg_available;
    endmethod

  endmodule

endpackage