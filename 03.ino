#include <VarSpeedServo.h>
VarSpeedServo sv1;
VarSpeedServo sv2;//Left right
VarSpeedServo sv3;
VarSpeedServo sv4;
int svd1 = sv1.read();
int svd2 = sv2.read();
int svd3 = sv3.read();
int svd4 = sv4.read();
#define b  7
#define g 6
#define r  5
int sp1 = 10;
int sp2 = 5;
int sp3 = 12;
void setup() {
  pinMode(b,OUTPUT);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  Serial.begin(9600);
  sv4.attach(11); //updown
  sv3.attach(10);//forword blackword
  sv2.attach(9);//Left right
  sv1.attach(8); //gripper
}
void loop() {
  
sv4.write(100,sp1);
sv4.wait();
sv4.write(180,sp1);
sv4.wait();
while(1){
  digitalWrite(r,LOW);
  delay(100);
  digitalWrite(g,HIGH);
  digitalWrite(r,HIGH);
  digitalWrite(b,HIGH);
  delay(1000);
  
  digitalWrite(g,LOW);
  delay(100);
  digitalWrite(g,HIGH);
  digitalWrite(r,HIGH);
  digitalWrite(b,HIGH);
  delay(1000);
  

  digitalWrite(b,LOW);
  delay(100);
  digitalWrite(g,HIGH);
  digitalWrite(r,HIGH);
  digitalWrite(b,HIGH);
  delay(1000);
}}
void moveup() {
  sv4.write(100, sp1); //updown
  sv4.wait();
}
void movedown() {
  sv4.write(180, sp1); //updown
  sv4.wait();
}
void turnright() {
  sv2.write(180, sp3);//Left right
  sv2.wait();
}
void turnleft() {
  sv2.write(0, sp3);//Left right
  sv2.wait();
}
void moveforword() {

  sv3.write(180, sp1);//forword blackword
  sv3.wait();
}
void moveblackword() {

  sv3.write(0, sp1);//forword blackword
  sv3.wait();
}
void grip() {
  sv1.write(0, sp1);//forword blackword
  sv1.wait();
}
void ungrip() {
  sv1.write(180, sp1);//forword blackword
  sv1.wait();
}
void Automation(){
  
}
void Manual(){
  
}
void Semi automatic(){
  
}
