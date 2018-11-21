// See LICENSE for license details.

#include "femto.h"

static void shakti_e_init() {};

static void shakti_e_poweroff(int status) {};

poweroff_device_t poweroff_shakti_e_platform = {
	shakti_e_init,
	shakti_e_poweroff
};
