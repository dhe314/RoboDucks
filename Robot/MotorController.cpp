#include "MotorController.h"
#include "Arduino.h"

//change so that you enter floats 0-1

MotorController::MotorController(){
}

void MotorController::spin(float right, float left){
//will it always be 1-2?

    if (right >= 0){
      analogWrite(Rpin1, right * 255);
      analogWrite(Rpin2, 0);
    }

    else if (right < 0){
      analogWrite(Rpin1, 0);
      analogWrite(Rpin2, abs(right) * 255);
    }

    if (left >= 0){
      analogWrite(Lpin1, left * 255);
      analogWrite(Lpin2, 0);
    }

    else if (left < 0){
      analogWrite(Lpin1, 0);
      analogWrite(Lpin2, abs(left) * 255);
    }
}

void MotorController::init(int R1, int R2, int L1, int L2){
	this->Rpin1 = R1;
    pinMode(Rpin1, OUTPUT);
	this->Rpin2 = R2;
    pinMode(Rpin2, OUTPUT);
	this->Lpin1 = L1;
    pinMode(Lpin1, OUTPUT);
	this->Lpin2 = L2;
    pinMode(Lpin2, OUTPUT);
}
