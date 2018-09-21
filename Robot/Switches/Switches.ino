#include "LimitSwitch.h"
LimitSwitch test;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //if i combine w/ the other code will I have to use a different number?
  test.init(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(test.checkClosed());
}
