int dir = 3;
int stp = 4;
int en = 5;
int led = 13;
void setup() {
  pinMode(dir, OUTPUT);
  pinMode(stp, OUTPUT);
  pinMode(en, OUTPUT);
  pinMode(led, OUTPUT);
  digitalWrite(dir, HIGH);
}

void loop() {
  digitalWrite(en, LOW);
  for (int x = 0; x < 10; x++) {
    digitalWrite(stp, HIGH);
    delayMicroseconds(500);
    digitalWrite(stp, LOW);
    delayMicroseconds(500);
  }
  delay(1000);
  digitalWrite(en, HIGH);
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
