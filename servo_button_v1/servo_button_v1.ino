#include <Servo.h>

// Define servo pins
#define SERVO1_PIN 5
#define SERVO2_PIN 6

// Define button pins
#define BUTTON1_PIN 2
#define BUTTON2_PIN 3

// Define servo positions
#define SERVO1_OPEN_ANGLE 180
#define SERVO1_CLOSE_ANGLE 0
#define SERVO2_OPEN_ANGLE 180
#define SERVO2_CLOSE_ANGLE 0

Servo servo1;
Servo servo2;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Attach servo motors to pins
  servo1.attach(SERVO1_PIN);
  servo2.attach(SERVO2_PIN);
  servo1.detach();
servo2.detach();
  // Set button pins as inputs
  pinMode(BUTTON1_PIN, INPUT_PULLUP);
  pinMode(BUTTON2_PIN, INPUT_PULLUP);
}

void loop() {
  // Check if button 1 is pressed
  if (digitalRead(BUTTON1_PIN) == LOW) {
    Serial.println("Button 1 pressed. Dispensing item 1.");
    // Dispense item 1
    dispenseItem1();
  }

  // Check if button 2 is pressed
  if (digitalRead(BUTTON2_PIN) == LOW) {
    Serial.println("Button 2 pressed. Dispensing item 2.");
    // Dispense item 2
    dispenseItem2();
  }
}

void dispenseItem1() {
  // Open servo 1 to dispense item 1
  servo1.attach(SERVO1_PIN);
  delay(500);
 servo1.detach();
}

void dispenseItem2() {
  // Open servo 2 to dispense item 2
//  servo2.write(SERVO2_OPEN_ANGLE);
//  delay(1000);
//
//  // Close servo 2
//  servo2.write(SERVO2_CLOSE_ANGLE);
servo2.attach(SERVO2_PIN);
  delay(500);
 servo2.detach();
}
