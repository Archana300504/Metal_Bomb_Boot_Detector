# Metal_Bomb_Boot_Detector
It is a small prototype of a  boot which detects the metallic bombs through the electromagnet and as soon as it is detected the vibration to the soldier is provided. The electromagnet just keeps the bomb stuck by not allowing it to explode with in which the soldier might remove his shoe alone and escape.


# Metal Detection System with Vibration and Electromagnet Control

# Problem Statement
Manual identification and handling of metallic bombs leads to the soldiers death.

# Solution
This project detects the presence of metal bomb using a metal sensor connected to Arduino.
When metal bomb is detected, a vibration motor alerts the soldier and an electromagnet is activated
to attract or hold the metallic object.

# System Overview
The system continuously monitors sensor output. If the sensor value crosses a defined
threshold, the vibration motor and electromagnet are triggered.

<img width="606" height="1350" alt="image" src="https://github.com/user-attachments/assets/50bb4bb7-a51e-4da4-a5b6-a401990df4db" />


# System Architecture
Metal Sensor → Arduino → Vibration Motor + Electromagnet

# Hardware Components
1. Arduino Uno
2. Metal Detector Sensor
3. Vibration Motor
4. Electromagnet
5. Driver Circuit
6. Power Supply

# Software Tools
1. Arduino IDE

# Working Principle
1. Arduino reads analog values from the metal sensor.
2. Sensor values are monitored through Serial Monitor for calibration.
3. When the threshold value is exceeded, vibration motor and electromagnet are activated.
4. System resets when metal is no longer detected.

# Results
1. Reliable metal detection observed.
2. Immediate vibration alert on detection.
3. Successful activation of electromagnet.

# Future Improvements
1. Automatic threshold calibration
2. LCD display for sensor values
3. Battery-powered operation
4. IoT-based monitoring

# Repository Structure
- `metal_bom` – Arduino source code
- `` – Circuit diagram
- `results/` – Output images
- `README.md` – Project documentation

---

## 👤 Author
Archana Devi P M  
Embedded Systems | IoT | Python | ROS | C/C++ | Linux
