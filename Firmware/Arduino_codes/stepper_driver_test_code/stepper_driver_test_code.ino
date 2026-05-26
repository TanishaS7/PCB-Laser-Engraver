#define STEP_PIN 3
#define DIR_PIN 4

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
}

void loop() {
  digitalWrite(DIR_PIN, HIGH); // direction

  for(int i = 0; i < 200; i++) { // 1 revolution (approx)
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(800);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(800);
  }

  delay(1000);

  digitalWrite(DIR_PIN, LOW); // reverse

  for(int i = 0; i < 200; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(800);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(800);
  }

  delay(1000);
}