// fichier principal

// inclusion des fichiers .h
#include "message.h"
#include "luminosity_sensor.h"
#include "temperature_humidity_sensor.h"
#include "uv_led_actuator.h"
#include "fan_actuator.h"

void setup() {
  Serial.begin(115200);
  while (!Serial);

  printInitializationStartMessage();

  // initialisation des modules
  setupLuminositySensor();
  setupTemperatureHumiditySensor();
  setupUvLed();
  setupFan();

  printInitializationEndMessage();
}

void loop() {
  // lire l'état de la luminosité
  bool currentStatusIsDark = isDark();
  printLuminosityStatus(isDark());

  //activation de la LED UV en fonction de l'obscurite
  activateUvLedIfDark(currentStatusIsDark);

  // lecture du capteur de température et d'humidité
  float temperature = readTemperature();
  float humidity = readHumidity();

  // affichage des capteurs
  printTemperature(temperature);
  printHumidity(humidity);
  printUvLedStatus(isUvLedOn);
  printFanStatus(isFanOnState());

  printSeparator();

  delay(4000);
}