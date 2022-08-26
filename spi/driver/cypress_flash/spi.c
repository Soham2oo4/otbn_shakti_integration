#include <stdint.h>
#include "spi.h"



int main(){

	printf("SPI FLASH START \n"); 
	spi_init();
	printf("SPI init done\n");
	flash_device_id();

	int address = 0x000b0000;
	
/****** Flash Erase ********/
	flash_erase(address);
	flash_status_register_read();  
	
	
/****** Flash Write ******/	
	flash_write_enable();
    	flash_write(address, 0xabcdef45);
	flash_status_register_read();
	
/****** Flash read *******/	
	int read_value = flash_read(address);
	printf("Reading Value from Flash: %x \n",read_value);

	return 0; 
} 
 


