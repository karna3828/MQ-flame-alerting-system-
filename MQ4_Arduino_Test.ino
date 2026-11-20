// MQ-4 ONLY | UNO R3 / UNO R3 PWM
// VCC -> 5V, GND -> GND, AO -> A0, DO unused
// Serial baud: 9600. Outputs raw ADC and estimated input voltage only.
const byte MQ4_PIN = A0;
void setup() {
  Serial.begin(9600);
  pinMode(MQ4_PIN, INPUT);
  Serial.println("MQ-4 TEST READY");
}
void loop() {
  int raw = analogRead(MQ4_PIN);
  float volts = raw * (5.0 / 1023.0);
  Serial.print("MQ4_VALUE:");
  Serial.print(raw);
  Serial.print(" | VOLTAGE:");
  Serial.print(volts, 2);
  Serial.println(" V");
  delay(1000);
}
