void setup() {
  // put your setup code here, to run once:
  pinMode(PB13,OUTPUT);
  pinMode(PB14,OUTPUT);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PB13,HIGH);
  digitalWrite(PB14,LOW);
  delay(1000);
  digitalWrite(PB13,LOW);
  digitalWrite(PB14,HIGH);
  delay(1000);
}
