#include <Arduino.h>

// Definir los pines de los relés
#define RELAY1_PIN 32
#define RELAY2_PIN 33

void setup() {
    // Inicializar los pines de los relés como salidas
    pinMode(RELAY1_PIN, OUTPUT);
    pinMode(RELAY2_PIN, OUTPUT);

    // Apagar los relés al iniciar
    digitalWrite(RELAY1_PIN, LOW);
    digitalWrite(RELAY2_PIN, LOW);

    // Mensaje inicial en el monitor serial
    Serial.begin(115200);
    Serial.println("Prueba de control de relés iniciada.");
}

void loop() {
    // Encender el Relé 1
    Serial.println("Encendiendo Relé 1...");
    digitalWrite(RELAY1_PIN, HIGH);
    delay(2000);  // Esperar 2 segundos

    // Apagar el Relé 1
    Serial.println("Apagando Relé 1...");
    digitalWrite(RELAY1_PIN, LOW);
    delay(2000);  // Esperar 2 segundos

    // Encender el Relé 2
    Serial.println("Encendiendo Relé 2...");
    digitalWrite(RELAY2_PIN, HIGH);
    delay(2000);  // Esperar 2 segundos

    // Apagar el Relé 2
    Serial.println("Apagando Relé 2...");
    digitalWrite(RELAY2_PIN, LOW);
    delay(2000);  // Esperar 2 segundos
}
