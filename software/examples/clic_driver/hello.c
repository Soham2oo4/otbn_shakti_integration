#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "arch/riscv/csr.h"
#include "arch/riscv/trap.h"
#include "arch/riscv/encoding.h"
#include "arch/riscv/machine.h"
int main(int argc, char** argv) {


//	asm ("addi x0, x0, 0");

//	reg_base = 0x80000000;
//	*(reg_base) = 0x8000000;

	uint32_t *clicintctr_base = 0x03002000;
	printf("0x%x\n", clicintctr_base);
	*clicintctr_base=0x0000002e;
	printf("ctr reg value  0x%x, address :0x%x\n", *clicintctr_base,clicintctr_base);
	for (int i=1;i<=10;i++){
		*(clicintctr_base+i) = 0x0000002e;
		printf("ctr reg value  0x%x, address :0x%x\n", *(clicintctr_base+i),(clicintctr_base+i));
	}

	uint32_t *clicintcfg_base = 0x03030000;
	printf("0x%x\n", clicintcfg_base);
	*clicintcfg_base = 0x0000002c;//here MSB is reserved, 01 number of privilege mode,6 bits for levels, and hardware vectoring is not supported
	printf("cfg reg 0x%x\n", *clicintcfg_base);
//
//
	uint32_t *clicint_ie_base = 0x03003000;
	printf("0x%x\n", clicint_ie_base);
 	*clicint_ie_base=0x00000001;
	printf("setting enable at 0x%x\n", clicint_ie_base);
	printf("address:0x%x  interrupt enable: 0x%x\n",clicint_ie_base,*clicint_ie_base);
	for (int i=1;i<=10;i++){
		*(clicint_ie_base+i) = 0x00000001;
		printf("clic ie reg value  0x%x, address :0x%x\n", *(clicint_ie_base+i),(clicint_ie_base+i));
	}

//
	uint32_t *clicint_ip_base = 0x03020004;
	printf("reading ip bits 0x%x\n", clicint_ip_base);
	*clicint_ip_base= 0x00000001;
//	printf("value stored in ip 0x%0x\n",*clicint_ip_base);
//	for(int i=0;i<=8;i++)
//		printf("reading ip:%d,addr 0x%x  bits 0x%x\n",i,clicint_ip_base+i,*(clicint_ip_base+i));
//
	uint32_t *clic_final_int = 0x03030010;
	printf("ctr value of selected interrupt 0x%x\n", *clic_final_int);


	uint32_t *clic_int_index = 0x03031000;
	printf("index value of interrupt 0x%x\n", *clic_int_index);
	//the value stored in cfg (8 bit) 00101110(MSB-RESERVED,NM-BITS=01,NL-BITS=0111,NV-BIT=0)
	//the value stored in ctr (8 BITS) states that we are in machine mode and level 1 (MSB=1=> machine mode, remaining 7 bits states the level thus 0000001)
//	*clicintcfg_base = 0x00000081;
//	//enabling the 1st interrupt enable bit
//	*clicint_ie_base = 0x00000001;
//
//	//now we need to put in some value in mtvec
//	//
//	printf("hello world\n");
	
	write_csr(mstatus,0x00000008);

	uint64_t mstatus_val=read_csr_enum(csr_mstatus);
	printf("the value of mstatus is : 0x%0x\n",mstatus_val);
	uint64_t misa_val=read_csr_enum(csr_misa);
	printf("the value of misa is : 0x%0x\n",misa_val);




}
