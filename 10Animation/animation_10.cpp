#include "animation_10.h"
#include "main.cpp"
int leds[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int startPos = 0;                     
int count = 1;
void animation_10()
{
    for (int i = 0; i < 8; i++)
    {
        digitalWrite(leds[i], LOW);
    }
    for (int i = 0; i < count; i++)
    {
        int index = (startPos + i) % 8; 
        digitalWrite(leds[index], HIGH);
    }
    delay(500);
    startPos = (startPos + count) % 8;
    count++;
    if (count > 8)
    {
        count = 1; 
        startPos = 0;          
    }
}