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
    unsigned long lastTimeMoved;
    unsigned long moveDelay;
    unsigned int leftServoPosition;
    unsigned int rightServoPosition;
    void setServoPosition (unsigned int leftServoPosition, unsigned int rightServoPosition);

  public:
    wheelsControl() {} //default constructor
    wheelsControl(byte leftPin, byte rightPin);
    wheelsControl(byte leftPin, byte rightPin, unsigned long moveDelay);
    void init();
    void moveForward();
    void moveBackward();
    void stop();
    void turnLeft();
    void turnRight();
    void update();
    unsigned long getMoveDelay();
    void setMoveDelay(unsigned long moveDelay);
};

#endif
