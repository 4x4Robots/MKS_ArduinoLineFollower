/// Includes

#include <AFMotor.h>

/// Constants

const int PIN_analogIn_L = A0;  // Left Sensor
const int PIN_analogIn_R = A1;  // Right Sensor
const int PIN_analogIn_M = A2;  // Middle Sensor

const int PORT_motor_L = 1;   // Right Motor
const int PORT_motor_R = 2;   // Left Motor

const int forward_backward_multiplier = -1;  // Direction of the Motors.

const int C_black = 100;   // above is black
const int speed_0 = 70;    // standard speed

/// Instances

AF_DCMotor motor_L(PORT_motor_L);
AF_DCMotor motor_R(PORT_motor_R);

/// Global Variables

int value_R;
int value_L;
int value_M;

bool black_R;
bool black_L;
bool black_M;

int speed_L;
int speed_R;
bool forward;

bool S_LineWasLeft = false;
bool S_LineWasRight = false;

/// Functions

void setSpeed(AF_DCMotor motor, int speed) {
  if(speed < -255) {
    speed = -255;
    Serial.println("Error: setSpeed(): speed out of bounds");
  } else if(speed > 255) {
    speed = 255;
    Serial.println("Error: setSpeed(): speed out of bounds");
  }
  speed = forward_backward_multiplier * speed;

  if(speed == 0) {
    motor.run(RELEASE);
  } else if(speed < 0) {
    motor.run(BACKWARD);
  } else if(speed > 0) {
    motor.run(FORWARD);
  }

  motor.setSpeed(abs(speed));
}

bool isBlack(int value) {
  return value > C_black;
}

/// Setup

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  value_R = 0;
  value_L = 0;
  value_M = 0;

  black_R = false;
  black_L = false;
  black_M = false;

  speed_L = speed_0;
  speed_R = speed_0
  forward = true;

  setSpeed(motor_L, 0);
  setSpeed(motor_R, 0);
}

/// Loop

void loop() {
  // put your main code here, to run repeatedly:
  value_L = analogRead(PIN_analogIn_L);
  value_R = analogRead(PIN_analogIn_R);
  value_M = analogRead(PIN_analogIn_M);

  Serial.print("\tL: ");
  Serial.print(value_L);
  Serial.print("\tR: ");
  Serial.print(value_R);
  Serial.print("\tM: ");
  Serial.println(value_M);

  setSpeed(motor_L, speed_L);
  setSpeed(motor_R, speed_R);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       

  Serial.print("Speed_L: ");
  Serial.print(speed_L);
  Serial.print("Speed_R: ");
  Serial.print(speed_R);

  //delay(300);
}
