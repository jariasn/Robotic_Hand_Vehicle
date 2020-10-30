#include <Servo.h>
  
Servo b1;  
Servo b2;
Servo b3;
Servo mp;
Servo mi;
Servo mm;
Servo ma;
Servo mq;
Servo izq;
Servo der;
int estado = 'k';
char a;
String readString;

void setup()
{
b1.attach(9);
b2.attach(10);
b3.attach(11);
mp.attach(8);
mi.attach(7);
mm.attach(6);
ma.attach(5);
mq.attach(4);
der.attach(3);  
izq.attach(2);
Serial.begin(9600);
b1.write(80);
b2.write(95);
b3.write(90);
mp.write(0);
mi.write(0);
mm.write(0);
ma.write(0);
mq.write(0);
delay(10);
}
  
void loop()
{
   
 if(Serial.available()>0){        
      a = Serial.read();
      estado = Serial.read();

    if (a=='A'){
      motor1();
    }
    if (a=='B'){
      motor2();
    }
    if (a=='C'){
      motor3();
    }
    if (a=='D'){
      motor4();
    }
    if (a=='E'){
      motor5();
    }
    if (a=='F'){
      motor6();
    }
    if (a=='G'){
      motor7();
    }
    if (a=='H'){
      motor8();
    }
  }
  if(estado=='i'){ 
  der.attach(9);  
  izq.attach(10);       
  der.write(0);                  
  izq.write(180); 
   
}
if(estado=='j'){   
  der.attach(9);  
  izq.attach(10);    
  der.write(0);                  
  izq.write(0);  
}

  if(estado=='k'){         
  izq.detach();
  der.detach();  
}

  if(estado=='l'){  
  der.attach(9);  
  izq.attach(10);       
  der.write(180);                  
  izq.write(180);  
}

  if(estado=='m'){   
  der.attach(9);  
  izq.attach(10);      
  der.write(180);                  
  izq.write(0);  
}

}
void motor1() {
  delay(10); 
  while (Serial.available()) {

     char c = Serial.read();
     readString += c;
  }
  if (readString.length() >0){
    Serial.println(readString.toInt());
    b1.write(readString.toInt());
    readString="";
  }
  }
void motor2() {
  delay(10); 
  while (Serial.available()) {

     char c = Serial.read();
     readString += c;
  }
  if (readString.length() >0){
    Serial.println(readString.toInt());
    b2.write(readString.toInt());
    readString="";
  }
  }
void motor3() {
  delay(10); 
  while (Serial.available()) {

     char c = Serial.read();
     readString += c;
  }
  if (readString.length() >0){
    Serial.println(readString.toInt());
    b3.write(readString.toInt());
    readString="";
  }
  }
void motor4() {
  delay(10); 
  while (Serial.available()) {

     char c = Serial.read();
     readString += c;
  }
  if (readString.length() >0){
    Serial.println(readString.toInt());
    mp.write(readString.toInt());
    readString="";
  }
  }

void motor5() {
  delay(10); 
  while (Serial.available()) {

     char c = Serial.read();
     readString += c;
  }
  if (readString.length() >0){
    Serial.println(readString.toInt());
    mi.write(readString.toInt());
    readString="";
  }
  }
void motor6() {
  delay(10); 
  while (Serial.available()) {

     char c = Serial.read();
     readString += c;
  }
  if (readString.length() >0){
    Serial.println(readString.toInt());
    mm.write(readString.toInt());
    readString="";
  }
  }
void motor7() {
  delay(10); 
  while (Serial.available()) {

     char c = Serial.read();
     readString += c;
  }
  if (readString.length() >0){
    Serial.println(readString.toInt());
    ma.write(readString.toInt());
    readString="";
  }
  }
void motor8() {
  delay(10); 
  while (Serial.available()) {

     char c = Serial.read();
     readString += c;
  }
  if (readString.length() >0){
    Serial.println(readString.toInt());
    mq.write(readString.toInt());
    readString="";
  }
  }
