# Solar Collector Tracking System

## Project Overview

The **Solar Collector Tracking System** is a dual-axis tracking system designed to maximize solar energy capture by aligning the solar panel with the sun’s position throughout the day. This project was part of my **Final Year Project (FYP)** in **Mechanical Engineering** at the **Institute of Space Technology**, Islamabad (2024).

The system uses a **6-ft parabolic dish**, **linear actuators**, and **LDR sensors** for precise tracking. An **Arduino Uno** microcontroller is integrated with a custom algorithm to ensure real-time alignment with the sun's position.

### Project Objective:
- **Maximize solar energy absorption** by creating a tracking system that adjusts the position of the solar collector to follow the sun.
- **Optimize energy efficiency** in Pakistan’s diverse climatic conditions with a scalable and locally adaptable design.
- **Contribute to sustainable engineering** solutions and renewable energy technologies in Pakistan.

## Key Features
- **Dual-axis tracking** for precise alignment of the solar collector with the sun.
- **Arduino Uno** microcontroller integration for real-time control.
- **Light Dependent Resistor (LDR)** sensors for sun position detection.
- **Linear actuators** for automatic movement of the parabolic dish.
- **Cost-effective** and **locally adaptable** design suitable for Pakistan’s environment.

## Hardware Components
- **6-ft Parabolic Dish**
- **Linear Actuators** (for adjusting the position of the dish)
- **Light Dependent Resistor (LDR) Sensors** (for detecting sunlight)
- **Arduino Uno** (microcontroller)
- **Power Supply** (for powering the actuators and Arduino)
- **IBT-2 Motor Drivers** (for controlling the actuators)
- **Wires & Connectors**

## Software and Code

The code for the project is written in **Arduino C++**, which controls the movement of the solar collector based on data from the LDR sensors. The algorithm ensures that the collector aligns with the sun in real-time by adjusting the position of the parabolic dish using linear actuators.

### Code Features:
- **Sun Tracking Algorithm**: Uses input from the LDR sensors to calculate the angle of the sun and moves the parabolic dish accordingly.
- **Real-time Feedback**: Ensures the solar collector adjusts continuously throughout the day for maximum energy absorption.
- **Custom Calibration**: The system can be calibrated for different locations and climatic conditions.

## Circuit Diagram

The circuit diagram illustrates the wiring between the **Arduino Uno**, **LDR sensors**, **linear actuators**, and the **power supply**. The actuators move the solar dish based on the sensor feedback, ensuring the solar collector stays aligned with the sun.

![Circuit_Diagram](https://github.com/user-attachments/assets/6bde796e-752d-40e7-87a5-7295cc170cda)

## Project Demonstration Video

Watch the video below to see the Solar Collector Tracking System in action:

[▶️ Click here to watch the demo video](https://drive.google.com/file/d/1vUirCIwSwc5_Kdtqh9U7uGzKYZuYzWee/view?usp=sharing)

## Project Installation

### Requirements:
- **Arduino IDE** for uploading the code to the microcontroller.
- **Hardware Setup**: Properly connect the LDR sensors and linear actuators to the Arduino as shown in the circuit diagram.

### Steps to Setup:
1. Clone or download the project repository.
2. Open the project in the **Arduino IDE**.
3. Connect the **Arduino Uno** to your computer using a USB cable.
4. Upload the code to the Arduino board.
5. Set up the **LDR sensors** and **linear actuators** as shown in the **circuit diagram**.
6. Power the system and observe the tracking mechanism in action.

### Running the System:
- Once the system is powered on, the solar dish will automatically adjust based on the sun’s position.
- The **Arduino microcontroller** will process the LDR sensor data and send signals to the linear actuators to adjust the dish’s position.

## Testing and Results
During testing, the system demonstrated significant improvements in solar energy capture efficiency, showing an increase in energy absorption compared to a fixed solar collector.

- **Enhanced Sun Tracking**: The dual-axis tracking mechanism allowed for better sun alignment throughout the day, leading to improved energy efficiency.
- **Reliable Performance**: The system functioned consistently across different times of day, providing stable solar tracking.

## Future Work
- **Optimization for Local Manufacturing**: Further work could focus on optimizing the design for mass production and local manufacturing to reduce costs.
- **Integration with Smart Systems**: Future iterations could integrate smart sensors and cloud-based monitoring for remote system control and diagnostics.
