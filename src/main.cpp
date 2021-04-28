#include <Arduino.h>

void setup() {
  pinMode(G5,OUTPUT);
}

void loop() {
digitalWrite(G5,HIGH);
delay(500);
 digitalWrite(G5,LOW);
 delay(500);
 }