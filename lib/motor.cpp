#include <Arduino.h>
#define IN1mo1 1//モータ４５度のIN1
#define IN2mo1 2//モータ４５度のIN2
#define IN1mo2 1//以下同様、この数字をピン番号に変えて
#define IN2mo2 1
#define IN1mo3 1
#define IN2mo3 1
#define IN1mo4 1
#define IN2mo4 1
void setup(){

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