// See LICENSE for license details.

#include "femto.h"

#define PROGRAM_END_REGISTER 0x2000c

static void shakti_e_init() {};

static void shakti_e_poweroff(int status) {

    // UART Flush 
    int8_t* uart_base_address = (int8_t*)0x1130c;
    asm volatile("\n\t"
      "uart_end:"
      "li t1, 0x11300;" "\n\t"
      "lb a1, 12(t1);" "\n\t"
      "andi a1, a1, 0x1;" "\n\t"
      "beqz a1, uart_end;" "\n\t");
    int *program_end_address = (int*) PROGRAM_END_REGISTER;
    *program_end_address = 1;
};

poweroff_device_t poweroff_shakti_e_platform = {
	shakti_e_init,
	shakti_e_poweroff
};
