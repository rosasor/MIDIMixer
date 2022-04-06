// MIXI Code
// Rosa Wheelen

// Buttons
#include <Bounce2.h>
int numButtons = 8;
int buttonPins[8] = {2, 3, 4, 5, 6, 7, 8, 9};
Bounce * buttons = new Bounce[8];
boolean buttonStates[8] = {false, false, false, false, false, false, false, false};

int buttonRed[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int buttonBlue[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int buttonPurp[8] = {0, 0, 0, 0, 0, 0, 0, 0};

int prevRed[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int prevBlue[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int prevPurp[8] = {0, 0, 0, 0, 0, 0, 0, 0};

// Potentiometers
int numPots = 4;
int potPins[4] = {0, 1, 2, 3};
int potStates[4] = {0, 0, 0, 0};

int curVal[4] = {0, 0, 0, 0};
int prevVal[4] = {0, 0, 0, 0};
int thresh = 100;

// LEDs
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(8, 10, NEO_GRB + NEO_KHZ800);
int numLED = 8;
int  startUpEndTime;
int startUpStartTime;
int startUpInterval = 100;
boolean quit = false;

// MIDI
#include "MIDIUSB.h"
int mode = 0;

void setup() {
  Serial.begin(9600);
  initButtons();
  initLED();

  startUp();
  startUpStartTime = millis();

  mode = 0;
}

void loop() {
  startUpEndTime = millis();

  checkButtons();
  checkPots();
  testAll();

  switch (mode) {
    case 0:
      startUp();
      break;

    case 1:
      mode1();
      break;

    case 2:
      mode2();
      break;

    case 3:
      mode3();
      break;

    case 4:
      mode4();
      break;

  }
}
