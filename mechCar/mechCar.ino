#include "wheelsControl.h"
#include "lineSensor.h"
#include "mechCar.h"

#define LEFT_WHEEL_PIN 10
#define RIGHT_WHEEL_PIN 9
#define LINE_SENSOR_PIN 3

LineSensor lineSensor(LINE_SENSOR_PIN);
wheelsControl wheels(LEFT_WHEEL_PIN, RIGHT_WHEEL_PIN);

mechCar car(lineSensor, wheels)



void setup() {
  car.intit();
}

void loop() {
  // put your main code here, to run repeatedly:

}
