// Button/Potontiometer Functions

// Initialize Buttons
void initButtons() {
  for (int i = 0; i < numButtons; i++) {
    buttons[i].attach(buttonPins[i], INPUT);
    buttons[i].interval(25);
  }
}

// Check Buttons
void checkButtons() {
  for (int i = 0; i < numButtons; i++)  {
    buttons[i].update();
  }

  switch (mode) {
    case 1:
      if (buttons[0].rose() ) {
        mode = 2;
      }
      if (buttons[1].rose() ) {
        mode = 3;
      }
      if (buttons[2].rose() ) {
        mode = 4;
      }
      break;

    case 2:
      if (buttons[0].rose() ) {
        mode = 2;
      }
      if (buttons[1].rose() ) {
        mode = 3;
      }
      if (buttons[2].rose() ) {
        mode = 4;
      } 
      break;

    case 3:
      if (buttons[0].rose() ) {
        mode = 2;
      }
      if (buttons[1].rose() ) {
        mode = 3;
      }
      if (buttons[2].rose() ) {
        mode = 4;
      }
      break;

    case 4:

      if (buttons[0].rose() ) {
        mode = 2;
      }
      if (buttons[1].rose() ) {
        mode = 3;
      }
      if (buttons[2].rose() ) {
        mode = 4;
      }
      break;
  }
}

// Check Pots
void checkPots() {
  for (int i = 0; i < numPots; i++) {
    potStates[i] = analogRead(potPins[i]);
    curVal[i] = potStates[i];
  }

  for (int i = 0; i < numPots; i++) {
    if (abs(curVal[i] - prevVal[i]) > thresh) {
      Serial.print("Slid:"); Serial.print("  "); Serial.print(curVal[0]); Serial.print("\t");
      Serial.print("Pot1:"); Serial.print("  "); Serial.print(curVal[1]); Serial.print("\t");
      Serial.print("Pot2:"); Serial.print("  "); Serial.print(curVal[2]); Serial.print("\t");
      Serial.print("Pot3:"); Serial.print("  "); Serial.print(curVal[3]); Serial.print("\t"); Serial.println();
      int outVal = map(curVal[i],0,1023,0,127);
      controlChange(0,i+100,outVal);
      Serial.print(outVal);
      prevVal[i] = curVal[i];
    }
  }
}
