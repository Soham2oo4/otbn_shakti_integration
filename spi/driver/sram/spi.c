#include <stdint.h>
#include "spi.h"

int main(){
	int burst = 4;
	printf("SPI SRAM START \n"); 
	spi_init();
	printf("SPI init done\n");
	sram_mode(0x00000080);		//Setting Mode 
	int mode = sram_read_mode();
	int addr = 0x000100;   //24 bit address


//=====Writeing some data in ram ======//
for(int i =0; i<20; i=i+4){
	sram_write(addr,0xaa9955aa*(i+1),burst);
	printf("write data done: %x\n",(0xaa9955aa)*(i+1));
	addr=addr+4;
	}

//===reading data=====//
addr =0x000100;

	int read = sram_read(addr,20); // reading 20 times 8 bit data
	printf("sram read done %x:\n",read);

	return 0; 
} 
 


