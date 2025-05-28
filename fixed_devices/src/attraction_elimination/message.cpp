// implémentation du message

#include "message.h"
#include <Arduino.h>

void printInitializationStartMessage() {
  Serial.println("--- Initialisation des capteurs. Démarrage.");
}

void printInitializationEndMessage() {
  Serial.println("--- Capteurs initialisées. Debut des lectures.");
}

void printLuminosityStatus(bool isDark) {
  if (isDark) {
    Serial.println("Etat luminosité : sombre");
  } else {
    Serial.println("Etat luminosité : eclairé");
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

void printUvLedStatus(bool isOn) {
  if (isOn) {
    Serial.println("LED UV : allumee");
  } else {
    Serial.println("LED UV : eteinte");
  }
}

void printFanStatus(bool isOn) {
  if (isOn) {
    Serial.println("Vantilateur : allume");
  } else {
    Serial.print("Ventilateur : eteint");
  }
}

void printSeparator() {
  Serial.println("--------------------------------------");
}
