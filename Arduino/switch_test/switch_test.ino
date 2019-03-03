void setup() {
  // put your setup code here, to run once:

  pinMode(3,OUTPUT);
  pinMode(5,INPUT_PULLUP);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  int value = digitalRead(5); //return

  if (value == 0 ) {       //switch on
    digitalWrite(3,HIGH);
  }else {       //switch off
    digitalWrite(3,LOW);
  }


}
