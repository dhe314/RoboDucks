#ifndef SENSOR_H
#define SENSOR_H

#include "Arduino.h"


class UltrasonicSensor{
	public: 
		UltrasonicSensor();
		
		float getcmDistance();
		void init(int trigger, int echo);
	
	private:
		int trigPin;
		int echoPin;
	
};

#endif