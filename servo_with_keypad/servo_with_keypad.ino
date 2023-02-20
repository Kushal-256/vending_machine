#include "Keypad.h"
#include <Servo.h>
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[ROWS] = {2, 3, 4, 5};
byte colPins[COLS] = {6, 7, 8, 9};
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
Servo servo1;
Servo servo2;
int i = 0, pos = 0;


void setup() {
  Serial.begin(9600);
}


void loop() {
  char key = keypad.getKey();
  Serial.println("Key is : ");
  Serial.println(key);
  if (key == '1' ) {
    Serial.println("dispatch 1 chocolate");
    servo1.attach(10);
    servo1.write(180);
    delay(500);
    servo1.detach();
    }
    if(key == '2'){
      Serial.println("dispatch 2 chocolate");
      servo2.attach(11);
      servo2.write(180);
      delay(500);
      servo2.detach();
      }
}
