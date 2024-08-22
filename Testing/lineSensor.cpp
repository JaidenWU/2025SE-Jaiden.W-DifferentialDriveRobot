#include "lineSensor.h"
#include "ledArray.h"


LineSensor::LineSensor(byte leftLinePin, byte rightLinePin) 
{
  this->leftLinePin = leftLinePin;
  this->rightLinePin = rightLinePin;
}

void LineSensor::init() {
  pinMode(leftLinePin,INPUT);
  pinMode(rightLinePin,INPUT);
}

int LineSensor::readLeftSensor() {
  return analogRead(leftLinePin);
}

int LineSensor::readRightSensor() {
  return analogRead(rightLinePin);
}

bool LineSensor::leftDetermineState(){
  int leftValue = readLeftSensor();
  if (leftValue >= 35) {       
    return true;
  } else {                                                
    return false;
  }
}

bool LineSensor::rightDetermineState(){
  int rightValue = readRightSensor();
  if (rightValue >= 35) {       
    return true;
    } else {                                                
    return false;
  }
}

bool LineSensor::determineState(){
  int leftValue = readLeftSensor();
  int rightValue = readRightSensor();
  if (leftValue >= 35 || rightValue >= 35) {          //both on line    25 white  40 black
    return true;
  } else {                                                //not on line
    return false;
  }
}

void LineSensor::displayState(LEDArray &ledArray) {
  bool isFollowingLine = determineState();
  Serial.println(readLeftSensor());
  Serial.println(readRightSensor());
  if (isFollowingLine) {
    Serial.println("Following the line");
  } else {
    Serial.println("Lost the line");
  }
  ledArray.updateDisplay(isFollowingLine);
  delay(500);
}