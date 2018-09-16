#include "MotorClass.h"
#include "Arduino.h"

MotorController::MotorController(){
};

//do you have to re-set the speed when the direction of the wheel's spin changes??


void MotorController::forward(){
	digitalWrite(Rpin1, HIGH);
	digitalWrite(Rpin2, LOW);
  analogWrite(Rspeed, 30);
  
	digitalWrite(Lpin1, HIGH);
	digitalWrite(Lpin2, LOW);
  analogWrite(Lspeed, 30);
}
	
void MotorController::back(){
  digitalWrite(Rpin1, LOW);
	digitalWrite(Rpin2, HIGH);
  analogWrite(Rspeed, 30);

  digitalWrite(Lpin1, LOW);
	digitalWrite(Lpin2, HIGH);
	analogWrite(Lspeed, 30);
}
	
void MotorController::left(){
	digitalWrite(Rpin1, HIGH);
	digitalWrite(Rpin2, LOW);
  analogWrite(Rspeed, 30);

  digitalWrite(Lpin1, LOW);
  digitalWrite(Lpin2, HIGH);
  analogWrite(Lspeed, 30);
}
	
void MotorController::right(){
	digitalWrite(Rpin1, LOW);
	digitalWrite(Rpin2, HIGH);
  analogWrite(Rspeed, 30);

  digitalWrite(Lpin1, HIGH);
  digitalWrite(Lpin2, LOW);
  analogWrite(Lspeed, 30);
}

void MotorController::stop(){
  digitalWrite(Rpin1, LOW);
  digitalWrite(Rpin2, LOW);
  digitalWrite(Lpin1, LOW);
  digitalWrite(Lpin2, LOW);

  analogWrite(Rspeed, 0);
  analogWrite(Lspeed, 0);
}

void MotorController::init(int r1, int l1, int r2, int l2, int rs, int ls){
	this->Rpin1 = r1;
	this->Rpin2 = r2;
	this->Lpin1 = l1;
	this->Lpin2 = l2;
  this->Rspeed = rs;
  this->Lspeed = ls;
}
