#include "animation_8.h"
#include "main.cpp"
int left = 1;
int right = 8;
void animation_8()
{
    while (left <= right)
    {
        for (int i = left; i < right; i++)
        {
            digitalWrite(i,HIGH);
            delay(200);
            digitalWrite(i,LOW);
        }
        left ++;
        for (int i = right; i >= left; i--)
        {
            digitalWrite(i,HIGH);
            delay(200);
            digitalWrite(i,LOW);
        }
        right --;
    }
}