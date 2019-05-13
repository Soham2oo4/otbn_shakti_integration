#include <stdint.h>
#include "spi.h"

int main(){

uart_init();

printf("SPI START\n");
set_spi(spi_dr, 0xDEADBEEF);
spi_init();
printf("SPI init done\n");

return 0;
}


