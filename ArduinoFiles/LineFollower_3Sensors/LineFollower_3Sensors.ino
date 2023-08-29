/// Includes

#include <AFMotor.h>

/// Constants

const int PIN_analogIn_L = A0;  // Left Sensor
const int PIN_analogIn_R = A1;  // Right Sensor
const int PIN_analogIn_M = A2;  // Left Sensor

const int PORT_motor_L = 1;   // Right Motor
const int PORT_motor_R = 2;   // Left Motor

/// Instances

AF_DCMotor motorL(PORT_motor_L);
AF_DCMotor motorR(PORT_motor_R);

/// Global Variables

int value_R;
int value_L;
int value_M;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  value_R = 0;
  vlaue_L = 0;
  value_M = 0;
}



void loop() {
  // put your main code here, to run repeatedly:
  value_L = analogRead(PIN_analogIn_L);
  value_R = analogRead(PIN_analogIn_R);
  value_M = analogRead(PIN_analogIn_M);

  Serial.print("L: ");
  Serial.print(value_L);
  Serial.print("\tR: ");
  Serial.print(value_R);
  Serial.print("\tM: ");
  Serial.println(value_M);

  delay(30);
}



}

