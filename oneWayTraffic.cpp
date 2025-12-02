void digitalWrite();
void setup()
{
    for (int i = 0; i < 14; i++)
    {
        pinMode(i, OUTPUT);
    }
}

void loop()
{
    digitalWrite(8,HIGH);
    delay(5000);
    digitalWrite(8,LOW);

    digitalWrite(9,HIGH);
    delay(2000);
    digitalWrite(9,LOW);

    digitalWrite(10,HIGH);
    delay(3000);
    digitalWrite(10,LOW);
}