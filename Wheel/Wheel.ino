#include "Wheel.h"
#include <Servo.h>

#define LEFT_WHEEL_PIN 10
#define RIGHT_WHEEL_PIN 9

Servo leftServo;
Servo rightServo;

Wheel leftWheel (leftServo,LEFT_WHEEL_PIN);
Wheel rightWheel (rightServo,RIGHT_WHEEL_PIN);


void setup() {
  Serial.begin(9600);  
  leftWheel.init();
  rightWheel.init();
}

void loop() {
  moveBothWheelsForward();
}

void moveBothWheelsForward(){
  leftWheel.moveForward();
  rightWheel.moveForward();
}
