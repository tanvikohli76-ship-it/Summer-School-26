#include <Servo.h>
Servo myServo;
int tempPin = A0;
void setup() {
  myServo.attach(9);
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(tempPin);
  float voltage = value * 5.0 / 1023.0;
  float tempC = (voltage - 0.5) * 100;
  int angle = map(tempC, 0, 50, 0, 180);
  angle = constrain(angle, 0, 180);
  myServo.write(angle);
  delay(500);
}