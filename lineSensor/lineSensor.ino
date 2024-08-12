#include "LineSensor.h"

#define LEFT_LINESENSOR_PIN A1
#define RIGHT_LINESENSOR_PIN A0

LineSensor lineSensor(LEFT_LINESENSOR_PIN, RIGHT_LINESENSOR_PIN);

void setup() {
  Serial.begin(9600);
  lineSensor.init();
}

void loop() {
  Serial.println(lineSensor.readLeftLineSensor());
  //if (lineSensor.determineState()) {
    //Serial.println("Following the line");
  //} else {
    //Serial.println("Lost the line");
  //}
  //delay(500); 
}
