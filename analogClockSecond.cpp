
void setup()
{
    for (int i = 0; i < 12; i++)
    {
        pinMode(i, OUTPUT);
    }
}

void displayOnClock(int num)
{
    if (num == 0)
    {
        num = 12;
    }
    if (num >= 1 && num <= 12)
    {
        digitalWrite(num - 1,HIGH);
    }
}
void clearClock()
{
    for (int i = 0; i < 12; i++)
    {
        digitalWrite(i, LOW);
    }
}
int s = 0;
void loop()
{
    s ++;
    if (s == 60)
    {
        s = 0;
    }
    clearClock();
    displayOnClock(s / 5);
    delay(1000);
}