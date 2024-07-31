#include "Wheel.h"
#include <Servo.h>


Wheel::Wheel (Led &led)
{
  this-> servo = servo;
}

void Wheel::initLeftWheel()
{
  servo.attach(9, 700, 2300);
}

void Wheel::initRightWheel()
{
  servo.attach(10, 700, 2300);
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





