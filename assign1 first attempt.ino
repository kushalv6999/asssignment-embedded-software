#define LED1 15
#define LED2 21
#define S1 23
#define S2 22


void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(S1, INPUT);
   pinMode(S2, OUTPUT);
}

void loop() {
  
     if (digitalRead(S1)== 0)
     {
     digitalWrite(LED1, HIGH);
     delay(500);
     digitalWrite(LED1,LOW);
     digitalWrite(LED2, HIGH);
     delay(550);
     digitalWrite(LED2,LOW);
     delay(600);
     digitalWrite(LED2, HIGH);
     delay(650);
     digitalWrite(LED2,LOW);
     delay(700);
     digitalWrite(LED2,HIGH);
     delay(750);
     digitalWrite(LED2,LOW);
     delay(800);
     digitalWrite(LED2,HIGH);
     delay(850);
     digitalWrite(LED2,LOW);
     delay(900);
     digitalWrite(LED2,HIGH);
     delay(950);
     digitalWrite(LED2,LOW);
     delay(1000);
     digitalWrite(LED2, HIGH);
     delay(1050);
     digitalWrite(LED2,LOW);
     delay(1100);
     digitalWrite(LED2,HIGH);
     delay(1150);
     digitalWrite(LED2,LOW);
     delay(1200);
     digitalWrite(LED2,HIGH);
     delay(1250);
     digitalWrite(LED2,LOW);
     delay(1300);
     digitalWrite(LED2,HIGH);
     delay(1350);
     }
    else{
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
    }
}