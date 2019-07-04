int income =30;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  
  if (Serial.available()>0)
  {
  income =Serial.read();
  digitalWrite(6, LOW);
  income = income-'0';
  setPin(2, income&1);
  setPin(3, (income>>1)&1);
  setPin(4, (income>>2)&1);
  setPin(5, (income>>3)&1);
  delay(10);
  digitalWrite(6, HIGH);
  delay(10);
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
  
