#include "wheelsControl.h"

wheelsControl::wheelsControl(byte leftPin, byte rightPin, unsigned long moveDelay)
{
  this->leftPin = leftPin;
  this->rightPin = rightPin;
  lastTimeMoved = millis();
  this->moveDelay = moveDelay;
}
  
void wheelsControl::init() {
  leftServo.attach(leftPin, 700, 2300);
  rightServo.attach(rightPin, 700, 2300);
}

void wheelsControl::moveForward() {
  leftServo.writeMicroseconds(1600);  // Left wheel forward
  rightServo.writeMicroseconds(1400); // Right wheel forward
  delay(100);
}

void wheelsControl::moveBackward() {
  leftServo.writeMicroseconds(1400);   // Left wheel backward
  rightServo.writeMicroseconds(1600);  // Right wheel backward
  delay(100);
}

void wheelsControl::stop() {
  leftServo.writeMicroseconds(1500);  // Stop left wheel
  rightServo.writeMicroseconds(1500); // Stop right wheel
  delay(100);
}

void wheelsControl::turnLeft() {
  rightServo.writeMicroseconds(1400); // Right wheel forward
  delay(100);
}

void wheelsControl::turnRight() {
  leftServo.writeMicroseconds(1550);  // Left wheel forward
  delay(100);
}

void wheelsControl::update() {
  unsigned long timeNow = millis();
  if (timeNow - lastTimeMoved > moveDelay) {
    lastTimeMoved = timeNow;
    leftServo.writeMicroseconds(1500);  
    rightServo.writeMicroseconds(1500); 
  }
}

unsigned long wheelsControl:: getMoveDelay(){
  return moveDelay;
}

void wheelsControl::setMoveDelay(unsigned long moveDelay){
  this-> moveDelay = moveDelay;
}

