// --- Pin Definitions ---
#define Y_STEP 3
#define Y_DIR  6

#define Z_STEP 4
#define Z_DIR  7

#define ENABLE 8

int stepDelay = 1200; // slower = more reliable

void setup() {
  pinMode(Y_STEP, OUTPUT);
  pinMode(Y_DIR, OUTPUT);

  pinMode(Z_STEP, OUTPUT);
  pinMode(Z_DIR, OUTPUT);

  pinMode(ENABLE, OUTPUT);

  digitalWrite(ENABLE, LOW); // enable drivers

  // Set same direction initially
  digitalWrite(Y_DIR, HIGH);
  digitalWrite(Z_DIR, HIGH);
}

void loop() {

  // Move both motors forward
  for (int i = 0; i < 800; i++) {
    digitalWrite(Y_STEP, HIGH);
    digitalWrite(Z_STEP, HIGH);
    delayMicroseconds(stepDelay);

    digitalWrite(Y_STEP, LOW);
    digitalWrite(Z_STEP, LOW);
    delayMicroseconds(stepDelay);
  }

  delay(1000);

  // Reverse direction
  digitalWrite(Y_DIR, LOW);
  digitalWrite(Z_DIR, LOW);

  for (int i = 0; i < 800; i++) {
    digitalWrite(Y_STEP, HIGH);
    digitalWrite(Z_STEP, HIGH);
    delayMicroseconds(stepDelay);

    digitalWrite(Y_STEP, LOW);
    digitalWrite(Z_STEP, LOW);
    delayMicroseconds(stepDelay);
  }

  delay(2000);
}