#include <Servo.h>

#define pot A0

Servo servo1;
Servo servo2;
int angleServo1;
int angleServo2;


void setup(){
  servo1.attach(2);
  servo2.attach(3);
  angleServo1 = 0;
  angleServo2 = 0;
  servo1.write(angleServo1);
  servo2.write(angleServo2);
}

void loop(){
  angleServo1 = map(analogRead(pot), 0, 1023, 0, 180);
  servo1.write(angleServo1);
  delay(100);
  
  delay(1000);
  angleServo2 = 90;
  servo2.write(angleServo2);
  delay(1000);
  angleServo2 = 180;
  servo2.write(angleServo2);
  angleServo2 = 90;
  servo2.write(angleServo2);
  delay(1000);
  
  angleServo2 = 0;
  servo2.write(angleServo2);
  delay(1000);
}