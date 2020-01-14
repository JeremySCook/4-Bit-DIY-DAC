//4-bit DAC pattern
//By Jeremy S Cook 1/11/2020 - Public Domain
//produces 4-bit 16-level triangle wave

int timer = 50;           // The higher the number, the slower the timing.

int d2Out[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1}; //least-significant bit
int d3Out[] = {0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1};
int d4Out[] = {0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1};
int d5Out[] = {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}; //most-significant bit

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // loop from the lowest pin to the highest:
  for (int DACDigit = 0; DACDigit < 15; DACDigit++) {
    digitalWrite(2, d2Out[DACDigit]);
    digitalWrite(3, d3Out[DACDigit]);
    digitalWrite(4, d4Out[DACDigit]);
    digitalWrite(5, d5Out[DACDigit]);
    Serial.print("DACDigit: "); Serial.print(DACDigit);
    Serial.print(" d2Out: "); Serial.print(d2Out[DACDigit]);
    Serial.print(" d3Out: "); Serial.print(d3Out[DACDigit]);
    Serial.print(" d4Out: "); Serial.print(d4Out[DACDigit]);
    Serial.print(" d5Out: "); Serial.println(d5Out[DACDigit]);
    delayMicroseconds(timer);
  }

  // loop from the highest pin to the lowest:
  for (int DACDigit = 15; DACDigit > 0; DACDigit--) {
    digitalWrite(2, d2Out[DACDigit]);
    digitalWrite(3, d3Out[DACDigit]);
    digitalWrite(4, d4Out[DACDigit]);
    digitalWrite(5, d5Out[DACDigit]);
    Serial.print("DACDigit: "); Serial.print(DACDigit);
    Serial.print(" d2Out: "); Serial.print(d2Out[DACDigit]);
    Serial.print(" d3Out: "); Serial.print(d3Out[DACDigit]);
    Serial.print(" d4Out: "); Serial.print(d4Out[DACDigit]);
    Serial.print(" d5Out: "); Serial.println(d5Out[DACDigit]);
    delayMicroseconds(timer);
  }
  
}
