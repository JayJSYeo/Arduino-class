void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int top_left,top_right,bottom_left,bottom_right;
  float top,bottom,left,right;
  
  top_left = analogRead(A0);
  top_right = analogRead(A1);
  bottom_left = analogRead(A2);
  bottom_right = analogRead(A3);

  top = (top_left + top_right)/2.0;
  bottom = (bottom_left + bottom_right)/2.0;
  left = (top_left + bottom_left)/2.0;
  right = (top_right + bottom_right)/2.0;
  
  Serial.print("top_left=");Serial.println(top_left);
  Serial.print("top_right=");Serial.println(top_right);
  Serial.print("bottom_right=")Serial.println(bottom_left);
  Serial.print("bottom_right=")Serial.println(bottom_right);
}
