/* 
see LICENSE.iitm

--------------------------------------------------------------------------------------------------
Author: Paul George
Email id: command.paul@gmail.com 

--------------------------------------------------------------------------------------------------
*/

package riscvDebug013_template;

  import riscvDebug013::*;
  import debug_types::*;

  (*synthesize*)
  module mkdummy(Ifc_riscvDebug013);
    let ifc();
    mkriscvDebug013 _temp(ifc);
    return (ifc);
  endmodule
endpackage

