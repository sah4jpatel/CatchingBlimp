#include <Arduino.h>

int startTime;
int lastTime;
double printDelay = 2; // seconds
String msg;

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);
  startTime = micros();
  lastTime = micros();
  msg = "";
}


void loop() {
  double elapsedTime = (micros() - lastTime) / 1000000.0; // seconds
  if(elapsedTime > printDelay){
    lastTime = micros();
    String message = "Hi! Time=" + String(elapsedTime);
    Serial1.println(message);
    Serial.println(message);
    String msg2 = "Received: " + msg;
    Serial.println(msg2);
    msg = "";
  }

  while(Serial1.available() > 0){
    char c = Serial1.read();
    msg += c;
  }
}