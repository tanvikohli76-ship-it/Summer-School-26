int ldr = A0;
int led = 7;
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  int light = analogRead(ldr);
  if(light < 500) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
