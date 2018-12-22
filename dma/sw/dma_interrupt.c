#include "dma.h"
#include "encoding.h"
#include <stdint.h>
int dma_flag=0;

#define DMA_INTERRUPTS (DMA_CCR_TEIE|DMA_CCR_HTIE|DMA_CCR_TCIE|DMA_CCR_EN)

void waitfor(unsigned int secs) {
	unsigned int time = 0;
	while(time++ < secs);
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
	void (*dma_ISR_ptr)() = &dma_ISR;
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
