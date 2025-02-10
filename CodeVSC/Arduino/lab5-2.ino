int adc = 36;
int buzz = 13;
int led[] = {17, 2, 15, 12};

void setup() {
  Serial.begin(9600);
  for (int i = 0; i <=3; i++) {
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  int read = analogRead(adc);
  int mapped = map(read, 1024, 0, 0, 4);
  Serial.println(mapped);
  ledtest(mapped);
  delay(100);
}

void ledtest(int light) {
  reset();
  switch(light) {
    case 0:
      break;
    case 1:
      digitalWrite(led[0], LOW);
      break;
    case 2:
      digitalWrite(led[0], LOW);
      digitalWrite(led[1], LOW);
      break;
    case 3:
      digitalWrite(led[0], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[2], LOW);
      break;
    case 4:
      digitalWrite(led[0], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[2], LOW);
      digitalWrite(led[3], LOW);
      break;
  }
}

void reset() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(led[i], HIGH);
  }
}
