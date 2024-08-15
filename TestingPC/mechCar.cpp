#include "mechCar.h"
#include "lineSensor.h"
#include "ledArray.h"

MechCar::MechCar(LineSensor& lineSensor, LEDArray& ledArray, wheelsControl& wheels)
  : lineSensor(lineSensor), ledArray(ledArray), wheels(wheels) {}

void MechCar::init(){
  lineSensor.init();
  wheels.init();
  ledArray.init();
}

void MechCar::followLine() {
  // Read sensor values
  int leftValue = lineSensor.readLeftLineSensor();
  int rightValue = lineSensor.readRightLineSensor();
  
  // Calculate the error (difference between left and right sensor values)
  int error = leftValue - rightValue;
  
  // Set a proportional control factor (tune this value based on your setup)
  float Kp = 0.5; 
  
  // Calculate the adjustment needed for the servos
  int adjustment = Kp * error;
  
  // Apply the adjustment to the servo positions
  int leftServoPosition = 1500 + adjustment;
  int rightServoPosition = 1500 - adjustment;
  
  // Move the servos with the calculated positions
  wheels.setServoPosition(leftServoPosition, rightServoPosition);
  wheels.update(); // Update the wheels based on the calculated positions
}



void MechCar::showState() {
  lineSensor.displayState(ledArray);
}

void MechCar::test(){
  wheels.moveForward();
  wheels.update();
}

