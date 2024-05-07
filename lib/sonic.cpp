#include <Arduino.h>
#define trigPin 8
#define echoPin 9
float distance, duration;
float sonic1();
float sonic2();
void setup()
{

  Serial.begin(57600); // シリアルモニタの開始

  pinMode(echoPin, INPUT);  // エコーピンを入力に
  pinMode(trigPin, OUTPUT); // トリガーピンを出力に
}

void loop()
{
  distance = sonic1();
  duration = sonic2();
  Serial.print(">duration:");
  Serial.println(duration);
  Serial.print(">distance:");
  Serial.println(distance);
}
float sonic1()
{
  float duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  duration = duration / 2;
  distance = duration * 340 * 100 / 1000000;
  return distance;
}
float sonic2()
{
  float duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  duration = duration / 2;
  distance = duration * 340 * 100 / 1000000;
  return duration;
}