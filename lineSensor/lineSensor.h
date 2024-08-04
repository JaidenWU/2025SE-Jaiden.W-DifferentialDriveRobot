#ifndef LINE_SENSOR_H
#define LINE_SENSOR_H

#include <Arduino.h>

class LineSensor
{
  private:
    unsigned int pin;

  public:
    LineSensor() {} //default constructor
    
    LineSensor(unsigned int pin);
    
    void init();
    
    int read();
};

#endif
