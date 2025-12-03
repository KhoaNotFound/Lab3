
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
int check = 0;
void loop()
{
    check ++;
    if (check == 12)
    {
        check = 0;
    }
    clearClock();
    displayOnClock(check);
    delay(200);
}