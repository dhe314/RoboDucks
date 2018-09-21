#include "UltrasonicSensor.h"

UltrasonicSensor x;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  x.init(1,2);
  // how do you refer to the other pins that are not numbered or that have leetters?
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(x.getcmDistance());

}
