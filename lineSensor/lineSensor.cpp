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

bool LineSensor::determineState(){
  int leftValue = readLeftLineSensor();
  int rightValue = readRightLineSensor();
  if (leftValue == HIGH && rightValue == HIGH) {          //both on line
    return true;
  } else if (leftValue == HIGH || rightValue == HIGH) {   //atleast one on line
    return true;
  } else {                                                //not on line
    return false;
  }
}