//4-bit DAC pattern
//By Jeremy S Cook 1/11/2020 - Public Domain
//based on code:
//https://www.arduino.cc/en/Tutorial/Loop

int timer = 100;           // The higher the number, the slower the timing.

void setup() {
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 2; thisPin < 6; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // loop from the lowest pin to the highest:
  for (int thisPin = 2; thisPin < 6; thisPin++) {
    // turn the pin on:
    digitalWrite(thisPin, HIGH);
    delayMicroseconds(timer);
    // turn the pin off:
    //digitalWrite(thisPin, LOW);
  }

  // loop from the highest pin to the lowest:
  for (int thisPin = 5; thisPin >= 2; thisPin--) {
    // turn the pin on:
    //digitalWrite(thisPin, HIGH);
    //delay(timer);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
    delayMicroseconds(timer);
  }
}
