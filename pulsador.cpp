#include <Arduino.h>

// Definir el pin del pulsador
#define BUTTON_PIN 34  // BUT1 está conectado al GPIO 34

void setup() {
    // Configurar el pin del pulsador como entrada con resistencia pull-up
    pinMode(BUTTON_PIN, INPUT_PULLUP);

    // Iniciar la comunicación serial
    Serial.begin(9600);
    Serial.println("Esperando que se presione el pulsador BUT1...");
}

void loop() {
    // Leer el estado del pulsador
    if (digitalRead(BUTTON_PIN) == LOW) { // Pulsador presionado (LOW por pull-up)
        Serial.println("Has presionado el pulsador BUT1");
        delay(500);  // Esperar para evitar rebotes
    }
}
