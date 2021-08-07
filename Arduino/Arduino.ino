#include<TimerOne.h>

int CNT = 0;
int CNT2 = 0;

#define LED 13

void setup()
{
  TimerOne.attachInterrupt( Timer_ISR );
  TimerOne.Initalize(100000);
  
  pinMode(LED,OUTPUT);

}

void Timer_ISR ()
{
  digitalWrite(LED, digitalRead(LED) ^ 1);
}
