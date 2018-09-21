#include "MotorController.h"
#include "UltrasonicSensor.h"

#define FRONT 13
#define BACK 14

bool frontOpen;
bool backOpen;

MotorController wheels;
UltrasonicSensor front;
UltrasonicSensor right;
UltrasonicSensor left;

void setup() {
  // put your setup code here, to run once:
  
  wheels.init(1, 2, 3, 4, 5, 6);
  front.init(7, 8); //is it actually okay to number like that?
  right.init(9, 10);
  left.init(11, 12);

  frontOpen = false;
  backOpen = false;
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
