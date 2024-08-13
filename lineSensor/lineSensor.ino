#include "lineSensor.h"
#include "ledArray.h"

#define LEFT_LINESENSOR_PIN A1
#define RIGHT_LINESENSOR_PIN A0

LineSensor lineSensor(LEFT_LINESENSOR_PIN, RIGHT_LINESENSOR_PIN);
ArduinoLEDMatrix matrix;  
LEDArray ledArray(matrix);  


void setup() {
  Serial.begin(9600);
  lineSensor.init();
  ledArray.init();
}

void loop() {
  lineSensor.determineState();
  lineSensor.displayState(ledArray);
}
