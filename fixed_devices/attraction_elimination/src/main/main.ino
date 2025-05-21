// fichier principal

#include void setup() {
  Serial.begin(115200);
  while (!Serial);

  Serial.prinln("Initialisation du test du capteur de luminosité");

  setupLuminositySensor();
  Serial.println("Capteur prêt. Les lectures vont commencer.");
}