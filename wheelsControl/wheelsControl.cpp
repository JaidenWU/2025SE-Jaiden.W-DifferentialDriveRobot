#include "wheelsControl.h"

wheelsControl::wheelsControl(byte leftPin, byte rightPin)
{
  this->leftPin = leftPin;
  this->rightPin = rightPin;
}
  
void wheelsControl::init() {
  leftServo.attach(leftPin, 700, 2300);
  rightServo.attach(rightPin, 700, 2300);
}

void wheelsControl::moveForward() {
  leftServo.writeMicroseconds(1600);  // Left wheel forward
  rightServo.writeMicroseconds(1490); // Right wheel forward
  delay(100);
}

void wheelsControl::moveBackward() {
  leftServo.writeMicroseconds(700);   // Left wheel backward
  rightServo.writeMicroseconds(2300);  // Right wheel backward
  delay(100);
}

void wheelsControl::stop() {
  leftServo.writeMicroseconds(1500);  // Stop left wheel
  rightServo.writeMicroseconds(1500); // Stop right wheel
  delay(100);
}

void wheelsControl::turnLeft() {
  rightServo.writeMicroseconds(700); // Right wheel forward
  delay(100);
}

void wheelsControl::turnRight() {
  leftServo.writeMicroseconds(2300);  // Left wheel forward
  delay(100);
}
