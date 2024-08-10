#ifndef MECHCAR_H
#define MECHCAR_H

#include <Arduino.h>
#include "wheelsControl.h"
#include "lineSensor.h"

class mechCar
{
  private:
  wheelsControl wheels;


  public:
    mechCar () {} //default constructor
    void init();



};


#endif