int ledArray[] = {4,5,6,7,8,9,10,11};
void setup()
{
  for (int ledPin = 4; ledPin = 11; ledPin++)
  {
  pinMode(ledPin, OUTPUT);
  }
}

void loop()
{ 
  for (int j=0; j4;j++)
  {
    digitalWrite(ledArray[j],HIGH);
  }
  delay(500);
  for (int j=0; j4;j++)
  {
    digitalWrite(ledArray[j],LOW);
  }
  delay(500);
  for (int j=4; j8;j++)
  {
    digitalWrite(ledArray[j],HIGH);
  }
  delay(500);
  for (int j=4; j8;j++)
  {
    digitalWrite(ledArray[j],LOW);
  }
  delay(500);
}
