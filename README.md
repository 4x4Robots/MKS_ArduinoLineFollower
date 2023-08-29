# README for ArduinoLineFollower

MakerSpace Workshop 2023-08-29

# Introduction

TCRT5000 IR Sensor
Output D0, A0 here only A0

MotorShield Using M1 and M2
Using the Power from the Arduino
Detach the PWR Jumper on the Shield during Progamming of the Arduino

motor1.run(RELEASE);
motor1.run(FORWARD);
motor1.run(BACKWARD);

motor1.setSpeed(100); // 0 ... 255

int x = analogRead(A0);  // 0 ... 1023


# Links and research

MakerSpace Confluence Wiki
https://universum.tik.uni-stuttgart.de
