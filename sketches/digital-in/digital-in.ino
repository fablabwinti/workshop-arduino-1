void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int switchState = digitalRead(2);
  if (switchState == HIGH) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
  else {
    digitalWrite(13, LOW);
  }
}
