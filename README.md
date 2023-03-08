This is the easiest way to use your Tetrix PRIZM compute module! 
Instead of trying to code all the prizm.setServoPosition(8,3) and memorize all that, this uses simple, easy to understand code.

HOW TO USE:
Move forward 2 feet would look like this: forward(2);
Move backward 3.5 feet would look like this: reverse(3.5);
Turn left 90 degrees looks like this: left(90);
Turn right 160 degrees looks like this: right(160);

EXAMPLE CODE: (wall detector/avoider)
#include <PRIZM.h> 
#include <movement.h> //Imports necessary scripts

void setup() {
  prizm.PrizmBegin(); //Starts up the board the rest of the way
  Serial.begin(9600); //configures the Ultrasonic sensor
}

void loop() {
  float x=prizm.readSonicSensorCM(3); //asks if the Ultrasonic sensor reads anything.
  if (x<=40){ //If it does, then:
    prizm.setServoPosition(1,-50); 
    prizm.setServoPosition(2,50);//moves the servo motors.
    reverse(2); //goes backwards 2 feet.
    left(90); //turns left by 90 degrees.
  }
  prizm.setServoPosition(1,50); 
  prizm.setServoPosition(2,-50); //moves the servos again.
  forward(1); //moves forward 1 foot.
}
