void setup() {
  pinMode(A0, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  int value = analogRead(A0);
  digitalWrite(4, value > 200);
  digitalWrite(5, value > 400);
  digitalWrite(6, value > 600);
  digitalWrite(7, value > 800);
}

