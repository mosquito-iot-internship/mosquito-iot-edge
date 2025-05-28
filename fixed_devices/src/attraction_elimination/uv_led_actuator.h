// declarations de la lampe UV 

#ifndef UV_LED_ACTUATOR_H 
#define UV_LED_Actuator_H 

#include <Arduino.h> 

const int UV_LED_PIN = 4; 

void setupUvLed(); 
void controlUvLed(bool turnOn); 
void activateUvLedIfDark(bool isCurrentlyDark); 
bool isUvLedOn(); 

#endif 