/* 
see LICENSE.iitm

--------------------------------------------------------------------------------------------------

schema-start
module:
    type: string
    regex: ^bram$
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
parameters:
    type: dict
    schema:
        index_size:
            type: integer
        clock:
            type: string
            regex: ^null$
            nullable: True
        msb_file:
            type: string
        lsb_file:
            type: string
        modulename:
            type: string
schema-end
--------------------------------------------------------------------------------------------------
*/
package bram_template;
  import bram::*;
  (*synthesize*)
  module mkdummy(Empty);
    Ifc_bram_axi4#(32,4, 64, 0,  17) u1 <- mkbram_axi4('h80000000, "code.mem", "MainA");
    Ifc_bram_axi4lite#(32, 64, 0,  17) u2 <- mkbram_axi4lite('h80000000, "code.mem", "B");
  endmodule
endpackage
