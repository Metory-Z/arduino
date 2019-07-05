int incomingByte = 0;
int length;

void setup()
{
    pinMode(13, OUTPUT);
  Serial.begin(9600);
    Serial.print("The Morse of sentence: ");
}
 
void loop()
{
  int i;
  int len=0;
  if (Serial.available() > 0)
  {
    incomingByte = Serial.read();
    Serial.print(char(incomingByte));
    ascii(incomingByte);
  }
}

void ascii(int x)
{
        
  switch(x)
  {
    case 'a': dot(); dash();  break;
    case 'b': dash(); dot(); dot(); dot();  break;
    case 'c': dash(); dot(); dash(); dot();  break;
    case 'd': dash(); dot(); dot();  break;
    case 'e': dot();  break;
    case 'f': dot(); dot(); dash(); dot();  break;
    case 'g': dash(); dash(); dot();  break;
    case 'h': dot(); dot(); dot(); dot();  break;
    case 'i': dot(); dot();  break;
    case 'j': dot(); dash(); dash(); dash();  break;
    case 'k': dash(); dot(); dash();  break;
    case 'l': dot(); dash(); dot(); dot();  break;
    case 'm': dash(); dash();  break;
    case 'n': dash(); dot();  break;
    case 'o': dash(); dash(); dash();  break;
    case 'p': dot(); dash(); dash(); dot();  break;
    case 'q': dash(); dash(); dot(); dash();  break;
    case 'r': dot(); dash(); dot();  break;
    case 's': dot(); dot(); dot();  break;
    case 't': dash();  break;
    case 'u': dot(); dot(); dash();  break;
    case 'v': dot(); dot(); dot(); dash();  break;
    case 'w': dot(); dash(); dash();  break;
    case 'x': dash(); dot(); dot(); dash();  break;
    case 'y': dash(); dot(); dash(); dash(); dash();  break;
    case 'z': dash(); dash(); dot(); dot();  break;
    case ' ':w_space();  break;
    default:  break;
  }
}

void dot()
{
  digitalWrite(2, HIGH);
  delay(250);
  digitalWrite(2, LOW);
  delay(250);
}

void dash()
{
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(250);
}

void c_space()
{
  digitalWrite(2, LOW);
  delay(250*3);
}

void w_space()
{
  digitalWrite(2, LOW);
  delay(250*7);
}
