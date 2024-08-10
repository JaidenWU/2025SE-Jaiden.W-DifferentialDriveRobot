#include "LineSensor.h"

LineSensor::LineSensor(unsigned int pin) : pin(pin) {}

void LineSensor::init() {
  pinMode(pin, INPUT);
}

int LineSensor::read() {
  return digitalRead(pin);
}
