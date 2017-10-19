#include "lib.h"
#include <Wire.h>
#include "veml6040.h"

unsigned char pinovi[] = {30, 31, 35, 34, 32, 33, 36, 37};
unsigned char broj_pinova = 8;
unsigned char* value_array;
float sensor_value;
SensorArray senzor(pinovi, broj_pinova);

MotorDrive motor(15, 3, 11, 10, 46, 13, 12);

void setup(){
  Serial.begin(9600);
}

void loop(){
  sensor_value = senzor.getAnalogValue();
  motor.motorDriveStart();
  Serial.println(sensor_value);
  
  if(sensor_value >= 6.50){
      motor.leftMotorBCK();
      motor.rightMotorFWD();
      motor.leftMotorPWM(170);
      motor.rightMotorPWM(200);
  }else if(sensor_value <= 2.50 && sensor_value > 0){
      motor.leftMotorFWD();
      motor.rightMotorBCK();
      motor.leftMotorPWM(200);
      motor.rightMotorPWM(170);
  }else{
      motor.leftMotorFWD();
      motor.rightMotorFWD();
      motor.leftMotorPWM(150);
      motor.rightMotorPWM(150);
  }
}
