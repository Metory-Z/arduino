int income =0;
int i = 0;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  
  if (Serial.available()>0)
  {
    for (i=0;i<4;i++)
    { 
      income =Serial.read();
      digitalWrite(8+i, LOW);
      income = income-'0';
      setPin(2, income&1);
      setPin(3, (income>>1)&1);
      setPin(4, (income>>2)&1);
      setPin(5, (income>>3)&1);
      delay(10);
      digitalWrite(8+i, HIGH);
      delay(10);
    }
  }
}

void setPin(int pin,int v)
{
  if(v>0)
  {
    digitalWrite(pin, HIGH);
  }
  else
  {
    digitalWrite(pin, LOW);
  }
}
  
