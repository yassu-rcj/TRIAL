#include <Arduino.h>
int line;
void pin();
void setup(){
pin();
Serial.begin(9600);
}
void loop(){
line=PINC & _BV(5);
if (line==0){
    line=1;
}else{
    line=0;
}
Serial.print(line);

}
void pin(){
    pinMode(32,INPUT);
}