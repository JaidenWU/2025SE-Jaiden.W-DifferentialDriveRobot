#include "LineSensor.h"
#include "LEDArray.h"

#define LEFT_LINESENSOR_PIN 13
#define RIGHT_LINESENSOR_PIN 3

LineSensor lineSensor(LEFT_LINESENSOR_PIN, RIGHT_LINESENSOR_PIN);
ArduinoLEDMatrix matrix;  
LEDArray ledArray(matrix);  


void setup() {
  Serial.begin(9600);
  lineSensor.init();
  ledArray.init();
}

void loop() {
  bool isFollowingLine = lineSensor.determineState();

  if (isFollowingLine) {
    Serial.println("Following the line");
  } else {
    Serial.println("Lost the line");
  }

   // Update the LED array display based on the state
  ledArray.updateDisplay(isFollowingLine);
  
  delay(500); 
}
