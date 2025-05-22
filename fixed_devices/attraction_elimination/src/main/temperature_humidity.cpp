// implémentation du DHT11 (température et humidité)

#include "temperature_humidity.h"
#include <DHT.h> 

DHT dht(DHT_PIN, DHT_SENSOR_TYPE);

void setupTemperatureHumiditySensor() {
  dht.begin();
  Serial.println("capteur DHT11 initialisé");
}

float readTemperature() {
  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("DHT11 : erreur de lecture de la temperature");
    return NAN;
  } else {
    return temperature;
  }
}

float readHumidity() {
  float humidity = dht.readHumidity();

  if (isnan(humidity)) {
    Serial.println("DHT11 : erreur de lecture de l'humidité");
    return NAN;
  } else {
    return humidity;
  }
}