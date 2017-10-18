#include "Arduino.h"

class SensorArray{
    public:
        SensorArray(unsigned char *sensor_pin_array, unsigned char array_size);
        unsigned char *getValueArray();
        float getAnalogValue();
        unsigned char getLineWidth();
        unsigned char getLeftSize();
        unsigned char getRightSize();

    private:
        unsigned char *sensor_array;
        unsigned char number_of_sensors;
        unsigned char *value_array;
        unsigned char **value_array_left;
        unsigned char **value_array_right;
        unsigned char middle;
};

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
