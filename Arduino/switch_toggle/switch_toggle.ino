
int switch_status;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(5,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

  int value = digitalRead(5);
  
  if( value==0) { //check switch pushed

    if(switch_status==0){ //check switch_status
      digitalWrite(3,HIGH);
      switch_status=1;
      delay(500);
    }else{
      digitalWrite(3,LOW);
      switch_status=0;      
      delay(500);
      
    }
    
  } //check switch pushed

  
}
