#include <Arduino.h>

#define LED_PIN 2   // GPIO2 บน ESP32 (LED บนบอร์ด)

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(115200);
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("LED ON");
    delay(2000);

    digitalWrite(LED_PIN, LOW);
    Serial.println("LED OFF");
    delay(2000);
}