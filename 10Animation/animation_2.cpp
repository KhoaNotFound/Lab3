#include "animation_2.h"
#include "main.cpp"

void animation_2()
{
    for (int i = 1; i < 9; i++)
    {
        digitalWrite(i,HIGH);
    }
    delay(200);
    for (int i = 1; i < 9; i++)
    {
        digitalWrite(i,LOW);
    }
    delay(200);
}