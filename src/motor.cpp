#include <Arduino.h>
#define IN1mo1 6
#define IN2mo1 11
#define IN1mo2 3
#define IN2mo2 6
#define IN1mo3 1
#define IN2mo3 2
#define IN1mo4 8
#define IN2mo4 7
void setup(){
Serial.begin(9600);
}
void loop(){
  analogWrite(IN1mo1,200);
  analogWrite(IN2mo1,0);
  delay(1000);
  analogWrite(IN1mo1,0);
  analogWrite(IN2mo1,0);
  delay(1000);
}