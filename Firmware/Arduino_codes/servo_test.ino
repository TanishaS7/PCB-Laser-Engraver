#include <Servo.h>

Servo myServo;  // Create servo object

void setup() {
  myServo.attach(8);  // Attach servo to pin 9
  myServo.write(0);
}

void loop() {
  // Sweep from 0° to 180°
  // for (int pos = 0; pos <= 180; pos) {
  //   myServo.write(pos);
  //   delay(15);  // Wait for servo to reach the position
  // }
  myServo.write(90);
  delay(400);
  myServo.write(70);
  delay(400);
  // delay(1000);
  // myServo.write(90);
  // delay(1000);
}
  // Swe
