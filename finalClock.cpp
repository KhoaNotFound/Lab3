
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
int s = 55;
int m = 59;
int h = 12;
void loop()
{
    s++;
    if (s == 60)
    {
        s = 0;
        m ++;
    }
    if (m == 60)
    {
        m = 0;
        h++;
    }
    if (h > 12)
    {
        h = 1;
    }
    clearClock();
    displayOnClock(s/5);
    displayOnClock(m/5);
    displayOnClock(h);
    delay(1000);
}