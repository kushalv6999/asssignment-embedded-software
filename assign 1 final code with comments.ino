// Parameters given are a,b,c,d which are first four letters from our surname
// a = 500 it is calculated as first letter*100 = 5*100 = 500 which gives width of each pulse
// b = 500 it is calculated as second letter*100 = 5*100 = 500 which gives width between all pulse
// c = 17  it is calculated as third letter+4 = 17 which gives total number of pulses in a block
// d = 5500 it is calculate as fourth letter*500 = 5500 which gives space between pulse blocks
// As mode is calculated as rem(fifth letter/4) + 1 = rem(1/4) + 1 = 2. Hence we use mode 2.
// all the parameters are supposed to be microseconds, but here they work as milliseconds as Arduino IDE takes them in milliseconds
#define SigA 4  // Define the pin for the first signal or LED1 as 4
#define SigB 5  // Define the pin for the second signal or LED2 as 5
#define S1 18   // Define the pin for the first switch as 18
#define S2 19   // Define the pin for the second switch as 19


void setup() {
  // setup code here,to run once:
  pinMode(SigA, OUTPUT);  // Set the pin for the first signal as output
  pinMode(SigB, OUTPUT);  // Set the pin for the second signal as output
  pinMode(S1, INPUT);     // Set the pin for the first switch as input
  pinMode(S2, INPUT);     // Set the pin for the second switch as input
}

void loop() 
{
  if (digitalRead(S1) == 1)  // if switch 1 is pressed , then disable stream of pulses
  {
    digitalWrite(SigA, LOW);  // Turn off the first signal
    digitalWrite(SigB, LOW);  // Turn off the second signal
  } else if (digitalRead(S1) == 0 && digitalRead(S2) == 1)  // if switch 2 is pressed then mode wave is generated
  { 
    int delays[] = {1350, 1300, 1250, 1200, 1150, 1100, 1050, 1000, 950, 900, 850, 800, 750, 700, 650, 600, 550, 500};
    digitalWrite(SigB, HIGH);  // Turn on the second signal
    delay(50);                 // delay at the start of each wave of pulses for 50 microsecs
    digitalWrite(SigB, LOW);  // Turn off the second signal
    for (int i = 0; i < 17; i++) //  generates the parameter c which gives 17 pulses in each waveform
  {
      digitalWrite(SigA, HIGH);  
      delay(delays[i]);
      digitalWrite(SigA, LOW);   
      delay(500);                // parameter b = 500 width between all pulses
  }
    digitalWrite(SigA, LOW);   
    digitalWrite(SigB, LOW);   
    delay(5500);               // parameter d = 5500 sapce between pulse blocks
  } else if (digitalRead(S1) == 0 && digitalRead(S2) == 0) // if switch 1 and switch 2 are both turned off then normal mode is generated
  {
    int delays[] = {500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350};
    digitalWrite(SigB, HIGH);  
    delay(50);
    digitalWrite(SigB, LOW);  
    for (int i = 0; i < 17; i++)
  {
      digitalWrite(SigA, HIGH);  
      delay(delays[i]);
      digitalWrite(SigA, LOW);   
      delay(500);
  }
    digitalWrite(SigA, LOW);   
    digitalWrite(SigB, LOW);   
    delay(5500);               
  }
}
