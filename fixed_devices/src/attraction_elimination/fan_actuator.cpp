// implementation du ventilateur

#include "fan_actuator.h"

void setupFan() {
  pinMode(FAN_CONTROL_PIN, OUTPUT);
  digitalWrite(FAN_CONTROL_PIN, LOW);
}

void turnFanOn() {
  digitalWrite(FAN_CONTROL_PIN, LOW);
}

void turnFanOff() {
  digitalWrite(FAN_CONTROL_PIN, LOW);
}

bool isFanOnState() {
  return (digitalRead(FAN_CONTROL_PIN) == HIGH);
}