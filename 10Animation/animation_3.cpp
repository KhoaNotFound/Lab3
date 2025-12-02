#include "animation_3.h"
#include "main.cpp"
void animation_3()
{
    for (int i = 1; i < 9; i++)
    {
        if (i % 2 == 0)
        {
            digitalWrite(i, HIGH);
        }
        else
        {
            digitalWrite(i, LOW);
        }
    }
    delay(200);

    for (int i = 1; i < 9; i++)
    {
        if (i % 2 == 0)
        {
            digitalWrite(i, LOW);
        }
        else
        {
            digitalWrite(i, HIGH);
        }
    }
    delay(200);
}