#ifndef LEDARRAY_H
#define LEDARRAY_H

#include "Arduino_LED_Matrix.h"
#include <Arduino.h>


class LEDArray {
  private:
    ArduinoLEDMatrix matrix;
  public:
    LEDArray(ArduinoLEDMatrix &matrix);
    void init();
    void displayHappyFace();
    void displaySadFace();
    void updateDisplay(bool isFollowingLine);
};

#endif