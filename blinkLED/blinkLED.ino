#define LED_PIN 13

class Led {
// encapsulation
  private:
    byte _pin;
  public:
    Led(byte pin)
    {
      //this->pin = pin;
      _pin = pin:
    }
};


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN);
  delay(500);
}
