#include "Wheel.h"
#include <Servo.h>

#define LEFT_WHEEL_PIN 10
#define RIGHT_WHEEL_PIN 9

Wheel leftWheel (LEFT_WHEEL_PIN);
Wheel rightWheel (RIGHT_WHEEL_PIN);

void setup() {
  Serial.begin(9600);  
  leftWheel.init();
  rightWheel.init();
}

void loop() {
  leftWheel.moveForward();
}

void moveBothWheelsForward(){
  leftWheel.moveForward();
  rightWheel.moveForward();
}
