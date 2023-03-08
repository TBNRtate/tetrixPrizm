//Movement calibration for RangerBot MAX!
//Do not modify unless you know what you are doing.
#include <PRIZM.h>
PRIZM prizm;
//-------------------------------------------------------------
//Forward
//easiest way to go forward
// in this format: forward(5);
//this makes it go forward about 5 feet.
void forward(float(feet)){
  float tDist=feet*1000;
  prizm.setMotorPower(1,25);
  prizm.setMotorPower(2,-26.5);
  delay(tDist);
  prizm.setMotorPower(1,0);
  prizm.setMotorPower(2,0);
  delay(500);
}

//Reverse
//easiest way to go backwards
//in this format :forward(.75);
//this makes it go backward about 9 inches.
void reverse(float(feet)){
  float tDist=feet*1000;
  prizm.setMotorPower(1,-25);
  prizm.setMotorPower(2,27);
  delay(tDist);
  prizm.setMotorPower(1,0);
  prizm.setMotorPower(2,0);
  delay(500);
}

//-------------------------------------------------------------
//left
//easiest way to turn left.
//in this format: left(45);
//this makes the robot turn left about 45 degrees
void left(float(degree)){
  float tDeg=degree*10;
  prizm.setMotorPower(1,25);
  prizm.setMotorPower(2,25);
  delay(tDeg);
  prizm.setMotorPower(1,0);
  prizm.setMotorPower(2,0);
  delay(500);
}

//right
//easiest way to turn right.
//in this format: right(160);
//this makes the robot turn right about 160 degrees.
void right(float(degree)){
  float tDeg=degree*10;
  prizm.setMotorPower(1,-25);
  prizm.setMotorPower(2,-25);
  delay(tDeg);
  prizm.setMotorPower(1,0);
  prizm.setMotorPower(2,0);
  delay(500);
}
