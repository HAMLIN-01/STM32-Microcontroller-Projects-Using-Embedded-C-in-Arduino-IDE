int Button=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(PB12,INPUT);
  pinMode(PB13,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  Button=digitalRead(PB12);
  if(Button==HIGH)
  {
    digitalWrite(PB13,HIGH);
  }
  else
  {
    digitalWrite(PB13,LOW);
  }
}
