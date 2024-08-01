#ifndef WHEEL_H
#define WHEEL_H

#include <Arduino.h>

#include <Servo.h>

class Wheel
{
  private:
  Servo servo;
  byte pin;
  unsigned long speed;

  public:
  Wheel () {} // default constructor 
  Wheel (Servo &servo, byte pin);

  // init the pin for the wheel
  void initLeftWheel();

  void initRightWheel();

  void moveForward();

  void moveBackward();

  

};

#endif