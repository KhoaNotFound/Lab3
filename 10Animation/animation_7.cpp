#include "animation_7.h"
#include "main.cpp"


int counter = 0;

void animation_7()
{
    int leds[8] = {1,2,3,4,5,6,7,8};
    
    for (int i = 0; i < 8; i++)
    {
        if (counter & (1 << i))
        {
            digitalWrite(leds[i], HIGH);
        }
        else
        {
            digitalWrite(leds[i], LOW);
        }
    }
    counter++;
    if (counter > 255)
        counter = 0;
    delay(200);
}