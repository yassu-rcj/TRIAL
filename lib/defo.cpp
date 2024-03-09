#include <Arduino.h>
#define pin 8
int b;
void setup(){
pinMode(8,INPUT);
Serial.begin(9600);
}
void loop(){
b=digitalRead(pin);
Serial.print(">b:");
Serial.println(b);
}