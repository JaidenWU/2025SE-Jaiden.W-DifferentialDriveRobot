#include "Wheel.h"
#include <Servo.h>


Wheel::Wheel (Servo &servo, byte pin)
{
  this-> servo = servo;
  this->pin = pin;
}

void Wheel::init()
{
  servo.attach(pin, 700, 2300);
}

void Wheel::moveForward ()
{
  servo.writeMicroseconds(2300); //2300 fast forward 1500 stop
  delay(100); 
}

void Wheel::moveBackward ()
{
  servo.writeMicroseconds(700);  //700 fast backards
  delay(100); 
}

void Wheel::stop()
{
  servo.writeMicroseconds(1500);  //1500 stop
}





