#include "Wheel.h"
#include <Servo.h>

#define LEFT_WHEEL_PIN 9
#define RIGHT_WHEEL_PIN 10

Wheel leftWheel();
Wheel rightWheel();

void setup() {
  leftWheel.initLeftWheel();
  rightWheel.initRightWheel();
}

void loop() {
  
}