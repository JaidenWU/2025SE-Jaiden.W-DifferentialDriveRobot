#include "wheelsControl.h"
#include <Servo.h>

wheelsControl::wheelsControl(byte leftPin, byte rightPin, unsigned long moveDelay)
{
  this->leftPin = leftPin;
  this->rightPin = rightPin;
  this->moveDelay = moveDelay;
  lastTimeMoved = millis();  // Initialize the last movement time
  leftServoPosition = 1500;  // Neutral position for servos
  rightServoPosition = 1500;
}
  
void wheelsControl::init() {
  leftServo.attach(leftPin, 700, 2300);
  rightServo.attach(rightPin, 700, 2300);
}

void wheelsControl::setServoPosition(unsigned int leftServoPosition, unsigned int rightServoPosition) {
  this->leftServoPosition = leftServoPosition;
  this->rightServoPosition = rightServoPosition;
}

void wheelsControl::moveForward() {
  setServoPosition(1600, 1400);  // Move forward
}

void wheelsControl::moveBackward() {
  setServoPosition(1400, 1600);  // Move backward
}

void wheelsControl::stop() {
  setServoPosition(1500, 1500);  // Stop
}

void wheelsControl::turnLeft() {
  setServoPosition(1500, 1400);  // Turn left
}

void wheelsControl::turnRight() {
  setServoPosition(1600, 1500);  // Turn right
}

void wheelsControl::update() {
  unsigned long timeNow = millis();
  if (timeNow - lastTimeMoved >= moveDelay) {
    // Apply the stored positions to the servos
    leftServo.writeMicroseconds(leftServoPosition); 
    rightServo.writeMicroseconds(rightServoPosition);
    lastTimeMoved = timeNow;
  }
}

unsigned long wheelsControl::getMoveDelay(){
  return moveDelay;
}

void wheelsControl::setMoveDelay(unsigned long moveDelay){
  this->moveDelay = moveDelay;
}
