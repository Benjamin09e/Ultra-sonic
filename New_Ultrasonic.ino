#include <Ultrasonic.h>
Ultrasonic cap (A0,A1);

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(cap.Ranging(CM));
  delay (500);
}
