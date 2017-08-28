
// KRETEN NAPISA KOD
//SENZORI
int IR_1 = 30;
int IR_2 = 31;
int IR_3 = 35;
int IR_4 = 34;
int IR_5 = 32;
int IR_6 = 33;
int IR_7 = 36;
int IR_8 = 37;

// LIVI MOTOR
int motorL_PWM = 3;
int motorL_FWD = 11;
int motorL_BCK = 10;
// DESNI MOTOR
int motorR_PWM = 46;
int motorR_FWD = 13;
int motorR_BCK = 12;

int trigger = 15;

void setup() {

    pinMode(motorL_PWM, OUTPUT);
    pinMode(motorL_FWD, OUTPUT);
    pinMode(motorL_BCK, OUTPUT);
    pinMode(motorR_PWM, OUTPUT);
    pinMode(motorR_FWD, OUTPUT);
    pinMode(motorR_BCK, OUTPUT);
    pinMode(trigger, OUTPUT);
    pinMode(IR_1, INPUT);
    pinMode(IR_2, INPUT);
    pinMode(IR_3, INPUT);
    pinMode(IR_4, INPUT);
    pinMode(IR_5, INPUT);
    pinMode(IR_6, INPUT);
    pinMode(IR_7, INPUT);
    pinMode(IR_8, INPUT);
    digitalWrite(trigger, HIGH);
    
    Serial.begin(9600);
    
  
}

void loop() {
    Serial.println(digitalRead(IR_1));
    Serial.println(digitalRead(IR_2));
    Serial.println(digitalRead(IR_3));
    Serial.println(digitalRead(IR_4));
    Serial.println(digitalRead(IR_5));
    Serial.println(digitalRead(IR_6));
    Serial.println(digitalRead(IR_7));
    Serial.println(digitalRead(IR_8));
    delay(1500);
    
}
