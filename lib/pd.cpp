#include <Arduino.h>
#include <math.h>
#define Kp 1
#define Kd 1
#define pi 3.1415926
float getnowdir();
float PD();
float motor(float power);
void setup(){

}
void loop(){
getnowdir();
motor(PD());
}
float getnowdir(){

}
float PD(){
float pgn,dgn,prepgn=0;
unsigned long time,pretime=0;
float dir=getnowdir();
pgn=360-dir;
float dt=(micros()-pretime)/100000;
pretime=micros();
dgn=(pgn-prepgn)/dt;
prepgn-pgn;
float  power=Kp*pgn+Kd*dgn;
return power;
}
float motor(float power){
int motor_speed_1=power*sin((360-45)*(180/pi));
 int motor_speed_2=power*sin((360-135)*(180/pi));
 int motor_speed_3=power*sin((360-225)*(180/pi));
 int motor_speed_4=power*sin((360-315)*(180/pi));

 if (motor_speed_1>=0){//後で変更
  digitalWrite(IN1mo1,0);
   analogWrite(IN2mo1,motor_speed_1);
 }else {
  digitalWrite(IN1mo1,-motor_speed_1);
   analogWrite(IN2mo1,0);
 }
 if (motor_speed_2>=0){//後で変更
  digitalWrite(IN1mo2,0);
  analogWrite(IN2mo2,motor_speed_2);
 }else {
  digitalWrite(IN1mo2,-motor_speed_2);
  analogWrite(IN2mo3,0);
 }
 if (motor_speed_3>=0){//後で変更
  digitalWrite(IN1mo3,0);
  analogWrite(IN2mo3,motor_speed_3);
 }else {
  digitalWrite(IN1mo3,-motor_speed_3);
  analogWrite(IN2mo3,0);
 }
 if (motor_speed_4>=0){//後で変更
  digitalWrite(IN1mo4,0);
  analogWrite(IN2mo4,motor_speed_4);
 }else {
  digitalWrite(IN1mo4,-motor_speed_4);
  analogWrite(IN2mo4,0);
 }
}
