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
  int leftReading = lineSensor.readLeftLineSensor();
  int rightReading = lineSensor.readRightLineSensor();
  
  bool leftOnLine = (leftReading < 35); // Adjust threshold based on your setup
  bool rightOnLine = (rightReading < 35);
  
  if (leftOnLine && rightOnLine) {
    wheels.moveForward();
  } else if (!leftOnLine && rightOnLine) {
    wheels.turnRight();
  } else if (leftOnLine && !rightOnLine) {
    wheels.turnLeft();
  } else {
    wheels.stop();
  }
  wheels.update();
}


void MechCar::showState() {
  lineSensor.displayState(ledArray);
}

void MechCar::test(){
  wheels.moveForward();
}

