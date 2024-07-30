#include "Wheel.h"
#include "Wheel.cpp"
#include <Servo.h>


void setup() {
  wheel.attach(5, 700, 2300);
}

void loop() {
  wheel.writeMicroseconds(700);  //2300 fast forward, 700 fast backards, 1500 stop
  //delay(100); // requires short delay as loop breaks frequency
}