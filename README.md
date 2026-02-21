#  Rain Detection & Automatic Window System

##  Project Overview
This project detects rain using a rain sensor and automatically closes a window using a servo motor. The system is controlled using ESP32 and monitored via Blynk IoT mobile application.

##  Components Used
- ESP32 Dev Module
- Rain Sensor Module
- MG995 Servo Motor
- Breadboard
- Jumper Wires
- Power Supply

##  Features
- Real-time rain value monitoring (0–4095)
- Automatic window closing during rain
- Monitoring via Blynk app
- Portable setup

## Blynk Integration
- V0 → Rain Status
- V1 → Manual Window Control
- V2 -> Rain Value (0–4095)

## Working Principle
Rain sensor detects water droplets and sends analog value to ESP32. If rain exceeds threshold, servo rotates to close window. 

## Future Improvements
- Add temperature and humidity sensor
- Add notification alert
- Add waterproof casing
- Add solar power module

## Developed By
Ansh Tripathi
