#include <stdint.h>
#include "spi.h"
#include "cypress_data.h"


int main(){

	printf("SPI SRAM START \n"); 
	spi_init();
	printf("SPI init done\n");
	sram_mode(0x00000080);		//Setting Mode 
	int mode = sram_read_mode();
	int addr = 0x000100;   //24 bit address


//=====Writeing some data in ram ======//
	sram_write(addr,0xdeadbeef,8,4);
	

//===reading data=====//
addr =0x000100;
	int read = sram_read(addr); 
	printf("sram read done %x:\n",read);

	
	return 0; 
} 
 


