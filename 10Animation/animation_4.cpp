#include "animation_4.h"
#include "main.cpp"

void animation_4()
{
    for (int i = 1; i < 5; i++)
    {
        int j = 9 - i;
        digitalWrite(i,HIGH);
        digitalWrite(j, HIGH);
        delay(200);
        digitalWrite(i,LOW);
        digitalWrite(j, LOW);
    }
    delay(200);
    for (int i = 4; i > 0; i--)
    {
        int j = 9 - i;
        digitalWrite(i,HIGH);
        digitalWrite(j, HIGH);
        delay(200);
        digitalWrite(i,LOW);
        digitalWrite(j, LOW);
    }
    delay(200);
}