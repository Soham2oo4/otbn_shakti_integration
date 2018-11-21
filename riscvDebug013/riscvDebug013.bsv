package riscvDebug013;
	
	import common_types::*; // For XLEN 

	// This Debug Module Will Not Support More than 32 HARTS At MAximum i.e. only One Hart Array Window frame is supported.
	// Non Debug Reset is not Supported ! , The system will have to be reset through POR.

	// Debug Defined Types

	typedef HartCount 1; 
	typedef AbstractAddrWidth 12;

	typedef enum {  NoError = 3'b000        , Busy = 3'b001,
					NotSupported = 3'b010   , Exception = 3'b011,
					WrongState = 3'b100     , Bus       = 3'b101,
					Other = 3'b111 }	ErrorTypes deriving(Bits,Eq,FShow);

	typedef struct debugStatusWord{
					Bit#(1) halted,
					Bit#(1) available,  // The HART can Assert this say through the shakti specific csr to disable debugging on a hart rather than by having user code maskable runControl.
					Bit#(1) resumeAck,  // This can possibly be handled inside the debug module
					ErrorTypes abstractError} deriving (Bits,Eq); // Assert error of Abstract Register Accesses to the hart.

	// No better way to write into segmented registers than to do them component wise !

	// Interface between Debug Module and DTM (eg. JtagDTM)
	interface Ifc_DM_DTM;
        interface Get#(Bit#(40)) getCommand;
        interface Put#(Bit#(34)) putResponse;
    endinterface

	// Interface Exposed By Hart
	interface Hart_Debug_Ifc;
		// Pass in parameter DTVEC on a perr hart basis
        method Action abstractWrite (Bit#(AbstractAddrWidth) address , Bit#(XLEN) data); // Return ANy Error from the Abstractt comamnd write ;
        method ActionValue#(Bit#(XLEN)) abstractRead (Bit#(AbstractAddrWidth)address); // 2 biit error , Xlen Bit DATA
		method Action fence();  // Coherence without a program buffer ??
        method Action haltRequest();  	// Sets Halt interrupt
		method Action resumeRequest();  // Sets resume interrupt
        method debugStatusWord GetDebugStatusWord(); // This is a Summary of state from the HART this also a side band to monitor core state also relays command error
    endinterface

    interface Debug_Hart_Ifc;
        method Bit#(1) abstractOperation;
        method Bit#(AbstractAddrWidth) abstractAddress;
        method Bit#(XLEN) abstractWriteData;
        method Action abstractReadResponse(Bit#(XLEN));
		method Bit#(1) fence();
        method Bit#(1) haltRequest();
		method Bit#(1) resumeRequest();
        method Action SetdebugStatusWord(debugStatusWord);
    endinterface

    instance Connectable #(Hart_Debug_Ifc,Debug_Hart_Ifc);
        module mkConnection #(Hart_Debug_Ifc hart,Debug_Hart_Ifc debug) (Empty);
        //(* fire_when_enabled, no_implicit_conditions *)
        // Rules Connecting Interfaces
        endmodule
    endinstance
 
	// Interface between Debug Module and SOC
    interface riscvDebugInterface013;
        riscvDMI_jtagDTM dtm;
        Vector#(HartCount,Debug_Hart_Ifc) HartVec;
        interface AXI4_Master_IFC#(`PADDR, `Reg_width, `USERSPACE) debug_master;
    endinterface 
	
    function Reg#(t) readOnlyReg(t r);
        return (interface Reg;
            method t _read = r;
            method Action _write(t x) = noAction;
        endinterface);
    endfunction

	// Debug Module Register Map
	typedef enum {	ABSTRACTDATASTART 	= 7'h04 ,ABSTRACTDATAEND 	= 7'h0f ,
					DMCONTROL 			= 7'h10 ,DMSTATUS 			= 7'h11 ,
					HARTINFO 			= 7'h12 ,HALTSUM1 			= 7'h13 ,
					HAWINDOWSEL 		= 7'h14 ,HAWINDOW 			= 7'h15 ,
					ABSTRACTCTS 		= 7'h16 ,COMMAND 			= 7'h17 ,
					ABSTRACTAUTO 		= 7'h18 ,CONFIGSTRINGADDR0 	= 7'h19 ,
					CONFIGSTRINGADDR1 	= 7'h1a ,CONFIGSTRINGADDR2 	= 7'h1b ,
					CONFIGSTRINGADDR3 	= 7'h1c ,NEXTDM 			= 7'h1d ,
					PBSTART 			= 7'h20 ,PBEND 				= 7'h2f ,
					AUTHENDATA 			= 7'h30 ,HALTSUM2 			= 7'h34 ,
					HALTSUM3 			= 7'h35 ,SBADDRESS3 		= 7'h36 ,
					SBCS 				= 7'h38 ,SBADDRESS0 		= 7'h39 ,
					SBADDRESS1 			= 7'h3a ,SBADDRESS2 		= 7'h3a ,
					SBDATA0 			= 7'h3c ,SBDATA1 			= 7'h3d ,
					SBDATA2 			= 7'h3e ,SBDATA3 			= 7'h3f ,
					HALTSUM0 			= 7'h40 }	AbstractRegisterAddress deriving(Bits,Eq,FShow);

	// Typedef All Control REgisters and Make them Config REgisters ?  mkConfigReg
	// Should not give me the scheduleing trouble ive been having 
	// Does Config reg solve the multiple partial Reg update problem ?
	typedef struct 

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