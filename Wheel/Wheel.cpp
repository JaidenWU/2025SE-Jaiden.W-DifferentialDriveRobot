#include "Wheel.h"
#include <Servo.h>


void Wheel::Wheel(unsigned long speed)
{
  this-> speed = speed;

}

void Wheel::initLeftWheel()
{
  wheel.attach(LEFT_WHEEL_PIN, 700, 2300);
}

void Wheel::initRightWheel()
{
  wheel.attach(RIGHT_WHEEL_PIN, 700, 2300);
}

void Wheel::moveForward ()
{
  wheel.writeMicroseconds(700);  //2300 fast forward, 700 fast backards, 1500 stop
  delay(100); // requires short delay as loop breaks frequency
}

void Wheel::moveBackward ()
{
  wheel.writeMicroseconds(700);  //2300 fast forward, 700 fast backards, 1500 stop
  delay(100); // requires short delay as loop breaks frequency
}




