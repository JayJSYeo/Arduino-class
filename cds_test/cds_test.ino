
int pinNumber=5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode(pinNumber, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  int value;
  
  value =  analogRead(A0);

  //Serial.print( " Analog value is  " );
  Serial.println( value );

  if(value>350) {
    Serial.println("Turn OFF");
    digitalWrite(pinNumber, LOW); 


  }else{
  Serial.println("Turn ON");
  digitalWrite(pinNumber, HIGH); 
    
  }

  

  delay(1000);

}
