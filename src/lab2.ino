SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

uint16_t blink_interval;
bool alternator = true;



void setup()
{
    pinMode(D5, OUTPUT);
    pinMode(A5, OUTPUT);
    Serial.begin(9600);
}


void loop()
{
    blink_interval = analogRead(A5);
  
    Serial.println(blink_interval);

    if (alternator) {
        delay(blink_interval);
        digitalWrite(D5, HIGH);
        alternator = false;
    } else {
        delay(blink_interval);
        digitalWrite(D5, LOW);
        alternator = true;
    }


}