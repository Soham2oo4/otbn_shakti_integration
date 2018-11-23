package riscvDebug013;
    // This Module will only support a max of 32 harts if ever it supports more than one.
    import Vector ::*;
    import GetPut :: *;

    import AXI4_Types::*;
    import ConcatReg::*;
    //import device_common::*;
    import debug_types::*;
    
	//Interface between Debug Module and DTM (eg. JtagDTM)
	interface Ifc_DM_DTM;
        interface Put#(Bit#(40)) putCommand;
        interface Get#(Bit#(34)) getResponse;
    endinterface

    // sub Interface Between DebugModule and Soc for Connection to hart 
    interface Debug_Hart_Ifc;
        method Tuple3#(Bit#(1),Bit#(AbstractAddrWidth),Bit#(XLEN)) abstractOperation;
        method Action  abstractReadResponse(Bit#(XLEN) abstractResponse);
        method Bit#(1) haltRequest();
        method Bit#(1) resumeRequest();
        method Bit#(1) hart_reset();        // Signal TO Reset HART Active HIGH 
		method Action  setHalted(Bit#(1) halted);
		method Action  setAvailable(Bit#(1) available);  // The HART can Assert this say through the shakti specific csr to disable debugging on a hart rather than by having user code maskable runControl.
    endinterface

	// Interface between Debug Module and SOC
    interface RiscvDebugInterface013;
        interface Ifc_DM_DTM dtm;
        // Expand interface Hart into vector or something if more than one hart is ever required.
        interface Debug_Hart_Ifc hart;
        interface AXI4_Master_IFC#(PADDR, XLEN, 0 ) debug_master;
    endinterface 

    module mkRiscvDebugModule(RiscvDebugInterface013);

// UArch Registers 

        Reg#(Bit#(1)) haltedHarts <- mkReg(0);
        Reg#(Bit#(1)) availableHarts <- mkReg(0);

// Arch Registers 

    // hawindow DM 'h15       
        Reg#(Bit#(32))  maskData <- mkReg(0);       // hawindow b31-0       // RW   // Data input lines to the muxed Din of the Hart sel lines


    // dmstatus DM h'11
        Reg#(Bit#(9)) dmstatusPad0  = readOnlyReg(9'b0);                // dmstatus b31-23  
        // Reg#(Bit#(1)) impEbreak     = readOnlyReg(0);                   // dmstatus b22     // R    // No Implicit Ebreak as there is no Program Buffer
        // Reg#(Bit#(2)) dmstatusPad1  = readOnlyReg(0);                   // dmstatus b21-20
        // Reg#(Bit#(1)) allHaveReset  = ;                    // dmstatus b19     // R    // Asserted After a Reset , De asserted After "Acknolowdgement"  ( & of all lines from selected harts )
        // Reg#(Bit#(1)) anyHaveReset  = readOnlyReg();                    // dmstatus b18     // R    // Asserted After a Reset , De asserted After "Acknolowdgement"  ( | of all lines from selected harts )
        // Reg#(Bit#(1)) allResumeAck  = readOnlyReg();                    // dmstatus b17     // R    // Asserted when a resume request is delivered , De asserted after resuming ??  ( & of all lines from selected harts )
        // Reg#(Bit#(1)) anyResumeAck  = readOnlyReg();                    // dmstatus b16     // R    // Asserted when a resume request is delivered , De asserted after resuming ??  ( | of all lines from selected harts )
        // Reg#(Bit#(1)) allNonExistent  readOnlyReg();                  // dmstatus b15     // R    // Asserted when All Selected Harts Do Not Exist in the System ( & of Non-Exist represent )
        // Reg#(Bit#(1)) anyNonExistent <- readOnlyReg();                  // dmstatus b14     // R    // Asserted when any selected Hart does not exist ( | of Non-Exist represent )
        // Reg#(Bit#(1)) allUnAvail <- readOnlyReg();                      // dmstatus b13     // R    // Asserted Wien All Selected Harts are UnAvailable ( & of all NotAvailable )
        // Reg#(Bit#(1)) anyUnAvail <- readOnlyReg();                      // dmstatus b12     // R    // Asserted Wien Any Selected Harts is UnAvailable ( | of all  NotAvailable )
        // Reg#(Bit#(1)) allRunning <- readOnlyReg();                      // dmstatus b11     // R    // Asserted When All Selected Harts are Running
        // Reg#(Bit#(1)) anyRunning <- readOnlyReg();                      // dmstatus b10     // R    // Asserted When Any of the Selected HArts are Running 
        // Reg#(Bit#(1)) allHalted <- readOnlyReg();                       // dmstatus b9      // R    // Asserted When All Selected Harts are Halted
        // Reg#(Bit#(1)) anyHalted <- readOnlyReg();                       // dmstatus b8      // R    // Asserted When Any Selected Harts are Halted
        // Reg#(Bit#(1)) authenticated <- readOnlyReg();                   // dmstatus b7      // R    // Asserted When Authentication Check has passed 
        // Reg#(Bit#(1)) authbusy <- readOnlyReg();                        // dmstatus b6      // R    // Asserted only when there is an access to auth data and the auth module is busy
        // Reg#(Bit#(1)) hasResetHaltRequest <- readOnlyReg();             // dmstatus b5      // R    // Indicates Support for halt-on-reset => setResetHaltRequest & clrResetHaltRequest bits supported.
        // Reg#(Bit#(1)) confStrPtrValid <- readOnlyReg();                 // dmstatus b4      // R    // Indicates ConfString Registers DM h'19-h'1c Contain a Valid pointer // values in Debug Types !
        // Reg#(Bit#(4)) version <- readOnlyReg();                         // dmstatus b3-0    // R    // Version = 2 => Supports spec 0.13

        // Reg#(Bit#(32)) = 

// End of State Declaritions

    // DMI
    
    //Reg#(Maybe#(Bit#(32))) dmi_response <- mkReg(tagged invalid );

    interface dtm = interface Ifc_DM_DTM
        interface putCommand = interface Put 
            method Action put(Bit#(40) request_data);
            endmethod
        endinterface;
        
        interface getResponse = interface Get
            method ActionValue#(Bit#(34)) get();
                // DMI Response
                // Method can only be called when Response is valid

                return 0;
            endmethod
        endinterface;
    endinterface;
    
    // HART - only Single Hart Supported for now 
    interface hart = interface Debug_Hart_Ifc 

        method Tuple3#(Bit#(1) ,Bit#(AbstractAddrWidth),Bit#(XLEN)) abstractOperation;
            //return tuple3(abstOp,abstAddr,abstData);
            return tuple3(0,0,0);
        endmethod
        // Recieves response from Abstract Command if any.
        method Action  abstractReadResponse(Bit#(XLEN) responseData);
            //abstRespReg <= responseData;
        endmethod

        method Bit#(1) haltRequest();
            return 0;
        endmethod
        method Bit#(1) resumeRequest();
            return 0;
        endmethod
        method Action  setHalted(Bit#(1) halted);
            haltedHarts <= halted; // Only One Hart
        endmethod
        
        method Action  setAvailable(Bit#(1) available);  // The HART can Assert this say through the shakti specific csr to disable debugging on a hart rather than by having user code maskable runControl.
            availableHarts <= available;
        endmethod

    endinterface;
    // AXI Master 
    interface debug_master = interface AXI4_Master_IFC#(PADDR, XLEN,0)
    
    endinterface;

    endmodule


endpackage