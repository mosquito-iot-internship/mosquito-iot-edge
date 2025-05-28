// déclarations du DHT11 (température et humidité)

#ifndef HUMIDITY_TEMPERATURE_SENSOR_H
#define HUMIDITY_TEMPERATURE_SENSOR_H

#include <Arduino.h>
#include <DHT.h>

const int DHT_PIN = 2;
const int DHT_SENSOR_TYPE = DHT11;

void setupTemperatureHumiditySensor();
float readTemperature();
float readHumidity();

#endif