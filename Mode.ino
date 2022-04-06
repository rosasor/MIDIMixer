void mode1() {
  strip.clear();
  for (int i = 0; i < numButtons; i++)  {
    strip.setPixelColor(i, 0, 255, 255);
    strip.show();
  }
}

void mode2() {
  strip.clear();
  strip.setPixelColor(0, 150, 150, 150);
  strip.setPixelColor(1, 0, 0, 150);
  strip.setPixelColor(2, 0, 150, 150);
  for (int i = 3; i < numButtons; i++)  {
    strip.setPixelColor(i, 0, 150, 0);
    strip.show();
  }
  for (int i = 3; i < numButtons; i++) {
    if (buttons[i].rose()) {
      buttonRed[i] = !buttonRed[i];
    }

    for (int i = 3; i < numButtons; i++) {
      if (buttonRed[i] != prevRed[i]) {
        if (buttonRed[i]) {
          controlChange(0, i, 127);
          Serial.print("yuh");
          Serial.print("RB4:"); Serial.print(" "); Serial.print(buttonRed[3]); Serial.print("\t");
          Serial.print("RB5:"); Serial.print(" "); Serial.print(buttonRed[4]); Serial.print("\t");
          Serial.print("RB6:"); Serial.print(" "); Serial.print(buttonRed[5]); Serial.print("\t");
          Serial.print("RB7:"); Serial.print(" "); Serial.print(buttonRed[6]); Serial.print("\t");
          Serial.print("RB8:"); Serial.print(" "); Serial.print(buttonRed[7]); Serial.print("\t");
          Serial.println();
        } else {
          controlChange(0, i, 0);
          Serial.print("nah");
          Serial.print("RB4:"); Serial.print(" "); Serial.print(buttonRed[3]); Serial.print("\t");
          Serial.print("RB5:"); Serial.print(" "); Serial.print(buttonRed[4]); Serial.print("\t");
          Serial.print("RB6:"); Serial.print(" "); Serial.print(buttonRed[5]); Serial.print("\t");
          Serial.print("RB7:"); Serial.print(" "); Serial.print(buttonRed[6]); Serial.print("\t");
          Serial.print("RB8:"); Serial.print(" "); Serial.print(buttonRed[7]); Serial.print("\t");
          Serial.println();
        }
      }
      prevRed[i] = buttonRed[i];
    }
  }
}

void mode3() {
  strip.clear();
  strip.setPixelColor(0, 0, 150, 0);
  strip.setPixelColor(1, 150, 150, 150);
  strip.setPixelColor(2, 0, 150, 150);
  for (int i = 3; i < numButtons; i++)  {
    strip.setPixelColor(i, 0, 0, 150);
    strip.show();
  }
  
  for (int i = 3; i < numButtons; i++) {
    if (buttons[i].rose()) {
      buttonBlue[i] = !buttonBlue[i];
    }

    for (int i = 3; i < numButtons; i++) {
      if (buttonBlue[i] != prevBlue[i]) {
        if (buttonBlue[i]) {
          controlChange(0, i, 127);
          Serial.print("yuh");
          Serial.print("BB4:"); Serial.print(" "); Serial.print(buttonBlue[3]); Serial.print("\t");
          Serial.print("BB5:"); Serial.print(" "); Serial.print(buttonBlue[4]); Serial.print("\t");
          Serial.print("BB6:"); Serial.print(" "); Serial.print(buttonBlue[5]); Serial.print("\t");
          Serial.print("BB7:"); Serial.print(" "); Serial.print(buttonBlue[6]); Serial.print("\t");
          Serial.print("BB8:"); Serial.print(" "); Serial.print(buttonBlue[7]); Serial.print("\t");
          Serial.println();
        } else {
          controlChange(0, i, 0);
          Serial.print("nah");
          Serial.print("BB4:"); Serial.print(" "); Serial.print(buttonBlue[3]); Serial.print("\t");
          Serial.print("BB5:"); Serial.print(" "); Serial.print(buttonBlue[4]); Serial.print("\t");
          Serial.print("BB6:"); Serial.print(" "); Serial.print(buttonBlue[5]); Serial.print("\t");
          Serial.print("BB7:"); Serial.print(" "); Serial.print(buttonBlue[6]); Serial.print("\t");
          Serial.print("BB8:"); Serial.print(" "); Serial.print(buttonBlue[7]); Serial.print("\t");
          Serial.println();
        }
      }
      prevBlue[i] = buttonBlue[i];
    }
  }
}

void mode4() {
  strip.clear();
  strip.setPixelColor(0, 0, 150, 0);
  strip.setPixelColor(1, 0, 0, 150);
  strip.setPixelColor(2, 150, 150, 150);
  for (int i = 3; i < numButtons; i++)  {
    strip.setPixelColor(i, 0, 150, 150);
    strip.show();
  }

  for (int i = 3; i < numButtons; i++) {
    if (buttons[i].rose()) {
      buttonPurp[i] = !buttonPurp[i];
    }

    for (int i = 3; i < numButtons; i++) {
      if (buttonPurp[i] != prevPurp[i]) {
        if (buttonPurp[i]) {
          controlChange(0, i, 127);
          Serial.print("yuh");
          Serial.print("PB4:"); Serial.print(" "); Serial.print(buttonPurp[3]); Serial.print("\t");
          Serial.print("PB5:"); Serial.print(" "); Serial.print(buttonPurp[4]); Serial.print("\t");
          Serial.print("PB6:"); Serial.print(" "); Serial.print(buttonPurp[5]); Serial.print("\t");
          Serial.print("PB7:"); Serial.print(" "); Serial.print(buttonPurp[6]); Serial.print("\t");
          Serial.print("PB8:"); Serial.print(" "); Serial.print(buttonPurp[7]); Serial.print("\t");
          Serial.println();
        } else {
          controlChange(0, i, 0);
          Serial.print("nah");
          Serial.print("PB4:"); Serial.print(" "); Serial.print(buttonPurp[3]); Serial.print("\t");
          Serial.print("PB5:"); Serial.print(" "); Serial.print(buttonPurp[4]); Serial.print("\t");
          Serial.print("PB6:"); Serial.print(" "); Serial.print(buttonPurp[5]); Serial.print("\t");
          Serial.print("PB7:"); Serial.print(" "); Serial.print(buttonPurp[6]); Serial.print("\t");
          Serial.print("PB8:"); Serial.print(" "); Serial.print(buttonPurp[7]); Serial.print("\t");
          Serial.println();
        }
      }
      prevPurp[i] = buttonPurp[i];
    }
  }
}
