int pin_number;
int delay_ms;


void setup() {
  // put your setup code here, to run once:

  delay_ms = 1000;

  for(pin_number=10 ; pin_number <14 ; pin_number=pin_number+1){
    pinMode(pin_number,OUTPUT);
  }
  
}

void loop() {
 
  
  for(pin_number=10; pin_number < 14 ; pin_number=pin_number+1){
    digitalWrite(pin_number,HIGH);
    delay(delay_ms);
    digitalWrite(pin_number,LOW);
    delay(delay_ms);
    
  }


  for(pin_number=10; pin_number < 14 ; pin_number=pin_number+1){
    digitalWrite(pin_number,HIGH);
  }
  delay(delay_ms);
  for(pin_number=10; pin_number < 14 ; pin_number=pin_number+1){
    digitalWrite(pin_number,LOW);
  }
  delay(delay_ms);

}
