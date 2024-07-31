#ifndef WHEEL_H
#define WHEEL_H

#include <Servo.h>
#include <Arduino.h>

class Wheel
{
  private:
  Servo servo;

  public:
  Wheel () {} // default constructor 
  Wheel (unsigned long speed);

  // init the pin for the wheel
  void initLeftWheel();

  void initRightWheel();

  void moveForward();

  void moveBackward();

  

};

#endif