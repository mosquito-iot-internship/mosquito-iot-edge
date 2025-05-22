// fichier principal

// inclusion des fichiers .h
#include "luminosity_sensor.h"
#include "temperature_humidity.h"

void setup() {
  Serial.begin(115200);
  while (!Serial);

  // initialisation des modules
  Serial.println("--- Initilisation des capteurs ---");
  setupLuminositySensor();
  setupTemperatureHumiditySensor();
  Serial.println("--- Capteurs initialisés. Début des lectures. ---");
}

void loop() {
  // lecture du capteur d'humidité
  if (isDark()) {
    Serial.println("Il fait sombre.");
  } else {
    Serial.println("Il fait éclairé.");
  }

  // lecture du capteur de température et d'humidité
  float temperature = readTemperature();
  float humidity = readHumidity();

  // affichage de la température
  if (!isnan(temperature)) {
    Serial.print("Température : ");
    Serial.print(temperature);
    Serial.println(" °C");
  } else {
    // message d'erreur déjà affiché par la fonction readTemperature()
  }

  // affichage de l'humidité
  if (!isnan(humidity)) {
    Serial.print("Humidité : ");
    Serial.print(humidity);
    Serial.println(" %");
  } else {
    // message d'erreur déjà affiché par la fonction readHumidity()
  }

  Serial.println("-----------------------------");

  delay(4000);
}