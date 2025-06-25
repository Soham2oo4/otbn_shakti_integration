/*
see LICENSE.iitm 
--------------------------------------------------------------------------------------------------

schema-start
module:
    type: string
    regex: ^clint$
type:
    type: string
    regex: ^device$
clusters:
    type: list
    schema:
        type: string
roles:
    type: dict
    schema:
        master:
            type: list
            schema:
                type: string
                regex: ^(null$
                nullable: True
        slave:
            type: list
mmap:
    type: dict
    schema:
        fixed:
            type: boolean
        base:
            type: integer
        size:
            type: integer
            default: 16
            readonly: True
parameters:
    type: dict
    schema:
        msip_size:
            type: integer
        clock:
            type: string
            regex: ^null$
            nullable: True
        tick_count:
            type: integer
schema-end
--------------------------------------------------------------------------------------------------
*/
package clint_template;
	
	`include "clint.defines"

	import clint::*;
	(*synthesize*)
	module mkdummy(Empty);
		 Ifc_clint_axi4lite#(32,64,0,1,16) clint1<-mkclint_axi4lite;
		 Ifc_clint_axi4#(32,32,64,0,1,4) clint2<-mkclint_axi4;
	endmodule
endpackage
