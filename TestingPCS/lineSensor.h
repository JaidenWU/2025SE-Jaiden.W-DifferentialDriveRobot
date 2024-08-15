#ifndef LINE_SENSOR_H
#define LINE_SENSOR_H

#include <Arduino.h>
#include "ledArray.h"

class LineSensor
{
  private:
    byte leftLinePin;
    byte rightLinePin;

  public:
    LineSensor() {} //default constructor
    
    LineSensor(byte leftLinePin, byte rightLinePin);
    void init();
    int readLeftLineSensor();
    int readRightLineSensor();
    bool leftDetermineState();
    bool rightDetermineState();
    bool determineState(); // Determine if the car is following the line
    void displayState(LEDArray &ledArray); // display state on LEDarray
};

#endif
