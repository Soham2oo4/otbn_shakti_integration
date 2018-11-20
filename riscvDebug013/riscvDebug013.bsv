package riscvDebug013;


    // No Program Buffer Implementation 
    // Programmable DT Vec

    // Only bus MAster for SBA Access
    // 

    interface riscvDMI_JtagDTM;    
    //interface riscv_dmi_fesvr; // IF def and switch connections 
    //interface riscv_dmi_fifo; // Provide some means to make connections like this easily at module instantiation. 
        // Get - Message from DTM
        // PUT - Response to DTM
    endinterface

    interface riscvDebugInterface013
        riscvDMI_jtagDTM dtm;
        // Vector#()
    endinterface 
    
    interface Hart_Debug_Ifc;
        // Abstract Command Interface 
        
    endinterface

// Debug defines move to seperate section.

    typedef enum {  NoError = 3'b000        , Busy = 3'b001,
                    NotSupported = 3'b010   , Exception = 3'b011,
                    WrongState = 3'b100     , Bus       = 3'b101,
                    Other = 3'b111 }        ErrorTypes deriving(Bits,Eq,FShow);

    
    `define ABSTRACTDATASTART       'h04
    `define ABSTRACTDATAEND         'h0f
    `define DMCONTROL               'h10
    `define DMSTATUS                'h11
    `define HARTINFO                'h12
    `define HALTSUM1                'h13
    `define HAWINDOWSEL             'h14
    `define HAWINDOW                'h15
    `define ABSTRACTCTS             'h16
    `define COMMAND                 'h17
    `define ABSTRACTAUTO            'h18
    `define CONFIGSTRINGADDR0       'h19
    `define CONFIGSTRINGADDR1       'h1a
    `define CONFIGSTRINGADDR2       'h1b
    `define CONFIGSTRINGADDR3       'h1c
    `define NEXTDM                  'h1d
    `define PBSTART                 'h20
    `define PBEND                   'h2f
    `define AUTHENDATA              'h30
    `define HALTSUM2                'h34
    `define HALTSUM3                'h35
    `define SBADDRESS3              'h36
    `define SBCS                    'h38
    `define SBADDRESS0              'h39
    `define SBADDRESS1              'h3a
    `define SBADDRESS2              'h3a
    `define SBDATA0                 'h3c
    `define SBDATA1                 'h3d
    `define SBDATA2                 'h3e
    `define SBDATA3                 'h3f
    `define HALTSUM0                'h40

    // Read Only feild Filter.  Bit == 0 => Read Only

    //`define DMCONTROL_M                  32'h00000000;
    //`define DMSTATUS_M                   32'h00000000;
    //`define HARTINFO_M                   32'h00000000;
    //`define HALTSUM1_M                   32'h00000000;
    //`define HAWINDOWSEL_M                32'h00000000;
    //`define HAWINDOW_M                   32'h00000000;
    //`define ABSTRACTCTS_M                32'h00000000;
    //`define COMMAND_M                32'h00000000;
    //`define ABSTRACTAUTO_M                   32'h00000000;
    //`define CONFIGSTRINGADDR0_M                  32'h00000000;
    //`define CONFIGSTRINGADDR1_M                  32'h00000000;
    //`define CONFIGSTRINGADDR2_M                  32'h00000000;
    //`define CONFIGSTRINGADDR3_M                  32'h00000000;
    //`define NEXTDM_M                 32'h00000000;
    //`define PBSTART_M                32'h00000000;
    //`define PBEND_M                  32'h00000000;
    //`define AUTHENDATA_M                 32'h00000000;
    //`define HALTSUM2_M                   32'h00000000;
    //`define HALTSUM3_M                   32'h00000000;
    //`define SBADDRESS3_M                 32'h00000000;
    //`define SBCS_M                   32'h00000000;
    //`define SBADDRESS0_M                 32'h00000000;
    //`define SBADDRESS1_M                 32'h00000000;
    //`define SBADDRESS2_M                 32'h00000000;
    //`define SBDATA0_M                32'h00000000;
    //`define SBDATA1_M                32'h00000000;
    //`define SBDATA2_M                32'h00000000;
    //`define SBDATA3_M                32'h00000000;
    //`define HALTSUM0_M                   32'h00000000;



    module riscvDebugModule(riscvDebugInterface013)
        // Using a Vector of Registers - Multiple read and write poorts
                    // Area - port troff -REgfile - Single REad Port

// Make a Vector of registers

        // State 
        
        // Halted - Allowed 
            // SBA Access
            // Abstract Register Access
            // Resume Request
    
        // Halted - Not Allowed
            // Halt Request 
        
        // Running - Allowed
            // SBA Access
            // Abstract Register Read
            // Halt Request
        
        // Running - Not Allowed
            // Resume Request

        // part control flow on basis of Hart ID , 
        // can selected harts be haled

        // Authentication is Not Supported

        integer CoreHalted               =  0;
        integer ResumeRequest            =  1;
        integer CoreRunning              =  2;
        integer HaltRequest              =  3;
        integer AbstractCommandStart     =  4;
        integer AbstractCommandTransfer  =  5;
        integer AbstractCommandDone      =  6;
        integer ErrorDetect              =  7;
        integer ErrorWait                =  8;

        // Dequeue 

        // Process

        rule ProcessDTMRequest;
        
        endrule

        // DMI Registers 



        // Core Halted  
                       
        // Resume Request

        // Core Running
        
        // Halt Request

        // Abstract Command Start
            // OPT - Command Program Buffer
        
        // Abstract Command Transfer Phase
            // Stmt SystemBusAccess = Seq 
            //         action
            //         endaction
            
            //     endseq
            // Stmt HartAccessReg = Seq
                
            //     endseq
            
            
        // Abstract Command Done 

            // Quick Access Is Recommended for Live Debug Where 
            // OPT - Quick Access Halt 
            // OPT - Quic Access Exec
            // OPT - Quick Access Resume 

        // Error Detect

        // Error Wait / Handle

    endmodule

    module DummyHart(Hart_Debug_Ifc);
        // populate interface methods.
    endmodule


endpackage