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
  bool leftOnLine = lineSensor.leftDetermineState();
  bool rightOnLine = lineSensor.rightDetermineState();
  if (leftOnLine && rightOnLine) {
    wheels.moveForward();
  } else if (leftOnLine) {
    wheels.turnLeft();
  } else if (rightOnLine) {
    wheels.turnRight();
  } else {
    wheels.stop();
  }
}

void MechCar::showState() {
  lineSensor.displayState(ledArray);
}

