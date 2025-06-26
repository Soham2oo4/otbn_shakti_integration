#include<stdlib.h>
#include<stdint.h>

__attribute__((always_inline))
static inline void set_shakti64(uint64_t* addr, uint64_t val)
{
	*addr = val;
}

__attribute__((always_inline))
static inline unsigned long long get_shakti64(uint64_t* addr)
{
	return *addr;
}

__attribute__((always_inline))
static inline void set_shakti32(uint32_t* addr, uint32_t val)
{
	*addr = val;
}

__attribute__((always_inline))
static inline uint32_t get_shakti32(uint32_t* addr)
{
	return *addr;
}

__attribute__((always_inline))
static inline void set_shakti16(uint16_t* addr, uint16_t val)
{
	*addr = val;
}

__attribute__((always_inline))
static inline uint16_t get_shakti16(uint16_t* addr)
{
	return *addr;
}

__attribute__((always_inline))
static inline void set_shakti8(uint8_t* addr, uint8_t val)
{
	*addr = val;
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

int main()
{
	set_shakti64(0x00080000,0xDEADBEEF01020304);
	unsigned long long temp_1 =get_shakti64(0x00080000);
	printf("\n Obtained value : %x \n",temp_1);
	waitfor(100);
	set_shakti32(0x00080000,0xDEADBEEF);
	set_shakti32(0x00084000,0xABABABAB);
	uint32_t temp =get_shakti32(0x00084000);
	printf("\n Obtained value : %08x \n",temp);
	waitfor(100);
	temp =get_shakti32(0x00080000);
	printf("\n Obtained value : %08x \n",temp);
	waitfor(100);
	set_shakti32(0x00083FFC,0xDEADBEEF);
	set_shakti32(0x00087FFC,0xABABABAB);
	temp =get_shakti32(0x00087FFC);
	printf("\n Obtained value : %08x \n",temp);
	waitfor(100);
	temp =get_shakti32(0x00083FFC);
	printf("\n Obtained value : %08x \n",temp);
	waitfor(100);
	set_shakti32(0x00080004,0x00000001);
	temp =get_shakti32(0x00080004);
	printf("\n Obtained value : %08x \n",temp);
	waitfor(100);
	set_shakti8(0x00080001,0x00000002);
	uint8_t temp_2 =get_shakti8(0x00080001);
	printf("\n Obtained value : %08x \n",temp_2);
	waitfor(100);
	set_shakti8(0x00080002,0x00000002);
	temp_2 =get_shakti8(0x00080002);
	printf("\n Obtained value : %08x \n",temp_2);
	waitfor(100);
	set_shakti8(0x00080003,0x00000003);
	temp_2 =get_shakti8(0x00080003);
	printf("\n Obtained value : %08x \n",temp_2);
	return 0;
}
