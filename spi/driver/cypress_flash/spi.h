#include<stdlib.h>

#define SPI_CR1 	 0x00020000
#define SPI_CR2 	 0x00020004
#define SPI_SR       	 0x00020008
#define SPI_DR1  	 0x0002000C
#define SPI_DR2  	 0x00020010
#define SPI_DR3  	 0x00020014
#define SPI_DR4		 0x00020018
#define SPI_DR5		 0x0002001C


// defining SPI_CR1 register

#define SPI_CPHA		(1 << 0)
#define SPI_CPOL		(1 << 1)
#define SPI_MSTR		(1 << 2)
#define SPI_BR(x)		(x << 3)
#define SPI_SPE  		(1 << 6)
#define SPI_LSBFIRST		(1 << 7)
#define SPI_SSI 		(1 << 8)
#define SPI_SSM			(1 << 9)
#define SPI_RXONLY		(1 << 10)
#define SPI_CRCL		(1 << 11)
#define SPI_CCRCNEXT		(1 << 12)
#define SPI_CRCEN		(1 << 13)
#define SPI_BIDIOE		(1 << 14)
#define SPI_BIDIMODE		(1 << 15)
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

//pointers to register

int* spi_cr1 = (int*) SPI_CR1;
int* spi_cr2 = (int*) SPI_CR2;
int* spi_sr  = (int*) SPI_SR ;
int* spi_dr1  = (int*) SPI_DR1 ;
int* spi_dr2  = (int*) SPI_DR2 ;
int* spi_dr3  = (int*) SPI_DR3 ;
int* spi_dr4  = (int*) SPI_DR4 ;
int* spi_dr5  = (int*) SPI_DR5 ; 

int read_data[4096];
int br = 6; // control the baud rate;

int read_data[4096];


void set_spi(int* addr, int val)
{
    *addr = val;
}

int get_spi(int* addr)
{
 return *addr;
}

void spi_init(){
set_spi(spi_cr1, (SPI_BR(br)|SPI_CPHA|SPI_CPOL));
}

void spi_tx_rx_start(){
set_spi(spi_cr2, (SPI_RX_IMM_START));
}

void spi_enable(){
set_spi(spi_cr1, (SPI_BR(br)|SPI_TOTAL_BITS_TX(4)|SPI_TOTAL_BITS_RX(16)|SPI_SPE));
}

void spi_rx_enable(){
set_spi(spi_cr2, (SPI_RX_START));
}

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

int spi_rxne_enable(){
	int value = 0;
	while (!(value & 0x1)){
		waitfor(100);
		value = *spi_sr;
	}
	return 1;
}

int spi_txe(){
	int value = 0;
	while (!(value & 0x2)){
		waitfor(100);
		value = *spi_sr;
	}
	return 1;
}

int spi_notbusy(){
	int value = 0x80;
	while((value & 0x80)){
		waitfor(10);
		value = get_spi(spi_sr);
		printf("Reading SR  %x \n",value);
	}
	return 1;
}

void waitfor(unsigned int secs) {
	unsigned int time = 0;
	while(time++ < secs);
}

int flash_write_enable(){
	printf("Cypress write enable \n");
	set_spi(spi_dr1, 0x06000000);
	set_spi(spi_cr1, (SPI_BR(br)|SPI_TOTAL_BITS_TX(8)|SPI_TOTAL_BITS_RX(0)|SPI_SPE|SPI_CPHA|SPI_CPOL));
	spi_notbusy();
	return 1;
}



int flash_clear_sr(){
	set_spi(spi_dr1,0x30000000);
	set_spi(spi_dr5,0x30);
	set_spi(spi_cr1, (SPI_BR(br)|SPI_TOTAL_BITS_TX(8)|SPI_TOTAL_BITS_RX(0)|SPI_SPE|SPI_CPHA|SPI_CPOL));
	spi_notbusy();
	return 1;
}

