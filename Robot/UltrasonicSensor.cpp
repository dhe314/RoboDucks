#include "UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor(){
}

void UltrasonicSensor::init(int trigger, int echo){
	trigPin = trigger;
	echoPin = echo;
	
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
}

float UltrasonicSensor::getcmDistance(){
		
	float duration;
	
	digitalWrite(trigPin, LOW);
	delayMicroseconds(5);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	
	duration = pulseIn(echoPin, HIGH);
	
	return duration*0.1715;
}