#ifndef LINE_SENSOR_H
#define LINE_SENSOR_H

#include <Arduino.h>
#include "ledArray.h"
#include "sensor.h"


class LineSensor: public Sensor {
  private:
    byte leftLinePin;
    byte rightLinePin;

  public:
    LineSensor() {} //default constructor
    LineSensor(byte leftLinePin, byte rightLinePin);
    void init();
    int readLeftSensor() override;S
    int readRightSensor() override;
    bool determineState() override; // Determine if the car is following the line
    bool leftDetermineState();
    bool rightDetermineState();
    void displayState(LEDArray &ledArray); // display state on LEDarray
};

#endif