int flash_cmd_addr(int command, int addr){
	int address1 = bitExtracted(addr, 24, 9);
	int address2 = bitExtracted(addr, 8, 1);
	int data1 = command | address1 ;
	address2 = address2 << 24;
	set_spi(spi_dr1, data1);
	set_spi(spi_dr2, address2);
	set_spi(spi_cr1, (SPI_BR(br)|SPI_TOTAL_BITS_TX(40)|SPI_TOTAL_BITS_RX(0)|SPI_SPE|SPI_CPHA|SPI_CPOL));
	waitfor(20);
	spi_notbusy();
	return 1;
}


void flash_cmd_addr_data(int command, int addr, int data){
	int address1 = bitExtracted(addr, 24, 9);
	int address2 = bitExtracted(addr, 8, 1);
	int cmd_addr = command  | address1;
	address2 = address2 << 24;
	int data1 = bitExtracted(data, 24, 9);
	data1 = address2 | data1;
	int data2 = bitExtracted(data, 8, 1);
	data2 = data2 << 24;
	set_spi(spi_dr1, cmd_addr);
	set_spi(spi_dr2, data1);
	set_spi(spi_dr3, data2);
	set_spi(spi_cr1, (SPI_BR(br)|SPI_TOTAL_BITS_TX(72)|SPI_TOTAL_BITS_RX(0)|SPI_SPE|SPI_CPHA|SPI_CPOL));
	waitfor(20);
	spi_notbusy();
}

void flash_write(int address, int data){
	flash_cmd_addr_data(0x12000000, address,data);
}


int flash_cmd_to_read(int command, int addr){
	int dr5;
	int address1 = bitExtracted(addr, 24, 9);
	int address2 = bitExtracted(addr, 8, 1);
	int cmd_addr = command  | address1;
	address2 = address2 << 24;
	set_spi(spi_dr1, cmd_addr);
	set_spi(spi_dr2, address2);
	spi_tx_rx_start();
	set_spi(spi_cr1, (SPI_BR(br)|SPI_TOTAL_BITS_TX(48)|SPI_TOTAL_BITS_RX(32)|SPI_SPE|SPI_CPHA|SPI_CPOL));
	waitfor(20);
	if(spi_rxne_enable()) {
		dr5 = *spi_dr5;
	}
	return dr5;

}

int flash_read(int address){
	int read_value = flash_cmd_to_read(0x0C000000,address);
	return read_value;
}

//
int flash_read_intrpt( int addr){
	int address1 = bitExtracted(addr, 24, 9);
	int address2 = bitExtracted(addr, 8, 1);
	int cmd_addr = 0x0C000000  | address1;
	address2 = address2 << 24;
	set_spi(spi_dr1, cmd_addr);
	set_spi(spi_dr2, address2);
	set_spi(spi_cr2, (SPI_RX_IMM_START | SPI_RXNE_IE));
	set_spi(spi_cr1, (SPI_BR(br)|SPI_TOTAL_BITS_TX(48)|SPI_TOTAL_BITS_RX(32)|SPI_SPE|SPI_CPHA|SPI_CPOL));
	waitfor(20);
}


int flash_cmd_read(int command){
	int dr1, dr2, dr5;
	set_spi(spi_dr1, command);
	spi_tx_rx_start();
	set_spi(spi_cr1, (SPI_BR(br)|SPI_TOTAL_BITS_TX(8)|SPI_TOTAL_BITS_RX(32)|SPI_SPE|SPI_CPHA|SPI_CPOL));
	if(spi_rxne_enable()) {
		dr5 = *spi_dr5;
	}
  	return dr5;
}

