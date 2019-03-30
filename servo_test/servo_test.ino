#include <Servo.h>

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(5);
  delay(10);
  myservo.write(10);

}

void loop() {
  // put your main code here, to run repeatedly:

  //turn right 0~180
  int angle;
  for (angle = 0; angle <180 ; angle = angle +5){
  }

  //turn left  180~0
  for (angle = 180; angle > 0 ; angle = angle -5){
    myservo.write(angle);
    delay(9);
  }


}
