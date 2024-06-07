#include <Arduino.h>
#define IN1mo1 2 //ピン一個目
#define IN2mo1 3 //ピン二個目
#define IN1mo2 9
#define IN2mo2 10
#define IN1mo3 7
#define IN2mo3 8
#define IN1mo4 6
#define IN2mo4 11
#define pin 17 // 　これがピン番号
int b, c;
unsigned long time_new;
void setup(){
Serial.begin(9600);
pinMode(pin,INPUT);
}
void loop(){
   for (int i = 0; i < 1000; i++)
  {
    b = digitalRead(pin); // ここはhttps://ht-deko.com/arduino/portregisters.html　  PIN〇 & _BV(数字);
    if (b == 0)
    {
      c++;
    }
    else
    {
      c = c;
    }
  }
  if (c>=500){
    analogWrite(IN1mo1,100);
    analogWrite(IN2mo1,0);
    c=0;
  }else{
   analogWrite(2,0);
   analogWrite(3,0);
  }
  Serial.print(">ball:");
  Serial.println(c);
  c = 0;
  
  /*analogWrite(IN1mo2,100);
  analogWrite(IN2mo2,0);
  analogWrite(IN1mo3,100);
  analogWrite(IN2mo3,0);
  analogWrite(IN1mo4,100);
  analogWrite(IN2mo4,0);*/
}
