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
// Conforms to Riscv-Debug spec 0.13 commit cb64db0407b5e6f755ab3c1549e0e1acf4ea5f6d
// Preseltly implemented Limited to one Hart

package riscvDebug013Pbuf;
  `define CORE_AXI4
  `include "Logger.bsv"
  import Vector ::*;
  import GetPut :: *;
  import Assert :: *;
  import BUtils::*;
  import Semi_FIFOF::*;
  import Clocks::*;
  import ConcatReg::*;
  import ConfigReg::*;
  import DReg::*;
`ifdef CORE_AXI4
  import AXI4_Types::*;
`elsif CORE_AXI4Lite
  import AXI4_Lite_Types::*;
`endif
  import debug_types::*;

  `define FIVO(x) fromInteger(valueOf(x))
  `define DebugBase   'h0000_0000

  (* doc = " Module: This Module implements the RISC-V Debug Spec 0.13 \
    The Module Exposes a Ifc_riscvDebug013 Type Interface which intern houses \
    a Axi4 / Axi4-Lite Master , an AXI4/ Axi4-Lite interface onto the system bus \
    a IFC_DM_DTM reciever interface from the Debug Transport Module \
    and a (to be vectorised )Side band interface Debug_Hart_Ifc that \
    enables the debug module To Halt , Resume ,  and direct the core to \
    execute the program buffer "*)
  (*synthesize*)
  (* conflict_free = "responseSystemBusRead,responseSystemBusWrite" *)
  (* conflict_free = "access_system_bus,dtm_putCommand_put"*)
  (* conflict_free = "responseSystemBusWrite,dtm_putCommand_put"*)
  (* conflict_free = "responseSystemBusRead, dtm_putCommand_put"*)
  module mkriscvDebug013(Ifc_riscvDebug013);
    String debug = "";
    Clock curr_clk <- exposeCurrentClock;
    Reset curr_reset<-exposeCurrentReset;
    MakeResetIfc dm_reset <-mkReset(0,False,curr_clk);
    Reset derived_reset <- mkResetEither(dm_reset.new_rst,curr_reset);
    Vector#(HartCount,Reg#(Bit#(1))) vrg_have_reset   <- replicateM(mkReg(0,reset_by derived_reset));
    Vector#(HartCount,Reg#(Bit#(1))) vrg_resume_ack   <- replicateM(mkReg(0,reset_by derived_reset));
    Reg#(Bit#(HartCount)) rg_non_existent = readOnlyReg(0);
    Reg#(Bit#(1)) rg_clear_resume_ack <- mkDReg(0);   
    Vector#(HartCount,Reg#(Bit#(1))) vrg_unavailable  <- replicateM(mkReg(0,reset_by derived_reset));
    Vector#(HartCount,Reg#(Bit#(1))) vrg_halted       <- replicateM(mkReg(0,reset_by derived_reset));
    Vector#(HartCount,Reg#(Bit#(1))) vrg_hawsel       <- replicateM(mkReg(0,reset_by derived_reset));
    Vector#(HartCount,Reg#(Bit#(1))) vrg_halted_sdw     <- replicateM(mkReg(0,reset_by derived_reset)); 
    Vector#(HartCount,Reg#(Bit#(1))) vrg_have_reset_sdw <- replicateM(mkReg(0,reset_by derived_reset));
    Reg#(Maybe#(Bit#(34))) dmi_response <- mkReg(tagged Invalid);
    Reg#(Bit#(1)) startSBAccess <- mkReg(0,reset_by derived_reset);
    Reg#(Bit#(1)) sb_read_write <- mkReg(0,reset_by derived_reset);
    Reg#(Bit#(2)) abst_command_good <- mkReg(0,reset_by derived_reset); // guards Abstract interface
    // dmstatus DM h'11
    Reg#(Bit#(9)) dmstatusPad0  = readOnlyReg(0);
    Reg#(Bit#(1)) impEbreak     = readOnlyReg(0);
    Reg#(Bit#(2)) dmstatusPad1  = readOnlyReg(0);
    Wire#(Bit#(1)) allHaveReset  <- mkReg(1);
    Wire#(Bit#(1)) anyHaveReset  <- mkReg(1);
    Wire#(Bit#(1)) allResumeAck  <- mkReg(0);
    Wire#(Bit#(1)) anyResumeAck  <- mkReg(0);
    Wire#(Bit#(1)) allNonExistent<- mkReg(0);
    Wire#(Bit#(1)) anyNonExistent<- mkReg(0);
    Wire#(Bit#(1)) allUnAvail    <- mkReg(0);
    Wire#(Bit#(1)) anyUnAvail    <- mkReg(0);
    Wire#(Bit#(1)) allRunning    <- mkReg(1);
    Wire#(Bit#(1)) anyRunning    <- mkReg(1);
    Wire#(Bit#(1)) allHalted     <- mkReg(0);
    Wire#(Bit#(1)) anyHalted     <- mkReg(0);
    Reg#(Bit#(1)) authenticated <- mkReg(0);
    Reg#(Bit#(1)) authbusy      <- mkReg(0,reset_by derived_reset);
    Reg#(Bit#(1)) hasResetHaltRequest = readOnlyReg(1);
    Reg#(Bit#(1)) confStrPtrValid = readOnlyReg(1);
    Reg#(Bit#(4)) version       = readOnlyReg(4'b0010);//! Version = 2 => Supports spec 0.13
    Reg#(Bit#(32)) dmstatus = concatReg20(  dmstatusPad0,impEbreak,dmstatusPad1,
        readOnlyReg(allHaveReset),readOnlyReg(anyHaveReset),readOnlyReg(allResumeAck),
        readOnlyReg(anyResumeAck),readOnlyReg(allNonExistent),readOnlyReg(anyNonExistent),
        readOnlyReg(allUnAvail),readOnlyReg(anyUnAvail),readOnlyReg(allRunning),
        readOnlyReg(anyRunning),readOnlyReg(allHalted),readOnlyReg(anyHalted),
        readOnlyReg(authenticated),readOnlyReg(authbusy),hasResetHaltRequest,confStrPtrValid,
        version);
    // dmcontrol DM h'10
    Reg#(Bit#(1)) haltReq       <- mkReg(0,reset_by derived_reset);
    Reg#(Bit#(1)) resumeReq     <- mkReg(0,reset_by derived_reset);
    Reg#(Bit#(1)) hartReset     <- mkReg(0,reset_by derived_reset);
    Reg#(Bit#(1)) ackHaveReset  <- mkDReg(0,reset_by derived_reset);
    Reg#(Bit#(1)) dmcontrolPad0 = readOnlyReg(0);
    Reg#(Bit#(1)) haSel         = readOnlyReg(0);
    Reg#(Bit#(10))hartSelLo     = readOnlyReg(0);
    Reg#(Bit#(10))hartSelHi     = readOnlyReg(0);
    Reg#(Bit#(2)) dmcontrolPad1 = readOnlyReg(0);
    Reg#(Bit#(1)) setResetHaltRequest<-mkReg(0,reset_by derived_reset);
    Reg#(Bit#(1)) clrResetHaltReq <- mkReg(0,reset_by derived_reset);
    Reg#(Bit#(1)) nDMReset      <- mkReg(0,reset_by derived_reset);
    Reg#(Bit#(1)) dmActive      <- mkReg(0);
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
    // Correct this to chance with Hawindow sel.!
    Reg#(Bit#(31))hawindowPad0  = readOnlyReg(0);                         //- hawindow b31-1
    Reg#(Bit#(1)) maskData      <- mkReg(0,reset_by derived_reset);       //- hawindow b0       -RW
    Reg#(Bit#(32)) hawindow = concatReg2(hawindowPad0,maskData);
    // abstractcs DM 'h16
    Reg#(Bit#(3)) abstractcsPad0 = readOnlyReg(0);                        //- abstractcs b31-29
    Reg#(Bit#(5)) progBufSize   = readOnlyReg(16);                         //- abstractcs b28-24 - R
    Reg#(Bit#(11))abstractcsPad1 = readOnlyReg(0);                        //- abstractcs b23-13
    Reg#(Bit#(1)) abst_busy     <- mkReg(0,reset_by derived_reset);       //- abstractcs b12    - R
    Reg#(Bit#(1)) abstractcsPad2 = readOnlyReg(0);                        //- abstractcs b11
    Reg#(Bit#(3)) abst_cmderr        <- mkReg(0,reset_by derived_reset);       //- abstractcs b10-8  -RW
    Reg#(Bit#(4)) abstractcsPad3 = readOnlyReg(0);                        //- abstractcs b7-4
    Reg#(Bit#(4)) dataCount     = readOnlyReg(12);                        //- abstractcs b3-0   - R
    Reg#(Bit#(32)) abstractcs = concatReg8( abstractcsPad0,progBufSize,abstractcsPad1,
        readOnlyReg(abst_busy),abstractcsPad2,readOnlyReg(abst_cmderr),abstractcsPad3,dataCount);
    // command DM 'h17
    /*  Only Abstract Register Reads are asupported Therefore that Template has been fixed.*/
    Reg#(Bit#(8)) abst_ar_cmdType <- mkReg(0,reset_by derived_reset);     //- command b31-24    -RW
    Reg#(Bit#(1)) abst_ar_pad0  = readOnlyReg(0);                         //- command b23
    Reg#(Bit#(3)) abst_ar_aarSize <- mkReg(0,reset_by derived_reset);     //- command b22-20    -RW
    Reg#(Bit#(1)) abst_ar_aarPostIncrement  <- mkReg(0,reset_by derived_reset);//- command b19  -RW
    Reg#(Bit#(1)) abst_ar_postExec  <- mkReg(0,reset_by derived_reset);   //- command b18       -RW
    Reg#(Bit#(1)) abst_ar_transfer  <- mkReg(0,reset_by derived_reset);   //- command b17       -RW
    Reg#(Bit#(1)) abst_ar_write <- mkReg(0,reset_by derived_reset);       //- command b16       -RW
    Reg#(Bit#(16))abst_ar_regno <- mkReg(0,reset_by derived_reset);       //- command b15-0     -RW
    Reg#(Bit#(32)) abst_command = concatReg8(   abst_ar_cmdType,abst_ar_pad0,abst_ar_aarSize,
        abst_ar_aarPostIncrement,abst_ar_postExec,abst_ar_transfer,abst_ar_write,abst_ar_regno);
    // abstractauto DM 'h18
    Reg#(Bit#(16))autoExecProgBuf <- mkReg(0,reset_by derived_reset);     //-abstractauto b31-16-RW
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
    // authdata DM 'h30
    Reg#(Bit#(32)) auth_data <- mkReg(0,reset_by derived_reset);          //- {impl specific}   -RW
    // haltsum0 DM 'h40 , 'h13 , 'h34 , 'h35
    Reg#(Bit#(TSub#(32,HartCount))) hsum_padding = readOnlyReg(0);
    Reg#(Bit#(32)) haltSum0 = concatReg2(hsum_padding,vrg_halted[0]); //How to make vector? //haltSum0    - R
    Reg#(Bit#(32)) haltSum1 = readOnlyReg(0);
    Reg#(Bit#(32)) haltSum2 = readOnlyReg(0);
    Reg#(Bit#(32)) haltSum3 = readOnlyReg(0);
    // sbcs DM 'h38
    Reg#(Bit#(3)) sbVersion = readOnlyReg(1);                             // sbcs b31-29        - R
    /* 0=> old spec , 1 => current spec */
    Reg#(Bit#(6)) sbcsPad0  = readOnlyReg(0);                             // sbcs b28-23
    Reg#(Bit#(1)) sbBusyError <- mkReg(0,reset_by derived_reset);         // sbcs b22           -RW1c
    Reg#(Bit#(1)) sbBusy    <- mkConfigReg(0,reset_by derived_reset);           // sbcs b21           - R
    Reg#(Bit#(1)) sbReadOnAddr <- mkReg(0,reset_by derived_reset);        // sbcs b20           -RW
    Reg#(Bit#(3)) sbAccess  <- mkReg(2,reset_by derived_reset);           // sbcs b19-17        -RW
    Reg#(Bit#(1)) sbAutoIncrement <- mkReg(0,reset_by derived_reset);     // sbcs b16           -RW
    Reg#(Bit#(1)) sbReadOnData <- mkReg(0,reset_by derived_reset);        // sbcs b15           -RW
    Reg#(Bit#(3)) sbError   <- mkReg(0,reset_by derived_reset);           // sbcs b14-12        -RW1c
    Reg#(Bit#(7)) sbASize = readOnlyReg(`FIVO(DPADDR)); /* Addr Width */    // sbcs b11-5         - R
    /* sbAccessX => Supports X  bit accesses */
    Reg#(Bit#(1)) sbAccess128 = readOnlyReg(pack(valueOf(DXLEN)>64));      // sbcs b4            - R
    Reg#(Bit#(1)) sbAccess64 = readOnlyReg(pack(valueOf(DXLEN)>32));       // sbcs b3            - R
    Reg#(Bit#(1)) sbAccess32 = readOnlyReg(pack(valueOf(DXLEN)>16));       // sbcs b2            - R
    Reg#(Bit#(1)) sbAccess16 = readOnlyReg(pack(valueOf(DXLEN)>8));        // sbcs b1            - R
    Reg#(Bit#(1)) sbAccess8  = readOnlyReg(pack(valueOf(DXLEN)>0));        // sbcs b0            - R
    Reg#(Bit#(32)) sbcs = concatReg15(  sbVersion,sbcsPad0,readOnlyReg(sbBusyError),
        readOnlyReg(sbBusy),sbReadOnAddr,sbAccess,sbAutoIncrement,sbReadOnData,readOnlyReg(sbError),
        sbASize,sbAccess128,sbAccess64,sbAccess32,sbAccess16,sbAccess8);
    // sbaddress0 DM 'h39 , 'h3a , 'h3b , 'h37
    Reg#(Bit#(32)) sbAddress0 <- mkConfigReg(0,reset_by derived_reset);         // sbAddress0 b31-0   -RW
    Reg#(Bit#(32)) sbAddress1 <- mkConfigReg(0,reset_by derived_reset);         // sbAddress1 b31-0   -RW
    Reg#(Bit#(32)) sbAddress2 =  readOnlyReg(0);                          // sbAddress2 b31-0   -RW
    Reg#(Bit#(32)) sbAddress3 =  readOnlyReg(0);                          // sbAddress3 b31-0   -RW
    // sbdata0  DM 'h3c , 'h3d , 'h3d , 'h3d
    Reg#(Bit#(32)) sbData0 <- mkReg(0,reset_by derived_reset);            // sbdata b31-0       -RW
    Reg#(Bit#(32)) sbData1 <- mkReg(0,reset_by derived_reset);            // sbdata1 b31-0      -RW
    Reg#(Bit#(32)) sbData2 =  readOnlyReg(0);                             // sbdata1 b31-0      -RW
    Reg#(Bit#(32)) sbData3 =  readOnlyReg(0);                             // sbdata1 b31-0      -RW

		Reg#(Bit#(TLog#(TDiv#(DXLEN,8)))) rg_lower_addr_bits <- mkReg(0);	//Store lower address bits
    
    //      System Bus Slave Registers
    
    // data0 - 11   DM 'h04-'h0f
    Vector#(12, Reg#(Bit#(32))) abst_data;                                //- dataX b31-0       -RW
    abst_data <- replicateM(mkReg(0,reset_by derived_reset));

    // progbuf0-15  DM 'h20-'h2f
    Vector#(16,Reg#(Bit#(32))) progbuf;                                   //- progbufX          -RW
    progbuf <- replicateM(mkReg(0,reset_by derived_reset));
    Vector#(16,Wire#(Bit#(32))) progbuf_read;      
    progbuf_read <- replicateM(mkWire(reset_by derived_reset));

    Reg#(Bit#(1)) rg_progBufReq <- mkReg(0);
    Reg#(Bool) rg_hartEbreakReached <- mkReg(False);
    Reg#(Bool) rg_hartExceptionReached <- mkReg(False);
    
    /*      MODULE RULES      */
    //-RULE: Assert derived_reset when dm is inactive
    rule generate_derived_reset(dmActive==0);
      dm_reset.assertReset;
    endrule

    rule rl_authentication_bypass;
      authenticated <= 1'b1;
    endrule

    rule rl_have_reset_logic;
      Bit#(HartCount) lv_hawsel = 0;
      for(Integer i=0 ; i < valueOf(HartCount); i = i+1)begin
        lv_hawsel[i]          = (fromInteger(i) == hartSelLo) ? 1'b1:vrg_hawsel[i];
      end

      for(Integer i=0 ; i < valueOf(HartCount); i = i+1)begin
        if((lv_hawsel[i] == 1) && (ackHaveReset == 1) && (vrg_have_reset[i] == 1))
          vrg_have_reset[i] <= 0;
      end
    endrule

    rule rl_display;
      `logLevel( debug, 0, $format("DEBUG: Halt:%b",haltReq))
      `logLevel( debug, 0, $format("DEBUG: ResumeReq:%b",resumeReq))
    endrule

    rule rl_set_dm_status_bits;   // One Cycle delay in update of values , Convert to wires 
      Bit#(HartCount) lv_hawsel = 0;
      for(Integer i=0 ; i < valueOf(HartCount); i = i+1)begin
        lv_hawsel[i]          = (fromInteger(i) == hartSelLo) ? 1'b1:vrg_hawsel[i];
      end

      // Calculating DmStatus Sources
      for(Integer i=0 ; i < valueOf(HartCount); i = i+1)begin
        if ((vrg_halted_sdw[i] ==1) && (vrg_halted[i] == 0))
          vrg_resume_ack[i] <= 1;
        else if((rg_clear_resume_ack == 1 )&& (vrg_halted[i] == 1))
          vrg_resume_ack[i] <= 0;
        else if ((lv_hawsel[i] == 1) &&(haltReq == 1))
          vrg_resume_ack[i] <= 0;
        vrg_halted_sdw[i] <= vrg_halted[i]; // One Cycle Delayed assign;
      end

      // Bit logic is incorrect update
      Bit#(HartCount) lv_sel_HaveReset      = 0;
      Bit#(HartCount) lv_sel_ResumeAck      = 0;
      Bit#(HartCount) lv_sel_NonExistent    = 0;
      Bit#(HartCount) lv_sel_UnAvail        = 0;
      Bit#(HartCount) lv_sel_Running        = 0;
      Bit#(HartCount) lv_sel_Halted         = 0;
      
      for(Integer i=0 ; i < valueOf(HartCount); i = i+1)begin
        lv_sel_HaveReset[i]   =  vrg_have_reset[i]    & lv_hawsel[i];
        lv_sel_ResumeAck[i]   =  vrg_resume_ack[i]    & lv_hawsel[i];
        lv_sel_NonExistent[i] =  rg_non_existent[i]  & lv_hawsel[i];
        lv_sel_UnAvail[i]     =  vrg_unavailable[i]   & lv_hawsel[i];
        lv_sel_Running[i]     =  (~vrg_halted[i])       & lv_hawsel[i];
        lv_sel_Halted[i]      =  vrg_halted[i]        & lv_hawsel[i];  
      end

      allHaveReset    <= (lv_sel_HaveReset == lv_hawsel)?1:0;
      allResumeAck    <= (lv_sel_ResumeAck == lv_hawsel)?1:0;
      allNonExistent  <= (lv_sel_NonExistent == lv_hawsel)?1:0;
      allUnAvail      <= (lv_sel_UnAvail == lv_hawsel)?1:0;
      allRunning      <= (lv_sel_Running == lv_hawsel)?1:0;
      allHalted       <= (lv_sel_Halted == lv_hawsel)?1:0;

      anyHaveReset    <= reduceOr ( lv_sel_HaveReset );
      anyResumeAck    <= reduceOr ( lv_sel_ResumeAck );
      anyNonExistent  <= reduceOr ( lv_sel_NonExistent );
      anyUnAvail      <= reduceOr ( lv_sel_UnAvail );
      anyRunning      <= reduceOr ( lv_sel_Running );
      anyHalted       <= reduceOr ( lv_sel_Halted );
    endrule

    /*    System Bus ACCESS   */
  `ifdef CORE_AXI4
    AXI4_Master_Xactor_IFC#(DPADDR,D_AXI_BUS_WIDTH , 2 ) master_xactor <- mkAXI4_Master_Xactor;
    AXI4_Slave_Xactor_IFC#(DPADDR, D_AXI_BUS_WIDTH , 2 ) slave_xactor <- mkAXI4_Slave_Xactor;
  `elsif CORE_AXI4Lite
    AXI4_Lite_Master_Xactor_IFC#(DPADDR,DXLEN,0) master_xactor <- mkAXI4_Lite_Master_Xactor;
    AXI4_Lite_Slave_Xactor_IFC#(DPADDR,DXLEN,0) slave_xactor <- mkAXI4_Lite_Slave_Xactor;
  `endif

    rule access_system_bus((sbError == 0) && (sbBusyError == 0) && (sbBusy == 0) && (startSBAccess == 1) );
      Bit#(D_AXI_BUS_WIDTH) write_data = 0;
      Bit#(DPADDR) address = 0;
      Bit#(3)  size = 0;      // size in bytes
      Bit#(TDiv#(D_AXI_BUS_WIDTH,8))  write_strobe = 0;
      Bool readAccess = (sb_read_write == 1); //((sbReadOnAddr ==1) || (sbReadOnData==1));
      Bit#(3) align = 0;
      Bit#(3) detect_error = pack(SbNoError);

      // Access Size
      case (sbAccess)
        0:begin
            if(sbAccess8 == 0)
              detect_error = pack(SbSize);
            size = 0 ;
            write_data = duplicate(sbData0[7:0]);
            write_strobe = 16'b0000_0000_0000_0001;
          end
        1:begin
            if(sbAccess16 == 0)
              detect_error = pack(SbSize);
            size = 1 ;
            write_data = duplicate(sbData0[15:0]);
            write_strobe = 16'b0000_0000_0000_0011;
          end
        2:begin
            if(sbAccess32 == 0)
              detect_error = pack(SbSize);
            size = 2 ;
            write_data = duplicate(sbData0);
            write_strobe = 16'b0000_0000_0000_1111;
          end
        3:begin
            if(sbAccess64 == 0)
              detect_error = pack(SbSize);
            size = 3 ;
            write_data = duplicate({sbData1,sbData0});
            write_strobe = 16'b0000_0000_1111_1111;
          end
      endcase

      // Address
      address = truncate({sbAddress1,sbAddress0});
      if(readAccess)begin
        //align = {0,sbAddress0[1:0]};    // All Memory can be accessed Word Aligned (32b aligned) ?
        // mis-aligned detect - REad
        if((size == 3) && (sbAddress0[2:0] != 0)) // How are 64 bit reads to be aligned ?
          detect_error = pack(SbAlign);
        else if((size == 2) && (sbAddress0[1:0] != 0))
          detect_error = pack(SbAlign);
        else if((size == 1) && (sbAddress0[0] != 0))
          detect_error = pack(SbAlign);
      end
      else begin
        // Addresses WORD Aligned
        if(valueOf(DXLEN)==64)begin
          //address = truncate({sbAddress1,sbAddress0[31:3],3'b000});
          align = sbAddress0[2:0];
        end
        else if(valueOf(DXLEN)==32)begin
          //address = truncate({sbAddress1,sbAddress0[31:2],2'b00});
          align = {0,sbAddress0[1:0]};
        end
        // mis-aligned Detect - Write
        if((size == 3) && (align[2:0] !=0))
          detect_error = pack(SbAlign);
        else if((size == 2) && (align[1:0] !=0 ))
          detect_error = pack(SbAlign);
        else if((size == 1) && (align[0]   !=0 ))
          detect_error = pack(SbAlign);
        else
          write_strobe = write_strobe<<(align);
      end
      // Bus Access
      if(detect_error == pack(SbNoError))begin
          `logLevel( debug, 1, $format("DEBUG:Memory Access-Addr:%h ,Op:%b ",address,readAccess))
        if(readAccess)begin
        `ifdef CORE_AXI4
          let read_request = AXI4_Rd_Addr {araddr: truncate(address),aruser: 0, arlen: 0,
            arsize: size, arburst: 'b01,arid:`FIVO(AxiID), arprot:'d3};
        `elsif CORE_AXI4Lite
          let read_request = AXI4_Lite_Rd_Addr {araddr: truncate(address),aruser: 0,
            arsize: truncate(size), arprot:'d3};
        `endif
          master_xactor.i_rd_addr.enq(read_request);
					rg_lower_addr_bits<= truncate(address);
        end
        else begin
        `ifdef CORE_AXI4
          let request_data  = AXI4_Wr_Data{wdata: write_data[valueOf(TSub#(D_AXI_BUS_WIDTH,1)):0],
            wstrb: truncate(write_strobe),wlast:True, wid:`FIVO(AxiID)};
          let request_address = AXI4_Wr_Addr{ awaddr: address, awuser:0,
            awlen: 0, awsize: size, awburst: 'b01,awid:`FIVO(AxiID), awprot:'d3};
        `elsif CORE_AXI4Lite
          let request_data  = AXI4_Lite_Wr_Data{wdata: write_data[valueOf(TSub#(DXLEN,1)):0],
            wstrb: truncate(write_strobe)};
          let request_address = AXI4_Lite_Wr_Addr{ awaddr: address, awuser:0,
                                                    awsize: truncate(size), awprot:'d3};
        `endif
          master_xactor.i_wr_addr.enq(request_address) ;
          master_xactor.i_wr_data.enq(request_data) ;
        end

        if(sbAutoIncrement == 1)begin
          Bit#(4) offset = 1 << size;
          Bit#(64) lv_new_address = {sbAddress1,sbAddress0} + zeroExtend(offset);
          sbAddress0 <= lv_new_address[31:0];
          sbAddress1 <= lv_new_address[63:32];
          end
        sbBusy <= 1; // Assert Busy
      end
      else begin
          `logLevel( debug, 1, $format("DEBUG:Memory Access ERROR ",detect_error))
      end
      sbError <= detect_error;
      startSBAccess <= 0; // Transaction has been issued , disable trigger
    endrule

    rule responseSystemBusRead(sbBusy==1);
      let response <- pop_o(master_xactor.o_rd_data);
      // if width less than 32 upper bits can take on anything - spec
    `ifdef CORE_AXI4
      if (response.rresp==AXI4_OKAY && (response.rid==`FIVO(AxiID))) begin
    `elsif CORE_AXI4Lite
      if (response.rresp==AXI4_LITE_OKAY) begin
    `endif
				Bit#(TAdd#(TLog#(TDiv#(DXLEN,8)),3)) lv_shift = {rg_lower_addr_bits, 3'd0};
        Bit#(D_AXI_BUS_WIDTH) resp= response.rdata >> lv_shift;
        sbData0<=resp[31:0] ;
				if(valueOf(DXLEN)==64)
        	sbData1<=resp[63:32] ;
      end
      else begin
        sbError <= pack(SbOther);// lookup bresp values !
        `logLevel( debug, 1, $format("DEBUG:Memory Access: Read ERROR:%h ",pack(SbOther)))
      end
      sbBusy <=0; // De Assert Busy
    endrule

    rule responseSystemBusWrite(sbBusy==1);
      let response <- pop_o(master_xactor.o_wr_resp) ;
    `ifdef CORE_AXI4
      if(response.bresp == AXI4_OKAY && (response.bid==`FIVO(AxiID)))begin
    `elsif CORE_AXI4Lite
      if(response.bresp == AXI4_LITE_OKAY)begin
    `endif
          `logLevel( debug, 1, $format("DEBUG: Write Done Successfully"))
      end
      else begin
        sbError <= pack(SbOther);// lookup bresp values !
        `logLevel( debug, 1, $format("DEBUG:Memory Access: Write ERROR:%h",pack(SbOther)))
      end
      sbBusy <=0; // De Assert Busy
    endrule

    // System Bus Slave Interface 

    rule write_request_address_channel;
      let aw <- pop_o (slave_xactor.o_wr_addr);
      let w  <- pop_o (slave_xactor.o_wr_data);
      //dut.write_request(tuple3(aw.awaddr, w.wdata, w.wstrb));
      Bit#(D_AXI_BUS_WIDTH) lv_wdata = w.wdata;
      Bool lv_wr_error = False;
      if(aw.awaddr != 0 )
        $display(fshow(aw));
      for( Integer i = 0 ; i < (valueOf(D_AXI_BUS_WIDTH)/32);i=i+1 )begin
        let lv_offset = aw.awaddr + (fromInteger(i)*32) - `DebugBase ;
        Bit#(32) lv_wr_data = lv_wdata[((fromInteger(i)+1)*32)-1:fromInteger(i)*32];
        case (lv_offset)
          ('h0)                      :  lv_wr_error = True;
          ('h4)                      :  lv_wr_error = True;
          ('h8)                      :  lv_wr_error = True;
          ('hC)                      :  lv_wr_error = True;
          // Program Buffer                
          // Abstract Data Section
          (`FIVO(DTVEC_PROG_BUF_EXCEPTION))    : begin
              if(lv_wr_data == 0)  // Write byte to signal
                rg_hartExceptionReached <= True;
            end
          (`FIVO(DTVEC_PROG_BUF_EBREAK))       :  begin
              if(lv_wr_data == 0)  // Write byte to signal
                rg_hartEbreakReached <= True;
            end
          default : begin
            if( lv_offset < `FIVO(DTVEC_ABST_MEM_OFFSET))begin
              progbuf[(lv_offset - `FIVO(DTVEC_PROG_BUF_OFFSET))/4] <= lv_wr_data;
            end
            else if ( lv_offset < `FIVO(DTVEC_PROG_BUF_EXCEPTION))begin
              abst_data[(lv_offset - `FIVO(DTVEC_ABST_MEM_OFFSET))/4] <= lv_wr_data;
            end
            else 
              lv_wr_error = True;
            end
        endcase
      end
      if(!lv_wr_error) begin
        let b = AXI4_Wr_Resp {bresp: AXI4_OKAY, buser: aw.awuser, bid:aw.awid};
        slave_xactor.i_wr_resp.enq (b);
      end
      else begin
        let b = AXI4_Wr_Resp {bresp: AXI4_SLVERR, buser: aw.awuser, bid:aw.awid};
        slave_xactor.i_wr_resp.enq (b);
      end
    endrule

    rule read_request_first;
      let ar<- pop_o(slave_xactor.o_rd_addr);
      Bit#(D_AXI_BUS_WIDTH) lv_response = 0;
      Bit#(32) lv_response_data = 0;

      // i-class: 128-bit aligned address (io)
      ar.araddr = {truncateLSB(ar.araddr), 4'b0};

      if(ar.araddr != 0 )
        $display(fshow(ar));
      for( Integer i = 0 ; i < (valueOf(D_AXI_BUS_WIDTH)/32);i=i+1 )begin
        let lv_offset = ar.araddr + (fromInteger(i)*4) - `DebugBase ;
        case (lv_offset)
          ('h0)                      :  lv_response_data = 'h0000100f; // 100f fence.i
          ('h4)                      :  lv_response_data = 'h00000013; // nop
          ('h8)                      :  lv_response_data = 'hffdff06f; // j pc -4
          ('hC)                      :  lv_response_data = 'h0000006f; // self-loop
          // Program Buffer                
          // Abstract Data Section
          (`FIVO(DTVEC_PROG_BUF_EXCEPTION ) +'h0) :   lv_response_data = 'h08002023;
          (`FIVO(DTVEC_PROG_BUF_EXCEPTION ) +'h4) :   lv_response_data = 'h00000067;
          (`FIVO(DTVEC_PROG_BUF_EXCEPTION ) +'h8) :   lv_response_data = 'h00000013;
          (`FIVO(DTVEC_PROG_BUF_EXCEPTION ) +'hC) :   lv_response_data = 'h00000013;
          (`FIVO(DTVEC_PROG_BUF_EBREAK    ) +'h0) :   lv_response_data = 'h08002823;
          (`FIVO(DTVEC_PROG_BUF_EBREAK    ) +'h4) :   lv_response_data = 'h00000067;
          (`FIVO(DTVEC_PROG_BUF_EBREAK    ) +'h8) :   lv_response_data = 'h00000013;
          (`FIVO(DTVEC_PROG_BUF_EBREAK    ) +'hc) :   lv_response_data = 'h00000013;
          default : begin
            if( lv_offset < `FIVO(DTVEC_ABST_MEM_OFFSET))begin
              lv_response_data = progbuf_read[(lv_offset - `FIVO(DTVEC_PROG_BUF_OFFSET))/4];
            end
            else if ( lv_offset < `FIVO(DTVEC_PROG_BUF_EXCEPTION))begin
              lv_response_data = abst_data[(lv_offset - `FIVO(DTVEC_ABST_MEM_OFFSET))/4];
            end
            else 
              lv_response_data = 'h0000006f; // alternatively raise error
            end
        endcase
        lv_response = lv_response | (zeroExtend(lv_response_data) << (32*i));
        $display(" reading debug Memory %x,%x,%d",lv_response_data,lv_response,i);
      end
      
      AXI4_Rd_Data#(D_AXI_BUS_WIDTH, 2 ) r = AXI4_Rd_Data {rresp: AXI4_OKAY,
        rdata: lv_response, 
        rlast:True ,
        ruser: 0,
        rid:ar.arid };
      slave_xactor.i_rd_data.enq(r);
    endrule

  /*      Interface Configuration & Method Definitions        */
    // Do an Abstract Command - Set up one and only one filter fuinction.
      // Busy gets set for all accesses., Busy Errors get set here
      // Filter stage , Supported , Wrong State , Exception ? 

    // This rule filters abstract commands 
    // and sets abst command good which guards the abstract operation method
    // index of halted array to that of presently selected hart ! i.e. handles multiple hart bs.
    // conditions on abstract op read response & dmi put get  :: using abst_busy 
    //,& command_good for mutually exclusive rules
    // if bad set error and de asserrt busy 
    
    // Filter Triggered iff bad or unverified commands exist
    // Hart ID Cannot be changed whiile issueing an abstract command
    
    // Program Buffer functionality
    // Exec Bit
    // Auto Exec criterion (To support ?)

    // // Quick Access

    // // Halt

    // Prog Buf 0
      // Assert Take Program Buffer Trap
    
    // Prog Buf 1
      // Detect Entry into Program Buffer

    // Prog Buf 2
      // Wait for Exit Program Buffer or Exception Program Buffer

    // Prog Buf 3
      // Handle Exit / Exception

    // // Resume 

    // Writes to dm control Hartsel cause Progbuf routine to fail
    // Writes to Haselx also cause the program buffer routine to fial
// State Machine to handle Program Buffer with Quick access

Reg#(Bit#(1)) rg_fail_program_buffer <- mkReg(0);  
Reg#(QA_PBuf_State) rg_qa_pbuf_state <- mkReg(QA_PBuf_Disable);//mkReg(QA_PBuf_Disable);
Reg#(Bit#(1)) rg_sel_qa_pbuf <- mkReg(0); // 0 => program Buffer Selected , 1 => quick access path.


rule rl_set_progbuf_read;
  for(Integer i = 0; i < 16 ; i = i+1) begin
    progbuf_read[i] <= progbuf[i];
  end
endrule

rule rl_QA_PBuf_Disable( rg_qa_pbuf_state == QA_PBuf_Disable && (abst_ar_postExec == 1) );
  
//  rg_qa_pbuf_state <= QA_Halt;  
  rg_progBufReq <= 1'b1;
  rg_hartEbreakReached <= False;
  rg_hartExceptionReached <= False;
  rg_qa_pbuf_state <= PBuf_Trap;

endrule 

rule rl_QA_Halt( rg_qa_pbuf_state == QA_Halt ) ;
  rg_qa_pbuf_state <= QA_wait_halted;
endrule 

rule rl_QA_wait_halted( rg_qa_pbuf_state == QA_wait_halted ) ;
  rg_qa_pbuf_state <= PBuf_Trap;
endrule     

rule rl_PBuf_Trap( rg_qa_pbuf_state == PBuf_Trap ) ;
  rg_qa_pbuf_state <= PBuf_wait_Trap;
endrule 

rule rl_PBuf_wait_Trap( rg_qa_pbuf_state == PBuf_wait_Trap ) ;
  rg_progBufReq <= 1'b1;
  rg_qa_pbuf_state <= PBuf_wait_Exit;
endrule     

rule rl_PBuf_wait_Exit( (rg_qa_pbuf_state == PBuf_wait_Exit) && rg_hartEbreakReached) ;
  rg_qa_pbuf_state <= PBUf_handle_Exit;
  rg_hartEbreakReached <= False;
  rg_hartExceptionReached <= False;
endrule 

rule rl_PBuf_wait_Exception( (rg_qa_pbuf_state == PBuf_wait_Exit) && rg_hartExceptionReached);
  rg_qa_pbuf_state <= PBUf_handle_Exit;
  rg_hartEbreakReached <= False;
  rg_hartExceptionReached <= False;
endrule


rule rl_PBUf_handle_Exit( rg_qa_pbuf_state == PBUf_handle_Exit ) ;
  rg_qa_pbuf_state <= QA_Resume;
endrule     

rule rl_QA_Resume( rg_qa_pbuf_state == QA_Resume ) ;
  rg_qa_pbuf_state <= QA_wait_Resume;
endrule 

rule rl_QA_wait_Resume( rg_qa_pbuf_state == QA_wait_Resume ) ;
  rg_qa_pbuf_state <= QA_PBuf_Disable;
  abst_ar_postExec <= 0;
  abst_command_good <= 2'd0;
  abst_busy <= 0;
endrule     

    rule filter_abstract_commands((abst_busy == 1) && (abst_command_good == 2'd1)); 
      Bit#(5) lv_hart_id = hartSelLo[4:0];
      Bit#(3) lv_abst_cmderr = 0;
      if((abst_ar_cmdType == 0) && (abst_ar_transfer == 1) )begin
        if(vrg_unavailable[lv_hart_id] == 0)
          lv_abst_cmderr = fn_abstract_reg_op_permitted(truncate(abst_ar_regno),vrg_halted[lv_hart_id],
                                                      abst_ar_write,abst_ar_aarSize);
        else 
          lv_abst_cmderr = pack(Abst_WrongState);
      end
      else 
        lv_abst_cmderr = pack(Abst_NotSupported);
    
      if(lv_abst_cmderr == 0)begin
        abst_command_good <=2'd3;   
        `logLevel( debug, 1, $format("DEBUG:Abstract: hart %h,regNo %h,halted %h,write %h,Size%h,err %h",
          lv_hart_id,abst_ar_regno,vrg_halted[lv_hart_id],abst_ar_write,abst_ar_aarSize,lv_abst_cmderr))
      end
      else begin
        abst_busy <= 0;
        abst_command_good <=2'd0;
          `logLevel( debug, 1, $format("ACB\tDebug:Abstract: hart %h,regNo %h,halted %h,write %h,Size%h,err %h",
          lv_hart_id,abst_ar_regno,vrg_halted[lv_hart_id],abst_ar_write,abst_ar_aarSize,lv_abst_cmderr))
      end

      abst_cmderr <= lv_abst_cmderr;
    endrule 

    // HART Interface , Vector of hart interfaces 
    // Hard Setup for only one hart right now
    Vector#(HartCount,Debug_Hart_Ifc) hart_interface_vector;

    for(Integer i = 0; i<valueOf(HartCount); i=i+1) begin
      hart_interface_vector[i] = interface Debug_Hart_Ifc
        // Issue a Command iff command good is asserted
        // Get this out of the vector !
        method ActionValue#(AbstractRegOp) abstractOperation 
                                                    if((abst_command_good == 2'd3) && (abst_busy == 1));
          Bit#(DXLEN) data_frame = truncate({abst_data[1],abst_data[0]});
          abst_command_good <= 2'd2;
          return AbstractRegOp{read_write   : unpack(abst_ar_write),
                               address      : truncate(abst_ar_regno),
                               writedata    : truncate(data_frame)
                             `ifdef spfpu
                               ,rftype       : (abst_ar_regno >'h101f ) //TODO compare base for fpu?
                              `endif } ;
        endmethod

        method Action  abstractReadResponse(Bit#(DXLEN) responseData) 
                                                    if((abst_command_good == 2'd2) && (abst_busy == 1));
          if(abst_ar_aarPostIncrement == 1)  
            abst_ar_regno <= abst_ar_regno + 1;
          abst_data[0] <= responseData[31:0]; 
          if ((valueOf(DXLEN) == 64 )&& (abst_ar_aarSize == 3'd3 ))
            abst_data[1] <= responseData[63:32];
          abst_command_good <= 2'd0;
          abst_busy <= 0;
        endmethod

        method Bit#(1) haltRequest();
          if(((vrg_hawsel[i] == 1)||(fromInteger(i) == hartSelLo)) && (vrg_unavailable[i] == 0))
            return haltReq;
          else 
            return 0;
        endmethod
        
        method Bit#(1) resumeRequest();
          if(((vrg_hawsel[i] == 1)||(fromInteger(i) == hartSelLo)) && (vrg_unavailable[i] == 0) && (vrg_resume_ack[i] == 0))
            return resumeReq;
          else 
            return 0;
        endmethod
        
        method Bit#(1) halt_to_program_buffer();
          if(((vrg_hawsel[i] == 1)||(fromInteger(i) == hartSelLo)) && (vrg_unavailable[i] == 0) && (vrg_resume_ack[i] == 0))
            return rg_progBufReq;
          else 
            return 0;
        endmethod
        
        method Bit#(1) hart_reset();
          if(((vrg_hawsel[i] == 1)||(fromInteger(i) == hartSelLo)) && (vrg_unavailable[i] == 0))
            return hartReset;
          else 
            return 0;
        endmethod
        
        method Action  set_halted(Bit#(1) halted);
          vrg_halted[i]   <= halted; // Only One Hart
        endmethod
        
        method Action  set_unavailable(Bit#(1) unavailable);
          //The Hart has to also assert unavailable while being reset,sets available only when ready.
          vrg_unavailable[i] <= unavailable;
        endmethod

        method Action  set_have_reset(Bit#(1) have_reset);
          if((vrg_have_reset_sdw[i] != have_reset) && (have_reset == 1'b1))
            vrg_have_reset[i] <= 1'b1;
          vrg_have_reset_sdw[i] <= have_reset;
        endmethod

        method Bit#(1) dm_active = dmActive;

      endinterface;
    end
    
    // Non Vector of iterfaces , single hart debug
    interface hart = hart_interface_vector[0];

    // AXI Interfaces to SOC
    interface debug_slave  = slave_xactor.axi_side ;
    interface debug_master = master_xactor.axi_side ;

    // DMI - DTM Interface
    interface dtm = interface Ifc_DM_DTM
      interface putCommand = interface Put
        method Action put(Bit#(41) request_data) if (!isValid(dmi_response) && (abst_command_good[0] == 0));
          // The DMI Requests are Recieved here
          Bit#(2)  dmi_op   = request_data[1:0];
          Bit#(32) dmi_data = request_data[33:2];
          Bit#(7) dmi_addr = request_data[40:34];
          // Catch Busy Access Violations
          Bit#(32) dmi_response_data = 0;
          Bit#(2)  dmi_response_status = 0; // dmi_response_status 0=> ok , 2=> operation failed
         `logLevel( debug, 1, $format("DEBUG:DMI Addr:@%h, op:%h, Data:%h",dmi_addr,dmi_op,dmi_data))
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
                  if(abst_busy == 1)
                    abst_cmderr <= pack(Abst_Busy);
                  else begin
                    dmi_response_data = abst_data[dmi_addr - `FIVO(ABSTRACTDATASTART)];
                    if(autoExecData[dmi_addr - `FIVO(ABSTRACTDATASTART)] == 1)begin  // Trigger operation
                      abst_busy <= 1;
                      abst_command_good <= 2'd1;
                    end
                  end
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
              `FIVO(DMCONTROL):begin
                                dmcontrol <= dmi_data;
                                if(dmi_data[30] == 1) rg_clear_resume_ack <= 1;
                              end
              `FIVO(DMSTATUS):           dmstatus <= dmi_data;
              `FIVO(HARTINFO):           hartinfo <= dmi_data;
              `FIVO(HAWINDOWSEL):        hawindowsel <= dmi_data;
              `FIVO(HAWINDOW):           hawindow <= dmi_data;
              `FIVO(ABSTRACTCTS):        abstractcs <= dmi_data;
              `FIVO(COMMAND):begin
                              abst_command <= dmi_data;
                              abst_busy <= 1 ;
                              abst_command_good <= 2'd1;
                            end
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
                            if(dmi_data[14:12] == 3'b111 && sbError!=0)                                        // V* Writing 001 or 111
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
              default:begin
                if((dmi_addr >= `FIVO(ABSTRACTDATASTART)) && (dmi_addr<= `FIVO(ABSTRACTDATAEND)))begin
                  if(abst_busy == 1)
                    abst_cmderr <= pack(Abst_Busy);
                  else begin
                    abst_data[dmi_addr - `FIVO(ABSTRACTDATASTART)] <= dmi_data;
                    if(autoExecData[dmi_addr - `FIVO(ABSTRACTDATASTART)] == 1)begin  // Trigger operation
                      abst_busy <= 1;
                      abst_command_good <= 2'd1;
                    end
                  end
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
      interface dmactive_reset = derived_reset;
    endinterface;

    interface dmactive_reset = derived_reset;

    method Bit#(1) getNDMReset();
      return nDMReset;
    endmethod

  endmodule
endpackage
