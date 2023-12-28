#include <Arduino.h>
#define IN1mo1 6//左前            
#define IN2mo1 7
#define IN1mo2 1 
#define IN2mo2 6
#define IN1mo3 10
#define IN2mo3 9
#define IN1mo4 8
#define IN2mo4 7
void setup(){

}
void loop(){
  analogWrite(IN1mo1,200);
  analogWrite(IN2mo1,0);
  delay(100);
  analogWrite(IN1mo1,0);
  analogWrite(IN2mo1,200);
  delay(100);
}