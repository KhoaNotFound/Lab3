void digitalWrite();
void setup()
{
    for (int i = 0; i < 14; i++)
    {
        pinMode(i, OUTPUT);
    }
}
void displayNumber(int i)
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
}
void loop()
{

    digitalWrite(8,HIGH); // đèn đỏ 1
    digitalWrite(13,HIGH); // đèn xanh 2

    for (int i = 4; i >= 2; i--)
    {
        displayNumber(i);
        delay(1000);
    }
    
    digitalWrite(13,LOW); // đèn xanh 2
    digitalWrite(12,HIGH); // đèn vàng 2
    
    for (int i = 1; i >= 0; i--)
    {
        displayNumber(i);
        delay(1000);
    }
    
    digitalWrite(12,LOW); //đèn vàng 2
    digitalWrite(8,LOW); // đèn đỏ 1
    digitalWrite(10,HIGH); //đèn xanh 1
    digitalWrite(11,HIGH);//đèn đỏ 2

    for (int i = 4; i >= 2; i--)
    {
        displayNumber(i);
        delay(1000);
    }

    digitalWrite(10,LOW);//đèn  xanh 1
    digitalWrite(9,HIGH);//đèn vàng 1

    for (int i = 1; i >= 0 ; i --)
    {
        displayNumber(i);
        delay(1000);
    }

    digitalWrite(9,LOW);//đèn vàng 1
    digitalWrite(11,LOW);//đèn đỏ 2

}