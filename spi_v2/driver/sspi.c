#ifndef SSPI_H
#define SSPI_H

#include<stdlib.h>
#include<stdint.h>

#define COMMCTRL	0x00010300
#define CLKCTRL		0x00010304
#define TXREG		0x00010308
#define RXREG		0x0001030C
#define INTR_EN		0x00010310
#define STATUS		0x00010314
#define COMMSTATUS	0x00010318
#define INQUAL		0x0001031C

#define COMMCTRL_MOSI_OUTEN		(1<<25)
#define COMMCTRL_MISO_OUTEN		(1<<24)
#define COMMCTRL_SCLK_OUTEN		(1<<23)
#define COMMCTRL_CS_OUTEN		(1<<22)
#define COMMCTRL_RX_BITS(x)		(x<<14)
#define COMMCTRL_TX_BITS(x)		(x<<6)
#define COMMCTRL_COMM_MODE(x)	(x<<4)
#define COMMCTRL_LSB_FIRST		(1<<2)
#define COMMCTRL_SPI_EN			(1<<1)
#define COMMCTRL_MASTER_MODE	(1<<0)

#define CLKCTRL_T_CS(x)			(x<<18)
#define CLKCTRL_CS_T(x)			(x<<10)
#define CLKCTRL_PRESCALE(x)		(x<<2)
#define CLKCTRL_PHASE			(1<<1)
#define CLKCTRL_POLARITY		(1<<0)


uint32_t* commctrl		=	(const uint32_t*) COMMCTRL;
uint32_t* clkctrl 		=	(const uint32_t*) CLKCTRL;
uint32_t* tx			=	(const uint32_t*) TXREG;
uint32_t* rx			=	(const uint32_t*) RXREG;
uint32_t* status		=	(const uint32_t*) STATUS;
uint32_t* commstatus	=	(const uint32_t*) COMMSTATUS;
uint32_t* inqual		=	(const uint32_t*) INQUAL;



__attribute__((always_inline))
static inline void set_shakti32(uint32_t* addr, uint32_t val)
{
	*addr = val;
}

__attribute__((always_inline))
static inline void set_shakti16(uint16_t* addr, uint16_t val)
{
	*addr = val;
}

__attribute__((always_inline))                                                                      
static inline void set_shakti8(uint8_t* addr, uint8_t val)                                   
{                                                                                                   
    *addr = val;                                                                                    
} 

__attribute__((always_inline))
static inline uint32_t get_shakti32(uint32_t* addr)
{
	return *addr;
}

__attribute__((always_inline))
static inline uint16_t get_shakti16(uint16_t* addr)
{
	return *addr;
}


__attribute__((always_inline))
static inline uint8_t get_shakti8(uint8_t* addr)
{
	return *addr;
}

void waitfor(unsigned int secs) 
{
	unsigned int time = 0;
	while(time++ < secs);
}

int spi_notbusy()
{
	int temp = 0x00000001;
	while(temp & 0x00000001){
		waitfor(10);
		temp = get_shakti32(commstatus);
	}
	printf("\n SPI comm done \n");
	return 1;
}

int flash_writedone()
{
	int temp = 0x03;
	while(temp != 0x02){
		set_shakti8(tx,0x05);
		set_shakti32(commctrl,(COMMCTRL_MOSI_OUTEN|COMMCTRL_SCLK_OUTEN|COMMCTRL_CS_OUTEN|COMMCTRL_TX_BITS(8)|COMMCTRL_RX_BITS(8)|COMMCTRL_COMM_MODE(2)|COMMCTRL_SPI_EN|COMMCTRL_MASTER_MODE));
		waitfor(10);
		temp = get_shakti8(rx);
		printf("\n flash status %08x \n",temp);
	}
	return 1;		
}
#endif

int main()
{
	waitfor(1000);
	set_shakti8(tx,0x06);
	set_shakti32(clkctrl,(CLKCTRL_PRESCALE(13)|CLKCTRL_PHASE|CLKCTRL_POLARITY));
	set_shakti16(inqual,0x05);
	set_shakti32(commctrl,(COMMCTRL_MOSI_OUTEN|COMMCTRL_SCLK_OUTEN|COMMCTRL_CS_OUTEN|COMMCTRL_TX_BITS(8)|COMMCTRL_RX_BITS(0)|COMMCTRL_COMM_MODE(0)|COMMCTRL_SPI_EN|COMMCTRL_MASTER_MODE));
//	waitfor(100);
	int temp_0 = flash_writedone();

	set_shakti8(tx,0x9F);
	set_shakti32(commctrl,(COMMCTRL_MOSI_OUTEN|COMMCTRL_SCLK_OUTEN|COMMCTRL_CS_OUTEN|COMMCTRL_TX_BITS(8)|COMMCTRL_RX_BITS(32)|COMMCTRL_COMM_MODE(2)|COMMCTRL_SPI_EN|COMMCTRL_MASTER_MODE));
	temp_0 = spi_notbusy();
	uint32_t temp_1 = get_shakti32(rx);
	printf("\n Device ID %08x \n",temp_1);

	set_shakti8(tx,0x06);
	set_shakti32(commctrl,(COMMCTRL_MOSI_OUTEN|COMMCTRL_SCLK_OUTEN|COMMCTRL_CS_OUTEN|COMMCTRL_TX_BITS(8)|COMMCTRL_RX_BITS(0)|COMMCTRL_COMM_MODE(0)|COMMCTRL_SPI_EN|COMMCTRL_MASTER_MODE));
//	waitfor(100);
	temp_0 = flash_writedone();
	
	set_shakti8(tx,0x12);
	set_shakti32(tx,0x00000000);
	set_shakti32(tx,0xDEADBEEF);	
	set_shakti32(commctrl,(COMMCTRL_MOSI_OUTEN|COMMCTRL_SCLK_OUTEN|COMMCTRL_CS_OUTEN|COMMCTRL_TX_BITS(72)|COMMCTRL_RX_BITS(0)|COMMCTRL_COMM_MODE(0)|COMMCTRL_SPI_EN|COMMCTRL_MASTER_MODE));
	temp_0 = spi_notbusy();

	set_shakti8(tx,0x0C);
	set_shakti32(tx,0x00000000);
	set_shakti8(tx,0x00);
	set_shakti32(commctrl,(COMMCTRL_MOSI_OUTEN|COMMCTRL_SCLK_OUTEN|COMMCTRL_CS_OUTEN|COMMCTRL_TX_BITS(48)|COMMCTRL_RX_BITS(32)|COMMCTRL_COMM_MODE(2)|COMMCTRL_SPI_EN|COMMCTRL_MASTER_MODE));
	temp_0 = spi_notbusy();

	temp_1 = get_shakti32(rx);
	printf("\n read value %08x \n",temp_1);

	return 0;
}
