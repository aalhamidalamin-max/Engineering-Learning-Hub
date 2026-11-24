// Blink the board's built-in LED with a one-second on/off interval.

void setup() {
  // Configure the built-in LED pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turn the LED on for one second.
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  // Turn the LED off for one second.
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
