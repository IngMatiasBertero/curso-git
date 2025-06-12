#include <Arduino.h>
#include <ESP32Servo.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(15, INPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(2000);
  digitalRead(15);

}

// put function definitions here:

