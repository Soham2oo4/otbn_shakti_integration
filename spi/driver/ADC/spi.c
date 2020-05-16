#include <stdint.h>
#include "spi.h"

int bitExtracted(int number, int k, int p) 
{ 
      return (((1 << k) - 1) & (number >> (p - 1))); 
} 

int concat(int x, int y) {
      unsigned pow = 10;
          while(y >= pow)
                    pow *= 10;
                        return x * pow + y;        
}

//==========Function to extract dr5 =================//

int extract_data_reg(int bits_receive, int data_reg){
	int lsh = (bits_receive) % 8; 
	
		int msb = bitExtracted(data_reg, 7, 9); 
		int lsb = bitExtracted(data_reg,lsh,1);
		int val = msb<<lsh|lsb;
		return val;
	
}


int main(){

spi_init(SPI0);

int val=10;
int dr5;

printf("SPI START \n"); 

set_spi(SPI_DR1(SPI0), 0xD0000000);  // Change the value for different channels refer datasheet
val = get_spi(SPI_DR1(SPI0));
printf("SPI value dr1 %x \n", val); 

spi_tx_rx_start(SPI_CR2(SPI0)); 

int bits_receive = 13; // number of bits to be received


set_spi(SPI_CR1(SPI0), (SPI_BR(7)|SPI_TOTAL_BITS_TX(4)|SPI_TOTAL_BITS_RX(bits_receive)|SPI_SPE| SPI_CPHA(1) | SPI_CPOL(1))); // This is for mode3, for mode0 CPHA and CPOL is 0

printf("SPI TRANSMIT DONE\n"); 

if(spi_rxne_enable(SPI_SR(SPI0))){ 
dr5 = get_spi(SPI_DR5(SPI0));
printf("SPI received value dr5 %x \n", dr5); 

}
val = extract_data_reg(bits_receive, dr5); // extract required bits from dr5

printf("\nSPI ADC value %x \n", val);

printf("\nSPI init done\n"); 

return 0; 
} 

