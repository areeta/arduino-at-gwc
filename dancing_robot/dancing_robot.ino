#include <Servo.h>

Servo servoRight;
Servo servoLeft;

void setup() {
  // put your setup code here, to run once:
  servoLeft.attach(13);
  servoRight.attach(12);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}

void stops(){
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}
void clockwise(){
servoRight.writeMicroseconds(1300);
}

void counterclockwise(){
servoLeft.writeMicroseconds(1700);
}

void circle(){
  servoRight.writeMicroseconds(1000);
  servoLeft.writeMicroseconds(1000);
}

void forward(){
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
 
}
void backward(){
  servoRight.writeMicroseconds(1700);
  servoLeft.writeMicroseconds(1300);
}
void shakebutt() {
    servoLeft.writeMicroseconds(1000);
    stops();
    servoRight.writeMicroseconds(1000);
    stops();
}
void loop() {
// put your main code here, to run repeatedly:
//    delay(5000);
//    shakebutt();
//    
//    delay(1000);
//    forward();
//    delay(1000);
//    circle();
//    delay(1000);
//    shakebutt();
//    delay(1000);
//    clockwise();
//    delay(1000);
//    counterclockwise();
//    delay(1000);

//    circle();
//    delay(1000);
stops(); 
delay(22250);
backward();
delay(100);
circle();
delay(100);
forward();
delay(1000);
circle();
delay(1000);
backward();
delay(100);
forward();
delay(1000);
shakebutt();
delay(1000);
}
