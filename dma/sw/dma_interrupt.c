#include "dma.h"
#include "encoding.h"
#include <stdint.h>
int dma_flag=0;
unsigned long var_for_context [100];
unsigned long* addr_var_for_context= var_for_context;

#define DMA_INTERRUPTS (DMA_CCR_TEIE|DMA_CCR_HTIE|DMA_CCR_TCIE|DMA_CCR_EN)

void waitfor(unsigned int secs) {
	unsigned int time = 0;
	while(time++ < secs);
}

void __attribute__ ((noinline)) mret_1()
{
	__asm__("mret");
}



# define REGBYTES 8
void __attribute__ ((noinline)) generic_ISR()
{
  //register unsigned long sp asm("sp") = &var_for_context;
	__asm__ ("csrw mscratch,sp" "\n\t"
					 "li sp,0x80002f88" "\n\t"
  "sd x1, 1*8(sp)" "\n\t" 
  "sd x2, 2*8(sp)" "\n\t"
  "sd x3, 3*8(sp)" "\n\t"
  "sd x4, 4*8(sp)" "\n\t"
  "sd x5, 5*8(sp)" "\n\t"
  "sd x6, 6*8(sp)" "\n\t"
  "sd x7, 7*8(sp)" "\n\t"
  "sd x8, 8*8(sp)" "\n\t"
  "sd x9, 9*8(sp)" "\n\t"
  "sd x10, 10*8(sp)" "\n\t" 
  "sd x11, 11*8(sp)" "\n\t"
  "sd x12, 12*8(sp)" "\n\t"
  "sd x13, 13*8(sp)" "\n\t"
  "sd x14, 14*8(sp)" "\n\t"
  "sd x15, 15*8(sp)" "\n\t"
  "sd x16, 16*8(sp)" "\n\t"
  "sd x17, 17*8(sp)" "\n\t"
  "sd x18, 18*8(sp)" "\n\t"
  "sd x19, 19*8(sp)" "\n\t"
  "sd x20, 20*8(sp)" "\n\t"
  "sd x21, 21*8(sp)" "\n\t"
  "sd x22, 22*8(sp)" "\n\t"
  "sd x23, 23*8(sp)" "\n\t"
  "sd x24, 24*8(sp)" "\n\t"
  "sd x25, 25*8(sp)" "\n\t"
  "sd x26, 26*8(sp)" "\n\t"
  "sd x27, 27*8(sp)" "\n\t"
  "sd x28, 28*8(sp)" "\n\t"
  "sd x29, 29*8(sp)" "\n\t"
  "sd x30, 30*8(sp)" "\n\t"
  "sd x31, 31*8(sp)" "\n\t"
	"call dma_ISR" "\n\t"
  "ld x1, 1*8(sp)" "\n\t" 
  "ld x3, 3*8(sp)" "\n\t"
  "ld x4, 4*8(sp)" "\n\t"
  "ld x5, 5*8(sp)" "\n\t"
  "ld x6, 6*8(sp)" "\n\t"
  "ld x7, 7*8(sp)" "\n\t"
  "ld x8, 8*8(sp)" "\n\t"
  "ld x9, 9*8(sp)" "\n\t"
  "ld x10, 10*8(sp)" "\n\t" 
  "ld x11, 11*8(sp)" "\n\t"
  "ld x12, 12*8(sp)" "\n\t"
  "ld x13, 13*8(sp)" "\n\t"
  "ld x14, 14*8(sp)" "\n\t"
  "ld x15, 15*8(sp)" "\n\t"
  "ld x16, 16*8(sp)" "\n\t"
  "ld x17, 17*8(sp)" "\n\t"
  "ld x18, 18*8(sp)" "\n\t"
  "ld x19, 19*8(sp)" "\n\t"
  "ld x20, 20*8(sp)" "\n\t"
  "ld x21, 21*8(sp)" "\n\t"
  "ld x22, 22*8(sp)" "\n\t"
  "ld x23, 23*8(sp)" "\n\t"
  "ld x24, 24*8(sp)" "\n\t"
  "ld x25, 25*8(sp)" "\n\t"
  "ld x26, 26*8(sp)" "\n\t"
  "ld x27, 27*8(sp)" "\n\t"
  "ld x28, 28*8(sp)" "\n\t"
  "ld x29, 29*8(sp)" "\n\t"
  "ld x30, 30*8(sp)" "\n\t"
  "ld x31, 31*8(sp)" "\n\t"
  "csrr x2, mscratch" "\n\t"
  //"addi sp, sp, 256" "\n\t"
	"mret" );
}

