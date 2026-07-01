Arduino Line Tracking Sensor - Black/White Line Detector with LED Indicator
A simple Arduino project that uses an infrared line tracking sensor module to detect black or white lines and mirrors the detection on an onboard LED, while also streaming live sensor readings to the Serial Monitor. 
A great beginner project for learning digital input, TTL signal reading, and basic sensor-to LED logic.

📦 Hardware Required
Component          Quantity
Arduino UNO             1
Line Tracking Sensor Module      1
USB Cable        1
Jumper Wires        7

🔌 Wiring
Module Pin         Arduino Pin
S (Signal)            Digital 3
V+ (VCC)             5VGNDGND

Onboard LED
LED.                           Arduino Pin 
Built-in LED (L).          Digital 13


⚡ Demo
⚫ Black line detected — Sensor outputs HIGH, LED ON.
⚪ White surface detected — Sensor outputs LOW, LED OFF.
📡 Live sensor values are printed to the Serial Monitor in real time.

⚙️ How It Works
The line tracking sensor is connected to Digital Pin 3 and outputs a TTL-level signal — HIGH when it detects a black line, LOW when it detects a white surface (or vice versa, depending on calibration). The Arduino continuously reads this digital signal and mirrors it on the onboard LED (pin 13), while also printing the raw sensor value to the Serial Monitor for debugging and testing. A short delay keeps the readings easy to follow.

📝 Notes
No external libraries required.
Uses digitalRead() to check the sensor's TTL output state.
Sensor can be flipped to detect either white-on-black or black-on-white lines depending on module calibration.
Serial output is useful for tuning sensor sensitivity before building a full line-following robot.
Easily expandable into a multi-sensor array for full line-following robots.
Great beginner project for learning digital sensor input and basic feedback logic.
