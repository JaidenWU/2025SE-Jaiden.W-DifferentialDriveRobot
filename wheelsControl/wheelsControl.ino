#include "wheelsControl.h"

#define LEFT_WHEEL_PIN 10
#define RIGHT_WHEEL_PIN 9

wheelsControl wheels(LEFT_WHEEL_PIN, RIGHT_WHEEL_PIN);

void setup() {
  Serial.begin(9600);  
  wheels.init();
}

void loop() {
  wheels.turnRight();
}
