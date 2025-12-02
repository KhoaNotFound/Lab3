#include "animation_9.h"
#include "main.cpp"

int led1 = 1;
int led2 = 5;
int dir1 = 1;
int dir2 = 0;
void animation_9()
{
    

    for (int i = 1; i < 9; i++)
    {
        digitalWrite(i, LOW);
    }

    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    delay(200);


    if (dir1 != 0)
    {
        led1 += dir1;
    }
    if (dir2 != 0)
    {
        led2 += dir2;
    }

    if (dir1 == 1 && led1 == 4)
    {
        dir1 = 0;
        dir2 = 1;
    }
    if (dir1 == -1 && led1 == 1)
    {
        dir1 = 1;
        dir2 = 0;
    }
    if (dir2 == -1 && led2 == 5)
    {
        dir1 = -1;
        dir2 = 0;
    }
    if (dir2 == 1 && led2 == 8)
    {
        dir1 = 0;
        dir2 = -1;
    }
}