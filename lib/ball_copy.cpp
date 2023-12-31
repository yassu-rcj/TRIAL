#include <Arduino.h>
#define pin 39 //nyaaへ　これがピン番号
int b,c;
unsigned long time_new;
void setup() {
  Serial.begin(57600);
  pinMode(pin,INPUT);
}
void loop(){   
for (int i =0; i<1000; i++){
  b=PING & _BV(2);//ここはhttps://ht-deko.com/arduino/portregisters.html　  PIN〇 & _BV(数字);
  if (b==0){
    c++;
  }else{
    c=c;
  }
}
Serial.println(">ball:");
Serial.println(c);
Serial.println();
c=0;
}
