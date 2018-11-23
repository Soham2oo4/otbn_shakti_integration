package riscvDebug013;

    import Vector ::*;
    import GetPut :: *;

    import AXI4_Types::*;
    import ConcatReg::*;
    //import device_common::*;
    import debug_types::*;
    
	//Interface between Debug Module and DTM (eg. JtagDTM)
	interface Ifc_DM_DTM;
        interface Put#(Bit#(41)) putCommand;// 7+ 32 + 2
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
        interface Debug_Hart_Ifc hart;
        interface AXI4_Master_IFC#(PADDR, XLEN, 0 ) debug_master;
        method Bit#(1) getNDMReset();
    endinterface 


    module mkRiscvDebugModule(RiscvDebugInterface013);
    // UArch Registers 
        Reg#(Bit#(1)) haltedHart <- mkReg(0);
        Reg#(Bit#(1)) availableHart <- mkReg(0);

    // Arch Registers 
    // dmstatus DM h'11
        Reg#(Bit#(9)) dmstatusPad0  = readOnlyReg(0);                   // dmstatus b31-23  
        Reg#(Bit#(1)) impEbreak     = readOnlyReg(0);                   // dmstatus b22     // R    // No Implicit Ebreak as there is no Program Buffer
        Reg#(Bit#(2)) dmstatusPad1  = readOnlyReg(0);                   // dmstatus b21-20
        Reg#(Bit#(1)) allHaveReset  <- mkReg(0);                        // dmstatus b19     // R    // Asserted After a Reset , De asserted After "Acknolowdgement"  ( & of all lines from selected harts )
        Reg#(Bit#(1)) anyHaveReset  <- mkReg(0);                        // dmstatus b18     // R    // Asserted After a Reset , De asserted After "Acknolowdgement"  ( | of all lines from selected harts )
        Reg#(Bit#(1)) allResumeAck  <- mkReg(0);                        // dmstatus b17     // R    // Asserted when a resume request is delivered , De asserted after resuming ??  ( & of all lines from selected harts )
        Reg#(Bit#(1)) anyResumeAck  <- mkReg(0);                        // dmstatus b16     // R    // Asserted when a resume request is delivered , De asserted after resuming ??  ( | of all lines from selected harts )
        Reg#(Bit#(1)) allNonExistent<- mkReg(0);                        // dmstatus b15     // R    // Asserted when All Selected Harts Do Not Exist in the System ( & of Non-Exist represent )
        Reg#(Bit#(1)) anyNonExistent<- mkReg(0);                        // dmstatus b14     // R    // Asserted when any selected Hart does not exist ( | of Non-Exist represent )
        Reg#(Bit#(1)) allUnAvail    <- mkReg(0);                        // dmstatus b13     // R    // Asserted Wien All Selected Harts are UnAvailable ( & of all NotAvailable )
        Reg#(Bit#(1)) anyUnAvail    <- mkReg(0);                        // dmstatus b12     // R    // Asserted Wien Any Selected Harts is UnAvailable ( | of all  NotAvailable )
        Reg#(Bit#(1)) allRunning    <- mkReg(0);                        // dmstatus b11     // R    // Asserted When All Selected Harts are Running
        Reg#(Bit#(1)) anyRunning    <- mkReg(0);                        // dmstatus b10     // R    // Asserted When Any of the Selected HArts are Running 
        Reg#(Bit#(1)) allHalted     <- mkReg(0);                        // dmstatus b9      // R    // Asserted When All Selected Harts are Halted
        Reg#(Bit#(1)) anyHalted     <- mkReg(0);                        // dmstatus b8      // R    // Asserted When Any Selected Harts are Halted
        Reg#(Bit#(1)) authenticated <- mkReg(0);                        // dmstatus b7      // R    // Asserted When Authentication Check has passed 
        Reg#(Bit#(1)) authbusy      <- mkReg(0);                        // dmstatus b6      // R    // Asserted only when there is an access to auth data and the auth module is busy
        Reg#(Bit#(1)) hasResetHaltRequest = readOnlyReg(1);             // dmstatus b5      // R    // Indicates Support for halt-on-reset => setResetHaltRequest & clrResetHaltRequest bits supported.
        Reg#(Bit#(1)) confStrPtrValid = readOnlyReg(1);                 // dmstatus b4      // R    // Indicates ConfString Registers DM h'19-h'1c Contain a Valid pointer // values in Debug Types !
        Reg#(Bit#(4)) version       = readOnlyReg(4'b0010);             // dmstatus b3-0    // R    // Version = 2 => Supports spec 0.13

        // The All and any signals will be registered and will have a rule updating them.
        Reg#(Bit#(32)) dmstatus = concatReg20(  dmstatusPad0,impEbreak,dmstatusPad1,readOnlyReg(allHaveReset),readOnlyReg(anyHaveReset),readOnlyReg(allResumeAck),readOnlyReg(anyResumeAck),readOnlyReg(allNonExistent),
        readOnlyReg(anyNonExistent),readOnlyReg(allUnAvail),readOnlyReg(anyUnAvail),readOnlyReg(allRunning),readOnlyReg(anyRunning),readOnlyReg(allHalted),readOnlyReg(anyHalted),readOnlyReg(authenticated),readOnlyReg(authbusy),hasResetHaltRequest,confStrPtrValid,version);
        
    // dmcontrol DM h'10
        Reg#(Bit#(1)) haltReq       <- mkReg(0);                        // dmcontrol b31    // W    // 0 Clears Halt Request (to currently Selected) , 1 Sets Halt Request to Currently Selected
        Reg#(Bit#(1)) resumeReq     <- mkReg(0);                        // dmcontrol b30    // W    // Writing 1 causes Halted harts to resume once , cannot write 1 to running hart , resume Ack is cleared if the hart was halted.
        Reg#(Bit#(1)) hartReset     <- mkReg(0);                        // dmcontrol b29    // RW   // Writing 1 asserts reset writing zero de asserts reset
        Reg#(Bit#(1)) ackHaveReset  <- mkReg(0);                        // dmcontrol b28    // W    // 
        Reg#(Bit#(1)) dmcontrolPad0 = readOnlyReg(0);                   // dmcontrol b27
        Reg#(Bit#(1)) haSel         = readOnlyReg(0);                   // dmcontrol b26    // RW   // 0 Only one hart selected , 1 Multiple harts selected , Tied down to zero for harts not implementing hart selection
        Reg#(Bit#(10))hartSelLo     <- mkReg(0);                        // dmcontrol b25-16 // RW   // Low bits os hartsel
        Reg#(Bit#(10))hartSelHi     <- mkReg(0);                        // dmcontrol b15-6  // RW   // High bits of hartsel 
        Reg#(Bit#(2)) dmcontrolPad1 = readOnlyReg(0);                   // dmcontrol b5-4
        Reg#(Bit#(1)) setResetHaltRequest <- mkReg(0);                  // dmcontrol b3     // W    // Not Supported 
        Reg#(Bit#(1)) clrResetHaltReq <- mkReg(0);                      // dmcontrol b2     // W    // Not Supported
        Reg#(Bit#(1)) nDMReset      <- mkReg(0);                        // dmcontrol b1     // RW   // Resets Everything Apart from The Debug Logic , all harts and periphrals
        Reg#(Bit#(1)) dmActive      <- mkReg(0);                        // dmcontrol b0     // RW   // Active Low Reset for only the Debug Module 

        //Q How To setup dmactive as a reset for this module.
        Reg#(Bit#(32)) dmcontrol = concatReg13( haltReq,resumeReq,hartReset,ackHaveReset,dmcontrolPad0,haSel,hartSelLo,
                                                hartSelHi,dmcontrolPad1,setResetHaltRequest,clrResetHaltReq,nDMReset,dmActive);
    
    // hartinfo DM 'h12
        Reg#(Bit#(8)) hartinfoPad0  = readOnlyReg(0);                   // hartinfo b31-24
        Reg#(Bit#(4)) nScratch      = readOnlyReg(0);                   // hartinfo b23-20  // R    // Number of dscratch Registers
        Reg#(Bit#(3)) hartinfoPad1  = readOnlyReg(0);                   // hartinfo b19-17 
        Reg#(Bit#(1)) dataAccess    = readOnlyReg(0);                   // hartinfo b16     // R    // 0 => Data registers shadowed by CSR ??  , 1 => memory mapped Data Registers
        Reg#(Bit#(4)) dataSize      = readOnlyReg(4'd12);               // hartinfo b15-12  // R    // Val 0->12 Number of Data Registers
        Reg#(Bit#(12))dataAddr      = readOnlyReg(12'h7c0);             // hartinfo b11-0   // R    // Signed Address of RAM where Data Registers are Memory Mapped  // Verify that this is not Required

        // Review the necessity and value of dataAddr
        Reg#(Bit#(32)) hartinfo = concatReg6(   hartinfoPad0,nScratch,hartinfoPad1,dataAccess,
                                                dataSize,dataAddr);
    
    // hawindowsel DM 'h14
        Reg#(Bit#(17))hawindowselPad0 = readOnlyReg(0);                 // hawindowsel b31-15
        Reg#(Bit#(15))hawindowselR  = readOnlyReg(0);                   // hawindowsel b14-0 // RW   // Selects Which Portion of the hartarray window is mapped to DM'15 hawindow
        
        Reg#(Bit#(32))hawindowsel = concatReg2(hawindowselPad0,hawindowselR);

    // hawindow DM 'h15
        Reg#(Bit#(31))hawindowPad0  = readOnlyReg(0);                   // hawindow b31-1
        Reg#(Bit#(1)) maskData      <- mkReg(0);                        // hawindow b0      // RW   // Hart Array Window , this reg is used for selecting registers
        
        Reg#(Bit#(32)) hawindow = concatReg2(hawindowPad0,maskData);
        
    // abstractcs DM 'h16
        Reg#(Bit#(3)) abstractcsPad0 = readOnlyReg(0);                  // abstractcs b31-29
        Reg#(Bit#(5)) progBufSize   = readOnlyReg(0);                   // abstractcs b28-24    // R    // ProgBuf Size for our impl is 0
        Reg#(Bit#(11))abstractcsPad1 = readOnlyReg(0);                  // abstractcs b23-13    
        Reg#(Bit#(1)) busy          <- mkReg(0);                        // abstractcs b12       // R    // An Abstract Command is being executed
        Reg#(Bit#(1)) abstractcsPad2 = readOnlyReg(0);                  // abstractcs b11      
        Reg#(Bit#(3)) cmderr        <- mkReg(0);                        // abstractcs b10-8     // RW   // Error in executing abstract command , Writing "001"? clears the error 
        Reg#(Bit#(4)) abstractcsPad3 = readOnlyReg(0);                  // abstractcs b7-4   
        Reg#(Bit#(4)) dataCount     = readOnlyReg(12);                  // abstractsc b3-0      // R    // Number of Data Register provided for Abstract Command Access.

        Reg#(Bit#(32)) abstractcs = concatReg8( abstractcsPad0,progBufSize,abstractcsPad1,
                                                readOnlyReg(busy),abstractcsPad2,readOnlyReg(cmderr),abstractcsPad3,dataCount);
        // write 1 clear-  type structures will possibly have scheeduleing conflicts eg. cmderr !

    // command DM 'h17          // Only Abstract Register Reads are asupported Therefore that mask is used.
        
        Reg#(Bit#(8)) abst_ar_cmdType <- mkReg(0);                      // command b31-24       // RW   // is equal to zero for access register commands
        Reg#(Bit#(1)) abst_ar_pad0  = readOnlyReg(0);                   // command b23
        Reg#(Bit#(3)) abst_ar_aarSize <- mkReg(0);                      // command b22-20       // RW   // Access Width 2-lower32 , 3-lower64 .. 
        Reg#(Bit#(1)) abst_ar_aarPostIncrement  <- mkReg(0);            // command b19          // RW   // Regno is incrementted after an access
        Reg#(Bit#(1)) abst_ar_postExec = readOnlyReg(0);                // command b18          // RW   // Execute Program Buffer Once // not supported , so not writable ?
        Reg#(Bit#(1)) abst_ar_transfer  <- mkReg(0);                    // command b17          // RW   // Transfer register into dmi data arg0.
        Reg#(Bit#(1)) abst_ar_write <- mkReg(0);                        // command b16          // RW   // Transfer dmi data arg0 to register
        Reg#(Bit#(16))abst_ar_regNo <- mkReg(0);                        // command b15-0        // RW   // regno.

        Reg#(Bit#(32)) abst_command = concatReg8(   abst_ar_cmdType,abst_ar_pad0,abst_ar_aarSize,abst_ar_aarPostIncrement,abst_ar_postExec,abst_ar_transfer,abst_ar_write,
                                                    abst_ar_regNo);
    // abstractauto DM 'h18
        Reg#(Bit#(16))autoExecProgBuf  = readOnlyReg(0);                // abstractauto b31-16  // RW   // When bit is set to 1 Write to ProgBuf[Bit] causes command to execute again
        Reg#(Bit#(4)) abstractautoPad0 = readOnlyReg(0);                // abstractauto b15-12
        Reg#(Bit#(12))autoExecData  <- mkReg(0);                        // abstractauto b11-0   // RW   // When bit is set to 1 Write to AbstractData[Bit] causes command to execute again

        Reg#(Bit#(32)) abstractauto = concatReg3(autoExecProgBuf,abstractautoPad0,autoExecData);

    // configstrptr0 DM 'h19-1c
        // Unbound constructor error With Typedef value to readonly reg
        Reg#(Bit#(32))configstrptr0 = readOnlyReg(0);                   //  configstrptr0 b31-0 // R    // Pointer to configuration String if implemented 
        Reg#(Bit#(32))configstrptr1 = readOnlyReg(0);                   //  configstrptr1 b31-0 // R 
        Reg#(Bit#(32))configstrptr2 = readOnlyReg(0);                   //  configstrptr2 b31-0 // R 
        Reg#(Bit#(32))configstrptr3 = readOnlyReg(0);                   //  configstrptr3 b31-0 // R 


    // nextdm   DM 'h1d
        Reg#(Bit#(32))nextdm    = readOnlyReg(0);                       // nextdm b31-0         // R    // Not Relevant

    // data0 - 11   DM 'h04-'h0f
        Vector#(12, Reg#(Bit#(32))) abst_data;                          // dataX b31-0          // RW   // access while busy causes an error.
        abst_data <- replicateM(mkReg(0));

    // progbuf0-15  DM 'h20-'h2f
        Vector#(16, Reg#(Bit#(32))) progbuf;                            // progbufX             // RW   // access while busy causes an error
        progbuf <- replicateM(mkReg(0));

    // authdata DM 'h30
        Reg#(Bit#(32)) auth_data <- mkReg(0);                           // {impl specific}      // RW   // port to and from auth module use this space as thou pleases !

    // haltsum0 DM 'h40 , 'h13 , 'h34 , 'h35
        Reg#(Bit#(32)) haltSum0 = concatReg2(readOnlyReg(31'h00000000),haltedHart);   //haltsum0      // R    // Concat of All Hart Halted Lines , If un available or non existant Halted bit is represented as 0 for that hart .
        Reg#(Bit#(32)) haltSum1 = readOnlyReg(0);
        Reg#(Bit#(32)) haltSum2 = readOnlyReg(0);
        Reg#(Bit#(32)) haltSum3 = readOnlyReg(0);        

    // sbcs DM 'h38
        Reg#(Bit#(3)) sbVersion = readOnlyReg(1);                       // sbcs b31-29  // R    // 0=> old spec , 1 => current spec     
        Reg#(Bit#(6)) sbcsPad0  = readOnlyReg(0);                       // sbcs b28-23 
        Reg#(Bit#(1)) sbBusyError <- mkReg(0);                          // sbcs b22     // RW1c // Set when attempts to read data or new access when (sbbusy == 1) , reset by writing to zero.
        Reg#(Bit#(1)) sbBusy    <- mkReg(0);                            // sbcs b21     // R    // Indicates busy , Writes while sbcs while sbbusy ==1 are not permitted (otherwise undefined).
        Reg#(Bit#(1)) sbReadOnAddr <- mkReg(0);                         // sbcs b20     // RW   // if 1 , writes to sbAddress 0 triggers a sbread
        Reg#(Bit#(3)) sbAccess  <- mkReg(2);                            // sbcs b19-17  // RW   // Access Size , if val , set sberr =4 while performing access
        Reg#(Bit#(1)) sbAutoIncrement <- mkReg(0);                      // sbcs b16     // RW  // if 1 sbAddressX is incremented by AccessSize after every read
        Reg#(Bit#(1)) sbReadOnData <- mkReg(0);                         // sbcs b15     // RW   // if 1 , reads of sbData0 triggers a read at address.(address may change).
        Reg#(Bit#(3)) sbError   <- mkReg(0);                            // sbcs b14-12  // RW1c // cleared on writing 1 , if error , no more accesses can be done 
        Reg#(Bit#(7)) sbASize   <-mkReg(fromInteger(valueOf(XLEN)));    // sbcs b11-5   // R    // With of Addresses
        Reg#(Bit#(1)) sbAccess128 <-mkReg(pack(valueOf(XLEN)>64));      // sbcs b4      // R    // Supports 128 bit accesses
        Reg#(Bit#(1)) sbAccess64 <-mkReg (pack(valueOf(XLEN)>32));      // sbcs b3      // R    // Supports 64  bit accesses
        Reg#(Bit#(1)) sbAccess32 <-mkReg (pack(valueOf(XLEN)>16));      // sbcs b2      // R    // Supports 32  bit accesses
        Reg#(Bit#(1)) sbAccess16 <-mkReg (pack(valueOf(XLEN)>8));       // sbcs b1      // R    // Supports 16  bit accesses
        Reg#(Bit#(1)) sbAccess8 <-mkReg  (pack(valueOf(XLEN)>0));       // sbcs b0      // R    // Supports 8   bit accesses

        Reg#(Bit#(32)) sbcs = concatReg15(  sbVersion,sbcsPad0,sbBusyError,sbBusy,sbReadOnAddr,sbAccess,sbAutoIncrement,
                            sbReadOnData,sbError,readOnlyReg(sbASize),readOnlyReg(sbAccess128),readOnlyReg(sbAccess64),readOnlyReg(sbAccess32),readOnlyReg(sbAccess16),readOnlyReg(sbAccess8));

    // sbaddress0 DM 'h39 , 'h3a , 'h3b , 'h37
        Reg#(Bit#(32)) sbAddress0 <- mkReg(0);  // sbadress0 b31-0   // RW   // Lowest 32 bits of address , Triggers Read if read on address is set 
        Reg#(Bit#(32)) sbAddress1 <- mkReg(0);  // sbadress1 b31-0   // RW   // bits 63:32 of address
        Reg#(Bit#(32)) sbAddress2 <- mkReg(0);  // sbadress2 b31-0   // RW   // bits 95:64 of address
        Reg#(Bit#(32)) sbAddress3 <- mkReg(0);  // sbadress3 b31-0   // RW   // bits 127:96 of address
    // sbdata0  DM 'h3c , 'h3d , 'h3d , 'h3d
        Reg#(Bit#(32)) sbData0 <- mkReg(0); // sbdata b31-0     // RW   // Accesses to this register ir respective of read on data bit , trigger a system bus operation 
        Reg#(Bit#(32)) sbData1 <- mkReg(0);  // sbdata1 b31-0   // RW   // bits 63:32 of data
        Reg#(Bit#(32)) sbData2 <- mkReg(0);  // sbdata1 b31-0   // RW   // bits 95:64 of data
        Reg#(Bit#(32)) sbData3 <- mkReg(0);  // sbdata1 b31-0   // RW   // bits 127:96 of data

    // DMI - DTM Interface
    
        //Reg#(Maybe#(Bit#(32))) dmi_response <- mkReg(tagged invalid );

        interface dtm = interface Ifc_DM_DTM
            interface putCommand = interface Put 
                method Action put(Bit#(41) request_data);
                    // The DMI Requests are Recieved here 
                    Bit#(2)  dmi_op   = request_data[1:0];
                    Bit#(32) dmi_data = request_data[33:2];           
                    Bit#(7) dmi_addr = request_data[40:34];
                    // Read Operation
                    //if( dmi_op == 2'b01 )begin  
                    //    case(dmi_addr)
                    //        DMCONTROL:
                    //        DMSTATUS:
                    //        HARTINFO:
                    //        HALTSUM1:
                    //        HAWINDOWSEL:
                    //        HAWINDOW:
                    //        ABSTRACTCTS:
                    //        COMMAND:
                    //        ABSTRACTAUTO:
                    //        CONFIGSTRINGADDR0:
                    //        CONFIGSTRINGADDR1:
                    //        CONFIGSTRINGADDR2:
                    //        CONFIGSTRINGADDR3:
                    //        NEXTDM:
                    //        AUTHENDATA:
                    //        HALTSUM2:
                    //        HALTSUM3:
                    //        SBADDRESS3:
                    //        SBCS:
                    //        SBADDRESS0:
                    //        SBADDRESS1:
                    //        SBADDRESS2:
                    //        SBDATA0:
                    //        SBDATA1:
                    //        SBDATA2:
                    //        SBDATA3:
                    //        HALTSUM0:
                    //        default:begin
                    //            if((dmi_addr >= ABSTRACTDATASTART) && (dmi_addr<= ABSTRACTDATAEND));
                    //            else if((dmi_addr >= PBSTART) && (dmi_addr<= PBEND));
                    //        end
                    //    endcase
                    //end
                    //// Write Operation
                    //else if ( dmi_op == 2'b10 )begin  
                    //    case(dmi_addr)
                    //        DMCONTROL:
                    //        DMSTATUS:
                    //        HARTINFO:
                    //        HALTSUM1:
                    //        HAWINDOWSEL:
                    //        HAWINDOW:
                    //        ABSTRACTCTS:
                    //        COMMAND:
                    //        ABSTRACTAUTO:
                    //        CONFIGSTRINGADDR0:
                    //        CONFIGSTRINGADDR1:
                    //        CONFIGSTRINGADDR2:
                    //        CONFIGSTRINGADDR3:
                    //        NEXTDM:
                    //        AUTHENDATA:
                    //        HALTSUM2:
                    //        HALTSUM3:
                    //        SBADDRESS3:
                    //        SBCS:
                    //        SBADDRESS0:
                    //        SBADDRESS1:
                    //        SBADDRESS2:
                    //        SBDATA0:
                    //        SBDATA1:
                    //        SBDATA2:
                    //        SBDATA3:
                    //        HALTSUM0:
                    //        default:begin
                    //            if((dmi_addr >= ABSTRACTDATASTART) && (dmi_addr<= ABSTRACTDATAEND));
                    //            else if((dmi_addr >= PBSTART) && (dmi_addr<= PBEND));
                    //        end
                    //    endcase
                    //end
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
                haltedHart <= halted; // Only One Hart
            endmethod

            method Action  setAvailable(Bit#(1) available);  // The HART can Assert this say through the shakti specific csr to disable debugging on a hart rather than by having user code maskable runControl.
                availableHart <= available;
            endmethod

        endinterface;
        // AXI Master 
        interface debug_master = interface AXI4_Master_IFC#(PADDR, XLEN,0)
        
        endinterface;

        method Bit#(1) getNDMReset();
            return nDMReset;
        endmethod
    endmodule


endpackage