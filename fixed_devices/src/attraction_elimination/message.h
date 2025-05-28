// déclarations du message

#ifndef MESSAGE_H
#define MESSAGE_H

#include <Arduino.h>

void printInitializationStartMessage();
void printInitializationEndMessage();

void printLuminosityStatus(bool isDark);
void printTemperature(float temperature);
void printHumidity(float humidity);

void printUvLedStatus(bool isOn);
void printFanStatus(bool isOn);

void printSeparator();

#endif