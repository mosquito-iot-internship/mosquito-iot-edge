// fichier principal

#include "luminosity_sensor.h"

void setup() {
  Serial.begin(115200);
  while (!Serial);

  setupLuminositySensor();
}

void loop() {
  if (isDark()) {
    Serial.println("Il fait sombre.");
  } else {
    Serial.println("Il fait éclairé.");
  }

  delay(1000);
}