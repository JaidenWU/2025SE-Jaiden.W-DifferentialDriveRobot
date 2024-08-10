#include "LineSensor.h"

#define LEFT_LINE_SENSOR_PIN 13
#define RIGHT_LINE_SENSOR_PIN 3

LineSensor leftLineSensor(LEFT_LINE_SENSOR_PIN);
LineSensor rightLineSensor(RIGHT_LINE_SENSOR_PIN);


void setup() {
  Serial.begin(9600);
  leftLineSensor.init();
  rightLineSensorinit();
}

void loop() {
  Serial.print("lineSensor: ");
  Serial.println(leftLineSensor.read());
  delay(100); 
}
