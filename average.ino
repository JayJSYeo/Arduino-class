int TL,TR,BR,BR;
int horiDiff,vertDiff;
int avgl,avgr,avgt,avgb;

void setup() {
  
Serial.begin(9600);
Serial.print("Solar tracker");

}

void loop() {

 readSensors();
 calculaterParameters();

 delay(1000);
 }
void readSensors(){
TL=analogRead(A0);
TR=analogRead(A1);
BR=analogRead(A2);
BL=analogRead(A3);

Serial.print(TL);
Serial.print("top_right");
Serial.print(BL);
Serial.print("bot_right");
Serial.print(TL);
Serial.print("top_right");
Serial.print(BL);
Serial.print("bot_right");
 
}
void calculaterParameters(){
avg_left=(TL+TR)/2;
avg_right=(BL+BR)/2;
avg_top=(TL+BL)/2;
avg_bot=(TR+BR)/2; 

 horiDiff=avgl-avgrt;
 vertDiff=avgt-avgb;
}

void trackingVertical90{
  if(abs(vertdiff)) {
    if(avt>avb){
      angle_v = angle_v+1;
    }
    else{
      angle_v = angle_v-1;
    }
    angle_v = constrain(angle_v, 0, 180);
    vertical.write(angle_v);
    }
  
}

void trackingHorizon(){
  if(abs(horidiff)>tol) {
    if(avl>avr) {
      angle_h = angle_h-1;
     }
     else {
      angle_h = angle_h-1;
     }
     
}
