#include "LimitSwitch.h"

LimitSwitch::LimitSwitch(){
}

bool LimitSwitch::checkClosed(){
	return(digitalRead(input) == HIGH);
}

void LimitSwitch::init(int pin){
	input = pin;
}