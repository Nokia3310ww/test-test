#include <Arduino.h>
#include "displayph.h"


float ph=7.5;
void setup() {
  pinMode(17,OUTPUT);
  init_display();
  display_ph(ph);
  
  

}

void loop() {
  digitalWrite(17,HIGH);
  delay(1000);
  digitalWrite(17,LOW);
  delay(1000);
}

