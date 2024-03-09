#include <Arduino.h>
#define IN1mo1 2//ピン一個目
#define IN2mo1 3 //ピン二個目
#define IN1mo2 10
#define IN2mo2 9
#define IN1mo3 8
#define IN2mo3 7
#define IN1mo4 6
#define IN2mo4 11
void setup(){
Serial.begin(9600);
}
void loop(){
  analogWrite(IN1mo1,200);
  analogWrite(IN2mo1,0);
  delay(1000);
  analogWrite(IN1mo1,0);
  analogWrite(IN2mo1,200);
  delay(1000);
}