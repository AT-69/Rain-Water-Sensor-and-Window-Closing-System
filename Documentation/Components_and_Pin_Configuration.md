<------------------------------------------------------------------------IoT-Based Rain Detection and Automatic Window Control System------------------------------------------------------------------------------------------>
!.Components Used
| Sr. No. | Component Name                     | Quantity    | Description                               |
| ------- | ---------------------------------- | ----------- | ----------------------------------------- |
| 1       | ESP32 Dev Module                   | 1           | Main microcontroller with built-in Wi-Fi  |
| 2       | Rain Sensor Module (FC-37 / YL-83) | 1           | Detects presence of rain/water droplets   |
| 3       | MG995 Servo Motor                  | 1           | Controls window opening and closing       |           |
| 5       | Jumper Wires                       | As required | Electrical connections between components |


2️.Pin Configuration Details
2.1 Rain Sensor Connections
| Rain Sensor Pin    | Connected To (ESP32) | Function                    |
| ------------------ | -------------------- | --------------------------- |
| VCC                | 3.3V                 | Power supply                |
| GND                | GND                  | Common ground               |
| AO (Analog Output) | GPIO 34              | Analog input (0–4095 range) |

2.2 Servo Motor Connections
| Servo Wire      | Connected To                      | Function           |
| --------------- | --------------------------------- | ------------------ |
| Red             | 5V (External battery recommended) | Power supply       |
| Brown / Black   | GND                               | Ground             |
| Orange / Yellow | GPIO 18                           | PWM control signal |
