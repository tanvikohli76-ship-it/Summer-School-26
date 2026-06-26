#include <Servo.h>
Servo myServo;
int potPin = A0;
int value;
void setup() {
  myServo.attach(9);
}
void loop() {
  value = analogRead(potPin);
  value = map(value, 0, 1023, 0, 180);
  myServo.write(value);
  delay(15);
}