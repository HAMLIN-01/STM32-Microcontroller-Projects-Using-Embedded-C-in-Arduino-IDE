#include<LiquidCrystal.h>
LiquidCrystal lcd(PB15,PB14,PB13,PB12,PB11,PB10);
int col1=PB9;
int col2=PB8;
int col3=PB7;
int col4=PB6;
int row1=PB5;
int row2=PB4;
int row3=PB3;
int row4=PA8;
char operation = '\0'; 
float num1=0,num2=0;
void setup() {
lcd.begin(16,2);
pinMode(row1,OUTPUT);  
pinMode(row2,OUTPUT);  
pinMode(row3,OUTPUT);  
pinMode(row4,OUTPUT); 
pinMode(col1,INPUT); 
pinMode(col2,INPUT); 
pinMode(col3,INPUT); 
pinMode(col4,INPUT); 
}
void loop() {
digitalWrite(row1,HIGH);
digitalWrite(row2,LOW);
digitalWrite(row3,LOW);
digitalWrite(row4,LOW);
if(digitalRead(col1)==HIGH)
{
  lcd.print("7");
  delay(300);
  lcd.clear();
}
else if(digitalRead(col2)==HIGH)
{
  lcd.print("8");
  delay(300);
  lcd.clear();
}
else if(digitalRead(col3)==HIGH)
{
  lcd.print("9");
  delay(300);
  lcd.clear();
}
else if(digitalRead(col4)==HIGH)
{
  lcd.print("/");
  delay(300);
  lcd.clear();
}
digitalWrite(row1,LOW);
digitalWrite(row2,HIGH);
digitalWrite(row3,LOW);
digitalWrite(row4,LOW);
if(digitalRead(col1)==HIGH)
{
  lcd.print("4");
  delay(300);
  lcd.clear();
}
else if(digitalRead(col2)==HIGH)
{
  lcd.print("5");
  delay(300);
  lcd.clear();  
}
else if(digitalRead(col3)==HIGH)
{
  lcd.print("6");
  delay(300);
  lcd.clear();
}
else if(digitalRead(col4)==HIGH)
{
  lcd.print("*");
  delay(300);
  lcd.clear();
}
digitalWrite(row1,LOW);
digitalWrite(row2,LOW);
digitalWrite(row3,HIGH);
digitalWrite(row4,LOW);
if(digitalRead(col1)==HIGH)
{
  lcd.print("1");
  delay(300);
  lcd.clear();
}
else if(digitalRead(col2)==HIGH)
{
  lcd.print("2");
  delay(300);
  lcd.clear();
}
else if(digitalRead(col3)==HIGH)
{
  lcd.print("3");
  delay(300);
  lcd.clear();
}
else if(digitalRead(col4)==HIGH)
{
  lcd.print("-");
  delay(300);
  lcd.clear();
}
digitalWrite(row1,LOW);
digitalWrite(row2,LOW);
digitalWrite(row3,LOW);
digitalWrite(row4,HIGH);
if(digitalRead(col1)==HIGH)
{
  lcd.print("C");
  delay(300);
  lcd.clear();
}
else if(digitalRead(col2)==HIGH)
{
  lcd.print("0");
  delay(300);
  lcd.clear();
}
else if(digitalRead(col3)==HIGH)
{
  lcd.print("=");
  delay(300);
  lcd.clear();
}
else if(digitalRead(col4)==HIGH)
{
  lcd.print("+");
  delay(300);
  lcd.clear();
}
switch (operation) {
          case '+':result=num1+num2; 
          break;
          case '-':result=num1-num2;
          break;
          case '*':result=num1*num2; 
          break;
          case '/': 
            if (num2 != 0)
            {
              result = num1 / num2; 
            } 
            else 
            {
              lcd.clear();
              lcd.print("Error");
              delay(2000);
              return;
            }
            break;
        }
}
