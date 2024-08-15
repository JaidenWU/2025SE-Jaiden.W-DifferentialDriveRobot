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
    int leftValue = lineSensor.readLeftLineSensor();
    int rightValue = lineSensor.readRightLineSensor();

    int threshold = 35;  // Adjust this value based on your sensor calibration.
    
    bool leftOnLine = leftValue > threshold;
    bool rightOnLine = rightValue > threshold;

    int speedDifference = map(leftValue - rightValue, -1000, 1000, -200, 200);

    if (!leftOnLine && !rightOnLine) {
        wheels.moveForward();  // Both sensors are off the line, move forward.
    } else if (!leftOnLine && rightOnLine) {
        wheels.setServoPosition(1500 + speedDifference, 1500 - speedDifference); // Adjust speed based on sensor readings.
    } else if (leftOnLine && !rightOnLine) {
        wheels.setServoPosition(1500 - speedDifference, 1500 + speedDifference); // Adjust speed based on sensor readings.
    } else {
        wheels.moveForward();  // Both sensors are on the line, stop (or move forward based on your design choice).
    }

    wheels.update();  // Update servo positions.
}


void MechCar::showState() {
  lineSensor.displayState(ledArray);
}

void MechCar::test(){
  wheels.moveForward();
  wheels.update();
}

