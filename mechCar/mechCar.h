#ifndef MECHCAR_H
#define MECHCAR_H

#include <Arduino.h>
#include "lineSensor.h"
#include "wheelsControl.h"
#include "ledArray.h"

class MechCar
{
  private:
  wheelsControl& wheels;
  LineSensor& lineSensor;
  LEDArray& ledArray;

  public:
    MechCar(LineSensor& lineSensor, LEDArray& ledArray, wheelsControl& wheels); 
    void init();
    void followLine();
    void showState();
    void test();

};

#endif