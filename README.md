 # Gas Leakage Detector (MQ2 + Arduino)

This project uses an MQ2 gas sensor, relay module (for motor or exhaust fan), buzzer, and LEDs to create a complete gas leakage detection and alert system using Arduino.  

When gas concentration crosses a safe threshold, the system turns ON the relay, activates the buzzer, and switches to a red alert LED.

---

## 🚀 Features
- Detects flammable gases (LPG, Smoke, Methane, Butane, Hydrogen, Alcohol).
- Relay automatically activates fan/motor when gas is detected.
- Buzzer for audible alert.
- Dual LED indication (Green = Safe, Red = Warning).
- Serial output for debugging.

---

## 🛠 Hardware Required
- Arduino Uno/Nano
- MQ2 Gas Sensor
- Relay Module (Active LOW)
- Buzzer
- 2 LEDs (Green, Red)
- Jumper wires & power supply

---

## 🔌 Pin Connections

| Component     | Arduino Pin |
|---------------|-------------|
| MQ2 Sensor    | A0          |
| Relay Module  | D7          |
| Buzzer        | D8          |
| Green LED     | D5          |
| Red LED       | D6          |

 
