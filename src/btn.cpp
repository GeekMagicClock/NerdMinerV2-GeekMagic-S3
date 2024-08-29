#include <Button2.h>
#include <TFT_eSPI.h>
#include "drivers/displays/display.h"
#include "wManager.h"

extern TFT_eSPI tft;
#define TOUCH_PIN T9 // Must declare the touch assignment, not the pin.

int threshold = 1500;   // ESP32S3 
bool touchdetected = false; 
byte buttonState = HIGH;// HIGH is for unpressed, pressed = LOW
/////////////////////////////////////////////////////////////////

Button2 button;

/////////////////////////////////////////////////////////////////
void gotTouch() {
  touchdetected = true;
}

byte capStateHandler() {
    return buttonState;
}

int idx = 0;

#include "media/NotoSansBold15.h"
#include "media/Free_Fonts.h"
extern TFT_eSprite background;
void click(Button2& btn) {
    int touch_val = touchRead(TOUCH_PIN);
    Serial.println("click\n");
    background.fillScreen(TFT_BLACK);
    background.setTextSize(1);
    background.setFreeFont(FF18);
    background.setTextColor(0xDEDB, TFT_BLACK);
    background.setTextDatum(CC_DATUM);
    background.drawString("Switch to Next", 120, 100, GFXFF);
    background.drawString("Please wait...", 120, 130, GFXFF);
    background.pushSprite(0, 0);

    switchToNextScreen();
}

void doubleClick(Button2& btn) {
    int touch_val = touchRead(TOUCH_PIN);
    Serial.println("double click\n");

    switchToNextScreen();
}

void longClick(Button2& btn) {
    Serial.println("long click\n");
    reset_configuration();
}

void btn_init(){
    Serial.println("\n\nCapacitive Touch Demo");
    touchAttachInterrupt(TOUCH_PIN, gotTouch, threshold); 
    button.setButtonStateFunction(capStateHandler);
    button.setLongClickTime(1000);

    button.setClickHandler(click);
    button.setDoubleClickHandler(doubleClick);
    button.setLongClickHandler(longClick);
    button.begin(BTN_VIRTUAL_PIN);
}

void btn_update(){
  button.loop();
  if (touchdetected) {
    touchdetected = false;
    if (touchInterruptGetLastStatus(TOUCH_PIN)) {
      buttonState = LOW;
    } else {
      buttonState = HIGH;
    }
  }
}