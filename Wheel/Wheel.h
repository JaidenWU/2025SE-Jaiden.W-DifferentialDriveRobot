#ifndef WHEEL_H
#define WHEEL_H
#include <Servo.h>

#include <Arduino.h>

class Wheel
{
  private:
  byte pin;

  public:
  Wheel () {} // default constructor 
  Wheel (byte pin);

  // init the pin for the wheel
  void init();
 
  void moveForward();

  void moveBackward();

  void wheelSetup();






};

#endif