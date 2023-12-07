#include <Arduino.h>
int IN1 = 5;
int IN2 = 6;
int VR_PIN = A0;
int VR_VALUE;

int PWM_VALUE;
int STATUS = 0;
void setup(){

}

void loop(){
 analogWrite(5,0);//正転
 analogWrite(6,255);
 delay(500);
 analogWrite(5,255);//反転
 analogWrite(6,0);
 delay(500);
}