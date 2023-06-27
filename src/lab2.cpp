/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/benja/OneDrive/Desktop/visualStudioCode/summerIOT/lab2/src/lab2.ino"
void setup();
void loop();
#line 1 "c:/Users/benja/OneDrive/Desktop/visualStudioCode/summerIOT/lab2/src/lab2.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

uint16_t blink_speed;
bool alternator = true;



void setup()
{
    pinMode(D5, OUTPUT);
    pinMode(A5, OUTPUT);
    Serial.begin(9600);
}


void loop()
{
    blink_speed = analogRead(A5);
  
    Serial.println(blink_speed);

    if (alternator) {
        delay(blink_speed);
        digitalWrite(D5, HIGH);
        alternator = false;
    } else {
        delay(blink_speed);
        digitalWrite(D5, LOW);
        alternator = true;
    }


}