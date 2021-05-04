#include <Keyboard.h>

void setup() {

Keyboard.begin();
}

void loop() {
Keyboard.press(KEY_LEFT_GUI);
Keyboard.write('r');
Keyboard.releaseAll();
  delay(200);
Keyboard.print("cmd");
Keyboard.write(10);color 3

delay(500);
Keyboard.print("color 3");
Keyboard.write(10);
delay(10000);
}
