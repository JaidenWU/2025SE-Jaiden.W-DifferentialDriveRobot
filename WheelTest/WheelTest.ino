#include "Wheel.h"

#define LEFT_WHEEL_PIN 11
#define RIGHT_WHEEL_PIN 10

Servo leftServo;
Servo rightServo;

Wheel leftWheel (leftServo,LEFT_WHEEL_PIN);
Wheel rightWheel (rightServo,RIGHT_WHEEL_PIN);


void setup() {
  leftWheel.initLeftWheel();
  rightWheel.initRightWheel();
}

void loop() {
  
}