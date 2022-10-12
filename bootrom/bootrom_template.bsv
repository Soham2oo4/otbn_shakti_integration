/* 
see LICENSE.iitm

--------------------------------------------------------------------------------------------------

schema-start
module:
    type: string
    regex: ^bootrom$
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
        clock:
            type: string
            regex: ^null$
            nullable: True
        index_size:
            type: integer
schema-end
--------------------------------------------------------------------------------------------------
*/
package bootrom_template;
  import bootrom::*;
  (*synthesize*)
  module mkdummy(Empty);
    Ifc_bootrom_axi4#(32, 32, 0, 13) boot <-mkbootrom_axi4('h1000);
    Ifc_bootrom_axi4lite#(32, 32, 0, 13) bootlite <-mkbootrom_axi4lite('h1000);
//    Ifc_bootrom_TLU#(32, 8, 4) boottlu <- mkbootrom_TLU('h1000);
  endmodule
endpackage
