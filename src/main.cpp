#include <Arduino.h>

void setup() {
  pinMode(G5,OUTPUT);
}

void loop() {
digitalWrite(G5,HIGH);
delay(1000);
 digitalWrite(G5,LOW);
 delay(1000);
 }