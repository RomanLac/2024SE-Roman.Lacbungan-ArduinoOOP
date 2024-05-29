#define LED_PIN 13

#include "Led.h"

Led led(LED_PIN);

void setup() {
  // put your setup code here, to run once:
  led.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  led.on();
  delay(500);
  led.off();
  delay(500);
}