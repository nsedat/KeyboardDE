/*
 * KeyboardDE Tester 
 */

#include "KeyboardDE.h"


void setup(){
  for (int i=5; i>=0; i--) {  // time to click into some opened empty editor
    Serial.print(i);
    delay(1000);
  }
  
  Keyboard.print("^1234567890ß´\n");
  Keyboard.print("°!\"§$%&/()=?`\n");
  Keyboard.print("qwertzuiopü+\n");
  Keyboard.print("QWERTZUIOPÜ*\n");
  Keyboard.print("asdfghjklöä#\n");
  Keyboard.print("ASDFGHJKLÖÄ'\n");
  Keyboard.print("<yxcvbnm,.-\n");
  Keyboard.print(">YXCVBNM;:_\n");
  Keyboard.print("²³{[]}\\@€~|µ\n");
}

void loop(){
  delay(500);
}

