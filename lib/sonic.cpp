#include <Arduino.h>
#define trigPin 8
#define echoPin 9
float distance;
float sonic1();
void setup(){
  
  Serial.begin(9600);  // シリアルモニタの開始
  
  pinMode(echoPin,INPUT);   // エコーピンを入力に
  pinMode(trigPin,OUTPUT);  // トリガーピンを出力に
 
}
 
 
void loop(){
distance=sonic1();
Serial.print(distance);
Serial.println();
delay(1);
}
float sonic1(){
  float duration,distance;
  digitalWrite(1,LOW);
  delayMicroseconds(2);
  digitalWrite(1,HIGH);
  delayMicroseconds(10);
  duration = pulseIn(1,HIGH);
  duration = duration/2;
  distance = duration*340*100/1000000;
  return distance;
}