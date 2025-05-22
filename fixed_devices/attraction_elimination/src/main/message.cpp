// implémentation du message

#include "message.h"
#include <Arduino.h>

void printInitializationStartMessage() {
  Serial.println("--- Initialisation des capteurs. Démarrage.");
}

void printInitializationEndMessage() {
  Serial.println("--- Capteurs initialisées. Lecture de départ.");
}

void printLuminosityStatus(bool isDark) {
  if (isDark) {
    Serial.println("Etat luminosité : éclairé");
  } else {
    Serial.println("Etat luminosité : sombre");
  }
}

void printTemperature(float temperature) {
  if (!isnan(temperature)) {
    Serial.print("Température : ");
    Serial.print(temperature);
    Serial.println(" °C");
  }
}

void printHumidity(float humidity) {
  if (!isnan(humidity)) {
    Serial.print("Humidité : ");
    Serial.print(humidity);
    Serial.println(" %");
  }
}

void printSeparator() {
  Serial.println("--------------------------------------");
}
