#include "LineSensor.h"

#define LEFT_LINESENSOR_PIN 13
#define RIGHT_LINESENSOR_PIN 3

LineSensor lineSensor(LEFT_LINESENSOR_PIN, RIGHT_LINESENSOR_PIN);

void setup() {
  Serial.begin(9600);
  lineSensor.init();
}

void loop() {
  if (lineSensor.determineState()) {
    Serial.println("Following the line");
  } else {
    Serial.println("Lost the line");
  }
  delay(500); 
}
