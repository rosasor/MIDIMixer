// Test Program

long testTimer = 0;
long testInterval = 500;
int testColor = 0;

void testAll() {
  // Test LEDs
  strip.show();

  // Test Buttons & Potentiometers
  for (int i = 0; i < numButtons; i++) {
      //Serial.print(buttonRed[i]); Serial.print("\t");
  }

  for (int i = 0; i < numPots; i++) {
    //Serial.print(potStates[i]); Serial.print("\t");
  }

  //Serial.println();
}
