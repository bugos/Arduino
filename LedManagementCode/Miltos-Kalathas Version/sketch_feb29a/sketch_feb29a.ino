


void setup()
{
  pinMode(12, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  Serial.begin(9600);
}

int table[2] = {0, 0}; // Dixni tis katastasi ton buttons 0->Learn 1->Read
bool state = 0; // Flag gia ta buttons 

void loop()
{
  for (int loop = 12; loop >= 11; loop--)
  {
    //Serial.println(digitalRead(loop));
    if (digitalRead(loop) == LOW)
    {
      
      while (state == 0)
      {
        if (digitalRead(loop) == HIGH)
        {
          table[12 - loop]=-table[12 - loop]+1;
          state = 1;
          Debug();
        }

      }
      delayMicroseconds(1500);
      state = 0;
    }
  }
  delay(50);
}

void Debug()
{
  for (int loop1 = 0; loop1 <= 1; loop1++)
  {
    Serial.print(" ");Serial.print(table[loop1]);Serial.print(" ");
  }
  Serial.println("");
}







