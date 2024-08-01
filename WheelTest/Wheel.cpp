#include "Wheel.h"
#include <Servo.h>


Wheel::Wheel (Servo &servo, byte pin)
{
  this-> servo = servo;
  this->pin = pin;
}

void Wheel::initLeftWheel()
{
  servo.attach(pin, 700, 2300);
}

void Wheel::initRightWheel()
{
  servo.attach(pin, 700, 2300);
}

void Wheel::moveForward ()
{
  servo.writeMicroseconds(2300);  //2300 fast forward, 700 fast backards, 1500 stop
  delay(100); // requires short delay as loop breaks frequency
}

void Wheel::moveBackward ()
{
  servo.writeMicroseconds(700);  //2300 fast forward, 700 fast backards, 1500 stop
  delay(100); // requires short delay as loop breaks frequency
}





