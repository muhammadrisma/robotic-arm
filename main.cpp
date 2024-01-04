#include <Servo.h>

// Define the pins for each servo
const int servo1Pin = 3;  // Bottom servo
const int servo2Pin = 2;  // Right servo
const int servo3Pin = 5;  // Left servo
const int servo4Pin = 4;  // Top servo

// Create servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// Initial positions for each servo
int servo1Pos = 0;  // Button servo
int servo2Pos = 0;  // Right servo
int servo3Pos = 0;  // Left servo
int servo4Pos = 0;  // Top servo

// Function to move the arm and grab an item
void grabItem() {
  servo2.write(180);
  servo3.write(0);
  delay(2000);
  servo4.write(180);
  delay(2000);
  servo2.write(0);
  servo3.write(180);
  delay(2000);
  servo1.write(90);
  delay(2000);
  servo4.write(90);
}


void defaultPosition(){
  servo1.write(0);  // Button servo
  servo2.write(0);  // Right servo
  servo3.write(180);  // Left servo
  servo4.write(90);  // Top servo
}

void setup() {
  // Attach the servos to their respective pins
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  servo3.attach(servo3Pin);
  servo4.attach(servo4Pin);
  
  // Start the servos at their initial positions
  servo1.write(0);  // Button servo
  servo2.write(0);  // Right servo
  servo3.write(180);  // Left servo
  servo4.write(90);  // Top servo

  delay(2000);  // Wait for the servos to initialize
}

void loop() {
  // Call the function to grab an item
  grabItem();
  delay(5000);
  defaultPosition();
  delay(4000);
}