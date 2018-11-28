package riscvDebug013;

    // TODO: Clean up the comments -- Comment After -> Comment Before !

    import Vector ::*;
    import GetPut :: *;
    import Assert :: *;
    import BUtils::*;
    import Semi_FIFOF::*;

    import AXI4_Types::*;
    import ConcatReg::*;
    //import device_common::*;
    import debug_types::*;
    
    typedef 1 VERBOSE;
    `define FIVO(x) fromInteger(valueOf(x))
    `define VO(x) valueOf(x)

	//Interface between Debug Module and DTM (eg. JtagDTM)
	interface Ifc_DM_DTM;
        interface Put#(Bit#(41)) putCommand;// 7 (ABITS) + 32 + 2
        interface Get#(Bit#(34)) getResponse;
    endinterface

    // sub Interface Between DebugModule and Soc for Connection to hart 
        // The HART can Assert Available say through the shakti specific csr 
        // to disable debugging on a hart rather than by having user code maskable runControl.
    interface Debug_Hart_Ifc;
        method Tuple3#(Bit#(1),Bit#(AbstractAddrWidth),Bit#(XLEN)) abstractOperation;
        method Action  abstractReadResponse(Bit#(XLEN) abstractResponse);
        method Bit#(1) haltRequest();
        method Bit#(1) resumeRequest();
        method Bit#(1) hart_reset();        // Signal TO Reset HART Active HIGH 
		method Action  setHalted(Bit#(1) halted);
        method Action  setAvailable(Bit#(1) available);
    endinterface

	// Interface between Debug Module and SOC
    interface RiscvDebugInterface013;
        interface Ifc_DM_DTM dtm;
        interface Debug_Hart_Ifc hart;
        interface AXI4_Master_IFC#(PADDR, XLEN, 0 ) debug_master;
        method Bit#(1) getNDMReset();
    endinterface 


    (*synthesize*)
    module mkRiscvDebugModule(RiscvDebugInterface013);
    // UArch Registers 
        Reg#(Bit#(1)) haltedHart <- mkReg(0);
        Reg#(Bit#(1)) availableHart <- mkReg(0);

    // Interface Registers
        Reg#(Maybe#(Bit#(34))) dmi_response <- mkReg(tagged Invalid );
        Reg#(Maybe#(Bit#(XLEN))) abstRespReg <- mkReg(tagged Invalid );
        Reg#(Bit#(1)) startSBAccess <- mkReg(0);
    // Arch Registers 
    // dmstatus DM h'11
        Reg#(Bit#(9)) dmstatusPad0  = readOnlyReg(0);                   // dmstatus b31-23  
        // No Implicit Ebreak as there is no Program Buffer
        Reg#(Bit#(1)) impEbreak     = readOnlyReg(0);                   // dmstatus b22     // R 
        Reg#(Bit#(2)) dmstatusPad1  = readOnlyReg(0);                   // dmstatus b21-20
        Reg#(Bit#(1)) allHaveReset  <- mkReg(0);                        // dmstatus b19     // R   
        Reg#(Bit#(1)) anyHaveReset  <- mkReg(0);                        // dmstatus b18     // R  
        Reg#(Bit#(1)) allResumeAck  <- mkReg(0);                        // dmstatus b17     // R   
        Reg#(Bit#(1)) anyResumeAck  <- mkReg(0);                        // dmstatus b16     // R   
        // Asserted when All Selected Harts Do Not Exist in the System ( & of Non-Exist represent )
        Reg#(Bit#(1)) allNonExistent<- mkReg(0);                        // dmstatus b15     // R   
        // Asserted when any selected Hart does not exist ( | of Non-Exist represent )
        Reg#(Bit#(1)) anyNonExistent<- mkReg(0);                        // dmstatus b14     // R   
        Reg#(Bit#(1)) allUnAvail    <- mkReg(0);                        // dmstatus b13     // R   
        Reg#(Bit#(1)) anyUnAvail    <- mkReg(0);                        // dmstatus b12     // R   
        Reg#(Bit#(1)) allRunning    <- mkReg(0);                        // dmstatus b11     // R   
        Reg#(Bit#(1)) anyRunning    <- mkReg(0);                        // dmstatus b10     // R   
        Reg#(Bit#(1)) allHalted     <- mkReg(0);                        // dmstatus b9      // R   
        Reg#(Bit#(1)) anyHalted     <- mkReg(0);                        // dmstatus b8      // R   
        Reg#(Bit#(1)) authenticated <- mkReg(0);                        // dmstatus b7      // R   
        Reg#(Bit#(1)) authbusy      <- mkReg(0);                        // dmstatus b6      // R   
        // (has)Support for halt-on-reset => setResetHaltRequest&clrResetHaltRequest bits supported
        Reg#(Bit#(1)) hasResetHaltRequest = readOnlyReg(1);             // dmstatus b5      // R   
        // Indicates ConfString Registers DM h'19-h'1c Contain a Valid pointer
        Reg#(Bit#(1)) confStrPtrValid = readOnlyReg(1);                 // dmstatus b4      // R   
        // Version = 2 => Supports spec 0.13
        Reg#(Bit#(4)) version       = readOnlyReg(4'b0010);             // dmstatus b3-0    // R   

        // The All and any signals will be registered and will have a rule updating them.
        Reg#(Bit#(32)) dmstatus = concatReg20(  dmstatusPad0,impEbreak,dmstatusPad1,
            readOnlyReg(allHaveReset),readOnlyReg(anyHaveReset),readOnlyReg(allResumeAck),
            readOnlyReg(anyResumeAck),readOnlyReg(allNonExistent),readOnlyReg(anyNonExistent),
            readOnlyReg(allUnAvail),readOnlyReg(anyUnAvail),readOnlyReg(allRunning),
            readOnlyReg(anyRunning),readOnlyReg(allHalted),readOnlyReg(anyHalted),
            readOnlyReg(authenticated),readOnlyReg(authbusy),hasResetHaltRequest,confStrPtrValid,
            version);
        
    // dmcontrol DM h'10
        // 0 Clears Halt Request (to currently Selected) , 1 Sets Halt Request to Currently Selected
        Reg#(Bit#(1)) haltReq       <- mkReg(0);                        // dmcontrol b31    // W    
        // Writing 1 causes Halted harts to resume once , cannot write 1 to running hart ,
        // resume Ack is cleared if the hart was halted.
        Reg#(Bit#(1)) resumeReq     <- mkReg(0);                        // dmcontrol b30    // W    
        // Writing 1 asserts reset writing zero de asserts reset
        Reg#(Bit#(1)) hartReset     <- mkReg(0);                        // dmcontrol b29    // RW   
        Reg#(Bit#(1)) ackHaveReset  <- mkReg(0);                        // dmcontrol b28    // W    
        Reg#(Bit#(1)) dmcontrolPad0 = readOnlyReg(0);                   // dmcontrol b27
        // 0 Only one hart selected,1 Multiple harts selected ,reads 0 if multi sel not supported
        Reg#(Bit#(1)) haSel         = readOnlyReg(0);                   // dmcontrol b26    // RW   
        // Low bits os hartsel
        Reg#(Bit#(10))hartSelLo     <- mkReg(0);                        // dmcontrol b25-16 // RW   
        // High bits of hartsel 
        Reg#(Bit#(10))hartSelHi     <- mkReg(0);                        // dmcontrol b15-6  // RW   
        Reg#(Bit#(2)) dmcontrolPad1 = readOnlyReg(0);                   // dmcontrol b5-4
        Reg#(Bit#(1)) setResetHaltRequest <- mkReg(0);                  // dmcontrol b3     // W    
        Reg#(Bit#(1)) clrResetHaltReq <- mkReg(0);                      // dmcontrol b2     // W    
        // Resets Everything Apart from The Debug Logic , all harts and periphrals
        Reg#(Bit#(1)) nDMReset      <- mkReg(0);                        // dmcontrol b1     // RW   
        // Active Low Reset for only the Debug Module 
        Reg#(Bit#(1)) dmActive      <- mkReg(0);                        // dmcontrol b0     // RW   


        //Q How To setup dmactive as a reset for this module.
        Reg#(Bit#(32)) dmcontrol = concatReg13( haltReq,resumeReq,hartReset,ackHaveReset,
            dmcontrolPad0,haSel,hartSelLo,hartSelHi,dmcontrolPad1,setResetHaltRequest,
            clrResetHaltReq,nDMReset,dmActive);
    
    // hartinfo DM 'h12
        Reg#(Bit#(8)) hartinfoPad0  = readOnlyReg(0);                   // hartinfo b31-24
        Reg#(Bit#(4)) nScratch      = readOnlyReg(0);                   // hartinfo b23-20  // R    
        // Number of dscratch Registers
        Reg#(Bit#(3)) hartinfoPad1  = readOnlyReg(0);                   // hartinfo b19-17 
        Reg#(Bit#(1)) dataAccess    = readOnlyReg(0);                   // hartinfo b16     // R    
        // 0 => Data registers shadowed by CSR ??  , 1 => memory mapped Data Registers
        Reg#(Bit#(4)) dataSize      = readOnlyReg(4'd12);               // hartinfo b15-12  // R    
        // Val 0->12 Number of Data Registers
        Reg#(Bit#(12))dataAddr      = readOnlyReg(12'h7c0);             // hartinfo b11-0   // R    
                    // Signed Address of RAM where Data Registers are Memory Mapped  // Verify that this is not Required

        // Review the necessity and value of dataAddr
        Reg#(Bit#(32)) hartinfo = concatReg6(   hartinfoPad0,nScratch,hartinfoPad1,dataAccess,
                                                dataSize,dataAddr);
    
    // hawindowsel DM 'h14
        Reg#(Bit#(17))hawindowselPad0 = readOnlyReg(0);                 // hawindowsel b31-15
        Reg#(Bit#(15))hawindowselR  = readOnlyReg(0);                   // hawindowsel b14-0 // RW 
        // Selects Which Portion of the hartarray window is mapped to DM'15 hawindow
        
        Reg#(Bit#(32))hawindowsel = concatReg2(hawindowselPad0,hawindowselR);

    // hawindow DM 'h15
        Reg#(Bit#(31))hawindowPad0  = readOnlyReg(0);                   // hawindow b31-1
        Reg#(Bit#(1)) maskData      <- mkReg(0);                        // hawindow b0      // RW   
        // Hart Array Window , this reg is used for selecting registers
        
        Reg#(Bit#(32)) hawindow = concatReg2(hawindowPad0,maskData);
        
    // abstractcs DM 'h16
        Reg#(Bit#(3)) abstractcsPad0 = readOnlyReg(0);                  // abstractcs b31-29
        Reg#(Bit#(5)) progBufSize   = readOnlyReg(0);                   // abstractcs b28-24// R    
        // ProgBuf Size for our impl is 0
        Reg#(Bit#(11))abstractcsPad1 = readOnlyReg(0);                  // abstractcs b23-13    
        Reg#(Bit#(1)) abst_busy     <- mkReg(0);                        // abstractcs b12   // R    
        // An Abstract Command is being executed
        Reg#(Bit#(1)) abstractcsPad2 = readOnlyReg(0);                  // abstractcs b11      
        Reg#(Bit#(3)) cmderr        <- mkReg(0);                        // abstractcs b10-8 // RW   
        // Error in executing abstract command , Writing "001"? clears the error 
        Reg#(Bit#(4)) abstractcsPad3 = readOnlyReg(0);                  // abstractcs b7-4   
        Reg#(Bit#(4)) dataCount     = readOnlyReg(12);                  // abstractcs b3-0  // R    
        // Number of Data Register provided for Abstract Command Access.

        Reg#(Bit#(32)) abstractcs = concatReg8( abstractcsPad0,progBufSize,abstractcsPad1,
            readOnlyReg(busy),abstractcsPad2,readOnlyReg(cmderr),abstractcsPad3,dataCount);

    // command DM 'h17 // Only Abstract Register Reads are asupported Therefore that mask is used.
        
        Reg#(Bit#(8)) abst_ar_cmdType <- mkReg(0);                      // command b31-24   // RW   
        // is equal to zero for access register commands
        Reg#(Bit#(1)) abst_ar_pad0  = readOnlyReg(0);                   // command b23
        Reg#(Bit#(3)) abst_ar_aarSize <- mkReg(0);                      // command b22-20   // RW   
        // Access Width 2-lower32 , 3-lower64 .. 
        Reg#(Bit#(1)) abst_ar_aarPostIncrement  <- mkReg(0);            // command b19      // RW   
        // Regno is incrementted after an access
        Reg#(Bit#(1)) abst_ar_postExec = readOnlyReg(0);                // command b18      // RW   
        // Execute Program Buffer Once // not supported , so not writable ?
        Reg#(Bit#(1)) abst_ar_transfer  <- mkReg(0);                    // command b17      // RW   
        // Transfer register into dmi data arg0.
        Reg#(Bit#(1)) abst_ar_write <- mkReg(0);                        // command b16      // RW   
        // Transfer dmi data arg0 to register
        Reg#(Bit#(16))abst_ar_regNo <- mkReg(0);                        // command b15-0    // RW   
        // regno.

        Reg#(Bit#(32)) abst_command = concatReg8(   abst_ar_cmdType,abst_ar_pad0,abst_ar_aarSize,
            abst_ar_aarPostIncrement,abst_ar_postExec,abst_ar_transfer,abst_ar_write,abst_ar_regNo);
    // abstractauto DM 'h18
        Reg#(Bit#(16))autoExecProgBuf  = readOnlyReg(0);            // abstractauto b31-16  // RW   
        // When bit is set to 1 Write to ProgBuf[Bit] causes command to execute again
        Reg#(Bit#(4)) abstractautoPad0 = readOnlyReg(0);            // abstractauto b15-12
        Reg#(Bit#(12))autoExecData  <- mkReg(0);                    // abstractauto b11-0   // RW   
        // When bit is set to 1 Write to AbstractData[Bit] causes command to execute again

        Reg#(Bit#(32)) abstractauto = concatReg3(autoExecProgBuf,abstractautoPad0,autoExecData);

    // configstrptr0 DM 'h19-1c
        // Pointer to configuration String if implemented 
        Reg#(Bit#(32))configstrptr0 = readOnlyReg(0);               //  configstrptr0 b31-0 // R    
        Reg#(Bit#(32))configstrptr1 = readOnlyReg(0);               //  configstrptr1 b31-0 // R 
        Reg#(Bit#(32))configstrptr2 = readOnlyReg(0);               //  configstrptr2 b31-0 // R 
        Reg#(Bit#(32))configstrptr3 = readOnlyReg(0);               //  configstrptr3 b31-0 // R 
 // nextdm   DM 'h1d 
        Reg#(Bit#(32))nextdm    = readOnlyReg(0);                       // nextdm b31-0     // R    
        // Not Relevant 
    
    // data0 - 11   DM 'h04-'h0f
        Vector#(12, Reg#(Bit#(32))) abst_data;                          // dataX b31-0      // RW   
        // access while busy causes an error.
        abst_data <- replicateM(mkReg(0));

    // progbuf0-15  DM 'h20-'h2f
        Vector#(16, Reg#(Bit#(32))) progbuf;                            // progbufX         // RW   
        // access while busy causes an error , No Program buffer support so read only zero
        progbuf <- replicateM(mkReg(0)); 

    // authdata DM 'h30
        Reg#(Bit#(32)) auth_data <- mkReg(0);                           // {impl specific}  // RW   
        // port to and from auth module use this space as thou pleases !

    // haltsum0 DM 'h40 , 'h13 , 'h34 , 'h35
        // Concat of All Hart Halted Lines , 
        // If un available or non existant Halted bit is represented as 0 for that hart .
        Reg#(Bit#(32)) haltSum0 = concatReg2(readOnlyReg(31'h00000000),haltedHart); //haltSum0 // R 
        Reg#(Bit#(32)) haltSum1 = readOnlyReg(0);
        Reg#(Bit#(32)) haltSum2 = readOnlyReg(0);
        Reg#(Bit#(32)) haltSum3 = readOnlyReg(0);        

    // sbcs DM 'h38
        Reg#(Bit#(3)) sbVersion = readOnlyReg(1);                       // sbcs b31-29      // R    
        // 0=> old spec , 1 => current spec     
        Reg#(Bit#(6)) sbcsPad0  = readOnlyReg(0);                       // sbcs b28-23 
        Reg#(Bit#(1)) sbBusyError <- mkReg(0);                          // sbcs b22         // RW1c 
        // Set when attempts to read data or new access when (sbbusy == 1) , reset by writing to zero.
        Reg#(Bit#(1)) sbBusy    <- mkReg(0);                            // sbcs b21         // R    
        // Indicates busy , Writes while sbcs while sbbusy ==1 are not permitted (otherwise undefined).
        Reg#(Bit#(1)) sbReadOnAddr <- mkReg(0);                         // sbcs b20         // RW   
        // if 1 , writes to sbAddress 0 triggers a sbread
        Reg#(Bit#(3)) sbAccess  <- mkReg(2);                            // sbcs b19-17      // RW   
        // Access Size , if val , set sberr =4 while performing access
        Reg#(Bit#(1)) sbAutoIncrement <- mkReg(0);                      // sbcs b16         // RW  
        // if 1 sbAddressX is incremented by AccessSize after every read
        Reg#(Bit#(1)) sbReadOnData <- mkReg(0);                         // sbcs b15         // RW   
        // if 1 , reads of sbData0 triggers a read at address.(address may change).
        Reg#(Bit#(3)) sbError   <- mkReg(0);                            // sbcs b14-12      // RW1c
         // cleared on writing 1 , if error , no more accesses can be done 
        Reg#(Bit#(7)) sbASize   =  readOnlyReg(`FIVO(XLEN)); // sbcs b11-5   // R    
        // With of Addresses
        Reg#(Bit#(1)) sbAccess128 = readOnlyReg(pack(valueOf(XLEN)>64));// sbcs b4          // R    
        // Supports 128 bit accesses
        Reg#(Bit#(1)) sbAccess64 = readOnlyReg(pack(valueOf(XLEN)>32)); // sbcs b3          // R    
        // Supports 64  bit accesses
        Reg#(Bit#(1)) sbAccess32 = readOnlyReg(pack(valueOf(XLEN)>16)); // sbcs b2          // R    
        // Supports 32  bit accesses
        Reg#(Bit#(1)) sbAccess16 = readOnlyReg(pack(valueOf(XLEN)>8));  // sbcs b1          // R    
        // Supports 16  bit accesses
        Reg#(Bit#(1)) sbAccess8  = readOnlyReg(pack(valueOf(XLEN)>0));  // sbcs b0          // R    
        // Supports 8   bit accesses

        Reg#(Bit#(32)) sbcs = concatReg15(  sbVersion,sbcsPad0,readOnlyReg(sbBusyError),sbBusy,sbReadOnAddr,
            sbAccess,sbAutoIncrement,sbReadOnData,sbError,readOnlyReg(sbASize),
            readOnlyReg(sbAccess128),readOnlyReg(sbAccess64),readOnlyReg(sbAccess32),
            readOnlyReg(sbAccess16),readOnlyReg(sbAccess8));

    // sbaddress0 DM 'h39 , 'h3a , 'h3b , 'h37
        Reg#(Bit#(32)) sbAddress0 <- mkReg(0);                          // sbAddress0 b31-0  // RW   
        // Lowest 32 bits of address , Triggers Read if read on address is set 
        Reg#(Bit#(32)) sbAddress1 <- mkReg(0);                          // sbAddress1 b31-0  // RW   
        // bits 63:32 of address
        Reg#(Bit#(32)) sbAddress2 <- mkReg(0);                          // sbAddress2 b31-0  // RW   
        // bits 95:64 of address
        Reg#(Bit#(32)) sbAddress3 <- mkReg(0);                          // sbAddress3 b31-0  // RW   
        // bits 127:96 of address

    // sbdata0  DM 'h3c , 'h3d , 'h3d , 'h3d
        Reg#(Bit#(32)) sbData0 <- mkReg(0);                             // sbdata b31-0     // RW   
        // Accesses to this register ir respective of read on data bit , trigger a system bus operation 
        Reg#(Bit#(32)) sbData1 <- mkReg(0);                             // sbdata1 b31-0    // RW   
        // bits 63:32 of data
        Reg#(Bit#(32)) sbData2 <- mkReg(0);                             // sbdata1 b31-0    // RW   
        // bits 95:64 of data
        Reg#(Bit#(32)) sbData3 <- mkReg(0);                             // sbdata1 b31-0    // RW   
        // bits 127:96 of data
    
    // Reset DM State on Asserting DM_Active 0
        (* preempts = "dtm_putCommand_put,resetDM" *)
        rule resetDM(dmActive == 0);
        //dmcontrol
            
        //hawindowsel
            hawindowsel <= 0;
        //hawindow
            hawindow    <= 0;
        //abstractcs
            abst_busy   <= 0;
            cmderr      <= 0;
        //abst_command
            abst_command <= 0;
        //abstractauto
            abstractauto <= 0;
        //sbcs
            sbBusyError     <= 0;
            sbBusy          <= 0;
            sbReadOnAddr    <= 0;
            sbAccess        <= 2;
            sbAutoIncrement <= 0;
            sbReadOnData    <= 0;
            sbError         <= 0;
        //sbAddress
            sbAddress0 <= 0;
            sbAddress1 <= 0;
            sbAddress2 <= 0;
            sbAddress3 <= 0;
        //sbData
            sbData0 <= 0;
            sbData1 <= 0;
            sbData2 <= 0;
            sbData3 <= 0;

        //abst_data
            for(Integer i = 0; i < 12 ; i = i+1)
                abst_data[i] <= 0;

        endrule

        // rule setDMStatus;
            
        // endrule

    // AXI Bus Master
        AXI4_Master_Xactor_IFC#(PADDR,XLEN,0) master_xactor <- mkAXI4_Master_Xactor;    
    
    // System Bus Access FSM  / TODO : Correct some improper XLEN parametrizations
        rule accessSystemBus((sbError == 0) && (sbBusyError == 0) && (sbBusy == 0) && (startSBAccess == 1) );
            Bit#(64) write_data=0;
            Bit#(32) address = 0;
            Bit#(4) size =0; // size in bytes
            
            // word addresses aligned
            address[31:0]={sbAddress0[31:2],2'b00};
            case (sbAccess)
		    	0: size = 1 ;
		    	1: size = 2 ;
		    	2: size = 4 ;
		    	3: size = 8 ; 
            endcase
            // Size is not a register , This is pretty much how it was last time 
            case(size)
                8:  write_data = { sbData1 ,sbData0} ;
                4:  write_data = duplicate(sbData0);
                2:  write_data = duplicate(sbData0[15:0]);
                1:	write_data = duplicate(sbData0[7:0]);
            endcase
            // Strobe , [1:0] for XLEN32 , [2:0] for XLEN 64
            Bit#(8) write_strobe=size==1?8'b1:size==2?8'b11:size==4?8'hf:8'hff;
            // 8-bit write;
            //valueOf(TSub#(TLog#(TDiv#(XLEN,8)),1))
            //valueOf(TLog#(TDiv(XLEN,8))) The number of bits of size that should be used 
            if(size!=8) write_strobe=write_strobe<<(address[1:0]);
            
            if(valueOf(VERBOSE)==1) $display($time, "X\tDebug : Memory Access : write_data : %h Address : %h Write_Strobe : %b",
                                                 write_data ,address,write_strobe);
            
            if((sbReadOnAddr ==1) || (sbReadOnData==1))begin
                let read_request = AXI4_Rd_Addr {araddr: truncate(address),
                                                 aruser: 0, arlen: 0,
                                                 arsize:size[2:0],arburst: 'b01,arid:`FIVO(AxiID)};
	  	        master_xactor.i_rd_addr.enq(read_request);
            end
            else begin
                let request_data  = AXI4_Wr_Data{wdata: write_data[valueOf(TSub#(XLEN,1)):0],
                                                 wstrb: truncate(write_strobe),
                                                 wlast:True, wid:`FIVO(AxiID)};
                let request_address = AXI4_Wr_Addr{ awaddr: address, awuser:0, 
                                                    awlen: 0, awsize: size[2:0],
                                                    awburst: 'b01,awid:`FIVO(AxiID)}; // arburst: 00-FIXED 01-INCR 10-WRAP
    			master_xactor.i_wr_addr.enq(request_address) ;
                master_xactor.i_wr_data.enq(request_data) ;
            end
            
            if(sbAutoIncrement == 1) sbAddress0 <= truncate(sbAddress0+ zeroExtend(size));
            sbBusy <= 1; // Assert Busy
            startSBAccess <= 0; // Transaction has been issued , disable trigger
            // Filter Errors
                // Filter Mis Aligned Access 
        endrule
        
    // Capture and Handle Response
        (* conflict_free = "responseSystemBusRead,responseSystemBusWrite" *)
        (* preempts = "(responseSystemBusRead,responseSystemBusWrite), dtm_putCommand_put" *) // Review Plz

        rule responseSystemBusRead ((sbError == 0) && (sbBusy == 1) && (startSBAccess == 0));
            let response<-pop_o(master_xactor.o_rd_data);
            if (response.rresp==AXI4_OKAY && (response.rid==`FIVO(AxiID))) 
            begin
                Bit #(64) resp=zeroExtend (response.rdata);
                sbData0<=resp[31:0] ;
                sbData1<=resp[63:32] ;
            end 
            else begin
                // Set Error State if any 
            end
            sbBusy <=0; // De Assert Busy
        endrule

        rule responseSystemBusWrite ((sbError == 0) && (sbBusy == 1) && (startSBAccess == 0));
            let response <- pop_o(master_xactor.o_wr_resp) ;
            if(response.bresp == AXI4_OKAY && (response.bid==`FIVO(AxiID)))begin
                if(valueOf(VERBOSE)==1)
                    $display($time, "WS\tDEBUG: Write Done Successfully");
                // Set Error State if any 
                end
            sbBusy <=0; // De Assert Busy
        endrule
    // AXI Interface to SOC
        interface debug_master = master_xactor.axi_side;
                
    // DMI - DTM Interface
        interface dtm = interface Ifc_DM_DTM
            interface putCommand = interface Put 
                method Action put(Bit#(41) request_data) if (!isValid(dmi_response ));
                    // The DMI Requests are Recieved here 
                    Bit#(2)  dmi_op   = request_data[1:0];
                    Bit#(32) dmi_data = request_data[33:2];           
                    Bit#(7) dmi_addr = request_data[40:34];
                    // Catch Busy Access Violations 
                    Bit#(32) dmi_response_data = 0;
                    Bit#(2)  dmi_response_status = 0; // dmi_response_status 0=> ok , 2=> operation failed

                    if(valueOf(VERBOSE) == 1) $display($time ,"\tDebug DMI Access@ %h , op %h , Data %h",dmi_addr,dmi_op,dmi_data);
                // Read Operation
                    if( dmi_op == 2'b01 ) begin  
                        case(dmi_addr)
                            `FIVO(DMCONTROL):          dmi_response_data = dmcontrol;   
                            `FIVO(DMSTATUS):           dmi_response_data = dmstatus;
                            `FIVO(HARTINFO):           dmi_response_data = hartinfo;    
                            `FIVO(HALTSUM1):           dmi_response_data = haltSum1;
                            `FIVO(HAWINDOWSEL):        dmi_response_data = hawindowsel;
                            `FIVO(HAWINDOW):           dmi_response_data = hawindow;
                            `FIVO(ABSTRACTCTS):        dmi_response_data = abstractcs;
                            `FIVO(COMMAND):            dmi_response_data = abst_command;
                            `FIVO(ABSTRACTAUTO):       dmi_response_data = abstractauto;
                            `FIVO(CONFIGSTRINGADDR0):  dmi_response_data = configstrptr0;
                            `FIVO(CONFIGSTRINGADDR1):  dmi_response_data = configstrptr1;
                            `FIVO(CONFIGSTRINGADDR2):  dmi_response_data = configstrptr2;
                            `FIVO(CONFIGSTRINGADDR3):  dmi_response_data = configstrptr3;
                            `FIVO(NEXTDM):             dmi_response_data = nextdm;
                            `FIVO(AUTHDATA):           dmi_response_data = auth_data;
                            `FIVO(HALTSUM2):           dmi_response_data = haltSum2;
                            `FIVO(HALTSUM3):           dmi_response_data = haltSum3;
                            `FIVO(SBADDRESS3):         dmi_response_data = sbAddress3;
                            `FIVO(SBCS):               dmi_response_data = sbcs;
                            `FIVO(SBADDRESS0):         dmi_response_data = sbAddress0;
                            `FIVO(SBADDRESS1):         dmi_response_data = sbAddress1;
                            `FIVO(SBADDRESS2):         dmi_response_data = sbAddress2;
                            `FIVO(SBDATA0):            dmi_response_data = sbData0;
                            `FIVO(SBDATA1):            dmi_response_data = sbData1;
                            `FIVO(SBDATA2):            dmi_response_data = sbData2;
                            `FIVO(SBDATA3):            dmi_response_data = sbData3;
                            `FIVO(HALTSUM0):           dmi_response_data = haltSum0;
                            default:begin
                                if((dmi_addr >= `FIVO(ABSTRACTDATASTART)) && (dmi_addr<= `FIVO(ABSTRACTDATAEND)))begin
                                    dmi_response_data = abst_data[dmi_addr - `FIVO(ABSTRACTDATASTART)];
                                end
                                else if((dmi_addr >= `FIVO(PBSTART)) && (dmi_addr<= `FIVO(PBEND)))begin
                                    dmi_response_data = progbuf[dmi_addr - `FIVO(PBSTART)]; // Not implemented so should read back zero
                                end
                                else dmi_response_status = 2; // dmi operation failed 
                            end
                        endcase
                    end
                // Write Operation
                    else if ( dmi_op == 2'b10 )begin  
                        case(dmi_addr)
                            `FIVO(DMCONTROL):          dmcontrol <= dmi_data;
                            `FIVO(DMSTATUS):           dmstatus <= dmi_data;
                            `FIVO(HARTINFO):           hartinfo <= dmi_data;
                            `FIVO(HALTSUM1):           haltSum1 <= dmi_data;
                            `FIVO(HAWINDOWSEL):        hawindowsel <= dmi_data;
                            `FIVO(HAWINDOW):           hawindow <= dmi_data;
                            `FIVO(ABSTRACTCTS):        abstractcs <= dmi_data;
                            `FIVO(COMMAND):            abst_command <= dmi_data;
                            `FIVO(ABSTRACTAUTO):       abstractauto <= dmi_data;
                            `FIVO(CONFIGSTRINGADDR0):  configstrptr0 <= dmi_data;
                            `FIVO(CONFIGSTRINGADDR1):  configstrptr1 <= dmi_data;
                            `FIVO(CONFIGSTRINGADDR2):  configstrptr2 <= dmi_data;
                            `FIVO(CONFIGSTRINGADDR3):  configstrptr3 <= dmi_data;
                            `FIVO(NEXTDM):             nextdm <= dmi_data;
                            `FIVO(AUTHDATA):           auth_data <= dmi_data;
                            `FIVO(HALTSUM2):           haltSum2 <= dmi_data;
                            `FIVO(HALTSUM3):           haltSum3 <= dmi_data;
                            `FIVO(SBADDRESS3):         sbAddress3 <= dmi_data;
                            `FIVO(SBCS):        begin
                                                    sbcs <= dmi_data;
                                                    if(dmi_data[22] == 1'b1) 
                                                      sbBusyError <= 0; // Write one to clear !
                                                end
                            `FIVO(SBADDRESS0):  begin
                                                    if(sbBusy == 1) 
                                                      sbBusyError <=1;
                                                    else 
                                                      sbAddress0 <= dmi_data;
                                                    if((sbBusy == 0 ) && (sbBusyError == 0 ) 
                                                        && (sbReadOnAddr == 1 )) 
                                                      startSBAccess <= 1;
                                                end
                            `FIVO(SBADDRESS1):  begin 
                                                    if(sbBusy == 1) 
                                                      sbBusyError <=1;
                                                    else 
                                                      sbAddress1 <= dmi_data; 
                                                end
                            `FIVO(SBADDRESS2):  begin 
                                                    if(sbBusy == 1) 
                                                      sbBusyError <=1;
                                                    else 
                                                      sbAddress2 <= dmi_data; 
                                                end
                            `FIVO(SBDATA0):     begin
                                                    if((sbBusy == 0)&&(sbBusyError == 0 ))begin 
                                                        sbData0 <= dmi_data;
                                                        startSBAccess <= 1;
                                                        end
                                                    else if(sbBusy == 1) sbBusyError <=1;
                                                end
                            `FIVO(SBDATA1):            sbData1 <= dmi_data;
                            `FIVO(SBDATA2):            sbData2 <= dmi_data;
                            `FIVO(SBDATA3):            sbData3 <= dmi_data;
                            `FIVO(HALTSUM0):           haltSum0 <= dmi_data;
                            default:begin
                                if((dmi_addr >= `FIVO(ABSTRACTDATASTART)) && (dmi_addr<= `FIVO(ABSTRACTDATAEND)))begin
                                    abst_data[dmi_addr - `FIVO(ABSTRACTDATASTART)] <= dmi_data;
                                end
                                else if((dmi_addr >= `FIVO(PBSTART)) && (dmi_addr<= `FIVO(PBEND)))begin
                                    progbuf[dmi_addr - `FIVO(PBSTART)] <= dmi_data;
                                end
                                else dmi_response_status = 2; // dmi operation failed
                            end
                        endcase
                    end                    

                    dmi_response <= tagged Valid  ({dmi_response_data,dmi_response_status});
                endmethod
            endinterface;
            
            interface getResponse = interface Get
                method ActionValue#(Bit#(34)) get() if (isValid(dmi_response));
                    dmi_response <= tagged Invalid; 
                    return validValue(dmi_response);
                endmethod
            endinterface;
        endinterface;

        // HART - only Single Hart Supported for now 
        interface hart = interface Debug_Hart_Ifc 

            method Tuple3#(Bit#(1) ,Bit#(AbstractAddrWidth),Bit#(XLEN)) abstractOperation; // if (condition to launch abstract command) !
                let abstOp = abst_ar_write;
                let abstData= { abst_data[1],abst_data[0] }; // Make 64 bit but filter down and use XLEN bits
                return tuple3(abstOp,truncate(abst_ar_regNo),truncate(abstData));
            endmethod
            // Recieves response from Abstract Command if any.
            method Action  abstractReadResponse(Bit#(XLEN) responseData);
                abstRespReg <= tagged Valid responseData; // remove the valid stuff and store the redule right into the data regs.
            endmethod

            method Bit#(1) haltRequest();
                return haltReq;
            endmethod
            method Bit#(1) resumeRequest();
                return resumeReq;
            endmethod
            
            method Bit#(1) hart_reset();
                return hartReset;
            endmethod

            method Action  setHalted(Bit#(1) halted);
                haltedHart <= halted; // Only One Hart
            endmethod

            // The HART can Assert this say through the shakti specific csr to disable debugging 
            // on a hart rather than by having user code maskable runControl.
            method Action  setAvailable(Bit#(1) available);  
                availableHart <= available;
            endmethod

        endinterface;

        method Bit#(1) getNDMReset();
            return nDMReset;
        endmethod
    endmodule


endpackage
