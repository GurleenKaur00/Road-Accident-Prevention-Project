ROAD ACCIDENT PREVENTION PROJECT 
A smart Arduino-based system designed to minimize road accidents by automating traffic lights and road safety mechanisms using servo motors, LEDs, and an Arduino Uno. This project simulates real-world traffic management with vehicle side and pedestrian side and accident prevention strategies.

FEATURES :
Traffic Light System: Red, Yellow, and Green LEDs simulate real-world traffic signals.
Automatic Barrier Control: Servo motor acts as a road barrier/gate for controlling vehicle movement.
Accident Prevention Logic: Prevents collisions by synchronizing barriers with traffic signals.
Low-Cost & Scalable: Can be expanded for real-world applications such as railway crossings, school zones, or smart intersections.

COMPONENT USED 
Arduino Uno
Servo Motor
Red, Yellow, Green LEDs
Breadboard & Jumper Wires
Power Supply (USB)

CONNECTIONS 
SERVO MOTOR 1 :
Postive --> Breadboard 
Negative --> Breadboard 
PWM --> Arduino Uno Digital Pin 9
SERVO MOTOR 2 :
Postive --> Breadboard 
Negative --> Breadboard 
PWM --> Arduino Uno Digital Pin 10
4 LEDs Negative Side Connected to each other --> breadboard 
Red LED postive (vehicle side) --> Green LED positive (pedestrian side) --> Arduino Digital Pin 12
Green LED postive (vehicle side) --> Red LED positive (pedestrian side) --> Arduino Digital Pin 13
ARDUINO UNO 
5V --> Positive of breadboard 
GND --> Negative of breadboard

WORKING PRINCIPLE 
Servo motor working plays an important role here. It has gears and bearings, and one side is input which is connected to DC motor which will drive a setup of gears called compound gear train. The motor has a high rotational speed and low torque, so gears convert this into low speed but high torque. Arduino Uno sends a PWM (Pulse Width Modulation) signal to servo which determines which position it should rotate to.

Then this signal is sent to pulse converter that converts it to voltage, then passes through a comparator and then to motor driver. The motor driver controls the rotation of DC motor. It uses an internal H-bridge circuit to control the direction of rotation either clockwise or counterclockwise to the required position.

This rotation causes the gears to rotate which causes the final gear and servo arm to rotate. Connected to the final gear is potentiometer. The resistance increases or decreases between a minimum and maximum value as the arm is rotated. The potentiometer is connected to the comparator and voltage is monitored to provide feedback. Comparator is going to compare the voltage of the potentiometer to the voltage of Arduino Uno’s signal. If there is difference, the motor will turn until the difference is zero, then the servo motor knows it is in correct position so it will wait there until there is another change. Subsequently, according to positioning of servo motor, LED lights work.
