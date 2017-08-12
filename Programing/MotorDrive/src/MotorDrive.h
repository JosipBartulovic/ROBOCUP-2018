#include "Arduino.h"

class MotorDrive{
	public:
		MotorDrive(unsigned char switch_pin, 
				unsigned char motor_l_pwm_pin, 
				unsigned char motor_l_fwd_pin,
				unsigned char motor_l_bck_pin, 
				unsigned char motor_r_pwm_pin,
				unsigned char motor_r_fwd_pin,
				unsigned char motor_r_bck_pin 
				);
		void motorDriveStart();
		void motorDriveStop();
		void leftMotorPWM(unsigned char pwm);
		void leftMotorFWD();
		void leftMotorBCK();
		void rightMotorPWM(unsigned char pwm);
		void rightMotorFWD();
		void rightMotorBCK();
	
	private:
		unsigned char switch_pin;
		unsigned char motor_l_pwm_pin;
		unsigned char motor_l_fwd_pin;
		unsigned char motor_l_bck_pin;
		unsigned char motor_r_pwm_pin;
		unsigned char motor_r_fwd_pin;
		unsigned char motor_r_bck_pin;
	
		

};