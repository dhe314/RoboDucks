#include "MotorClass.h"

#define FORWARD_R 1
#define BACK_R 2
#define FORWARD_L 3
#define BACK_L 4

MotorController x;

int time = 0; 

void setup(){
  pinMode(FORWARD_R, OUTPUT);
  pinMode(BACK_R, OUTPUT);
  pinMode(FORWARD_L, OUTPUT);
  pinMode(BACK_L, OUTPUT);
}

void loop(){

  if (time < 5){
    x.forward();
  }
  else if (time < 10){
    x.right();
  }
  else if (time < 15){
    x.back()
  }
  else if (time < 20){
    x.left();
  }
  else
    time = 0;

  delay(1000);
  time++;
}
