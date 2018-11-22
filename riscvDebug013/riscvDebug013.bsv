package riscvDebug013;
	
    import debug_types::*;

    // This Debug Module Will Not Support More than 32 HARTS At MAximum i.e. only One Hart Array Window frame is supported.
    // Non Debug Reset is not Supported ! , The system will have to be reset through POR.
    
    // No Debug Authentication Support

	// Interface between Debug Module and DTM (eg. JtagDTM)
	interface Ifc_DM_DTM;
        interface Get#(Bit#(40)) getCommand;
        interface Put#(Bit#(34)) putResponse;
    endinterface

    // sub Interface Between DebugModule and Soc for Connection to hart 
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
    function Bit#(ErrorTypes) abstractRegOpPermitted(Bit#(AbstractAddrWidth) address,Bit#(1) halted);
        return NoError;
    endfunction

    function Bit#(1) anyAssertedHART(Bit#(HartCount) Hartsel , Bit#(HartCount) Signals , Bit(1) filterTo)
        // Reads Hart Sel Window Filters

        return // Reduction or.
    endfunction

    function Bit#(1) allAssertedHART(Bit#(HartCount) Hartsel , Bit#(HartCount) Signals , Bit(1) filterTo)
        // Reads Hart Sel Window 
        return // Reduction and.
    endfunction

    // Typedef All Control REgisters and Make them Config REgisters ?  mkConfigReg
	// Should not give me the scheduleing trouble ive been having 
	// Does Config reg solve the multiple partial Reg update problem ?

    module riscvDebugModule(riscvDebugInterface013)
    // Using a Vector of Registers - Multiple read and write poorts
        // Area - port troff -REgfile - Single REad Port

    // U-Arch Registers
        Reg#(Bit#(XLEN)) abstRespReg <- mkReg(0);
        Reg#(Bit#(HartCount)) HartHalted <- mkReg(0);
        Reg#(Bit#(HartCount)) HartAvailable <- mkReg(0);

    // Abstract Register Command - These are valid only for the presently selected har 
        // hart sel value cannot be changed during an abst command!
        Reg#(Bit#(1)) abstOp <- mkreg(0);
        Reg#(Bit#(AbstractAddrWidth)) abstAddr <- mkReg(0);
        Reg#(Bit#(XLEN)) abstData <- mkReg(0);
        Reg#(Bit#(1)) abstResponseValid <- mkReg(0);
        
    // Run Control  // 
        Reg#(Bit#(1)) haltRequest <- mkReg(0);  
        Reg#(Bit#(1)) resumeRequest <- mkReg(0);

    // Arch Registers 
        // This Effort looks like it can be automated - Structures like WARL can be handled with value check and conditional change policies - depends :/
        // Is This the most area efficient approach tho ? + specify Fancy Register Types? 
        // Some things are best not Automated 

        // Constants as Bit# somethings 
        // also bithash as these signals can just be set as combo on other registered signals

        // Register Feilds
        // A concatenated Structure to read
        // A function to Write into the register


    // dmstatus DM h'11
        Bit#(9) dmstatusPad0 = 0;           // dmstatus b31-23  
        Bit#(1) impEbreak = 0;              // dmstatus b22     // R    // No Implicit Ebreak as there is no Program Buffer
        Bit#(2) dmstatusPad1 = 0;           // dmstatus b21-20
        Bit#(1) allHaveReset;               // dmstatus b19     // R    // Asserted After a Reset , De asserted After "Acknolowdgement"  ( & of all lines from selected harts )
        Bit#(1) anyHaveReset;               // dmstatus b18     // R    // Asserted After a Reset , De asserted After "Acknolowdgement"  ( | of all lines from selected harts )
        Bit#(1) allResumeAck;               // dmstatus b17     // R    // Asserted when a resume request is delivered , De asserted after resuming ??  ( & of all lines from selected harts )
        Bit#(1) anyResumeAck;               // dmstatus b16     // R    // Asserted when a resume request is delivered , De asserted after resuming ??  ( | of all lines from selected harts )
        Bit#(1) allNonExistent;             // dmstatus b15     // R    // Asserted when All Selected Harts Do Not Exist in the System ( & of Non-Exist represent )
        Bit#(1) anyNonExistent;             // dmstatus b14     // R    // Asserted when any selected Hart does not exist ( | of Non-Exist represent )
        Bit#(1) allUnAvail;                 // dmstatus b13     // R    // Asserted Wien All Selected Harts are UnAvailable ( & of all NotAvailable )
        Bit#(1) anyUnAvail;                 // dmstatus b12     // R    // Asserted Wien Any Selected Harts is UnAvailable ( | of all  NotAvailable )
        Bit#(1) allRunning;                 // dmstatus b11     // R    // Asserted When All Selected Harts are Running
        Bit#(1) anyRunning;                 // dmstatus b10     // R    // Asserted When Any of the Selected HArts are Running 
        Bit#(1) allHalted;                  // dmstatus b9      // R    // Asserted When All Selected Harts are Halted
        Bit#(1) anyHalted;                  // dmstatus b8      // R    // Asserted When Any Selected Harts are Halted
        Bit#(1) authenticated = 1;          // dmstatus b7      // R    // Asserted When Authentication Check has passed 
        Bit#(1) authbusy = 0;               // dmstatus b6      // R    // Asserted only when there is an access to auth data and the auth module is busy
        Bit#(1) hasResetHaltRequest = 0;    // dmstatus b5      // R    // Indicates Support for halt-on-reset => setResetHaltRequest & clrResetHaltRequest bits supported.
        Bit#(1) confStrPtrValid = 1;        // dmstatus b4      // R    // Indicates ConfString Registers DM h'19-h'1c Contain a Valid pointer // values in Debug Types !
        Bit#(4) version = 2;                // dmstatus b3-0    // R    // Version = 2 => Supports spec 0.13

        Bit#(32) dmstatus = {   dmstatusPad0,impEbreak,dmstatusPad1,allHaveReset,anyHaveReset,allResumeAck,anyResumeAck,
                                allNonExistent,anyNonExistent,allUnAvail,anyUnAvail,allRunning,anyRunning,allHalted,anyHalted,authenticated,authbusy,hasResetHaltRequest,confStrPtrValid,version};
        
        function Action writeDmStatus(Bit#(32) data);
            // Do Nothing 
        endfunction

    // dmcontrol DM h'10
        Reg#(Bit#(1)) haltReq <- mkreg(0);  // dmcontrol b31    // W    // 0 Clears Halt Request (to currently Selected) , 1 Sets Halt Request to Currently Selected
        Reg#(Bit#(1)) resumeReq <- mkreg(0);// dmcontrol b30    // W    // Writing 1 causes Halted harts to resume once , cannot write 1 to running hart , resume Ack is cleared if the hart was halted.
        Bit#(1)       hartReset = 0;        // dmcontrol b29    // RW   // Always Stays 0 // To Support reseting selected harts , Writing 1 asserts reset writing zero de asserts reset
        Bit#(1)       ackHaveReset = 0;     // dmcontrol b28    // W    // Not Supported
        Bit#(1)       dmcontrolPad0 = 0;    // dmcontrol b27
/*//*/  Bit#(1)       haSel = 0             // dmcontrol b26    // RW   // 0 Only one hart selected , 1 Multiple harts selected , Tied down to zero for harts not implementing hart selection
        Bit#(10)      hartSelLo = 0;        // dmcontrol b25-16 // RW   // Low bits os hartsel
        Bit#(10)      hartSelHi = 0;        // dmcontrol b15-6  // RW   // High bits of hartsel 
        Bit#(2)       dmcontrolPad1 = 0;    // dmcontrol b5-4
        Bit#(1)       setResetHaltRequest=0;// dmcontrol b3     // W    // Not Supported 
        Bit#(1)       clrResetHaltReq = 0;  // dmcontrol b2     // W    // Not Supported
        Bit#(1)       nDMReset = 0;         // dmcontrol b1     // RW   // Not Supported
        Reg#(Bit#(1)) dmActive <- mkReg(0)  // dmcontrol b0     // RW   // Can This be made the Reset for this module !! ?? 0 => Everything takes reset value , 1 => Module Functions Normally

        Bit#(32) dmcontrol = {  haltReq,resumeReq,hartReset,ackHaveReset,dmcontrolPad0,haSel,hartSelLo,
                                hartSelHi,dmcontrolPad1,setResetHaltRequest,clrResetHaltReq,nDMReset,dmActive};

        function Action writeDmControl(Bit#(32) data);
            haltReq              <=  data[31];
            resumeReq            <=  data[30];
            // hartReset            <=  data[29];
            // ackHaveReset         <=  data[28];
            // haSel                <=  data[26];
            // hartSelLo            <=  data[25:16];
            // hartSelHi            <=  data[15:6];
            // setResetHaltRequest  <=  data[3];
            // clrResetHaltReq      <=  data[2];
            // nDMReset             <=  data[1];
            dmActive             <=  data[0];
        endfunction

    // hartinfo DM 'h12
        Bit#(8)     hartinfoPad0 = 0;   // hartinfo b31-24
        Bit#(4)     nScratch = 0 ;      // hartinfo b23-20  // R    // Number of dscratch Registers
        Bit#(3)     hartinfoPad1 = 0;   // hartinfo b19-17 
        Bit#(1)     dataAccess = 0;     // hartinfo b16     // R    // 0 => Data registers shadowed of CSR ?? , 1 => memory mapped Data Registers
        Bit#(4)     dataSize = 0;       // hartinfo b15-12  // R    // Val 0->12 Number of Data Registers
        Bit#(12)    dataAddr = 0;       // hartinfo b11-0   // R    // Signed Address of RAM where Data Registers are Memory Mapped

        Bit#(32) hartinfo = {   hartinfoPad0,nScratch,hartinfoPad1,dataAccess,
                                dataSize,dataAddr};
        
        function Action writeHartInfo(Bit#(32) data);
            // Do Nothing
        endfunction
    
    // hawindowsel DM 'h14
        Bit#(17)    hawindowselPad0 = 0; // hawindowsel b31-15
        Bit#(15)    hawindowselR = 0;    // hawindowsel b14-0   // RW   // Selects Which Portion of the hartarray window is mapped to DM'15 hawindow
    
        Bit#(32) hawindowsel = { hawindowselPad0,hawindowselR};

        function Action writeHAWindowSel(Bit#(32) data);
            // Do Nothing
        endfunction
    
    // hawindow DM 'h15
/*//*/  Bit#(32)    maskData = 0;       // hawindow b31-0       // RW   // Data input lines to the muxed Din of the Hart sel lines
    
        Bit#(32) hawindow = maskData;

        function Action writeHAWindow(Bit#(32) data);
            // Do Nothing
        endfunction
    
    // abstractcs DM 'h16
        Bit#(3)         abstractcsPad0 = 0; // abstractcs b31-29
        Bit#(5)         progBufSize = 0;    // abstractcs b28-24    // R    // ProgBuf Size for our impl is 0
        Bit#(11)        abstractcsPad1 = 0; // abstractcs b23-13    
        Reg#(Bit#(1))   busy <- mkReg(0);   // abstractcs b12       // R    // An Abstract Command is being executed
        Bit#(1)         abstractcsPad2 = 0; // abstractcs b11      
        Reg#(Bit#(3))   cmderr <- mkReg(0); // abstractcs b10-8     // RW   // Error in executing abstract command , Writing "001"? clears the error 
        Bit#(4)         abstractcsPad3 = 0; // abstractcs b7-4   
        Bit#(4)         dataCount = 2;      // abstractsc b3-0      // R    // Number of Data Register provided for Abstract Command Access.

        Bit#(32)    abstractcs = {  abstractcsPad0,progBufSize,abstractcsPad1,
                                    busy,abstractcsPad2,cmderr,abstractcsPad3,dataCount);

        function Action writeAbstractCS(Bit#(32) data);
            if(data[10:8] == 3'b001)
                cmderr <= NoError;
        endfunction
                                
    // command DM 'h17
        Reg#(Bit#(8))   abst_cmdtype <- mkReg(0);   //  command b31-24  // W    // Abstract Command Type
        Reg#(Bit#(24))  abst_control <- mkReg(0);   //  command b23-0   // W    // Command Specific Data
    
        Bit#(32)    abst_command = {abst_cmdtype,abst_control};

        function Action writeCommand(Bit#(32) data);
            if(busy == 1)
                cmderr <= Busy; // Is there any area / logic penalty for not also writing ? // Noting about value not being comitted
            else begin
                abst_cmdtype <= data[31:24];
                abst_control <= data[23:0];
                // Do Something to indicate that The Abstract Command can be spawned !
            end
        endfunction
        
    // abstractauto DM 'h18
        Bit#(16)        autoExecProgBuf = 0;            // abstractauto b31-16  // RW   // When bit is set to 1 Write to ProgBuf[Bit] causes command to execute again
        Bit#(4)         abstractautoPad0 = 0;           // abstractauto b15-12
        Reg#(Bit#(12))  autoExecData <- mkReg(0);       // abstractauto b11-0    // RW   // When bit is set to 1 Write to AbstractData[Bit] causes command to execute again

        Bit#(32) abstractauto = {autoExecProgBuf,abstractautoPad0autoExecData};

        function Action writeAbstractAuto(Bit#(32) data);
            if(busy == 1)
                cmderr <= Busy; // Is there any area / logic penalty for not also writing ? // Noting about value not being comitted
            else begin
                autoExecData <= data[11:0];
            end
        endfunction

    // configstrptr0 DM 'h19
        Bit#(32)    configstrptr0 = D_configstrptr0;    //  configstrptr0 b31-0     // R    // Pointer to configuration String if implemented // TODO Setup in Debug Defines
    // configstrptr1 DM 'h1a
        Bit#(32)    configstrptr1 = D_configstrptr1;    //  configstrptr1 b31-0     // R    // Pointer to configuration String if implemented
    // configstrptr2 DM 'h1b
        Bit#(32)    configstrptr2 = D_configstrptr2;    //  configstrptr2 b31-0     // R    // Pointer to configuration String if implemented
    // configstrptr3 DM 'h1c
        Bit#(32)    configstrptr3 = D_configstrptr3;    //  configstrptr3 b31-0     // R    // Pointer to configuration String if implemented
    
    // nextdm   DM 'h1d
        Bit#(32)    nextdm  =   0;                      // nextdm b31-0     // R // Not Relevant RN !!!

    // data0 - 11   DM 'h04-'h0f
        // Vector of Registers and Not Register File
        Vector#(12, Reg#(Bit#(32)) abst_data <- replicateM(mkReg(0)); // dataX b31-0    // RW   // access while busy causes an error.
    
        // A Read function has been setup since "Accessing these registers while an abstract command is executing causes cmderr to be set to 1 (busy) if it is 0"
        function Bit#(32) readAbst_data(Bit#(4)index);
            if(busy == 1)begin
                cmderr <= Busy; // Is there any area / logic penalty for not also writing ? // Noting about value not being comitted
                return 0;
                end
            else
                return abst_data[index];
        endfunction

        function Action writeAbst_data(Bit#(32) data,Bit#(4)index);
            if(busy == 1)
                cmderr <= Busy; // Is there any area / logic penalty for not also writing ? // Noting about value not being comitted
            else begin
                abst_data[index] <= data;
                if(autoExecData[index] == 1)
                    // Set Condition To Execute Abstract Command !
            end
        endfunction

    // progbuf0-15  DM 'h20-'h2f      // *** Academic Does this create any circuitry at all Apart from the cmderr stuff?
        Vector#(16, Bit#(32)) progbuf <- replicateM(0);     // progbufX     // RW       // access while busy causes an error

        // A Read function has been setup since "Accessing these registers while an abstract command is executing causes cmderr to be set to 1 (busy) if it is 0"
        function Bit#(32) readProgBuf(Bit#(32) data,Bit#(4)index);
            if(busy == 1)
                cmderr <= Busy;
            return 0;
        endfunction
        
        function Action writeProgBuf(Bit#(32) data,Bit#(4)index);
            if(busy == 1)
                cmderr <= Busy;
        endfunction

    // authdata DM 'h30
        Reg#(Bit#(32)) auth_data <- mkReg(0);       // data {impl specific}     // RW       // port to and from auth module use this space as thou pleases !

        function Bit#(32) readAuth_Data;
            if(authbusy == 0)
                return auth_data;
            else return 0;
        endfunction

        function Action writeAuth_Data(Bit#(32) data);
            if(authbusy == 0)
                auth_data <= data;
        endfunction
    
    // haltsum0 DM 'h40
        Bit#(32)    haltSum0;   //haltsum0      // R    // Concat of All Hart Halted Lines , If un available or non existant Halted bit is represented as 0 for that hart .
    // haltsum0 DM 'h13
        Bit#(32)    haltSum1 = 0;
    // haltsum0 DM 'h34
        Bit#(32)    haltSum2 = 0;
    // haltsum0 DM 'h35
        Bit#(32)    haltSum3 = 0;
        

        // Halted Loop should have a fence for memory coherence.
    // sbcs DM 'h38
        Bit#(3) sbVersion = 1;                  // sbcs b31-29  // R    // 0=> old spec , 1 => current spec     
        Bit#(6) sbcsPad0 = 0;                   // sbcs b28-23 
        Reg#(Bit#(1)) sbBusyError <- mkReg(0)   // sbcs b22     // RW1c // Set when attempts to read data or new access when (sbbusy == 1) , reset by writing to zero.
        Reg#(Bit#(1)) sbBusy <- mkReg(0);       // sbcs b21     // R    // Indicates busy , Writes while sbcs while sbbusy ==1 are not permitted (otherwise undefined).
        Reg#(Bit#(1)) sbReadOnAddr <- mkReg(0); // sbcs b20     // RW   // if 1 , writes to sbAddress 0 triggers a sbread
        Reg#(Bit#(3)) sbAccess <- mkReg(2);     // sbcs b19-17  // RW   // Access Size , if val , set sberr =4 while performing access
        Reg#(Bit#(1)) sbAutoIncrement <- mkReg(0); // sbcs b16   // RW  // if 1 sbAddressX is incremented by AccessSize after every read
        Reg#(Bit#(1)) sbReadOnData <- mkReg(0); // sbcs b15     // RW   // if 1 , reads of sbData0 triggers a read at address.(address may change).
        Reg#(Bit#(3)) sbError <- mkReg(0);      // sbcs b14-12  // RW1c // cleared on writing 1 , if error , no more accesses can be done 
        Bit#(7) sbASize = XLEN;                 // sbcs b11-5   // R    // With of Addresses
        Bit#(1) sbAccess128 = D_SBA128;         // sbcs b4      // R    // Supports 128 bit accesses
        Bit#(1) sbAccess64  = D_SBA64;          // sbcs b3      // R    // Supports 64  bit accesses
        Bit#(1) sbAccess32  = D_SBA32;          // sbcs b2      // R    // Supports 32  bit accesses
        Bit#(1) sbAccess16  = D_SBA16;          // sbcs b1      // R    // Supports 16  bit accesses
        Bit#(1) sbAccess8   = D_SBA8;           // sbcs b0      // R    // Supports 8   bit accesses

        Bit#(32) sbcs = {   sbVersion,sbcsPad0,sbBusyError,sbBusy,sbReadOnAddr,sbAccess,sbAutoIncrement,
                            sbReadOnData,sbError,sbASize,sbAccess128,sbAccess64,sbAccess32,sbAccess16,sbAccess8};

        function Action writeSBCS (Bit#(32) data);
            if(sbBusy == 1)
                sbBusyError     <= 1;    
            else begin
                if (data[22] == 0) 
                    sbBusyError     <= 0;    // It remains set until it’s explicitly cleared by the debugger cleared writing 0 or writing 1 ?
                if (data[14:12] == 3'b001)
                    sbError <= SbNoError;

                sbReadOnAddr    <= data[20];
                sbAccess        <= data[19:17];
                sbAutoIncrement <= data[16];
                sbReadOnData    <= data[15];
            end
            //sbBusyError     <= data[22];
        endfunction

    // sbaddress0 DM 'h39
        Reg#(Bit#(32)) sbAddress0 <- mkReg(0);  // sbadress0 b31-0   // RW   // Lowest 32 bits of address , Triggers Read if read on address is set 

        function Action writeSbAddress0(Bit#(32) data);
            if(sbBusy == 1)
                sbBusyError     <= 1;    
            else begin
                sbAddress0 <= data;
                if(sbReadOnAddr == 1);
                    // Trigger System Bus Read state bit;
                // Write Logic to Auto increment By Size and logic to auto increment across the fragments of the address register 
            end
        endfunction

    // sbaddress1 DM 'h3a
        Reg#(Bit#(32)) sbAddress1 <- mkReg(0);  // sbadress1 b31-0   // RW   // bits 63:32 of address

        function Action writeSbAddress0(Bit#(32) data);
            if(sbBusy == 1)
                sbBusyError     <= 1;    
            else
                sbAddress1 <= data;
        endfunction

    // sbaddress1 DM 'h3b
        Reg#(Bit#(32)) sbAddress2 <- mkReg(0);  // sbadress2 b31-0   // RW   // bits 95:64 of address

        function Action writeSbAddress0(Bit#(32) data);
            if(sbBusy == 1)
                sbBusyError     <= 1;    
            else
                sbAddress2 <= data;
        endfunction
    
    // sbaddress2 DM 'h37
        Reg#(Bit#(32)) sbAddress3 <- mkReg(0);  // sbadress3 b31-0   // RW   // bits 127:96 of address

        function Action writeSbAddress0(Bit#(32) data);
            if(sbBusy == 1)
                sbBusyError     <= 1;    
            else
                sbAddress3 <= data;
        endfunction

    // sbdata0  DM 'h3c
        Reg#(Bit#(32)) sbData0 <- mkReg(0); // sbdata b31-0     // RW   // Accesses to this register ir respective of read on data bit , trigger a system bus operation 

        function Bit#(32) readSbData0;
            if((sbError == 0) && (sbBusyError == 0) &&(sbReadOnData == 1))begin
                    // Trigger a read
                    // Auto increment the address in the sba rule
                end
            return sbData0;
        endfunction

        function Action writeSbData0(Bit#(32) data);
            if((sbBusy == 0)&&(sbError == 0)& sbBusyError == 0) )begin
                sbData0 <= data;
                // Trigger a write.
                end
        endfunction

    // sbdata1  DM 'h3d
        Reg#(Bit#(32)) sbData1 <- mkReg(0);  // sbdata1 b31-0   // RW   // bits 63:32 of data

        function Action writeSbData1(Bit#(32) data);
            if(sbBusy == 1)
                sbBusyError  <= 1;    
            else
                sbData1 <= data;
        endfunction


    // sbdata2  DM 'h3d
        Reg#(Bit#(32)) sbData2 <- mkReg(0);  // sbdata1 b31-0   // RW   // bits 95:64 of data

        function Action writeSbData2(Bit#(32) data);
            if(sbBusy == 1)
                sbBusyError  <= 1;    
            else
                sbData2 <= data;
        endfunction


    // sbdata3  DM 'h3d
        Reg#(Bit#(32)) sbData3 <- mkReg(0);  // sbdata1 b31-0   // RW   // bits 127:96 of data

        function Action writeSbData3(Bit#(32) data);
            if(sbBusy == 1)
                sbBusyError  <= 1;    
            else
                sbData3 <= data;
        endfunction

    // End of Spec Defined Architectural Register File

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

    /*--- INTERFACE METHODS ---*/

    // DMI
    interface putCommand = interface Put 
        method Action put(Bit#40);
            // The DMI Requests are Recieved here 

        endmethod
    endinterface;
    
    interface getResponse = interface Get
        method ActionValue#(Bit#(34)) get();
            // DMI Response

            return 
        endmethod
    endinterface
    
    // HART - only Single Hart Supported for now 
    interface Debug_Hart_Ifc Hart;

        method Tuple3#(Bit(1),Bit#(AbstractAddrWidth),Bit#(XLEN)) abstractOperation;
            return tuple3(abstOp,abstAddr,abstData);
        endmethod
        // Recieves response from Abstract Command if any.
        method Action  abstractReadResponse(Bit#(XLEN) responseData);
            abstRespReg <= responseData;
        endmethod

        method Bit#(1) haltRequest();
        method Bit#(1) resumeRequest();
        
        method Action  setHalted(Bit#(1) halted);
            HartHalted[0] <= halted; // Only One Hart
        endmethod
        
        method Action  setAvailable(Bit#(1) available);  // The HART can Assert this say through the shakti specific csr to disable debugging on a hart rather than by having user code maskable runControl.
            HartAvailable[0] <= available;
        endmethod

    endinterface
    // AXI Master 
    interface AXI4_Master_IFC#(`PADDR, `Reg_width, `USERSPACE) debug_master;
    
        endinterface

    endmodule

endpackage