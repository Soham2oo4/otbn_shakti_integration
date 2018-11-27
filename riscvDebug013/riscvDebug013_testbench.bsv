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

Author: Paul George
Email id: command.paul@gmail.com 

--------------------------------------------------------------------------------------------------
*/

package riscvDebug013_testbench;

    import riscvDebug013::*;
    
    import StmtFSM::*;  
    import Connectable:: *;
    import GetPut::*;

    import debug_types::*;
    import AXI4_Fabric:: *;
    import bram::*;
    

    function Tuple2 #(Bool, Bit#(1)) fn_slave_map (Bit#(PADDR) addr);
        Bool slave_exist = True;
        Bit#(1) slave_num = 0;
        if(addr >= 0 && addr<= 32'h000fffff )
            slave_num = 0;
        else if ( addr >= 32'h000fffff && addr <= 32'h80000000) 
            slave_num = 1;
        else slave_exist = False;
        return tuple2(slave_exist, slave_num);
      endfunction:fn_slave_map



    (*synthesize*)
    module mkdummy(Empty);
        // Test Environment 
        RiscvDebugInterface013 device <- mkRiscvDebugModule();

        // Hardcoded for PADDR 32 AND XLEN 32
        // AXI4_Fabric_IFC #(`Num_Masters, `Num_Slaves, PADDR, XLEN, USERSPACE) 
        AXI4_Fabric_IFC #(1,2,32,32,0)  fabric <- mkAXI4_Fabric(fn_slave_map);
        Ifc_bram_axi4   #(32,32,0,20)   main_memory0 <- mkbram_axi4('h00000000, "code.mem", "code.mem");
        Ifc_bram_axi4   #(32,32,0,20)   main_memory1 <- mkbram_axi4('h000fffff, "code1.mem", "code1.mem");

        mkConnection (device.debug_master,fabric.v_from_masters[0]);
        mkConnection (fabric.v_to_slaves[0],main_memory0.slave);
        mkConnection (fabric.v_to_slaves[1],main_memory1.slave);

        // Test Sequences
        Reg#(Bit#(7)) dmi_address <-mkReg(0);

        Stmt accessTest = seq
            for( dmi_address <= 0 ; dmi_address <= 7'h40; dmi_address <= dmi_address +1)seq
                device.dtm.putCommand.put({dmi_address,32'h00000000,2'b10});    
                $display($time,"\tResponse for command %h is :: %h ",{dmi_address,32'h00000000,2'b10},device.dtm.getResponse.get());
            endseq
            for( dmi_address <= 0 ; dmi_address <= 7'h40; dmi_address <= dmi_address +1)seq
                device.dtm.putCommand.put({dmi_address,32'h00000000,2'b01});    
                $display($time,"\tResponse for command %h is :: %h ",{dmi_address,32'h00000000,2'b01},device.dtm.getResponse.get());
            endseq
        endseq;
        FSM access <- mkFSM(accessTest);

        Stmt test0 = seq
            device.dtm.putCommand.put({7'b0111100,32'hAAAAAAAA,2'b10});    
            $display($time,"\tResponse for command %h is :: %h ",{dmi_address,32'hAAAAAAAA,2'b10},device.dtm.getResponse.get());
            device.dtm.putCommand.put({7'b0111001,32'h0000ffff,2'b01});    
            $display($time,"\tResponse for command %h is :: %h ",{dmi_address,32'h0000ffff,2'b01},device.dtm.getResponse.get());
            device.dtm.putCommand.put({7'b0111100,32'hAAAAAAAA,2'b10});    
            $display($time,"\tResponse for command %h is :: %h ",{dmi_address,32'hAAAAAAAA,2'b10},device.dtm.getResponse.get());
        endseq;
        FSM fsm_test0 <- mkFSM(test0);

        Stmt testBench = seq
            access.start;
            fsm_test0.start;
            delay(1000);
            $finish();
            endseq;

        FSM tests <- mkFSM(testBench);

        rule startTests;
            tests.start; 
        endrule

    endmodule
endpackage

