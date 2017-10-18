#include "lib.h"
#include <Wire.h>
#include "veml6040.h"

void setup(){
    Wire.begin();
    unsigned char niz[] = {1,2,3,4};
    unsigned char kol = 4;
    SensorArray senzor(niz, kol);
    Serial.begin(9600);
    for(int i=0; i<kol; i++){
      Serial.println(senzor.getValueArray()[i]);
    }
    VEML6040 RGBWSensor;    
    RGBWSensor.setConfiguration(VEML6040_IT_320MS + VEML6040_AF_AUTO + VEML6040_SD_ENABLE);
    MotorDrive drive(1,2,3,4,5,6,7);
}

void loop(){
    
}
