// See LICENSE for license details.

#include "femto.h"

#define PROGRAM_END_REGISTER 0x2000c

static void shakti_e_init() {};

static void shakti_e_poweroff(int status) {

    // UART Flush 
    static volatile int8_t* uart_base_address = (int8_t*)0x1130c;
    while((*uart_base_address & 0x1) == 0);

    int *program_end_address = (int*) PROGRAM_END_REGISTER;
    *program_end_address = 1;
};

poweroff_device_t poweroff_shakti_e_platform = {
	shakti_e_init,
	shakti_e_poweroff
};
