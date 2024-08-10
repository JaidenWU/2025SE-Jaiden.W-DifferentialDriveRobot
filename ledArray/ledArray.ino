/*
  Purpose: Basic example using LED matrix as a UI
  Notes: 
    1. Must install ArduinoGraphics from the Library Manager https://github.com/arduino-libraries/ArduinoGraphics
	2. Arduino_LED_Matrix is installed by board manager with R4 package
	2. Use https://ledmatrix-editor.arduino.cc/ to draw shapes
    2. requires Arduino Uno Wifi R4
    3. Documentation here (including scrolling text) https://docs.arduino.cc/tutorials/uno-r4-wifi/led-matrix/
  Author: Ben Jones 20/6/24
  Contact: benjmain.jones21@det.nsw.edu.au
*/

#include "Arduino_LED_Matrix.h"
#include "ledArray.h"  

ArduinoLEDMatrix matrix;  
LEDArray ledArray(matrix);  

void setup() {
  ledArray.init(); 
}

void loop() {
  ledArray.displayHappyFace(); 
}
