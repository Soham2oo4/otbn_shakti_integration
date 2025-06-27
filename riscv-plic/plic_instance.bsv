/*
see LICENSE.iitm

Author: Neel Gala, neelgala@incoresemi.com
Created on: Saturday 25 April 2020 08:45:12 PM IST

*/
package plic_instance ;
	import plic::*;
	(*synthesize*)
	module mkdummy(Ifc_plic_axi4lite#(32, 32,0,32,2,7));
    let clk <- exposeCurrentClock;
    let rst <- exposeCurrentReset;
    let ifc();
    mkplic_axi4lite#('hdeadbeef) _temp(ifc);
    return ifc;
	endmodule
	(*synthesize*)
	module mkdummy1(Ifc_plic_axi4#(32,4, 64,3,31,2,3));
    let clk <- exposeCurrentClock;
    let rst <- exposeCurrentReset;
    let ifc();
    mkplic_axi4#(100) _temp(ifc);
    return ifc;
	endmodule

endpackage: plic_instance

