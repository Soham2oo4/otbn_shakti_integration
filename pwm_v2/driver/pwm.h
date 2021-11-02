#ifndef PWM_H
#define PWM_H

#include<stdlib.h>
#include<stdint.h>

#define DEF_TIMEOUT 60
#define BASE_ADDR 0x00010000

#define PR	 	0x00010008	//Period register
#define DR 		0x0001000C	//Duty register
#define CR 		0x00010004	//Control register
#define CKR 	0x00010000	//Clock register
#define DBR 	0x00010010	//Deadband register
#define TOPCTRL	0x00010800	//Top cluster Control register

#define PR1		0x00010018
#define DR1		0x0001001C
#define CR1		0x00010014
#define DBR1	0x00010020


#define CR_UPDATE_EN	(1<<12)
#define CR_RISE_EN		(1<<8)
#define CR_FALL_EN		(1<<7)
#define CR_HP_EN		(1<<6)
#define CR_INTR_SEL(x)	(x<<6)
#define CR_COMP_OUT_EN	(1<<5)
#define CR_COUNT_RESET	(1<<4)
#define CR_OUT_POL		(1<<3)
#define CR_OUT_EN		(1<<2)
#define CR_PWM_START	(1<<1)
#define CR_PWM_EN		(1<<0)

uint32_t* pr		=	(const uint32_t*) PR;
uint32_t* dr		=	(const uint32_t*) DR;
uint32_t* cr		=	(const uint32_t*) CR;
uint32_t* ckr		=	(const uint32_t*) CKR;
uint32_t* dbr		=	(const uint32_t*) DBR;
uint32_t* topctrl	=	(const uint32_t*) TOPCTRL;

uint32_t* pr1		=	(const uint32_t*) PR1;
uint32_t* dr1		=	(const uint32_t*) DR1;
uint32_t* cr1		=	(const uint32_t*) CR1;
uint32_t* dbr1		=	(const uint32_t*) DBR1;

__attribute__((always_inline))
static inline void set_pwm_shakti32(uint32_t* addr, uint32_t val)
{
	*addr = val;
//	printf("\n Writing to PWM register");
}

__attribute__((always_inline))
static inline void set_pwm_shakti16(uint16_t* addr, uint16_t val)
{
	*addr = val;
}

__attribute__((always_inline))                                                                      
static inline void set_pwm_shakti8(uint8_t* addr, uint8_t val)                                   
{                                                                                                   
    *addr = val;                                                                                    
} 

__attribute__((always_inline))
static inline uint32_t get_pwm_shakti32(uint32_t* addr)
{
	//printf("\n Reading PWM register");
	return *addr;
}

__attribute__((always_inline))
static inline uint16_t get_pwm_shakti16(uint16_t* addr)
{
	return *addr;
}

void waitfor(unsigned int secs) 
{
	unsigned int time = 0;
	while(time++ < secs);
}

#endif
