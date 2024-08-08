/*
  Purpose: Basic example of controlling a continuos servo
  Notes: 
    1. See attached schematic
    2. 100µF 25v capacitor
    3. Servo may need screw adjustment to set 1500 as stop
  Author: Ben Jones 25/4/24
  Contact: benjmain.jones21@det.nsw.edu.au
*/

#include <Servo.h>
Servo Lservo;
Servo Rservo;


void setup() {
  Lservo.attach(10, 700, 2300);
  Rservo.attach(9, 700, 2300);

}

void loop() {
  Lservo.writeMicroseconds(700);  //2300 fast forward, 700 fast backards, 1500 stop
  delay(100); 
  Rservo.writeMicroseconds(2300);  //2300 fast forward, 700 fast backards, 1500 stop
  delay(100);
}