// declarations du ventilateur

#ifndef FAN_ACTUATOR_H
#define FAN_ACTUATOR_H

#include <Arduino.h>

const int FAN_CONTROL_PIN = 5;

void setupFan();
void turnFanOn();
void turnFanOff();
bool isFanOnState();

#endif