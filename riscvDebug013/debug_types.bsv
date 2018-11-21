package debug_types;

	typedef HartCount 1; 
	typedef AbstractAddrWidth 14;

	typedef enum {  NoError = 3'b000        , Busy = 3'b001,
					NotSupported = 3'b010   , Exception = 3'b011,
					WrongState = 3'b100     , Bus       = 3'b101,
					Other = 3'b111 }	ErrorTypes deriving(Bits,Eq,FShow);

    typedef ABSTRACTDATASTART 	= 7'h04;
    typedef ABSTRACTDATAEND 	= 7'h0f;
    typedef DMCONTROL 			= 7'h10;
    typedef DMSTATUS 			= 7'h11;
    typedef HARTINFO 			= 7'h12;
    typedef HALTSUM1 			= 7'h13;
    typedef HAWINDOWSEL 		= 7'h14;
    typedef HAWINDOW 			= 7'h15;
    typedef ABSTRACTCTS 		= 7'h16;
    typedef COMMAND 			= 7'h17;
    typedef ABSTRACTAUTO 		= 7'h18;
    typedef CONFIGSTRINGADDR0 	= 7'h19;
    typedef CONFIGSTRINGADDR1 	= 7'h1a;
    typedef CONFIGSTRINGADDR2 	= 7'h1b;
    typedef CONFIGSTRINGADDR3 	= 7'h1c;
    typedef NEXTDM   			= 7'h1d;
    typedef PBSTART 			= 7'h20;
    typedef PBEND 				= 7'h2f;
    typedef AUTHENDATA 			= 7'h30;
    typedef HALTSUM2 			= 7'h34;
    typedef HALTSUM3 			= 7'h35;
    typedef SBADDRESS3 	    	= 7'h36;
    typedef SBCS 				= 7'h38;
    typedef SBADDRESS0 	    	= 7'h39;
    typedef SBADDRESS1 			= 7'h3a;
    typedef SBADDRESS2 	    	= 7'h3a;
    typedef SBDATA0 			= 7'h3c;
    typedef SBDATA1 			= 7'h3d;
    typedef SBDATA2 			= 7'h3e;
    typedef SBDATA3 			= 7'h3f;
    typedef HALTSUM0 			= 7'h40;

endpackage