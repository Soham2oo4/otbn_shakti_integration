#include<stdlib.h>
#include<stdint.h>

#define CTRL		0x00050000
#define CLKCTRL		0x00050004
#define COUNTER		0x00050008
#define COUNT_CONT	0x0005000C
#define COMPARE		0x00050010
#define COUNTREF	0x00050014
#define CAPTURE		0x00050018
#define INPUT_QUAL 	0x0005001C

#define CTRL_CAPTURE_IN		(1<<15)
#define CTRL_UFLOW_INTR_EN	(1<<10)
#define CTRL_OFLOW_INTR_EN	(1<<9)
#define CTRL_RISE_INTR_EN	(1<<8)
#define CTRL_FALL_INTR_EN	(1<<7)
#define CTRL_CONT_COUNT  	(1<<6)
#define CTRL_COUNT_RESET   	(1<<5)
#define CTRL_OUT_EN      	(1<<4)
#define CTRL_MODE(x)		(x<<2)
#define CTRL_RESET    		(1<<1)
#define CTRL_ENABLE     	(1<<0)

#define CLK_CTRL_DIVIDER(x)	(x<<1)
#define CLK_CTRL_CLK_SRC	(1<<0)


uint32_t* ctrl		=	(const uint32_t*) CTRL;
uint32_t* clkctrl 	=	(const uint32_t*) CLKCTRL;
uint32_t* counter	=	(const uint32_t*) COUNTER;
uint32_t* count_cont =	(const uint32_t*) COUNT_CONT;
uint32_t* compare	=	(const uint32_t*) COMPARE;
uint32_t* countref	=	(const uint32_t*) COUNTREF;
uint32_t* capture	=	(const uint32_t*) CAPTURE;
uint32_t* input_qual = 	(const uint32_t*) INPUT_QUAL;


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

int main()
{
	set_shakti32(clkctrl,(CLK_CTRL_DIVIDER(1)));
	set_shakti8(input_qual,1);
	set_shakti32(countref,0x0000000A);
	set_shakti16(ctrl,(CTRL_COUNT_RESET));
	set_shakti16(ctrl,(CTRL_OFLOW_INTR_EN|CTRL_CONT_COUNT|CTRL_OUT_EN|CTRL_MODE(1)|CTRL_ENABLE));
	waitfor(100);
	uint32_t temp_0 = get_shakti32(counter);
	uint32_t temp_1 = get_shakti32(count_cont);
	printf("\n Up Count value : %08x and Continuous_count : %08x \n " ,temp_0,temp_1);
	set_shakti16(ctrl,(CTRL_COUNT_RESET));
	set_shakti16(ctrl,(CTRL_UFLOW_INTR_EN|CTRL_CONT_COUNT|CTRL_OUT_EN|CTRL_MODE(2)|CTRL_ENABLE));
	waitfor(100);
	temp_0 = get_shakti32(counter);
	temp_1 = get_shakti32(count_cont);
	printf("\n Down Count value : %08x and Continuous_count : %08x \n " ,temp_0,temp_1);
	set_shakti16(ctrl,(CTRL_COUNT_RESET));
	set_shakti16(ctrl,(CTRL_UFLOW_INTR_EN|CTRL_OFLOW_INTR_EN|CTRL_CONT_COUNT|CTRL_OUT_EN|CTRL_MODE(3)|CTRL_ENABLE));
	waitfor(100);
	temp_0 = get_shakti32(counter);
	temp_1 = get_shakti32(count_cont);
	printf("\n Up and Down Count value : %08x and Continuous_count : %08x \n " ,temp_0,temp_1);
	set_shakti16(ctrl,(CTRL_COUNT_RESET));
	set_shakti32(compare,0x00000005);
	set_shakti16(ctrl,(CTRL_CAPTURE_IN|CTRL_FALL_INTR_EN|CTRL_RISE_INTR_EN|CTRL_OUT_EN|CTRL_MODE(0)|CTRL_ENABLE));
	waitfor(100);
	temp_0 = get_shakti32(counter);
	temp_1 = get_shakti32(count_cont);
	printf("\n PWM Count value : %08x and Continuous_count : %08x \n " ,temp_0,temp_1);
	uint32_t temp_2 = get_shakti32(capture);
	printf("\n Input captured at %08x \n",temp_2);	
	return 0;
}
