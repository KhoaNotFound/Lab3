#include "animation_5.h"
#include "main.cpp"
void animation_5()
{
    for (int i = 1; i < 9; i++)
    {
        digitalWrite(i,HIGH);
        delay(200);
    }
    delay(200);
    for (int i = 8; i > 0; i--)
    {
        digitalWrite(i,LOW);
        delay(200);
    }
}