void dma_ISR()
{
	printf("\n\tdma_ISR called\n");
	unsigned long lv_interrupt= (*dma_isr)&0x200;
	if(lv_interrupt == 0x200) {
		*dma_ccr3=0;
		*dma_ifcr=0xF00;
		printf("\tFinished Transaction. Disabled chan 3.\n");
		dma_flag=1;
	}
	else {
		printf("\tDMA ISR called without chan 3 finishing\n");
		//exit(0);
	}
	return;
}


int main()
{
	void (*dma_ISR_ptr)() = &generic_ISR;
	write_csr(mtvec,dma_ISR_ptr);
	unsigned long var1= read_csr(mstatus);
	var1= var1 | 0x8;
  write_csr(mstatus,var1);
	var1= read_csr(mie);
	var1= var1 | 0x800;
  write_csr(mie,var1);
    //printf("Starting DMA mem to mem transfer\n");

	//int a[10]={0xbabe0, 0xbabe1, 0xbabe2, 0xbabe3, 0xbabe4, 0xbabe5, 0xbabe6, 0xbabe7, 0xbabe8, 0xbabe9};
	//int b[10];
	//int c[15]={0xcafe0, 0xcafe1, 0xcafe2, 0xcafe3, 0xcafe4, 0xcafe5, 0xcafe6, 0xcafe7, 0xcafe8, 0xcafe9, 0xcafea, 0xcafeb, 0xcafec, 0xcafed, 0xcafee};
	//int d[15];
    
    int *a = (int*) 0x80003000; //Input from BRAM
    int *c = (int*) 0x80004000; //Input from BRAM

    int i;
    int dum1_4byte=0x000000f0;
    int dum2_4byte=0x000000d0;
    int16_t dum1_2byte = 0x00f0;
    int8_t dum1_byte = 0xf0;

   for(i=0;i<10;++i){
            *(a+i)= dum1_4byte+i;
        //   *(c+i)= dum2_4byte+2*i;
        }
 
    __asm__("fence\n\t");
        printf("Address of a: %08x c: %08x",a,c);

	int burst=0;
    //for(int burst = 0; burst < 256; ++burst){

        
	    *dma_cndtr3= 0xFA0;
	    *dma_cmar3= a;
	    *dma_cpar3= c;

	    /**dma_cndtr5= 0xFA0;
	    *dma_cmar5= c;
	    *dma_cpar5= d;
	    *dma_ccr5= 0x00086ADF; */
	    //*dma_ccr3= 0x00076ADF; 
        *dma_ccr3= (DMA_CCR_BURST_LEN(burst)|DMA_CCR_MEM2MEM|DMA_CCR_PL(2)|DMA_CCR_MSIZE(DMA_FOURBYTE)|DMA_CCR_PSIZE(DMA_FOURBYTE)|DMA_CCR_MINC|DMA_CCR_PINC|DMA_CCR_DIR|DMA_INTERRUPTS);
        printf("\t DMA_CCR3 value: %08x\n",*dma_ccr3);
	    //wait_for_dma_interrupt();
			while(dma_flag==0) {
				printf("DMA transaction ongoing...\n");
				var1= read_csr(mip);
				printf("mip: %08x\n",var1);
				//waitfor(50);
			}
			printf("Transfer donee\n");
        //printf("\t Clearing Interrupt Flags\n");
	    
        //Copying 1000 elements from A to B and C to D
        for(i=0;i<1000;i++){
            if(*(a+i)!=*(c+i)){
                printf("\tDMA has gone wrong somewhere in copying a: %08x to c: %08x i:%d burst: %d\n",*(a+i),*(c+i),i,burst);
                return -1;
            }
            //if(*(c+i)!=*(d+i)){
            //    printf("\tDMA has gone wrong somewhere in copying c: %08x to d: %08x i:%d\n",*(c+i),*(d+i),i);
            //    return -1;
            //}
        }

        //a = (int*)0x80003000;
        //b = (int*)0x20000;

        //printf("\t Burst Value: %d seems to pass\n",burst);
        //for(i=0;i<1000;++i){
        //    *(b+i) = 0;
        //}
        //a = (int*)0x80003000;
        //b = (int*)0x20000;


    //}
        printf("\t DMA copy from BRAM to TCM seems to work for all bursts\n");


	    
    
    return 0;
}
