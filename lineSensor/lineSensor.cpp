#include "LineSensor.h"

LineSensor::LineSensor(byte leftLinePin, byte rightLinePin) 
{
  this->leftLinePin = leftLinePin;
  this->rightLinePin = rightLinePin;
}

void LineSensor::init() {
  pinMode(leftLinePin,INPUT);
  pinMode(rightLinePin,INPUT);
}

int LineSensor::readLeftLineSensor() {
  return analogRead(leftLinePin);
}

int LineSensor::readRightLineSensor() {
  return analogRead(rightLinePin);
}

bool LineSensor::leftDetermineState(){
  int leftValue = readLeftLineSensor();
  if (leftValue >= 35) {       
    return true;
  } else {                                                
    return false;
  }
}

bool LineSensor::rightDetermineState(){
  int rightValue = readRightLineSensor();
  if (rightValue >= 35) {       
    return true;
    } else {                                                
    return false;
  }
}

bool LineSensor::determineState(){
  int leftValue = readLeftLineSensor();
  int rightValue = readRightLineSensor();
  if (leftValue >= 35 || rightValue >= 35) {          //both on line     25 white 40 black
    return true;
  } else {                                                //not on line
    return false;
  }
}