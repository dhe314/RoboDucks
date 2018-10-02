#include "MotorController.h"
#include "UltrasonicSensor.h"

#define RELEASE 0
#define TEST_US 1
#define TEST_MOTOR 2
#define TEST_SWITCHES 3

//Ultrasonic Sensor pins
#define FRONT_ECHO 12
#define FRONT_TRIG 8
#define RIGHT_ECHO 3
#define RIGHT_TRIG 2
#define LEFT_ECHO 7
#define LEFT_TRIG 5

//Limit Switches pins
#define FRONT_R A0
#define FRONT_L A1
#define BACK_R A2
#define BACK_L A3

MotorController wheels;
UltrasonicSensor front;
UltrasonicSensor right;
UltrasonicSensor left;

bool frontR;
bool frontL;
bool backR;
bool backL;

const int build_type = TEST_SWITCHES;

void setup() {
  // put your setup code here, to run once:
  
  wheels.init(11, 10, 9, 6);
  front.init(FRONT_TRIG, FRONT_ECHO);
  right.init(RIGHT_TRIG, RIGHT_ECHO);
  left.init(LEFT_TRIG, LEFT_ECHO);
  
  pinMode(FRONT_R, INPUT);
  pinMode(FRONT_L, INPUT);
  pinMode(BACK_R, INPUT);
  pinMode(BACK_L, INPUT);
  
  frontR = false;
  frontL = false;
  backR = false;
  backL = false;

  Serial.begin(9600);
}

void testUS(){
  Serial.println("cm distances: ");
  Serial.println("front: " );
  Serial.println(front.getcmDistance());
  Serial.println("right: " );
  Serial.println(right.getcmDistance());
  Serial.println("left: " );
  Serial.println(left.getcmDistance());
}

void testMotor(){
  wheels.spin(-1, -1);
  delay(2000);
  wheels.spin(1, 1);
  delay(2000);
}

void testSwitches(){
  checkBounds();
  Serial.println("front right: ");
  Serial.println(frontR);

  Serial.println("front left: ");
  Serial.println(frontL);

  Serial.println("back right: ");
  Serial.println(backR);

  Serial.println("back left: ");
  Serial.println(backL);
  
  delay(1000);
}

bool checkBounds(){
  //when the switch isn't pressed the circuit is closed
  //when the switch is pressed it's HIGH???
  //false is supposed to mean you're out
  frontR = (digitalRead(FRONT_R) == 0);
  frontL = (digitalRead(FRONT_L) == 0);
  backR = (digitalRead(BACK_R) == 0);
  backL = (digitalRead(BACK_L) == 0);
  return (frontR && frontL && backR && backL);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (build_type == TEST_US){
    testUS();
  }
  if (build_type == TEST_SWITCHES){
    testSwitches();
  }
  if (build_type == TEST_MOTOR){
    testMotor();
  }
  
  else{

    if (checkBounds()==true){
      if (!frontR){
        wheels.spin(-1, -1);
      }
      if (!backR){
        wheels.spin(1, 1);
      }
    }

    if (left.getcmDistance() < 10 || right.getcmDistance() < 10){
      wheels.spin(1, 1);
      wheels.spin(1, 1);
    }
  }
}
