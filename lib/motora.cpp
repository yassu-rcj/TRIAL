#include <Arduino.h>
#define pin 8
#define pin1 9
#define pi 2
#define pi2 3
#define p 4
#define pp 5
void setup(){
    pinMode(pin,OUTPUT);
    pinMode(pin1,OUTPUT);
}
void loop(){
    analogWrite(pin,100);
    analogWrite(pin1,0);
    analogWrite(pi,100);
    analogWrite(pi2,0);
    analogWrite(p,100);
    analogWrite(pp,0);
    analogWrite(6,100);
    analogWrite(7,0);
    delay(1000);
    analogWrite(pin,0);
    analogWrite(pin1,0);
    analogWrite(pi,0);
    analogWrite(pi2,0);
    analogWrite(p,0);
    analogWrite(pp,0);
    analogWrite(6,0);
    analogWrite(7,0);
    delay(1000);
}