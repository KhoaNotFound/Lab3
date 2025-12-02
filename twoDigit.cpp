void setup()
{
    for (int i = 0; i < 14; i++)
    {
        pinMode(i, OUTPUT);
        digitalWrite(i,HIGH);
    }
    delay(1000);

}
void displayNumber1(int i)
{
    if (i == 0)
    {
        digitalWrite(0, HIGH);

        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
    }
    else if (i == 1)
    {
        digitalWrite(3, LOW);
        digitalWrite(6,LOW);

        digitalWrite(1,HIGH);
        digitalWrite(2,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(0,HIGH);
    }
    else if (i == 2)
    {
        digitalWrite(1,HIGH);
        digitalWrite(6,HIGH);

        digitalWrite(0,LOW);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
    }
    else if (i == 3)
    {
        digitalWrite(1,HIGH);
        digitalWrite(4,HIGH);
        
        digitalWrite(0,LOW);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
    }
    else if (i == 4)
    {
        digitalWrite(2,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);

        digitalWrite(0,LOW);
        digitalWrite(1,LOW);
        digitalWrite(3,LOW);
        digitalWrite(6,LOW);

    }
    else if (i == 5)
    {
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);

        digitalWrite(0,LOW);
        digitalWrite(1,LOW);
        digitalWrite(2,LOW);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
    }
    else if (i == 6)
    {
        digitalWrite(3,HIGH);

        digitalWrite(0,LOW);
        digitalWrite(1,LOW);
        digitalWrite(2,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
    }
    else if (i == 7)
    {
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(6,LOW);

        digitalWrite(0,HIGH);
        digitalWrite(1,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);
    }
    else if (i == 8)
    {
        for (int i = 0; i < 7; i ++)
        {
            digitalWrite(i, LOW);
        }
    }
    else if (i == 9)
    {
        digitalWrite(4,HIGH);

        digitalWrite(0,LOW);
        digitalWrite(1,LOW);
        digitalWrite(2,LOW);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
        digitalWrite(3,LOW);
    }
}
void displayNumber2(int i)
{
    if (i == 0)
    {
        digitalWrite(7, HIGH);

        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
    }
    else if (i == 1)
    {
        digitalWrite(10, LOW);
        digitalWrite(13,LOW);

        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(7,HIGH);
    }
    else if (i == 2)
    {
        digitalWrite(8,HIGH);
        digitalWrite(13,HIGH);

        digitalWrite(7,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
    }
    else if (i == 3)
    {
        digitalWrite(8,HIGH);
        digitalWrite(11,HIGH);
        
        digitalWrite(7,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(12,LOW);
        digitalWrite(13,LOW);
    }
    else if (i == 4)
    {
        digitalWrite(9,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(12,HIGH);

        digitalWrite(7,LOW);
        digitalWrite(8,LOW);
        digitalWrite(10,LOW);
        digitalWrite(13,LOW);

    }
    else if (i == 5)
    {
        digitalWrite(10,HIGH);
        digitalWrite(11,HIGH);

        digitalWrite(7,LOW);
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(12,LOW);
        digitalWrite(13,LOW);
    }
    else if (i == 6)
    {
        digitalWrite(10,HIGH);

        digitalWrite(7,LOW);
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
        digitalWrite(13,LOW);
    }
    else if (i == 7)
    {
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(13,LOW);

        digitalWrite(7,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(12,HIGH);
    }
    else if (i == 8)
    {
        for (int i = 7; i < 14; i ++)
        {
            digitalWrite(i, LOW);
        }
    }
    else if (i == 9)
    {
        digitalWrite(11,HIGH);

        digitalWrite(7,LOW);
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(12,LOW);
        digitalWrite(13,LOW);
        digitalWrite(10,LOW);
    }
}
void loop()
{
    for (int i = 0; i <= 2; i++)
    {
        displayNumber1(i);
        int maxJ = (i == 2) ? 0 : 9;
        for (int j = 0; j <= maxJ;j++)
        {
            displayNumber2(j);
            delay(1000);
        }
    }
}