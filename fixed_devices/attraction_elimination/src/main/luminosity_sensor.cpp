// implémentation du capteur de luminosité

#include "luminosity_sensor.h"

void setupLuminositySensor() {
  pinMode(PIN_LUMINOSITY_SENSOR, INPUT);
}

int readLuminosityState() {
  return digitalRead(PIN_LUMINOSITY_SENSOR);
}

bool isDark() {
  int state = readLuminosityState();
  if (state == HIGH) {
    return true; // sombre
  } else {
    return false; // éclairé
  }
}