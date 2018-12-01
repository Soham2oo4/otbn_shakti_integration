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
Author: P.George , N.Gala
Email id: command.paul@gmail.com
--------------------------------------------------------------------------------------------------
*/

// TODO: Update To match Latest Shakti Bluespec coding guidelines

package riscvDebug013;

  import Vector ::*;
  import GetPut :: *;
  import Assert :: *;
  import BUtils::*;
  import Semi_FIFOF::*;
  import Clocks::*;
  import AXI4_Types::*;
  import ConcatReg::*;

  import debug_types::*;

  typedef 1 VERBOSE;

  `define FIVO(x) fromInteger(valueOf(x))

  //Interface between Debug Module and DTM (eg. JtagDTM)
	interface Ifc_DM_DTM;
    interface Put#(Bit#(41)) putCommand;// 7 (ABITS) + 32 + 2
    interface Get#(Bit#(34)) getResponse;
  endinterface

  // sub Interface Between DebugModule and Soc for Connection to hart
  // The HART can Assert Available say through the shakti specific csr
  interface Debug_Hart_Ifc;
    method Tuple3#(Bit#(1),Bit#(AbstractAddrWidth),Bit#(XLEN)) abstractOperation;
    method Action  abstractReadResponse(Bit#(XLEN) abstractResponse);
    method Bit#(1) haltRequest();
    method Bit#(1) resumeRequest();
    method Bit#(1) hart_reset();                               // Signal TO Reset HART -Active HIGH
    method Action  setHalted(Bit#(1) halted);
    method Action  setAvailable(Bit#(1) available);
  endinterface

	// Interface between Debug Module and SOC
  interface Ifc_riscvDebug013;
    interface Ifc_DM_DTM dtm;
    interface Debug_Hart_Ifc hart;
    interface AXI4_Master_IFC#(PADDR, XLEN, 0 ) debug_master;
    method Bit#(1) getNDMReset();              // Reset Everything apart from DM & DTM -Active HIGH
  endinterface

  (*synthesize*)
  (* conflict_free = "responseSystemBusRead,responseSystemBusWrite" *)
  (* preempts = "(responseSystemBusRead,responseSystemBusWrite), dtm_putCommand_put" *)
  module mkriscvDebug013(Ifc_riscvDebug013);

    Clock curr_clk <- exposeCurrentClock;                                  // current default clock
    Reset curr_reset<-exposeCurrentReset;                                  // current default reset

    //  dm_reset is driven by rule generate_derived_reset(dmActive==0)
    MakeResetIfc dm_reset <-mkReset(0,False,curr_clk);            // create a new reset for curr_clk
    Reset derived_reset <- mkResetEither(dm_reset.new_rst,curr_reset);     // OR default and new_rst

    //#  UArch Registers
    Reg#(Bit#(1)) haltedHart <- mkReg(0,reset_by derived_reset);
    Reg#(Bit#(1)) availableHart <- mkReg(0,reset_by derived_reset);

    //#   Interface Registers
    Reg#(Maybe#(Bit#(34))) dmi_response <- mkReg(tagged Invalid);
    Reg#(Maybe#(Bit#(XLEN))) abstRespReg <- mkReg(tagged Invalid,reset_by derived_reset);
    Reg#(Bit#(1)) startSBAccess <- mkReg(0,reset_by derived_reset);
    Reg#(Bit#(1)) sb_read_write <- mkReg(0,reset_by derived_reset); // Sadly was not implict !
    //#  Arch Registers

    // dmstatus DM h'11
    // The All and any signals will be registered and will have a rule (name) updating them.
    Reg#(Bit#(9)) dmstatusPad0  = readOnlyReg(0);                         //- dmstatus b31-23
    Reg#(Bit#(1)) impEbreak     = readOnlyReg(0);                         //- dmstatus b22      -RW
    Reg#(Bit#(2)) dmstatusPad1  = readOnlyReg(0);                         //- dmstatus b21-20
    Reg#(Bit#(1)) allHaveReset  <- mkReg(0,reset_by derived_reset);       //- dmstatus b19      - R
    Reg#(Bit#(1)) anyHaveReset  <- mkReg(0,reset_by derived_reset);       //- dmstatus b18      - R
    Reg#(Bit#(1)) allResumeAck  <- mkReg(0,reset_by derived_reset);       //- dmstatus b17      - R
    Reg#(Bit#(1)) anyResumeAck  <- mkReg(0,reset_by derived_reset);       //- dmstatus b16      - R
    Reg#(Bit#(1)) allNonExistent<- mkReg(0,reset_by derived_reset);       //- dmstatus b15      - R
    Reg#(Bit#(1)) anyNonExistent<- mkReg(0,reset_by derived_reset);       //- dmstatus b14      - R
    Reg#(Bit#(1)) allUnAvail    <- mkReg(0,reset_by derived_reset);       //- dmstatus b13      - R
    Reg#(Bit#(1)) anyUnAvail    <- mkReg(0,reset_by derived_reset);       //- dmstatus b12      - R
    Reg#(Bit#(1)) allRunning    <- mkReg(0,reset_by derived_reset);       //- dmstatus b11      - R
    Reg#(Bit#(1)) anyRunning    <- mkReg(0,reset_by derived_reset);       //- dmstatus b10      - R
    Reg#(Bit#(1)) allHalted     <- mkReg(0,reset_by derived_reset);       //- dmstatus b9       - R
    Reg#(Bit#(1)) anyHalted     <- mkReg(0,reset_by derived_reset);       //- dmstatus b8       - R
    Reg#(Bit#(1)) authenticated <- mkReg(0,reset_by derived_reset);       //- dmstatus b7       - R
    Reg#(Bit#(1)) authbusy      <- mkReg(0,reset_by derived_reset);       //- dmstatus b6       - R
    Reg#(Bit#(1)) hasResetHaltRequest = readOnlyReg(1);                   //- dmstatus b5       - R
    Reg#(Bit#(1)) confStrPtrValid = readOnlyReg(1);                       //- dmstatus b4       - R
    //! Version = 2 => Supports spec 0.13
    Reg#(Bit#(4)) version       = readOnlyReg(4'b0010);                   //- dmstatus b3-0     - R

    Reg#(Bit#(32)) dmstatus = concatReg20(  dmstatusPad0,impEbreak,dmstatusPad1,
        readOnlyReg(allHaveReset),readOnlyReg(anyHaveReset),readOnlyReg(allResumeAck),
        readOnlyReg(anyResumeAck),readOnlyReg(allNonExistent),readOnlyReg(anyNonExistent),
        readOnlyReg(allUnAvail),readOnlyReg(anyUnAvail),readOnlyReg(allRunning),
        readOnlyReg(anyRunning),readOnlyReg(allHalted),readOnlyReg(anyHalted),
        readOnlyReg(authenticated),readOnlyReg(authbusy),hasResetHaltRequest,confStrPtrValid,
        version);

    // dmcontrol DM h'10

    Reg#(Bit#(1)) haltReq       <- mkReg(0,reset_by derived_reset);       //- dmcontrol b31     - W
    Reg#(Bit#(1)) resumeReq     <- mkReg(0,reset_by derived_reset);       //- dmcontrol b30     - W
    Reg#(Bit#(1)) hartReset     <- mkReg(0,reset_by derived_reset);       //- dmcontrol b29     -RW
    Reg#(Bit#(1)) ackHaveReset  <- mkReg(0,reset_by derived_reset);       //- dmcontrol b28     - W
    Reg#(Bit#(1)) dmcontrolPad0 = readOnlyReg(0);                         //- dmcontrol b27
    Reg#(Bit#(1)) haSel         = readOnlyReg(0);                         //- dmcontrol b26     -RW
    Reg#(Bit#(10))hartSelLo     <- mkReg(0,reset_by derived_reset);       //- dmcontrol b25-16  -RW
    Reg#(Bit#(10))hartSelHi     <- mkReg(0,reset_by derived_reset);       //- dmcontrol b15-6   -RW
    Reg#(Bit#(2)) dmcontrolPad1 = readOnlyReg(0);                         //- dmcontrol b5-4
    Reg#(Bit#(1)) setResetHaltRequest<-mkReg(0,reset_by derived_reset);   //- dmcontrol b3      - W
    Reg#(Bit#(1)) clrResetHaltReq <- mkReg(0,reset_by derived_reset);     //- dmcontrol b2      - W
    Reg#(Bit#(1)) nDMReset      <- mkReg(0,reset_by derived_reset);       //- dmcontrol b1      -RW
    Reg#(Bit#(1)) dmActive      <- mkReg(0);                              //- dmcontrol b0      -RW

    Reg#(Bit#(32)) dmcontrol = concatReg13( haltReq,resumeReq,hartReset,ackHaveReset,
        dmcontrolPad0,haSel,hartSelLo,hartSelHi,dmcontrolPad1,setResetHaltRequest,
        clrResetHaltReq,nDMReset,dmActive);

    // hartinfo DM 'h12

    Reg#(Bit#(8)) hartinfoPad0  = readOnlyReg(0);                         //- hartinfo b31-24
    Reg#(Bit#(4)) nScratch      = readOnlyReg(0);                         //- hartinfo b23-20   - R
    Reg#(Bit#(3)) hartinfoPad1  = readOnlyReg(0);                         //- hartinfo b19-17
    Reg#(Bit#(1)) dataAccess    = readOnlyReg(0);                         //- hartinfo b16      - R
    Reg#(Bit#(4)) dataSize      = readOnlyReg(4'd12);                     //- hartinfo b15-12   - R
    Reg#(Bit#(12))dataAddr      = readOnlyReg(12'h7c0);                   //- hartinfo b11-0    - R ** V

    Reg#(Bit#(32)) hartinfo = concatReg6(   hartinfoPad0,nScratch,hartinfoPad1,dataAccess,
                                            dataSize,dataAddr);

    // hawindowsel DM 'h14

    Reg#(Bit#(17))hawindowselPad0 = readOnlyReg(0);                       //- hawindowsel b31-15
    Reg#(Bit#(15))hawindowselR  = readOnlyReg(0);                         //- hawindowsel b14-0 -RW

    Reg#(Bit#(32))hawindowsel = concatReg2(hawindowselPad0,hawindowselR);

    // hawindow DM 'h15

    Reg#(Bit#(31))hawindowPad0  = readOnlyReg(0);                         //- hawindow b31-1
    Reg#(Bit#(1)) maskData      <- mkReg(0,reset_by derived_reset);       //- hawindow b0       -RW

    Reg#(Bit#(32)) hawindow = concatReg2(hawindowPad0,maskData);

    // abstractcs DM 'h16

    Reg#(Bit#(3)) abstractcsPad0 = readOnlyReg(0);                        //- abstractcs b31-29
    Reg#(Bit#(5)) progBufSize   = readOnlyReg(0);                         //- abstractcs b28-24 - R
    Reg#(Bit#(11))abstractcsPad1 = readOnlyReg(0);                        //- abstractcs b23-13
    Reg#(Bit#(1)) abst_busy     <- mkReg(0,reset_by derived_reset);       //- abstractcs b12    - R
    Reg#(Bit#(1)) abstractcsPad2 = readOnlyReg(0);                        //- abstractcs b11
    Reg#(Bit#(3)) cmderr        <- mkReg(0,reset_by derived_reset);       //- abstractcs b10-8  -RW
    Reg#(Bit#(4)) abstractcsPad3 = readOnlyReg(0);                        //- abstractcs b7-4
    Reg#(Bit#(4)) dataCount     = readOnlyReg(12);                        //- abstractcs b3-0   - R

    Reg#(Bit#(32)) abstractcs = concatReg8( abstractcsPad0,progBufSize,abstractcsPad1,
        readOnlyReg(abst_busy),abstractcsPad2,readOnlyReg(cmderr),abstractcsPad3,dataCount);

    // command DM 'h17
    /*  Only Abstract Register Reads are asupported Therefore that Template has been fixed.*/

    Reg#(Bit#(8)) abst_ar_cmdType <- mkReg(0,reset_by derived_reset);     //- command b31-24    -RW
    Reg#(Bit#(1)) abst_ar_pad0  = readOnlyReg(0);                         //- command b23
    Reg#(Bit#(3)) abst_ar_aarSize <- mkReg(0,reset_by derived_reset);     //- command b22-20    -RW
    Reg#(Bit#(1)) abst_ar_aarPostIncrement  <- mkReg(0,reset_by derived_reset);//- command b19  -RW
    Reg#(Bit#(1)) abst_ar_postExec = readOnlyReg(0);                      //- command b18       -RW
    Reg#(Bit#(1)) abst_ar_transfer  <- mkReg(0,reset_by derived_reset);   //- command b17       -RW
    Reg#(Bit#(1)) abst_ar_write <- mkReg(0,reset_by derived_reset);       //- command b16       -RW
    Reg#(Bit#(16))abst_ar_regNo <- mkReg(0,reset_by derived_reset);       //- command b15-0     -RW

    Reg#(Bit#(32)) abst_command = concatReg8(   abst_ar_cmdType,abst_ar_pad0,abst_ar_aarSize,
        abst_ar_aarPostIncrement,abst_ar_postExec,abst_ar_transfer,abst_ar_write,abst_ar_regNo);

    // abstractauto DM 'h18

    Reg#(Bit#(16))autoExecProgBuf  = readOnlyReg(0);                      //-abstractauto b31-16-RW
    Reg#(Bit#(4)) abstractautoPad0 = readOnlyReg(0);                      //-abstractauto b15-12
    /* No ProgBuf Access Supported */
    Reg#(Bit#(12)) autoExecData  <- mkReg(0,reset_by derived_reset);      //-abstractauto b11-0 -RW

    Reg#(Bit#(32)) abstractauto = concatReg3(autoExecProgBuf,abstractautoPad0,autoExecData);

    // configstrptr0 DM 'h19-1c
    Reg#(Bit#(32))configstrptr0 = readOnlyReg(0);                         //- configstrptr0     - R
    Reg#(Bit#(32))configstrptr1 = readOnlyReg(0);                         //- configstrptr1     - R
    Reg#(Bit#(32))configstrptr2 = readOnlyReg(0);                         //- configstrptr2     - R
    Reg#(Bit#(32))configstrptr3 = readOnlyReg(0);                         //- configstrptr3     - R

    // nextdm   DM 'h1d
    Reg#(Bit#(32))nextdm    = readOnlyReg(0);                             //- nextdm b31-0      - R

    // data0 - 11   DM 'h04-'h0f
    Vector#(12, Reg#(Bit#(32))) abst_data;                                //- dataX b31-0       -RW
    abst_data <- replicateM(mkReg(0,reset_by derived_reset));

    // progbuf0-15  DM 'h20-'h2f
    Vector#(16, Reg#(Bit#(32))) progbuf;                                  //- progbufX          -RW
    //progbuf ? replicateM(readOnlyReg(0));  // Not Able to make this a vector of read only reg :|
    progbuf <- replicateM(mkReg(0,reset_by derived_reset)); // Not Able to make this a vector of read only reg :|

    // authdata DM 'h30
    Reg#(Bit#(32)) auth_data <- mkReg(0,reset_by derived_reset);          //- {impl specific}   -RW

    // haltsum0 DM 'h40 , 'h13 , 'h34 , 'h35
    Reg#(Bit#(32)) haltSum0 = concatReg2(readOnlyReg(31'h00000000),readOnlyReg(haltedHart));   //haltSum0    - R
    Reg#(Bit#(32)) haltSum1 = readOnlyReg(0);
    Reg#(Bit#(32)) haltSum2 = readOnlyReg(0);
    Reg#(Bit#(32)) haltSum3 = readOnlyReg(0);

    // sbcs DM 'h38
    Reg#(Bit#(3)) sbVersion = readOnlyReg(1);                             // sbcs b31-29        - R
    /* 0=> old spec , 1 => current spec */
    Reg#(Bit#(6)) sbcsPad0  = readOnlyReg(0);                             // sbcs b28-23
    Reg#(Bit#(1)) sbBusyError <- mkReg(0,reset_by derived_reset);         // sbcs b22           -RW1c
    Reg#(Bit#(1)) sbBusy    <- mkReg(0,reset_by derived_reset);           // sbcs b21           - R
    Reg#(Bit#(1)) sbReadOnAddr <- mkReg(0,reset_by derived_reset);        // sbcs b20           -RW
    Reg#(Bit#(3)) sbAccess  <- mkReg(2,reset_by derived_reset);           // sbcs b19-17        -RW
    Reg#(Bit#(1)) sbAutoIncrement <- mkReg(0,reset_by derived_reset);     // sbcs b16           -RW
    Reg#(Bit#(1)) sbReadOnData <- mkReg(0,reset_by derived_reset);        // sbcs b15           -RW
    Reg#(Bit#(3)) sbError   <- mkReg(0,reset_by derived_reset);           // sbcs b14-12        -RW1c
    Reg#(Bit#(7)) sbASize = readOnlyReg(`FIVO(PADDR)); /* Addr Width */    // sbcs b11-5         - R
    /* sbAccessX => Supports X  bit accesses */
    Reg#(Bit#(1)) sbAccess128 = readOnlyReg(pack(valueOf(XLEN)>64));      // sbcs b4            - R
    Reg#(Bit#(1)) sbAccess64 = readOnlyReg(pack(valueOf(XLEN)>32));       // sbcs b3            - R
    Reg#(Bit#(1)) sbAccess32 = readOnlyReg(pack(valueOf(XLEN)>16));       // sbcs b2            - R
    Reg#(Bit#(1)) sbAccess16 = readOnlyReg(pack(valueOf(XLEN)>8));        // sbcs b1            - R
    Reg#(Bit#(1)) sbAccess8  = readOnlyReg(pack(valueOf(XLEN)>0));        // sbcs b0            - R

    Reg#(Bit#(32)) sbcs = concatReg15(  sbVersion,sbcsPad0,readOnlyReg(sbBusyError),
        readOnlyReg(sbBusy),sbReadOnAddr,sbAccess,sbAutoIncrement,sbReadOnData,readOnlyReg(sbError),
        sbASize,sbAccess128,sbAccess64,sbAccess32,sbAccess16,sbAccess8);

    // sbaddress0 DM 'h39 , 'h3a , 'h3b , 'h37
    Reg#(Bit#(32)) sbAddress0 <- mkReg(0,reset_by derived_reset);         // sbAddress0 b31-0   -RW
    Reg#(Bit#(32)) sbAddress1 <- mkReg(0,reset_by derived_reset);         // sbAddress1 b31-0   -RW
    Reg#(Bit#(32)) sbAddress2 =  readOnlyReg(0);                          // sbAddress2 b31-0   -RW
    Reg#(Bit#(32)) sbAddress3 =  readOnlyReg(0);                          // sbAddress3 b31-0   -RW

    // sbdata0  DM 'h3c , 'h3d , 'h3d , 'h3d
    Reg#(Bit#(32)) sbData0 <- mkReg(0,reset_by derived_reset);            // sbdata b31-0       -RW
    Reg#(Bit#(32)) sbData1 <- mkReg(0,reset_by derived_reset);            // sbdata1 b31-0      -RW
    Reg#(Bit#(32)) sbData2 =  readOnlyReg(0);                             // sbdata1 b31-0      -RW
    Reg#(Bit#(32)) sbData3 =  readOnlyReg(0);                             // sbdata1 b31-0      -RW

    /*      MODULE RULES      */

    //-RULE: Assert derived_reset when dm is inactive
    rule generate_derived_reset(dmActive==0);
      dm_reset.assertReset;
    endrule

    // rule setDMStatusBits;

    // endrule

    /*    System Bus ACCESS   */
    AXI4_Master_Xactor_IFC#(PADDR,XLEN,0) master_xactor <- mkAXI4_Master_Xactor;// (reset_by derived_reset); Lot of info lost at module boundary errors for AXI4 State vars

    //+ rule :: access_system_bus
    //+
    //+ Only Parametrised for Bus Widths of 64 & 32
    //+ And Address Widths of 64 & 32
    rule access_system_bus((sbError == 0) && (sbBusyError == 0) && (sbBusy == 0) && (startSBAccess == 1) );
      Bit#(64) write_data = 0;
      Bit#(PADDR) address = 0;
      Bit#(4)  size = 0;      // size in bytes
      Bit#(8)  write_strobe = 0;
      Bool readAccess = (sb_read_write == 1); //((sbReadOnAddr ==1) || (sbReadOnData==1));
      Bit#(3) align = 0;
      Bit#(3) detect_error = pack(SbNoError);

      // Access Size
      case (sbAccess)
        0:begin
            if(sbAccess8 == 0)
              detect_error = pack(SbSize);
            size = 1 ;
            write_data = duplicate(sbData0[7:0]);
            write_strobe = 8'b0000_0001;
          end
        1:begin
            if(sbAccess16 == 0)
              detect_error = pack(SbSize);
            size = 2 ;
            write_data = duplicate(sbData0[15:0]);
            write_strobe = 8'b0000_0011;
          end
        2:begin
            if(sbAccess32 == 0)
              detect_error = pack(SbSize);
            size = 4 ;
            write_data = duplicate(sbData0);
            write_strobe = 8'b0000_1111;
          end
        3:begin
            if(sbAccess64 == 0)
              detect_error = pack(SbSize);
            size = 8 ;
            write_data = {sbData1,sbData0};
            write_strobe = 8'b1111_1111;
          end
      endcase

      // Address
      if(readAccess)begin
        address = truncate({sbAddress1,sbAddress0});
        //align = {0,sbAddress0[1:0]};    // All Memory can be accessed Word Aligned (32b aligned) ?
        // mis-aligned detect - REad
        if((size == 8) && (sbAddress0[1:0] != 0)) // How are 64 bit reads to be aligned ?
          detect_error = pack(SbAlign);
        else if((size == 4) && (sbAddress0[1:0] != 0))
          detect_error = pack(SbAlign);
        else if((size == 2) && (sbAddress0[0] != 0))
          detect_error = pack(SbAlign);
      end
      else begin
        // Addresses WORD Aligned
        if(valueOf(XLEN)==64)begin
          address = truncate({sbAddress1,sbAddress0[31:3],3'b000});
          align = sbAddress0[2:0];
        end
        else if(valueOf(XLEN)==32)begin
          address = truncate({sbAddress1,sbAddress0[31:2],2'b00});
          align = {0,sbAddress0[1:0]};
        end
        // mis-aligned Detect - Write
        if((size == 8) && (align[2:0] !=0))
          detect_error = pack(SbAlign);
        else if((size == 4) && (align[1:0] !=0 ))
          detect_error = pack(SbAlign);
        else if((size == 2) && (align[0]   !=0 ))
          detect_error = pack(SbAlign);
        else
          write_strobe = write_strobe<<(align);
      end
      // Bus Access
      if(detect_error == pack(SbNoError))begin
        if(valueOf(VERBOSE)==1)
          $display($time, "X\tDebug:Memory Access - Address : %h ,operation %b ",address,readAccess);
        if(readAccess)begin
          let read_request = AXI4_Rd_Addr {araddr: truncate(address),aruser: 0, arlen: 0,
            arsize:truncate(size),arburst: 'b01,arid:`FIVO(AxiID)};
          master_xactor.i_rd_addr.enq(read_request);
        end
        else begin
          let request_data  = AXI4_Wr_Data{wdata: write_data[valueOf(TSub#(XLEN,1)):0],
            wstrb: truncate(write_strobe),wlast:True, wid:`FIVO(AxiID)};
          let request_address = AXI4_Wr_Addr{ awaddr: address, awuser:0,
            awlen: 0, awsize: size[2:0],awburst: 'b01,awid:`FIVO(AxiID)};
          master_xactor.i_wr_addr.enq(request_address) ;
          master_xactor.i_wr_data.enq(request_data) ;
        end

        if(sbAutoIncrement == 1)begin
          Bit#(64)lv_new_address = {sbAddress1,sbAddress0} + zeroExtend(size);
          sbAddress0 <= lv_new_address[31:0];
          sbAddress1 <= lv_new_address[63:32];
          end
        sbBusy <= 1; // Assert Busy
      end
      else begin
        if(valueOf(VERBOSE)==1)
          $display($time, "XE\tDebug:Memory Access ERROR ",detect_error);
      end
      sbError <= detect_error;
      startSBAccess <= 0; // Transaction has been issued , disable trigger
    endrule

    rule responseSystemBusRead;
      let response <- pop_o(master_xactor.o_rd_data);
      // if width less than 32 upper bits can take on anything - spec
      if (response.rresp==AXI4_OKAY && (response.rid==`FIVO(AxiID))) begin
        Bit #(64) resp=zeroExtend (response.rdata);
        sbData0<=resp[31:0] ;
        sbData1<=resp[63:32] ;
      end
      else begin
        sbError <= pack(SbOther);// lookup bresp values !
        if(valueOf(VERBOSE)==1)
          $display($time, "XE\tDebug:Memory Access: Read ERROR %h AXI:%h ",pack(SbOther),response.rresp);
      end
      sbBusy <=0; // De Assert Busy
    endrule

    rule responseSystemBusWrite;
      let response <- pop_o(master_xactor.o_wr_resp) ;
      if(response.bresp == AXI4_OKAY && (response.bid==`FIVO(AxiID)))begin
        if(valueOf(VERBOSE)==1)
          $display($time, "WS\tDEBUG: Write Done Successfully");
      end
      else begin
        sbError <= pack(SbOther);// lookup bresp values !
        if(valueOf(VERBOSE)==1)
          $display($time, "XE\tDebug:Memory Access: Write ERROR %h AXI:%h",pack(SbOther),response.bresp);
      end
      sbBusy <=0; // De Assert Busy
    endrule

    /*      Interface Configuration & Method Definitions        */

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
          if(valueOf(VERBOSE) == 1)
            $display($time ,"*\tDebug DMI Access@ %h , op %h , Data %h",dmi_addr,dmi_op,dmi_data);
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
              `FIVO(SBDATA0): begin
                                dmi_response_data = sbData0;  // Does actually not reading (ret 0) while busy help ppa ?
                                if(sbBusy == 1)
                                  sbBusyError <= 1;
                                else if((sbBusyError == 0) && (sbBusy == 0) && (sbReadOnData == 1))begin
                                  startSBAccess <= 1;
                                  sb_read_write <= 1;
                                  end
                              end
              `FIVO(SBDATA1):begin
                                dmi_response_data = sbData1;
                                if(sbBusy == 1)
                                  sbBusyError <= 1;
                              end
              `FIVO(SBDATA2):begin
                                dmi_response_data = sbData2;
                                if(sbBusy == 1)
                                  sbBusyError <= 1;
                              end
              `FIVO(SBDATA3):begin
                                dmi_response_data = sbData3;
                                if(sbBusy == 1)
                                  sbBusyError <= 1;
                              end
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
              `FIVO(HAWINDOWSEL):        hawindowsel <= dmi_data;
              `FIVO(HAWINDOW):           hawindow <= dmi_data;
              `FIVO(ABSTRACTCTS):        abstractcs <= dmi_data;
              `FIVO(COMMAND):            abst_command <= dmi_data;
              `FIVO(ABSTRACTAUTO):       abstractauto <= dmi_data;
              `FIVO(AUTHDATA):           auth_data <= dmi_data;
              `FIVO(SBADDRESS3):begin
                                if(sbBusy == 1)
                                  sbBusyError <=1;
                                end
              `FIVO(SBCS):begin
                            sbcs <= dmi_data;
                            if(dmi_data[22] == 1'b1)
                              sbBusyError <= 0; // Write one to clear !
                            if(dmi_data[14:12] == 3'b111)                                        // V* Writing 001 or 111
                              sbError <= 0;
                          end
              `FIVO(SBADDRESS0):begin
                                if(sbBusy == 1)
                                  sbBusyError <=1;
                                else
                                  sbAddress0 <= dmi_data;
                                if((sbBusy == 0 ) && (sbBusyError == 0 ) && (sbReadOnAddr == 1 ))begin
                                  startSBAccess <= 1;
                                  sb_read_write <= 1;
                                  end
                                end
              `FIVO(SBADDRESS1):begin
                                if(sbBusy == 1)
                                  sbBusyError <=1;
                                else
                                  sbAddress1 <= dmi_data;
                                end
              `FIVO(SBADDRESS2):begin
                                if(sbBusy == 1)
                                  sbBusyError <=1;
                                end
              `FIVO(SBDATA0):begin
                              if(sbBusy == 1)
                                sbBusyError <=1;
                              else if((sbBusy == 0)&&(sbBusyError == 0 ))begin
                                sbData0 <= dmi_data;
                                startSBAccess <= 1;
                                sb_read_write <= 0;
                                end
                              end
              `FIVO(SBDATA1):begin
                              if (sbBusy == 1)
                                sbBusyError <=1;
                              else
                                sbData1 <= dmi_data;
                            end
              `FIVO(SBDATA2):begin
                              if (sbBusy == 1)
                                sbBusyError <=1;
                            end
              `FIVO(SBDATA3):begin
                              if (sbBusy == 1)
                                sbBusyError <=1;
                            end
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