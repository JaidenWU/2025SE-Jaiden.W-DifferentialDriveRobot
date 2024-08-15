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

 void MechCar::followLine()
  {
    if((lineSensor.readLeftLineSensor() < 36) && (lineSensor.readRightLineSensor() < 36)){
      wheels.moveForward();
    }
    else if((lineSensor.readLeftLineSensor() > 36) && (lineSensor.readRightLineSensor() < 36)){
      wheels.turnLeft();
    }
    else if((lineSensor.readLeftLineSensor() < 36) && (lineSensor.readRightLineSensor() > 36)){
      wheels.turnRight();
    }
    else{
      wheels.stop();
    }
    wheels.update(); 
  }


void MechCar::showState() {
  lineSensor.displayState(ledArray);
}

void MechCar::test(){
  wheels.moveForward();
  wheels.update();
}

