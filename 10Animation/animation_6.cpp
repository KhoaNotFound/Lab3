#include "animation_6.h"
#include "main.cpp"
void animation_6()
{
    for (int i = 0; i < 11; i++)
    {
        digitalWrite(i - 2, LOW);
        digitalWrite(i-1,HIGH);
        digitalWrite(i,HIGH);
        digitalWrite(i+1,HIGH);
        digitalWrite(i + 2, LOW);
        delay(200);
    }
}