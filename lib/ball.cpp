#include <Arduino.h>
#define pin 8
int b, c;
unsigned long time_new;
void setup()
{
  Serial.begin(115200);
  pinMode(pin, INPUT);
}
void loop()
{
  time_new = micros();
  b = digitalRead(8);
  if (time_new % 833 == 0)
  {
    if (time_new == 0)
    {
      c = 1;
    }
    else
    {
      Serial.print(">c:");
      Serial.println(c);
      Serial.print(">b:");
      Serial.println(b);
      c = 0;
    }
  }
  else
  {
    if (b == 0)
    {
      c = c;
    }
    else
    {
      c = c + 1;
    }
  }
}
