// LED Functions
int red = 0;
int green = 0;
int blue = 0;

boolean redFirst = true;


void initLED() {
  strip.begin();
  strip.clear();
  strip.show();
}

// LED Start up
void startUp () {
  for (int i = 0; i < numLED; i++) {

    if (startUpInterval > 0) {
      if (startUpEndTime - startUpStartTime > startUpInterval) {
        redFirst = !redFirst;
        startUpStartTime = millis();
        startUpInterval = startUpInterval - 2;
      }

      if (redFirst) {
        if (i % 2 == 0) {
          red = 255;
          green = 0;
          blue = 0;
          strip.setPixelColor(i, green, red, blue);
          strip.show();
        } else {
          red = 0;
          green = 0;
          blue = 255;
          strip.setPixelColor(i, green, red, blue);
          strip.show();
        }
      } else {
        if (i % 2 == 1) {
          red = 255;
          green = 0;
          blue = 0;
          strip.setPixelColor(i, green, red, blue);
          strip.show();
        } else {
          red = 0;
          green = 0;
          blue = 255;
          strip.setPixelColor(i, green, red, blue);
          strip.show();
        }
      }
    }

    if (startUpInterval <= 0) { //make boolean?
      for (int i = 0; i < numLED; i++) {
        strip.setPixelColor(i, 0, 255, 255);
        strip.show();
        quit = true;
        if (quit == true) {
          mode = 1;
        }
      }
    }
  }
}
