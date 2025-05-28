// déclarations du capteur de luminosité

#ifndef LUMINOSITY_SENSOR_H
#define LUMINOSITY_SENSOR_H

#include <Arduino.h> 

const int LUMINOSITY_SENSOR_PIN = 3;

// déclarations des fonctions du capteur de lumnsoité
void setupLuminositySensor();
int readLuminosityState();
bool isDark();

#endif