#include <Servo.h>

Servo myservo;

void setup() {
  // put your setup code here, to run once:

  myservo.attach(5);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int angle;
  int value;

  value =  analogRead(A0);
  
  angle = (180/1023.0) * value;
  
  myservo.write(angle);
  
  delay(50);

}
