#include <Servo.h>
Servo myServo;
int potpin=0;
int green=1;
int blue=2;
int red=3;
int val;

void setup(){
  myServo.attach(7);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(red,OUTPUT);
}

void loop(){
  
 val= analogRead(potpin);
  val= map(val,0,1023,0,180);
  myServo.write(val);
  delay(1000);
  Serial.println(val);
 
  if (val<180 && val== 60)
    digitalWrite(red, HIGH);
    delay(1000);
    digitalWrite(red,LOW);
   if (val<180 && val== 120)
    digitalWrite(blue, HIGH);
    delay(1000);
    digitalWrite(blue,LOW);
   if (val==180)
    digitalWrite(green, HIGH);
   delay(1000);
    digitalWrite(green,LOW);
  /*else if(val<180 && val <60)
    digitalWrite(red,LOW);
    digitalWrite(blue,LOW);
    digitalWrite(green,LOW);*/
}