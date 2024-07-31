#include "Wheel.h"
#include <Servo.h>

#define LEFT_WHEEL_PIN 9
#define RIGHT_WHEEL_PIN 10

Wheel leftWheel(LEFT_WHEEL_PIN, 900);
Wheel rightWheel(RIGHT_WHEEL_PIN, 900);

void setup() {
  leftWheel.initLeftWheel();
  rightWheel.initRightWheel();
}

void loop() {
  
}