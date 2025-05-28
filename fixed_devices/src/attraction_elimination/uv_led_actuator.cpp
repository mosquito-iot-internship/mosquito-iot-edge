// implementation de la lampe UV

#include "uv_led_actuator.h"

void setupUvLed() {
  pinMode(UV_LED_PIN, OUTPUT);
  digitalWrite(UV_LED_PIN, LOW);
}

void controlUvLed(bool turnOn) {
  if (turnOn) {
    digitalWrite(UV_LED_PIN, HIGH);
  } else {
    digitalWrite(UV_LED_PIN, LOW);
  }
}

void activateUvLedIfDark(bool isCurrentlyDark) {
  if (isCurrentlyDark) {
    controlUvLed(true);
  } else {
    controlUvLed(false);
  }
}

bool isUvLedOn() {
  return (digitalRead(UV_LED_PIN) == HIGH);
}