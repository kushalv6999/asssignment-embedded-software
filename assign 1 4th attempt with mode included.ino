// Define the pins for the LEDs and switches
#define LED1 4
#define LED2 5
#define S1 18
#define S2 19

// Set up the pins as inputs and outputs
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
}

// Main loop
void loop() {

  // If S1 is pressed, turn off both LEDs
  if (digitalRead(S1) == 1) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }
  
  // If S1 is not pressed and S2 is pressed, blink LED1 in a pattern
  else if (digitalRead(S1) == 0 && digitalRead(S2) == 1) {
    // Define an array of delay times for the LED1 blink pattern
    int delays[] = {1350, 1300, 1250, 1200, 1150, 1100, 1050, 1000, 950, 900, 850, 800, 750, 700, 650, 600, 550, 500};
    // Blink LED2 briefly
    digitalWrite(LED2, HIGH);
    delay(50);
    digitalWrite(LED2, LOW);
    // Loop through the delay times and blink LED1
    for (int i = 0; i < 17; i++) {
      digitalWrite(LED1, HIGH);
      delay(delays[i]);
      digitalWrite(LED1, LOW);
      delay(500);
    }
    // Turn off both LEDs and wait for a longer period
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    delay(5500);
  }
  
  // If neither switch is pressed, blink LED1 in a different pattern
  else if (digitalRead(S1) == 0 && digitalRead(S2) == 0) {
    // Define an array of delay times for the LED1 blink pattern
    int delays[] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350};
    // Blink LED2 briefly
    digitalWrite(LED2, HIGH);
    delay(50);
    digitalWrite(LED2, LOW);
    // Loop through the delay times and blink LED1
    for (int i = 0; i < 17; i++) {
      digitalWrite(LED1,HIGH);
      delay(delays[i]);
      digitalWrite(LED1, LOW);
      delay(500);
    }
    // Turn off both LEDs and wait for a longer period
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    delay(5500);
  }
}
