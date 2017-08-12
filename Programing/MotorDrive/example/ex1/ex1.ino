#include<MotorDrive.h>

MotorDrive motor(15,3,11,10,46,13,12);

void setup() {
  motor.motorDriveStart();
  motor.rightMotorPWM(220);
  motor.rightMotorFWD();
  motor.motorDriveStop();
}

void loop() {
  // put your main code here, to run repeatedly:

}
