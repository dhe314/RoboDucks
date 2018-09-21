#include "MotorController.h"
#include "UltrasonicSensor.h"

#define HEAD 13
#define TAIL 14

#define RELEASE 0
#define TEST_US 1
#define TEST_MOTOR 2

const int build_type = TEST_US;

bool headOut;
bool tailOut;

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

  pinMode(HEAD, INPUT);
  pinMode(TAIL, INPUT);
  headOut = false;
  tailOut = false;
}

bool headOut(){
  if (digitalRead(HEAD) == HIGH){
    head
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if (build_type == TEST_US){
    
  }
  else{

    if (left.getcmDistance() < 10 || right.getcmDistance() < 10){
      wheels.spin(255, 255);
      wheels.spin(255, 255);
    }

    if (

  
  }
}

bool escape(){
  wheels.
}
