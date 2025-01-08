#include <Arduino.h>

// Definir el pin del LED azul
#define BLUE_LED_PIN 2  // Según la documentación de la Olimex ESP32-EVB

void setup() {
    // Inicializar el pin del LED como salida
    pinMode(BLUE_LED_PIN, OUTPUT);

    // Mensaje inicial en el monitor serial
    Serial.begin(115200);
    Serial.println("Prueba del LED azul: Encender y apagar cada segundo.");
}

void loop() {
    // Encender el LED
    digitalWrite(BLUE_LED_PIN, HIGH);
    Serial.println("LED azul encendido");
    delay(1000);  // Esperar 1 segundo

    // Apagar el LED
    digitalWrite(BLUE_LED_PIN, LOW);
    Serial.println("LED azul apagado");
    delay(1000);  // Esperar 1 segundo
}
