#include "LineSensor.h"
#include "LEDArray.h"

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
  Serial.begin(9600);
  Serial.println(lineSensor.readLeftLineSensor());  
  
  //bool isFollowingLine = lineSensor.determineState();

  //if (isFollowingLine) {
  //  Serial.println("Following the line");
  //} else {
  //  Serial.println("Lost the line");
  //}

   // Update the LED array display based on the state
  //ledArray.updateDisplay(isFollowingLine);
  
  //delay(500); 
}
