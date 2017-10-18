#include "lib.h"

MotorDrive::MotorDrive(unsigned char switch_pin, 
				unsigned char motor_l_pwm_pin, 
				unsigned char motor_l_fwd_pin,
				unsigned char motor_l_bck_pin, 
				unsigned char motor_r_pwm_pin,
				unsigned char motor_r_fwd_pin,
				unsigned char motor_r_bck_pin )
{
	pinMode(switch_pin, OUTPUT);
	pinMode(motor_l_pwm_pin, OUTPUT);
	pinMode(motor_l_bck_pin, OUTPUT);
	pinMode(motor_l_fwd_pin, OUTPUT);
	pinMode(motor_r_pwm_pin, OUTPUT);
	pinMode(motor_r_bck_pin, OUTPUT);
	pinMode(motor_r_fwd_pin, OUTPUT);
	
	this->switch_pin = switch_pin;
	this->motor_l_pwm_pin = motor_l_pwm_pin;
	this->motor_l_bck_pin = motor_l_bck_pin;
	this->motor_l_fwd_pin = motor_l_fwd_pin;
	this->motor_r_pwm_pin = motor_r_pwm_pin;
	this->motor_r_bck_pin = motor_r_bck_pin;
	this->motor_r_fwd_pin = motor_r_fwd_pin;	
	
	digitalWrite(this->switch_pin, LOW);
	analogWrite(this->motor_l_pwm_pin, 0);
	analogWrite(this->motor_r_pwm_pin, 0);
}


void MotorDrive::motorDriveStart(){
	digitalWrite(this->switch_pin, HIGH);
}


void MotorDrive::motorDriveStop(){
	digitalWrite(this->switch_pin, LOW);
}


void MotorDrive::leftMotorPWM(unsigned char pwm){
	analogWrite(this->motor_l_pwm_pin, pwm);
}


void MotorDrive::leftMotorFWD(){
	digitalWrite(this->motor_l_fwd_pin, HIGH);
	digitalWrite(this->motor_l_bck_pin, LOW);
}


void MotorDrive::leftMotorBCK(){
	digitalWrite(this->motor_l_bck_pin, HIGH);
	digitalWrite(this->motor_l_fwd_pin, LOW);
}


void MotorDrive::rightMotorPWM(unsigned char pwm){
	analogWrite(this->motor_r_pwm_pin, pwm);
}


void MotorDrive::rightMotorFWD(){
	digitalWrite(this->motor_r_fwd_pin, HIGH);
	digitalWrite(this->motor_r_bck_pin, LOW);
}


void MotorDrive::rightMotorBCK(){
	digitalWrite(this->motor_r_bck_pin, HIGH);
	digitalWrite(this->motor_r_fwd_pin, LOW);
}



