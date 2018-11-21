package riscvDebug013;
	
    import debug_types::*;

    // This Debug Module Will Not Support More than 32 HARTS At MAximum i.e. only One Hart Array Window frame is supported.
    // Non Debug Reset is not Supported ! , The system will have to be reset through POR.

	// Interface between Debug Module and DTM (eg. JtagDTM)
	interface Ifc_DM_DTM;
        interface Get#(Bit#(40)) getCommand;
        interface Put#(Bit#(34)) putResponse;
    endinterface

    // Interface Between DebugModule and Hart
    interface Debug_Hart_Ifc;
        method Tuple3#(Bit(1),Bit#(AbstractAddrWidth),Bit#(XLEN)) abstractOperation;
        method Action  abstractReadResponse(Bit#(XLEN));
        method Bit#(1) haltRequest();
		method Bit#(1) resumeRequest();
		method Action  setHalted(Bit#(1));
		method Action  setAvailable(Bit#(1));  // The HART can Assert this say through the shakti specific csr to disable debugging on a hart rather than by having user code maskable runControl.
    endinterface

	// Interface between Debug Module and SOC
    interface riscvDebugInterface013;
        interface Ifc_DM_DTM dtm;
        // Expand interface Hart into vector or something if more than one hart is ever required.
        interface Debug_Hart_Ifc Hart;
        interface AXI4_Master_IFC#(`PADDR, `Reg_width, `USERSPACE) debug_master;
    endinterface 
	
    function Reg#(t) readOnlyReg(t r);
        return (interface Reg;
            method t _read = r;
            method Action _write(t x) = noAction;
        endinterface);
    endfunction

    // Define This Function for Your Core - the Core now guarantees that all abstract commands given PASS !
    function Bool abstractRegOpPermitted(Bit#(AbstractAddrWidth) address,Bit#(1) halted);
        return False;
    endfunction

    // Typedef All Control REgisters and Make them Config REgisters ?  mkConfigReg
	// Should not give me the scheduleing trouble ive been having 
	// Does Config reg solve the multiple partial Reg update problem ?

    module riscvDebugModule(riscvDebugInterface013)
        // Using a Vector of Registers - Multiple read and write poorts
                    // Area - port troff -REgfile - Single REad Port

		// Hart Sel 

		// Command Affecting multiple harts
		// For harts in HART count , 
				// if hartsel excercise interface.

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

        // Dequeue 

        // Process

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


        // Error Detect

        // Error Wait / Handle

    endmodule

endpackage
