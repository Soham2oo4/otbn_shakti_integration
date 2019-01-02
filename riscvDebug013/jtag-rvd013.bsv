package jtag_rvd013;
  
  import riscvDebug013::*;
  import jtagdtm::*;
  import Connectable::*;
  import GetPut::*;

  module mkTestbench(Empty);
    Hart_Debug_Ifc dummy_hart;
    Ifc_riscvDebug013 debugger;
    Ifc_jtagdtm jtagTap;
    
    // Connect Everything together here 
    
  endmodule

endpackage