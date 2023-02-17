#define LED1 4
#define LED2 5
#define S1 18
#define S2 19

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
}

void loop() {
  // Turn on LED2 for 500ms at the beginning
  digitalWrite(LED2, HIGH);
  delay(50);
  digitalWrite(LED2, LOW);
  
  if (digitalRead(S1) == 1 && digitalRead(S2) == 0) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
  } else if (digitalRead(S1) == 0 && digitalRead(S2) == 1) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
  } else if (digitalRead(S1) == 0 && digitalRead(S2) == 0) {
    int delays[] = {1350, 1300, 1250, 1200, 1150, 1100, 1050, 1000, 950, 900, 850, 800, 750, 700, 650, 600, 550, 500};
    for (int i = 0; i < 18; i++) {
      digitalWrite(LED1, i % 2 == 0);
      delay(delays[i]);
    }
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    delay(5500);
  }
}