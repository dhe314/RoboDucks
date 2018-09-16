#include "MotorClass.h"

#define right1 1
#define right2 2
#define left1 3
#define left2 4

#define rightspeed 5
#define leftspeed 6
//3,5,6,9,10,11

MotorController x;

int time = 0; 

void setup(){
  pinMode(right1, OUTPUT);
  pinMode(right2, OUTPUT);
  pinMode(left1, OUTPUT);
  pinMode(left2, OUTPUT);

  x.init(right1, right2, left1, left2, rightspeed, leftspeed);
}

void loop(){

  if (time < 5){
    x.forward();
  }
  else if (time < 10){
    x.right();
  }
  else if (time < 15){
    x.back();
  }
  else if (time < 20){
    x.left();
  }
  else{
    x.stop();
  }
  
  delay(1000);
  time++;
}
