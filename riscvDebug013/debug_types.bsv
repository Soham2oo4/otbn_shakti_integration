package debug_types;
    // Constants
	typedef enum {  NoError = 3'b000        , Busy = 3'b001,
					NotSupported = 3'b010   , Exception = 3'b011,
					WrongState = 3'b100     , Bus       = 3'b101,
                    Other = 3'b111 }	ErrorTypes deriving(Bits,Eq,FShow);
                    
    typedef enum {  SbNoError = 3'b000        , SbTimeOut = 3'b001,
                    SbBadAddress = 3'b010     , SbAlign = 3'b011,
                    SbSize = 3'b100           ,
                    SbOther = 3'b111 } SbErrorTypes deriving(Bits,Eq,FShow);

    // For ABITS == 7 !
    typedef 7'h04 ABSTRACTDATASTART;
    typedef 7'h0f ABSTRACTDATAEND;
    typedef 7'h10 DMCONTROL;
    typedef 7'h11 DMSTATUS;
    typedef 7'h12 HARTINFO;
    typedef 7'h13 HALTSUM1;
    typedef 7'h14 HAWINDOWSEL;
    typedef 7'h15 HAWINDOW;
    typedef 7'h16 ABSTRACTCTS;
    typedef 7'h17 COMMAND;
    typedef 7'h18 ABSTRACTAUTO;
    typedef 7'h19 CONFIGSTRINGADDR0;
    typedef 7'h1a CONFIGSTRINGADDR1;
    typedef 7'h1b CONFIGSTRINGADDR2;
    typedef 7'h1c CONFIGSTRINGADDR3;
    typedef 7'h1d NEXTDM;
    typedef 7'h20 PBSTART;
    typedef 7'h2f PBEND;
    typedef 7'h30 AUTHENDATA;
    typedef 7'h34 HALTSUM2;
    typedef 7'h35 HALTSUM3;
    typedef 7'h36 SBADDRESS3;
    typedef 7'h38 SBCS;
    typedef 7'h39 SBADDRESS0;
    typedef 7'h3a SBADDRESS1;
    typedef 7'h3a SBADDRESS2;
    typedef 7'h3c SBDATA0;
    typedef 7'h3d SBDATA1;
    typedef 7'h3e SBDATA2;
    typedef 7'h3f SBDATA3;
    typedef 7'h40 HALTSUM0;

    // ConfigString Pointer
    typedef 0 D_configstrptr0;
    typedef 0 D_configstrptr1;
    typedef 0 D_configstrptr2;
    typedef 0 D_configstrptr3;

// Target Specific config Defaults for shakti E-Class
    
    function ErrorTypes abstractRegOpPermitted(Bit#(AbstractAddrWidth) address,Bit#(1) halted);
        // Filter For Valid CSR's and Valid GPR, FPR Access conditiions.
        return NoError;
    endfunction

    typedef 32 XLEN;
    typedef 32 PADDR;
    typedef 1 HartCount; 
	typedef 14 AbstractAddrWidth;
    
endpackage
