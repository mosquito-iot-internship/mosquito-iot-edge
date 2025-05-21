// déclarations du capteur de luminosité

#ifndef LUMINOSITY_SENSOR_H
#define LUMINOSITY_SENSOR_H

#include <Arduino.h> 

const int PIN_LUMINOSITY_SENSOR = 5;

// déclarations des fonctions du capteur de lumnsoité
void setupLuminositySensor();
int readLuminosityState();
bool isDark();

#endif