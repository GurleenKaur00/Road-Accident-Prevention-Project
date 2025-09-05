#include <Servo.h> // Import library

Servo myservo;  // Create servo object
int led = 12;   // LED connected to pin 12
Servo myservo1; // Create another servo object
int led1 = 13;  // LED connected to pin 13

void setup() {
  pinMode(led, OUTPUT);    // Initialize pin 12 as output
  myservo.attach(9, 500, 2500); // Attach the servo on pin 9 to the servo object
  pinMode(led1, OUTPUT);   // Initialize pin 13 as output
  myservo1.attach(10, 500, 2500); // Attach the servo on pin 10 to the servo object
  Serial.begin(9600);      // Initialize serial communication for debugging
}

void loop() {
  // Rotate myservo to 90 degrees and myservo1 to 0 degrees
  myservo.write(90);
  myservo1.write(0);
  delay(500); // Allow time for servos to reach position
  
  digitalWrite(led, HIGH); // Turn on LED on pin 12
  delay(8000); // Wait for 8 seconds
  
  digitalWrite(led, LOW); // Turn off LED on pin 12
  myservo.write(0); // Reset myservo to 0 degrees
  myservo1.write(0); // Reset myservo1 to 0 degrees
  delay(1000); // Wait for 1 second
  
  // Rotate myservo to 0 degrees and myservo1 to 90 degrees
  myservo.write(0);
  myservo1.write(90);
  delay(500); // Allow time for servos to reach position
  
  digitalWrite(led1, HIGH); // Turn on LED on pin 13
  delay(8000); // Wait for 8 seconds
  
  digitalWrite(led1, LOW); // Turn off LED on pin 13
  myservo.write(0); // Reset myservo to 0 degrees
  myservo1.write(0); // Reset myservo1 to 0 degrees
  delay(1000); // Wait for 1 second
  
  // Debugging output
  Serial.println("Loop iteration completed");
}
