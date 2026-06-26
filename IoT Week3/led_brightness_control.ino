int pot = A0;
int led = 9;
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  int value = analogRead(pot);
  int brightness = map(value, 0, 1023, 0, 255);
  analogWrite(led, brightness);
}