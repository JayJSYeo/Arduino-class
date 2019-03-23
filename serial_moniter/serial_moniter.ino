
int value = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin (9600);  //baud rate
  
}


void loop() {
  // put your main code here, to run repeatedly:
b
  //Serial.print ( "Hello world = " );

  //Serial.println ( value );


  value = value + 1;

  
  delay(100);
  
}
