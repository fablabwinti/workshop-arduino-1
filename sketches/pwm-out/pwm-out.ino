void setup() {
  pinMode(3, OUTPUT);
}

void loop() {
  int brightness = 0;
  while (brightness < 255) {
    brightness += 51;
    analogWrite(3, brightness);
    delay(200);
  }
  while (brightness > 0) {
    brightness -= 51;
    analogWrite(3, brightness);
    delay(200);
  }
}
