#include <Keyboard.h>
#include <Mouse.h>

void setup() {
  // make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  Keyboard.begin();
  Mouse.begin();
}


void loop() {
  //if the button is pressed
    delay(200);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.write(32);
    Keyboard.releaseAll();
      delay(2000);
//    Keyboard.print("chrome");
//    Keyboard.write(KEY_RETURN);
//      delay(2000);

      
    Keyboard.write(104);
      delay(100);
    Keyboard.write(116);
      delay(100);
    Keyboard.write(116);
      delay(100);
    Keyboard.write(112);
      delay(100);
    Keyboard.write(115);
      delay(100);
    Keyboard.write(58);
      delay(100);
    Keyboard.print(00101111);
      delay(100);
    Keyboard.write(00101111);
      delay(100);
    Keyboard.write(119);
      delay(100);
    Keyboard.write(119);
      delay(100);
    Keyboard.write(119);
      delay(100);
    Keyboard.write(46);
      delay(100);
    Keyboard.write(121);
      delay(100);
    Keyboard.write(111);
      delay(100);
    Keyboard.write(117);
      delay(100);
    Keyboard.write(116);
      delay(100);
    Keyboard.write(117);
      delay(100);
    Keyboard.write(98);
      delay(100);
    Keyboard.write(101);
      delay(100);
    Keyboard.write(46);
      delay(100);
    Keyboard.write(99);
      delay(100);
    Keyboard.write(111);
      delay(100);
    
    Keyboard.write(109);
      delay(100);
    Keyboard.write(0x60);
      delay(100);
    Keyboard.write(119);
      delay(100);
    Keyboard.write(97);
      delay(100);
    Keyboard.write(116);
      delay(100);
    Keyboard.write(99);
      delay(100);
    Keyboard.write(104);
      delay(100);
    Keyboard.print(0x5E);
      delay(100);
    Keyboard.write(118);
      delay(100);
    Keyboard.write(61);
      delay(100);
    Keyboard.write(81); 
      delay(100);
    Keyboard.write(116);
      delay(100);
    Keyboard.write(66);
      delay(100);
    Keyboard.write(68);    
      delay(100);
    Keyboard.write(76);
      delay(100);
    Keyboard.write(56);
      delay(100);
    Keyboard.write(69);
      delay(100);
    Keyboard.write(105);
      delay(100);
    Keyboard.write(78);
      delay(100);
    Keyboard.write(90);
      delay(100);
    Keyboard.write(111); 
      delay(100);

    Keyboard.write(13);

//    delay(5000);
}
