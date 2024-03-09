#include <Arduino.h>
#define IN1mo1 12 //ピン一個目
#define IN2mo1 13 //ピン二個目
#define IN1mo2 9
#define IN2mo2 10
#define IN1mo3 7
#define IN2mo3 8
#define IN1mo4 6
#define IN2mo4 11
void setup(){
Serial.begin(9600);
}
void loop(){
  analogWrite(IN1mo1,100);
  analogWrite(IN2mo1,0);
  analogWrite(IN1mo2,100);
  analogWrite(IN2mo2,0);
  analogWrite(IN1mo3,100);
  analogWrite(IN2mo3,0);
  analogWrite(IN1mo4,100);
  analogWrite(IN2mo4,0);
}
