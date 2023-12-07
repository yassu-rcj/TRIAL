#include <Arduino.h>
#define pin 11
int b,c;
unsigned long time_new;
void setup() {
  Serial.begin(9600);
  pinMode(11,INPUT);
}
void loop(){   
 time_new=micros();
 b = PINB & _BV(5);
if (time_new % 833 == 0){
if (time_new==0){
     c=1;
}else{
 Serial.print(c);
 Serial.println();
 c=0;
}
 }else{
  if (b==0){
    c=c+1;
  }else{
    c=c;
 }
 }
}
