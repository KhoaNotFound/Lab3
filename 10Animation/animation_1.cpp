#include "animation_1.h"
#include "main.cpp"

void animation_1()
{
    for (int i = 1; i < 9; i++)
    {
        digitalWrite(i, HIGH);
        delay(200);
        digitalWrite(i, LOW);
    }
    delay(200);
    for (int i = 8; i > 0; i--)
    {
        digitalWrite(i,HIGH);
        delay(200);
        digitalWrite(i,LOW);
    }
}