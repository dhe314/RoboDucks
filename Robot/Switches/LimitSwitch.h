//Is this class even worth making?


#ifndef SWITCH_H
#define SWITCH_H

#include "Arduino.h"

class LimitSwitch{
	public:
		LimitSwitch();
		bool checkClosed();
		void init(int pin);
	private:
		//does the 5v pin supply power as long as he's hooked up
		int input;
		bool connected;
};

#endif