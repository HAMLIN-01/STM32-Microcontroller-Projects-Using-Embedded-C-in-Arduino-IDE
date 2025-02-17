#include<LiquidCrystal.h>
const int rs = PB3, en = PB4, d4 = PB5, d5 = PB6, d6 = PB7, d7 = PB8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int Button=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(PB12,INPUT);
  pinMode(PB13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Button=digitalRead(PB12);
  if(Button==HIGH)
  {
    digitalWrite(PB13,HIGH);
    lcd.setCursor(0,0);
    lcd.clear();
    lcd.print("ON");
  }
  else
  {
    digitalWrite(PB13,LOW);
    lcd.setCursor(0,0);
    lcd.print("OFF");
  }
}