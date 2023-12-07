#include <Arduino.h>
#define pin 11
int b,c=0;
unsigned long time_new;
void setup() {
  Serial.begin(9600);
  pinMode(11,INPUT);
}
void loop(){
 time_new=micros();
 b = PIND & _BV(5);
if (time_new % 833 == 0){
 c=1;
 Serial.print(c);
 }else{
  if (b==0){
   int c=c+1;
  }else{

  }
 }
 }
