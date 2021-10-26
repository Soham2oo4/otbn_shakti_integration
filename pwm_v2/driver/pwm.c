#include "pwm.h"

int main(){


//	printf("\n Starting the code \n");

	set_pwm_shakti16(topctrl,0x00);
	set_pwm_shakti16(ckr,100);
	set_pwm_shakti32(pr,20);
	set_pwm_shakti32(dr,5);
	set_pwm_shakti16(dbr,1);
	set_pwm_shakti16(cr,(CR_UPDATE_EN|CR_PWM_START));
	set_pwm_shakti16(cr,(CR_RISE_EN|CR_COMP_OUT_EN|CR_OUT_POL|CR_OUT_EN|CR_PWM_EN));
	set_pwm_shakti32(pr1,10);
	set_pwm_shakti32(dr1,5);
	set_pwm_shakti16(dbr1,0);
	set_pwm_shakti16(cr1,(CR_UPDATE_EN|CR_PWM_START));
	set_pwm_shakti16(cr1,(CR_RISE_EN|CR_COMP_OUT_EN|CR_OUT_POL|CR_OUT_EN|CR_PWM_EN));
	waitfor(100);
	set_pwm_shakti16(topctrl,0x01);
	set_pwm_shakti32(pr,20);
	set_pwm_shakti32(dr,5);
	set_pwm_shakti16(cr,(CR_UPDATE_EN|CR_FALL_EN|CR_COMP_OUT_EN|CR_OUT_POL|CR_OUT_EN|CR_PWM_EN));
	waitfor(100);	
	set_pwm_shakti16(topctrl,0x00);
	set_pwm_shakti32(pr,20);                                                                        
	set_pwm_shakti32(dr,5);                                                                        
	set_pwm_shakti16(cr,(CR_UPDATE_EN|CR_HP_EN|CR_COMP_OUT_EN|CR_OUT_POL|CR_OUT_EN|CR_PWM_EN));
	waitfor(100);
	return 0;
}
