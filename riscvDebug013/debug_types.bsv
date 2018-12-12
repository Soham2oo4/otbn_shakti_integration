package debug_types;
  // Helpful Macros
  `define FIVO(x) fromInteger(valueOf(x))
  // Constants
  typedef 32  MaxHarts; // NOT A Variable !
	typedef enum {    Abst_NoError = 3'b000        , Abst_Busy = 3'b001,
			          		Abst_NotSupported = 3'b010   , Abst_Exception = 3'b011,
			          		Abst_WrongState = 3'b100     , Abst_Bus       = 3'b101,
                    Abst_Other = 3'b111 }	Abst_ErrorTypes deriving(Bits,Eq,FShow);

  typedef enum {  SbNoError = 3'b000        , SbTimeOut = 3'b001,
                    SbBadAddress = 3'b010     , SbAlign = 3'b011,
                    SbSize = 3'b100           ,
                    SbOther = 3'b111 } SbErrorTypes deriving(Bits,Eq,FShow);

  // For ABITS == 7
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
  typedef 7'h30 AUTHDATA;
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

  // Abst Reg Map
  typedef 14  AbstractAddrWidth;  // Limited Extended abstract reg space

  typedef 14'h0000 Abst_reg_address_CSR0;
  typedef 14'h1000 Abst_reg_address_GPR0;                          // ref. AbstractAddrWidth for 14.
  typedef 14'h1020 Abst_reg_address_FPR0;

  // ---      Implementation Defined Parameters     --- //

  // ConfigString Pointer
  typedef 0 D_configstrptr0;
  typedef 0 D_configstrptr1;
  typedef 0 D_configstrptr2;
  typedef 0 D_configstrptr3;

  typedef 32  XLEN;
  typedef 32  PADDR;
  typedef 1   HartCount;
  typedef 1   AxiID;


  // HART Valid Abstract Access Filter 
  // Each individual register (aside from GPRs) may
  // be supported differently across read, write, and halt status.

  // Target Specific config Defaults for shakti E-Class
  // If Guaranteed non interfereing debug is wanted then add write bit based error
  function Bit#(3) fn_abstract_reg_op_permitted(  Bit#(AbstractAddrWidth) address,
                                                          Bit#(1) halted,
                                                          Bit#(1) abst_ar_write,
                                                          Bit#(3) abst_ar_aarSize);
    // Filter For Valid CSR's and Valid GPR, FPR Access conditiions.
    // E-Class , Registers can be accessed while the hart is running
              // Writes cannot be done to a running hart ,?? are reads permitted ?
              // Access of 32 to XLEN bit widths are permitted
    Bit#(1) lv_bad_register = 0;    // Register Does not Exist
    Bit#(1) lv_bad_state = 0;   // Hart not in required State
    Bit#(1) lv_bad_size = 0;       // Bad Access Size , essentiall XLEN Filter

    // Fliter
    if((address >= `FIVO(Abst_reg_address_CSR0)) && (address < `FIVO(Abst_reg_address_GPR0)))begin
      if(address != 14'h07b0)                                     // discriminate basis csr existing
        lv_bad_register = 0;
      else
        lv_bad_register = 0;
    end
    else if((address >= `FIVO(Abst_reg_address_GPR0)) && (address < `FIVO(Abst_reg_address_FPR0)))
      lv_bad_register = 0;
    else if((address >= `FIVO(Abst_reg_address_GPR0)) && (address < (`FIVO(Abst_reg_address_FPR0)+32)))
      lv_bad_register = 0;                                                       //No Floating Point
    else 
      lv_bad_register = 0;//just for testing              //No Implementation Reserved states Mapped 
    
    // State
    if(halted == 0)begin
      if((address >= `FIVO(Abst_reg_address_CSR0)) && (address < `FIVO(Abst_reg_address_GPR0)))
        lv_bad_state = 0;
      else if((address >= `FIVO(Abst_reg_address_GPR0)) && (address < `FIVO(Abst_reg_address_FPR0)))
        lv_bad_state = 0;
      else if((address >= `FIVO(Abst_reg_address_GPR0)) && (address < (`FIVO(Abst_reg_address_FPR0)+32)))
        lv_bad_state = 0;
      else
        lv_bad_state = 0;
    end
    else 
      lv_bad_size = 0;
    
    // Size
    if((abst_ar_aarSize == 3'd2) && ((`FIVO(XLEN) == 64)||(`FIVO(XLEN) == 32)))
      lv_bad_size = 0;
    else if ((abst_ar_aarSize == 3'd3) && (`FIVO(XLEN) == 64))
      lv_bad_size = 0;
    else
      lv_bad_size = 1;

    // Assign Error Type
    if(lv_bad_register == 1)    //Higher Priority of error
      return pack(Abst_Exception);
    else if(lv_bad_state == 1)
      return pack(Abst_WrongState);
    else if(lv_bad_size == 1)
      return pack(Abst_Bus);
    else
      return pack(Abst_NoError);
  endfunction

endpackage
