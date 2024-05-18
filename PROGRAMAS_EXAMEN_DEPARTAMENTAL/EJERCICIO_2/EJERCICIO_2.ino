#include <Servo.h>
int pinPIR = 2;
int pinServo = 9;

Servo servoMotor;

void setup() {
  pinMode(pinPIR, INPUT);
  servoMotor.attach(pinServo);
}

void loop() {
  int movimiento = digitalRead(pinPIR);

  if (movimiento == HIGH) {
    servoMotor.write(90);
    delay(500);
  } else {
    servoMotor.write(0);
  }
}