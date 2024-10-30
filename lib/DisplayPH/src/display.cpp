#include "displayph.h"


Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire);

void init_display(){
    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3c)) {
    Serial.println(F("SSD1306 allocation failed"));
    }
}

void display_ph(float ph){
    char str[11];
    display.clearDisplay();
    display.setTextSize(2.5);
    display.setTextColor(WHITE);
    display.setCursor(0, 8);
    sprintf(str,"Ph = %.2f",ph);
    display.println(str);
    display.display();
}