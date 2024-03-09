#include <Arduino.h>
#define pin 4//　これがピン番号
int b,c;
unsigned long time_new;
void setup() {
  Serial.begin(9600);
  pinMode(pin,INPUT);
}
void loop(){   
for (int i =0; i<1000; i++){
  b=PING &_BV(5);//ここはhttps://ht-deko.com/arduino/portregisters.html　  PIN〇 & _BV(数字);
  if (b==0){
    c++;
  }else{
    c=c;
  }
}
Serial.print(">line:");
Serial.println(c);
c=0;
delay(10);
}
