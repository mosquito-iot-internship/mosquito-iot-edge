// implémentation du capteur de luminosité

#include "luminosity_sensor.h"

void setupLuminositySensor() {
  pinMode(LUMINOSITY_SENSOR_PIN, INPUT);
}

int readLuminosityState() {
  return digitalRead(LUMINOSITY_SENSOR_PIN);
}

bool isDark() {
  int state = readLuminosityState();
  if (state == HIGH) {
    return true; // sombre
  } else {
    return false; // éclairé
  }
}