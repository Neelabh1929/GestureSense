# 🧤 GestureSense – A Gesture-Based Communication System

## 👤 Contributors
- Neelabh Rana

## 🎥 Demo Video  
[Click here to watch the video](https://github.com/Neelabh1929/GestureSense/blob/97ae6a5a36231d44118d7fba122cdf2b608d8ead/Docs/Video)

---

## 📌 Project Overview

**GestureSense** is a gesture-based interface designed to detect specific finger combinations and transmit corresponding signals wirelessly via Bluetooth. The system allows users to trigger predefined actions using finger movements, with a focus on enabling non-verbal or physically limited users to communicate essential information quickly and effectively.

---

## ⚙️ Hardware Components

- **4 Flex Sensors** – Attached along four fingers to detect bending patterns  
- **Arduino UNO** – Processes input signals from the sensors  
- **Bluetooth Module (HC-05)** – Transmits data wirelessly to a paired device  
- **9V Battery** – Powers the entire system  
- **Android App (Serial Bluetooth Terminal)** – Receives and displays the transmitted messages  

---

## 🧠 Working Principle

1. Each finger's position (bent or straight) is interpreted as a binary value (0 or 1).  
2. With 4 sensors, a total of 15 distinct combinations (2⁴ − 1) are possible (excluding the resting position).  
3. These combinations are mapped to specific messages or commands.  
4. The Arduino UNO reads sensor data and determines the corresponding gesture.  
5. The gesture data is transmitted over Bluetooth to a connected device.  
6. The receiver (e.g., Android app) displays the action/message in real-time.

---

## 🚀 Applications & Scalability

- **Assistive Communication** – Helps users with speech or mobility challenges send alerts or messages.
- **IoT Control Interfaces** – Can be extended to control smart home devices or other Bluetooth-enabled systems.
- **Gesture-Based Input Systems** – Potential for integration into gaming, robotics, or virtual reality.

### 🔄 Expandability

- Add more sensors for increased gesture resolution  
- Use multi-finger combinations and binary mappings for higher data capacity  
- Pair with software solutions for real-time command execution

---

## 🖼️ Preview

![GestureSense Preview](https://github.com/Neelabh1929/GestureSense/raw/97ae6a5a36231d44118d7fba122cdf2b608d8ead/Docs/Image1)

---

## 📁 Repository Structure
```bash
🧤 GestureSense
├── src/
│   ├── ArduinoSketch.ino
│   └── Circuit
├── Docs/
│   └── ...
├── GestureSense.pdf
└── README.md

