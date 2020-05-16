#include <stdint.h>
#include "spi.h"
#include "cypress_data.h"


int main(){

	printf("SPI FLASH START \n"); 
	spi_init();
	printf("SPI init done\n");	
	flash_device_id();
	waitfor(100);
	
	int address = 0x0000400;
// Erasing
	flash_write_enable();
	flash_erase(address);
	flash_status_register_read();
//Writing		
	flash_write_enable();
	flash_write(address, 0xdeadbeef);
//Reading	
	int read_value = flash_read(address);
	printf("Reading Value from address: %x and data: %x \n",address,read_value);
		
	
printf("SPI init done\n"); 
 
return 0; 
} 
 


