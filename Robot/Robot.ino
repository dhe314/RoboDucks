#include "MotorController.h"
#include "UltrasonicSensor.h"

#define HEAD 13
#define TAIL 14

#define RELEASE 0
#define TEST_US 1
#define TEST_MOTOR 2

//Ultrasonic Sensor pins
#define frontInput 15;
#define frontOutput 11;
#define rightInput 10;
#define rightOutput 7;
#define leftInput 5;
#define leftOutput 2;

const int build_type = TEST_US;

bool headOut;
bool tailOut;

MotorController wheels;
UltrasonicSensor front;
UltrasonicSensor right;
UltrasonicSensor left;

void setup() {
  // put your setup code here, to run once:
  
  wheels.init(14, 13, 12, 9);
  front.init(11, 15);
  right.init(8, 10);
  left.init(5, 6);

  pinMode(HEAD, INPUT);
  pinMode(TAIL, INPUT);
  headOut = false;
  tailOut = false;
}

bool checkBounds(){
  if (digitalRead(HEAD) == HIGH){
    headOut = true;
  }
  else{
    headOut = false;
  }
  if (digitalRead(TAIL) == HIGH){
    tailOut = true;
  }
  else{
    tailOut = false;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  if (build_type == TEST_US){
    
  }
  
  /*else{

    if (left.getcmDistance() < 10 || right.getcmDistance() < 10){
      wheels.spin(255, 255);
      wheels.spin(255, 255);
    }

    if (

  
  }
 */
}

bool escape(){
  return false;
}
