SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

uint16_t blink_speed;
bool alternator = true;



void setup()
{
    pinMode(D5, OUTPUT);
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