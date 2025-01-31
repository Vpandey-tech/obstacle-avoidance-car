### **Smart Obstacle Avoidance Car**  

#### **Project Overview**  
The **Smart Obstacle Avoidance Car** is an intelligent robotic vehicle designed to navigate autonomously while avoiding obstacles in its path. Built using **Embedded C**, this project utilizes an **ultrasonic sensor** for real-time obstacle detection, an **ESP32 microcontroller** for processing, and a **Bluetooth module** for manual control via a mobile application. The car can detect obstacles within **10 cm** and autonomously adjust its movement to avoid collisions. Additionally, users can manually control the car using a smartphone, making it a versatile and interactive smart vehicle.  

#### **Key Features**  
✅ **Autonomous Obstacle Avoidance:** Uses an **ultrasonic sensor** to detect obstacles within **10 cm** and navigate safely.  
✅ **Manual Bluetooth Control:** Users can manually control the car via a **mobile application** using **Bluetooth connectivity**.  
✅ **Real-Time Alerts:** A **buzzer** provides alerts when an obstacle is detected.  
✅ **Efficient Power Management:** Powered by a **battery**, ensuring mobility and long operational time.  
✅ **Motorized Movement:** Two **DC motors** enable smooth and controlled movement.  

#### **Hardware Components Used**  
- **ESP32 Microcontroller** – Brain of the system, handling sensor data and Bluetooth communication.  
- **Ultrasonic Sensor (HC-SR04)** – Measures distance to detect obstacles.  
- **Buzzer** – Alerts when an obstacle is detected.  
- **Battery** – Provides power to the system.  
- **Two DC Motors** – Drives the car forward, backward, left, and right.  
- **Bluetooth Module (Integrated with ESP32)** – Enables wireless communication with the mobile app.  

#### **How It Works**  
1. **Autonomous Mode:**  
   - The **ultrasonic sensor** continuously measures the distance ahead.  
   - If an object is detected within **10 cm**, the car **stops** and changes direction to avoid the obstacle.  
   - The **buzzer** alerts when an obstacle is detected.  

2. **Manual Mode:**  
   - Users can connect to the car via **Bluetooth** using a **mobile application**.  
   - The car responds to commands like **forward, backward, left, and right**, making it manually controllable.  

#### **Applications**  
🚗 **Smart Robotics & Automation** – Useful for learning robotics concepts.  
📱 **IoT-Based Smart Vehicles** – Can be extended for home automation and surveillance.  
🎓 **STEM Education** – Helps students learn **Embedded C programming, IoT, and sensor integration**.  
