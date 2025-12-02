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
    digitalWrite(13,HIGH);

    delay(3000);

    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);

    delay(2000);

    digitalWrite(12,LOW);
    digitalWrite(8,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);

    delay(3000);

    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);

    delay(2000);

    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
}