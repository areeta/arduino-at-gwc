int LEDPIN = 4;
int BUTTONPIN = 5;

void setup() {
  // put your setup code here, to run once:
   // pinMode(4, OUTPUT);
  // put your setup code here, to run once:
   pinMode(5, INPUT);
}

void loop() {

if(digitalRead(BUTTONPIN) == HIGH)
{
  digitalWrite(LEDPIN,HIGH);
}
else 
{
  digitalWrite(LEDPIN, LOW);
}
}

