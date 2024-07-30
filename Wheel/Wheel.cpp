#include "Wheel.h"
#include <Servo.h>



Wheel::Wheel(byte pin)
  {
    this -> pin = pin;
  }

void Wheel::init()
{
  pinMode(pin,OUTPUT);
}

void Wheel::moveForward ()
{

}

void Wheel::moveBackward ()
{

}

void Wheel::wheelSetup()
{

}


