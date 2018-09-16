#include "MotorClass.h"


MotorController()::MotorController(){
}

MotorController()::forward(){
	digitalWrite(Rpin1, HIGH);
	digitalWrite(Rpin2, LOW);
	digitalWrite(Lpin1, HIGH);
	digitalWrite(Lpin2, LOW);
}
	
MotorController()::back(){
	digitalWrite(Rpin2, HIGH);
	digitalWrite(Rpin1, LOW);
	digitalWrite(Lpin2, HIGH);
	digitalWrite(Lpin1, LOW);
}
	
MotorController()::left(){
	digitalWrite(Rpin1, HIGH);
	digitalWrite(Rpin2, LOW);
	
	digitalWrite(Lpin2, LOW);
	digitalWrite(Lpin1, HIGH);
}
	
MotorController()::right(){
	digitalWrite(wheel1pin1, LOW);
	digitalWrite(wheel1pin2, HIGH);
}
	
MotorController()::init(int fr, int fl, int br, int bl){
	this->wheel1pin1 = fr;
	this->wheel1pin2 = fl;
	this->BACK_R = br;
	this->BACK_L = bl;

}
