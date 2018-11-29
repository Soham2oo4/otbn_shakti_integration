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
    
    // Function MACROS For Scalable Test writing
    `define FIVO(x) fromInteger(valueOf(x))

    `define DMI_READ(x) device.dtm.putCommand.put({x,32'd0,2'b01});         \
        action                                                              \
        let resp <- device.dtm.getResponse.get();                           \
        $display($time,"*\tDTM:: \tADDR: %h\tDATA: %h\tOP: %h\t-> %h,%h",   \
            x,32'd0,2'b01,resp[33:2],resp[1:0]);                            \
        dmi_resp_data <= resp[33:2];                                        \
        endaction
    
    `define DMI_WRITE(x,y) device.dtm.putCommand.put({x,y,2'b10});          \
        action                                                              \
        let resp <- device.dtm.getResponse.get();                           \
        $display($time,"*\tDTM:: \tADDR: %h\tDATA: %h\tOP: %h\t-> %h,%h",   \
            x,y,2'b10,resp[33:2],resp[1:0]);                                \
        endaction
    
    typedef 5000 TimeOut;

    // AXI Fabric Slave Address Decoder
    function Tuple2 #(Bool, Bit#(1)) fn_slave_map (Bit#(PADDR) addr);
        Bool slave_exist = True;
        Bit#(1) slave_num = 0;
        if(addr >= 0 && addr<= 32'h000fffff )
            slave_num = 0;
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
        Ifc_bram_axi4   #(32,32,0,18)   main_memory0 <- mkbram_axi4('h00000000,"test.mem","test.mem");

        mkConnection (device.debug_master,fabric.v_from_masters[0]);
        mkConnection (fabric.v_to_slaves[0],main_memory0.slave);

    // Test Sequences
        Reg#(Bit#(7)) dmi_address <-mkReg(0);
        Reg#(Bit#(32))dmi_resp_data <- mkReg(0);    // Use Response Data Value in tests
    
    // DMI access
        Stmt accessTest = seq
            for( dmi_address <= 0 ; dmi_address <= 7'h40; dmi_address <= dmi_address +1)seq
                `DMI_WRITE(dmi_address,32'h00000000)
            endseq
            for( dmi_address <= 0 ; dmi_address <= 7'h40; dmi_address <= dmi_address +1)seq
                `DMI_READ(dmi_address)
            endseq
        endseq;
        FSM fsm_accessTest <- mkFSM(accessTest);
    
    // Reset with DM Active
        Stmt resetDM = seq
            $display($time,"RST\tReseting DM");
            `DMI_READ(`FIVO(DMCONTROL))
            `DMI_WRITE(`FIVO(DMCONTROL),({dmi_resp_data[31:1],1'b0}))
            `DMI_READ(`FIVO(DMCONTROL))
            `DMI_WRITE(`FIVO(DMCONTROL),({dmi_resp_data[31:1],1'b1}))
            `DMI_READ(`FIVO(DMCONTROL))
        endseq;
        FSM fsm_resetDM <- mkFSM(resetDM);

    // System Bus Access Tests
        //Busy bits get set on Write,and get cleared on W1C
        Stmt test0 = seq
            `DMI_READ(`FIVO(SBCS))          
            `DMI_READ(`FIVO(SBDATA0))
            `DMI_READ(`FIVO(SBCS))          // No Busy Bits
            `DMI_WRITE(`FIVO(SBDATA0),32'hAAAAAAAA)
            `DMI_READ(`FIVO(SBCS))          // sbBusy Should be asserted
            `DMI_WRITE(`FIVO(SBDATA0),32'hAAAAAAAA)
            `DMI_READ(`FIVO(SBCS))          // Sb Busy Error should be asserted
            if(dmi_resp_data[22:21] != 2'b11) 
                $display("FAIL: Busy bitS not set !");
            while(dmi_resp_data[21] == 1'b1 )seq 
                `DMI_READ(`FIVO(SBCS))      // poll on sbBusy
            endseq
            `DMI_WRITE(`FIVO(SBCS),({dmi_resp_data[31:23],1'b1,dmi_resp_data[21:0]})) // Clear sbBusyError
            `DMI_READ(`FIVO(SBCS))          // Sb Busy Error should be de asserted
            if(dmi_resp_data[22] == 1'b1)
                $display("FAIL: Busy bit is set !");
        endseq;
        FSM fsm_test0 <- mkFSM(test0);

        Stmt test1 = seq
            `DMI_READ(`FIVO(SBCS))
            `DMI_WRITE(`FIVO(SBCS),({dmi_resp_data[31:21],1'b1,dmi_resp_data[19:16],1'b1,dmi_resp_data[14:0]}))
            `DMI_WRITE(`FIVO(SBADDRESS0),32'h0000ffff)
            `DMI_READ(`FIVO(SBDATA0))    // Dont Wait and get error set
            `DMI_READ(`FIVO(SBCS))
            while(dmi_resp_data[21] == 1'b1 )seq 
                `DMI_READ(`FIVO(SBCS))      // poll on sbBusy
            endseq
            `DMI_WRITE(`FIVO(SBCS),({dmi_resp_data[31:23],1'b1,dmi_resp_data[21:0]})) // Clear sbBusyError
            `DMI_READ(`FIVO(SBDATA0))
            `DMI_READ(`FIVO(SBCS))
            `DMI_READ(`FIVO(SBDATA0))
        endseq;
        FSM fsm_test1 <- mkFSM(test1);

        Stmt testBench = seq
            fsm_resetDM.start;
            fsm_resetDM.waitTillDone;
            // fsm_accessTest.start;
            // fsm_accessTest.waitTillDone();
            // fsm_test0.start;
            // fsm_test0.waitTillDone;
            // fsm_resetDM.start;
            // fsm_resetDM.waitTillDone;
            // fsm_test1.start;
            // fsm_test1.waitTillDone;
            delay(100);
            $display($time,"\tEnd of Test");
            $finish();
        endseq;
        FSM tests <- mkFSM(testBench);

        rule startTests;
            tests.start; 
        endrule

    endmodule
endpackage

