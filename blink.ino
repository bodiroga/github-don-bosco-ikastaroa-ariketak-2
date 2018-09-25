void setups() {
  pinMode(LED_BUILTIN, INPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  digitalRead(LED_BUILTIN, HIGH);
  delay(2000);
}
