#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("https://www.youtube.com/watch?v=09R8_2nJtjg");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*empty*/
  }
}
