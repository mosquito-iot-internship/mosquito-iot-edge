// déclarations du DHT11 (température et humidité)

#ifndef HUMIDITY_TEMPERATURE_H
#define HUMIDITY_TEMPERATURE_H

#include <Arduino.h>
#include <DHT.h>

const int DHT_PIN = 4;
const int DHT_SENSOR_TYPE = DHT11;

void setupTemperatureHumiditySensor();
float readTemperature();
float readHumidity();

#endif