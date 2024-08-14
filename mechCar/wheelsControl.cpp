#include "wheelsControl.h"

wheelsControl::wheelsControl(byte leftPin, byte rightPin, unsigned long moveDelay)
{
  this->leftPin = leftPin;
  this->rightPin = rightPin;
  this->moveDelay = moveDelay;
  lastTimeMoved = millis();
  lastTimeMoved = 0;
  leftServoPosition = 1500; 
  rightServoPosition = 1500;
}
  
void wheelsControl::init() {
  leftServo.attach(leftPin, 700, 2300);
  rightServo.attach(rightPin, 700, 2300);
}

void wheelsControl::moveForward() {
  leftServoPosition = 1600;  // Left wheel forward
  rightServoPosition = 1400; // Right wheel forward
  update();
}

void wheelsControl::moveBackward() {
  leftServoPosition = 1400;  // Left wheel forward
  rightServoPosition = 1600; // Right wheel forward
  update();
}

void wheelsControl::stop() {
  leftServoPosition = 1500;  // Stop left wheel
  rightServoPosition = 1500; // Stop right wheel
  update();
}

void wheelsControl::turnLeft() {
  rightServoPosition = 1400; 
  update();
}

void wheelsControl::turnRight() {
  rightServoPosition = 1600;   // Left wheel forward
  update();
}

void wheelsControl::update() {
  unsigned long timeNow = millis();
  if (timeNow - lastTimeMoved > moveDelay) {
    lastTimeMoved = timeNow;
    // keeps servo moving based on last command
    leftServo.writeMicroseconds(leftServoPosition);  
    rightServo.writeMicroseconds(rightServoPosition); 
  }
}

unsigned long wheelsControl:: getMoveDelay(){
  return moveDelay;
}

void wheelsControl::setMoveDelay(unsigned long moveDelay){
  this-> moveDelay = moveDelay;
}