void flash_erase(int address){
	flash_cmd_addr(0xDC000000, address);
	printf("Cypress erase started\n");
}                                                                      
                                                                
                                                                     
int flash_status_register_read(){
	int stat = 0x3;
	while (stat & 0x03){
		waitfor(2500);
		stat = flash_cmd_read(0x05000000);
	}
	return 0;
}
	
	
int flash_device_id(){
	int val1, val2, val3;
	waitfor(200);
	set_spi(spi_dr1, 0x9f000000);
	spi_tx_rx_start();
	set_spi(spi_cr1, (SPI_BR(br)|SPI_TOTAL_BITS_TX(8)|SPI_TOTAL_BITS_RX(24)|SPI_SPE|SPI_CPHA|SPI_CPOL));
	if(spi_rxne_enable()) {
		val3 = *spi_dr5;
}
	val1 = bitExtracted(val3, 8, 17);
	val2 = bitExtracted(val3, 16, 1);	
	printf("Manufacturer ID: %02x \n", val1);
	printf("Device ID: %04x \n",val2);
	return 1;	
}

void flash_cmd_to_read_xip_mode(int command, int addr, int bits_to_be_received, int read_data_store){
	int dr1,dr2,dr3,dr4,dr5;
	int address1 = bitExtracted(addr, 24, 9);
	int address2 = bitExtracted(addr, 8, 1);
	int cmd_addr = command  | address1;
	address2 = address2 << 24;
	printf("\n");
	set_spi(spi_dr1, cmd_addr);
	set_spi(spi_dr2, address2);
	spi_tx_rx_start();
	set_spi(spi_cr1, (SPI_BR(br)|SPI_TOTAL_BITS_TX(40)|SPI_TOTAL_BITS_RX(bits_to_be_received)|SPI_SPE|SPI_CPHA|SPI_CPOL));
	if(spi_rxne_enable()) {
		dr5 = *spi_dr5;
		dr4 = *spi_dr4;
		dr3 = *spi_dr3;
		dr2 = *spi_dr2;
		dr1 = *spi_dr1;
		read_data[read_data_store] = dr1;
		read_data[read_data_store+1] = dr2;
		read_data[read_data_store+2] = dr3;
		read_data[read_data_store+3] = dr4;
		read_data[read_data_store+4] = dr5;
		printf("Data received : %d : %x, %x, %x, %x, %x \n", read_data_store,dr5,dr4,dr3,dr2,dr1);
		printf("\n");

	}

}

}

void flash_xip_read(int start_address,int bits_to_be_received,int read_data_store){
	printf("XIP mode : Reading from flash\n");
	flash_cmd_to_read_xip_mode(0x13000000,start_address,bits_to_be_received,read_data_store);
	printf("Read request for XIP mode done\n");
}

/*
int read_data[4096];

void flash_cmd_to_read_xip_mode(int command, int addr, int bits_to_be_received, int read_data_store){
	int dr1,dr2,dr3,dr4,dr5;
	int address1 = bitExtracted(addr, 24, 9);
	int address2 = bitExtracted(addr, 8, 1);
	int cmd_addr = command  | address1;
	address2 = address2 << 24;
	printf("\n");
	set_spi(spi_dr1, cmd_addr);
	set_spi(spi_dr2, address2);
	set_spi(spi_dr5, 0);
	spi_tx_rx_start();
	set_spi(spi_cr1, (SPI_BR(7)|SPI_TOTAL_BITS_TX(40)|SPI_TOTAL_BITS_RX(bits_to_be_received)|SPI_SPE|SPI_CPHA|SPI_CPOL));
	if(spi_rxne_enable()) {
		dr5 = *spi_dr5;
		dr4 = *spi_dr4;
		dr3 = *spi_dr3;
		dr2 = *spi_dr2;
		dr1 = *spi_dr1;
		read_data[read_data_store] = dr1;
		read_data[read_data_store+1] = dr2;
		read_data[read_data_store+2] = dr3;
		read_data[read_data_store+3] = dr4;
		read_data[read_data_store+4] = dr5;
		printf("Data received : %d : %x, %x, %x, %x, %x \n", read_data_store,dr5,dr4,dr3,dr2,dr1);
		printf("\n");
	}

}


void flash_xip_read(int start_address,int bits_to_be_received,int read_data_store){
	printf("XIP mode : Reading from flash\n");
	flash_cmd_to_read_xip_mode(0x13000000,start_address,bits_to_be_received,read_data_store);
	printf("Read request for XIP mode done\n");
}*/
