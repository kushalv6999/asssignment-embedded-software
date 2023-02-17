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
  if (digitalRead(S1) == 0) { // Stream of pulses enabled
    if (digitalRead(S2) == 1) { // Modified waveform cycle
      while (digitalRead(S2) == 1) { // Generate inverted form of complete Sig A waveform
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(1350);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(1300);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(1250);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(1200);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(1150);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(1100);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(1050);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(1000);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(950);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(900);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(850);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(800);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(750);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(700);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(650);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(600);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(550);
        digitalWrite(LED2, HIGH);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(500);
      }
    } else { // Normal mode
      digitalWrite(LED1, HIGH);
      delay(500);
      for (int i = 0; i < 18; i++) {
        digitalWrite(LED2, HIGH);
        delay(50 * (i + 1));
        digitalWrite(LED2, LOW);
        delay(50 * (i + 1));
      }
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      delay(500);
      digitalWrite(LED2, LOW);
      delay(5500);
    }
  } else { // Stream of pulses disabled
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }
}

