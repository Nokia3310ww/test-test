#include <Arduino.h>


void setup() {
  // put your setup code here, to run once:
  pinMode(17,OUTPUT);
}

void loop() {
  digitalWrite(17,HIGH);
  delay(1000);
  digitalWrite(17,LOW);
  delay(1000);
}

