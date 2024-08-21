#include "wheelsControl.h"
#include "lineSensor.h"
#include "mechCar.h"
#include "ledArray.h"
#include "sensor.h"

#define LEFT_WHEEL_PIN 10
#define RIGHT_WHEEL_PIN 9
#define LEFT_LINESENSOR_PIN A1
#define RIGHT_LINESENSOR_PIN A0

LineSensor lineSensor(LEFT_LINESENSOR_PIN, RIGHT_LINESENSOR_PIN);
ArduinoLEDMatrix matrix;  
LEDArray ledArray(matrix);  
wheelsControl wheels(LEFT_WHEEL_PIN, RIGHT_WHEEL_PIN, 12);
MechCar car(lineSensor, ledArray, wheels);

void setup() {
  Serial.begin(9600);
  car.init();
}

void loop() {
  car.test();
}
