#include<Robot.h>

void setup() {
  int chmar[] = {34,35,36,37};
  SensorArray sens = SensorArray(chmar,4);
  pinMode(15, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
    digitalWrite(13,HIGH);

  
}
