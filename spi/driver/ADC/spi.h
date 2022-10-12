#include<stdlib.h>

// Base address
#define SPI0 0x00020000 
#define SPI1 0x00020100
#define SPI2 0x00020200

#define SPI_CR1(x)  x + 0x0
#define SPI_CR2(x)  x + 0x4
#define SPI_SR(x)   x + 0x08
#define SPI_DR1(x)  x + 0x0C
#define SPI_DR2(x)  x + 0x10
#define SPI_DR3(x)  x + 0x14
#define SPI_DR4(x)  x + 0x18
#define SPI_DR5(x)  x + 0x1C


// defining SPI_CR1 register

#define SPI_CPHA(x)	(x << 0)
#define SPI_CPOL(x)	(x << 1)
#define SPI_MSTR	(1 << 2)
#define SPI_BR(x)	(x << 3)
#define SPI_SPE  	(1 << 6)
#define SPI_LSBFIRST  	(1 << 7)
#define SPI_SSI 	(1 << 8)
#define SPI_SSM		(1 << 9)
#define SPI_RXONLY	(1 << 10)
#define SPI_CRCL	(1 << 11)
#define SPI_CCRCNEXT	(1 << 12)
#define SPI_CRCEN	(1 << 13)
#define SPI_BIDIOE	(1 << 14)
#define SPI_BIDIMODE	(1 << 15)
#define SPI_TOTAL_BITS_TX(x)  	(x << 16)
#define SPI_TOTAL_BITS_RX(x)  	(x << 24)

// defining SPI_CR2 register

#define SPI_RX_IMM_START 	(1 << 16)
#define SPI_RX_START	 	(1 << 15)
#define SPI_FRXTH		(1 << 14)
#define SPI_TX_FIFO_FULL	(1 << 13)
#define SPI_TX_FIFO_HALF	(1 << 12)
#define SPI_TX_FIFO_QUAD	(1 << 11)
#define SPI_TX_FIFO_EMPT	(1 << 10)
#define SPI_RX_FIFO_FULL	(1 << 9)
#define SPI_RX_FIFO_HALF	(x << 8)
#define SPI_RX_FIFO_QUAD	(1 << 7)
#define SPI_RX_FIFO_EMPT	(1 << 6)
#define SPI_ERR_IE		(1 << 5)
#define SPI_TX_ALARM_IE		(1 << 4)
#define SPI_RX_ALARM_IE		(1 << 3)
#define SPI_SSOE		(1 << 2)
#define SPI_TXE_IE		(1 << 1)
#define SPI_RXNE_IE		(1 << 0)

//defining SR register

#define SPI_FTLVL(x)		(x << 11)
#define SPI_FRLVL(x)		(x << 9)
#define SPI_FRE			(1 << 8)
#define SPI_BSY             	(1 << 7)
#define SPI_TX_OVR		(1 << 6)
#define SPI_RX_OVR		(1 << 5)
#define SPI_MODF		(1 << 4)
#define SPI_TX_ALARM		(1 << 3)
#define SPI_RX_ALARM		(1 << 2)
#define SPI_TXE			(1 << 1)
#define SPI_RXNE		(1 << 0)

void set_spi(int* addr, int val)
{
    *addr = val;
}

int get_spi(int* addr)
{
 return *addr;
}

void spi_init(int *SPI){
set_spi(SPI_CR1(SPI), (SPI_BR(7) | SPI_CPHA(1) | SPI_CPOL(1)));
//set_spi(spi_cr1, SPI_BR(7));
}

void spi_tx_rx_start(int *spi_cr){
set_spi(spi_cr, (SPI_RX_IMM_START));
}

void spi_enable(int *spi_cr){
set_spi(spi_cr, (SPI_BR(7)|SPI_TOTAL_BITS_TX(4)|SPI_TOTAL_BITS_RX(13)|SPI_SPE | SPI_CPHA(1) | SPI_CPOL(1)));
//set_spi(spi_cr1, (SPI_BR(7)|SPI_TOTAL_BITS_TX(4)|SPI_TOTAL_BITS_RX(13)|SPI_SPE));
}

void spi_rx_enable(int *spi_cr2){
set_spi(spi_cr2, (SPI_RX_START));
}

int spi_rxne_enable(int *spi_sr){
	int value = 0;
	while (!(value & 0x1)){
		waitfor(100);
		value = get_spi(spi_sr);
	}
	return 1;
}

int spi_notbusy(int *spi_sr){
	int value = 0x80;
	while((value & 0x80)){
		waitfor(10);
		value = get_spi(spi_sr);
		printf("\n status reg value : %d",value);
	}
	return 1;
}


void waitfor(unsigned int secs) {
	unsigned int time = 0;
	while(time++ < secs);
}

