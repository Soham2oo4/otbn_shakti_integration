#include<stdlib.h>

#define SPI_CR1 	0x00011E00
#define SPI_CR2 	0x00011E04
#define SPI_SR      0x00011E08
#define SPI_DR  	0x00011E0C
#define SPI_CRCPR   0x00011E10
#define SPI_RXCRCR  0x00011E14
#define SPI_TXCRCR  0x00011E18

// defining SPI_CR1 register

#define SPI_CPHA		(1 << 0)
#define SPI_CPOL		(1 << 1)
#define SPI_MSTR		(1 << 2)
#define SPI_BR(x)		(x << 3)
#define SPI_SPE  		(1 << 6)
#define SPI_LSBFIRST	(1 << 7)
#define SPI_SSI 		(1 << 8)
#define SPI_SSM			(1 << 9)
#define SPI_RXONLY		(1 << 10)
#define SPI_CRCL		(1 << 11)
#define SPI_CCRCNEXT	(1 << 12)
#define SPI_CRCEN		(1 << 13)
#define SPI_BIDIOE		(1 << 14)
#define SPI_BIDIMODE	(1 << 15)

// defining SPI_CR2 register

#define SPI_LDMA_TX		(1 << 14)
#define SPI_LDMA_RX		(1 << 13)
#define SPI_FRXTH		(1 << 12)
#define SPI_DS(x)		(x << 8)
#define SPI_TXEIE		(1 << 7)
#define SPI_RXNEIE		(1 << 6)
#define SPI_ERRIE		(1 << 5)
#define SPI_FRF			(1 << 4)
#define SPI_NSSP		(1 << 3)
#define SPI_SSOE		(1 << 2)
#define SPI_TXDMAEN		(1 << 1)
#define SPI_RXDMAEN		(1 << 0)

//defining SR register

#define SPI_FTLVL(x)	(x << 11)
#define SPI_FRLVL(x)	(x << 9)
#define SPI_FRE			(1 << 8)
#define SPI_OVR			(1 << 6)
#define SPI_MODF		(1 << 5)
#define SPI_CRCERR		(1 << 4)
#define TXE				(1 << 1)
#define RXNE			(1 << 0)

//pointers to register

int* spi_cr1 = (int*) SPI_CR1;
int* spi_cr2 = (int*) SPI_CR2;
int* spi_sr  = (int*) SPI_SR ;
int* spi_dr  = (int*) SPI_DR ;
int* spi_crcpr  = (int*) SPI_CRCPR;
int* spi_rxcrcr = (int*) SPI_RXCRCR;
int* spi_txcrcr = (int*) SPI_TXCRCR; 


void set_spi(int* addr, int val)
{
    *addr = val;
}

int get_spi(int* addr)
{
 return *addr;
}

void spi_init(){
set_spi(spi_cr1, (SPI_SSM|SPI_LSBFIRST|SPI_SPE));
}

