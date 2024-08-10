#ifndef WHEELSCONTROL_H
#define WHEELSCONTROL_H

#include <Arduino.h>
#include <Servo.h>

class wheelsControl {
  private:
    Servo leftServo;
    Servo rightServo;
    byte leftPin;
    byte rightPin;

  public:
    wheelsControl() {} //default constructor
    wheelsControl(byte leftPin, byte rightPin);
    void init();
    void moveForward();
    void moveBackward();
    void stop();
    void turnLeft();
    void turnRight();
};

#endif
