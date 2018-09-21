#include "MotorController.h"
#include "Arduino.h"

//change so that you enter floats 0-1

MotorController::MotorController(){
}

void MotorController::spin(int right, int left){
  if (right > 0 && left > 0){
    digitalWrite(Rpin1, HIGH);
    digitalWrite(Rpin2, LOW);
  
    digitalWrite(Lpin1, HIGH);
    digitalWrite(Lpin2, LOW);
    
    setVel(right, left);
  }
  
  if (right == 0 && left == 0){
    digitalWrite(Rpin1, LOW);
    digitalWrite(Rpin2, LOW);
  
    digitalWrite(Lpin1, LOW);
    digitalWrite(Lpin2, LOW);
    
    setVel(0, 0);
  }
  
  if (right < 0 && left < 0){
    digitalWrite(Rpin1, LOW);
    digitalWrite(Rpin2, HIGH);

    digitalWrite(Lpin1, LOW);
    digitalWrite(Lpin2, HIGH);
    
    setVel(abs(right), abs(left));
  }
  
  if (right < 0 && left < 0){
    digitalWrite(Rpin1, LOW);
    digitalWrite(Rpin2, HIGH);

    digitalWrite(Lpin1, HIGH);
    digitalWrite(Lpin2, LOW);
    
    setVel(abs(right), left);
  }
  
  if (right > 0 && left < 0){
    digitalWrite(Rpin1, HIGH);
    digitalWrite(Rpin2, LOW);

    digitalWrite(Lpin1, LOW);
    digitalWrite(Lpin2, HIGH);
    
    setVel(right, abs(left));
  }
}

void MotorController::setVel(int rspeedvalue, int lspeedvalue){
  analogWrite(Rspeed, rspeedvalue);
  analogWrite(Lspeed, lspeedvalue);
}

void MotorController::init(int r1, int l1, int r2, int l2, int rs, int ls){
	this->Rpin1 = r1;
    pinMode(r1, OUTPUT);
	this->Rpin2 = r2;
    pinMode(r2, OUTPUT);
	this->Lpin1 = l1;
    pinMode(l1, OUTPUT);
	this->Lpin2 = l2;
    pinMode(l2, OUTPUT);
  this->Rspeed = rs;
    pinMode(rs, OUTPUT);
  this->Lspeed = ls;
    pinMode(ls, OUTPUT);
}
