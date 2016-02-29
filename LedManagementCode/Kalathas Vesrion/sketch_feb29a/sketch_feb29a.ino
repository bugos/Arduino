int readState;
int writeState;
int readPin;
int writePin;
int standbyLED;
int readLED;
int writeLED;
boolean readFlag;
boolean writeFlag;

void setup()
{
  readState=LOW;
  writeState=LOW;
  standbyLED=9;
  readLED=10;
  writeLED=11;
  readPin=12;
  writePin=13;
  readFlag=writeFlag=0;
  digitalWrite(standbyLED,HIGH);
  digitalWrite(readLED,LOW);
  digitalWrite(writeLED,LOW);
}

void loop() 
{
  if(!writeFlag)
  {
    readState=digitalRead(readPin);
  } 
  if(readState==HIGH)
  {
    readFlag=1;
    digitalWrite(standbyLED,LOW);
    digitalWrite(readLED,HIGH);
    do
    {
      readState=digitalRead(readPin);
    }while(readFlag&&(readState==LOW);
    readFlag=0;
    digitalWrite(readLED,LOW);
    digitalWrite(standbyLED,HIGH);
  }
  if(!readFlag)
  {
    writeState=digitalRead(writePin);
  }
  if(writeState=HIGH)
  {
    writeFlag=1;
    digitalWrite(standbyLED,LOW);
    digitalWrite(writeLED,HIGH);
    do
    {
      writeState=digitalRead(writePin);
    }while(writeFlag&&(writeState=LOW);
    writeFlag=0;
    digitalWrite(writeLED,LOW);
    digitalWrite(standbyLED,HIGH);
  }
}
