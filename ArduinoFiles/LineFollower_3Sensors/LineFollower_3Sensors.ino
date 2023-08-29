/// Includes

#include <AFMotor.h>

/// Constants

const int PIN_analogIn_L = A0;  // Left Sensor
const int PIN_analogIn_R = A2;  // Right Sensor
const int PIN_analogIn_M = A1;  // Left Sensor

const int PORT_motor_L = 1;   // Right Motor
const int PORT_motor_R = 2;   // Left Motor

/// Instances
AF_DCMotor motorL(PORT_motor_L);
AF_DCMotor motorR(PORT_motor_R);



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
