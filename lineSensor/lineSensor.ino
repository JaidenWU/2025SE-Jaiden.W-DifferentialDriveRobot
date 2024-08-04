#include "LineSensor.h"

#define LINE_SENSOR_PIN 3

LineSensor lineSensor(LINE_SENSOR_PIN);

void setup() {
  Serial.begin(9600);
  lineSensor.init();
}

void loop() {
  Serial.print("lineSensor: ");
  Serial.println(lineSensor.read());
  delay(100); 
}
