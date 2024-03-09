#include <Arduino.h>
void setup()
{
    Serial.begin(9600);
    Seri
}
void loop()
{
    digitalWrite(1, HIGH);
    int b = digitalRead(1);
    Serial.println(b);
}