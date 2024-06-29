# Arduino Uno IR Infrared Sensor

#### Project Overview

This project demonstrates how to use an IR infrared sensor module with an Arduino Uno to detect the presence of objects. The IR sensor emits infrared radiation and detects reflected radiation from objects in its field of view. The Arduino reads the sensor's analog output and determines if an object is detected based on a threshold value, which is displayed on the serial monitor.

#### Components Needed

- **Arduino Uno**
- **IR Infrared Sensor Module**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup

1. **Connect the IR Infrared Sensor Module to Arduino Uno:**
   - **Signal pin of the IR Infrared Sensor Module:** Connect to analog pin A0 on the Arduino Uno.
   - **Vcc pin of the IR Infrared Sensor Module:** Connect to 5V on the Arduino Uno.
   - **GND pin of the IR Infrared Sensor Module:** Connect to GND on the Arduino Uno.

#### Instructions

1. **Circuit Setup:**
   - Connect the IR infrared sensor module to the Arduino Uno as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Uno.
   - Open the serial monitor with a baud rate of 9600.
   - Place objects within the sensor's range. Observe the serial monitor to see the sensor values and object detection status.

#### Applications

- **Object Detection Systems:** Use in automation and robotics for object proximity detection.
- **Security Systems:** Implement in security systems to detect movement or presence of objects.
- **Home Automation:** Integrate into smart home applications for occupancy sensing.

#### Notes

- Ensure the IR infrared sensor module is correctly connected to the Arduino Uno and powered.
- Adjust the sensor value threshold (`sensorValue > 500` in the code) based on your specific sensor and environment.
- Test the sensor in different lighting conditions and adjust the threshold if necessary for reliable object detection.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-uno-ir-infrared-sensor)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted with ❤️ by ProjectsLearner