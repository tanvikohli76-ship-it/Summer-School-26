#include <Servo.h>
int pot = A0;
int leds[] = {7, 8, 9, 10, 11};
int buzzer = 12;
Servo myServo;

void setup() {
  for(int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
  }

  pinMode(buzzer, OUTPUT);

  myServo.attach(6);  
}

void loop() {
  int value = analogRead(pot);

  int level = map(value, 0, 1023, 0, 6);

  for(int i = 0; i < 5; i++) {
    if(i < level)
      digitalWrite(leds[i], HIGH);
    else
      digitalWrite(leds[i], LOW);
  }

  if(level == 5) {
    tone(buzzer, 1000);
  } else {
    noTone(buzzer);
  }

  int angle = map(value, 0, 1023, 0, 180);
  myServo.write(angle);
}