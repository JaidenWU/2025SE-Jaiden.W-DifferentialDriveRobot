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
    wheels.stop();
    wheels.turnLeft();
    delay(100);
  } else if (rightOnLine) {
    wheels.stop();
    wheels.turnRight();
    delay(100);
  } else {
    wheels.stop();
  }
  lineSensor.displayState(ledArray);
}

void MechCar::showState() {
  lineSensor.displayState(ledArray);
}

