#include <Arduino.h>
#define pin 4 // 　これがピン番号
int b, c;
unsigned long time_new;
void setup()
{
    Serial.begin(9600);
    pinMode(pin, INPUT);
}
void loop()
{
    b = digitalRead(4); // ここはhttps://ht-deko.com/arduino/portregisters.html　  PIN〇 & _BV(数字);
    Serial.print("line");
    Serial.println(b);
}
