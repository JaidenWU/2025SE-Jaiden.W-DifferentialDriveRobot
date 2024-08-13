#ifndef LINE_SENSOR_H
#define LINE_SENSOR_H

#include <Arduino.h>

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
    bool determineState(); // Determine if the car is following the line
};

#endif
