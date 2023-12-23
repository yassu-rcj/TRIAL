#include <Arduino.h>
#define IN1mo1 19//モータ４５度のIN1
#define IN2mo1 20//モータ４５度のIN2
#define IN1mo2 7//以下同様、この数字をピン番号に変えて
#define IN2mo2 6
#define IN1mo3 3
#define IN2mo3 2
#define IN1mo4 8
#define IN2mo4 9
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