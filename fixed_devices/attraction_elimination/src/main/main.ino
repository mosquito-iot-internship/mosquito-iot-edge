// fichier principal

// inclusion des fichiers .h
#include "luminosity_sensor.h"
#include "temperature_humidity.h"
#include "message.h"

void setup() {
  Serial.begin(115200);
  while (!Serial);

  printInitializationStartMessage();

  // initialisation des modules
  setupLuminositySensor();
  setupTemperatureHumiditySensor();

  printInitializationEndMessage();
}

void loop() {
  // affichage de l'état de la luminosité
  printLuminosityStatus(isDark());

  // lecture du capteur de température et d'humidité
  float temperature = readTemperature();
  float humidity = readHumidity();

  // affichage de la température
  printTemperature(temperature);

  // affichage de l'humidité
  printHumidity(humidity);

  printSeparator();

  delay(4000);
}