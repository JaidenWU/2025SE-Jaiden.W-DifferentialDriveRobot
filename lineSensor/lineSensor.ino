#include "LineSensor.h"

#define LINE_SENSOR_PIN1 13
#define LINE_SENSOR_PIN2 3

LineSensor lineSensor1(LINE_SENSOR_PIN1);
LineSensor lineSensor2(LINE_SENSOR_PIN2);


void setup() {
  Serial.begin(9600);
  lineSensor1.init();
  lineSensor2.init();
}

void loop() {
  Serial.print("lineSensor: ");
  Serial.println(lineSensor1.read());
  delay(100); 
}
