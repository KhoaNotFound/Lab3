
void setup()
{
    for (int i = 0; i < 12; i++)
    {
        pinMode(i, OUTPUT);
    }
}

void displayOnClock(int num)
{
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
void loop()
{
    for (int i = 1 ; i <= 12; i++)
    {
        displayOnClock(i);
        delay(200);
        clearClock();
    }
}