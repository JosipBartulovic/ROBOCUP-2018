#include "lib.h"

void setup(){
    unsigned char niz[] = {1,2,3,4};
    unsigned char kol = 4;
    SensorArray senzor(niz, kol);
    Serial.begin(9600);
    for(int i=0; i<kol; i++){
      Serial.println(senzor.getValueArray()[i]);
    }

    MotorDrive drive(1,2,3,4,5,6,7);
}

void loop(){
    
}
