#include <stdint.h>
#include "spi.h"

int main(){

uart_init();

printf("SPI START\n");
set_spi(spi_dr, 0xDEADBEEF);
spi_init();
spi_enable();
spi_rx_enable();

if(spi_rxne_enable()){
printf("SPI received value %x\n", *spi_dr);
}
printf("SPI init done\n");

return 0;
}


