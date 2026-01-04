 **IoT Task 1 – Blinking LED (Arduino)**

 Overview:-
This project demonstrates the basic setup of an IoT development environment by blinking an LED using an Arduino Uno.
It is the IoT equivalent of the “Hello, World!” program.

Description:-
An Arduino Uno microcontroller is used to control an LED through GPIO pin 13.
The LED turns ON and OFF every one second, verifying correct GPIO output control.

Components Used:-
- Arduino Uno
- Built-in LED (Pin 13)
- Arduino IDE

   **IoT Task2-Sensing the Environment**

Overview:
This project demonstrates the basic concept of sensing the environment using an Arduino. An analog sensor (potentiometer or temperature sensor) is connected to the Arduino, and its output is read through an analog input pin. The Arduino converts the analog signal into a digital value using its Analog-to-Digital Converter (ADC) and displays the sensor readings on the Serial Monitor.
The circuit and code are designed and tested using the Tinkercad online simulation platform. This task helps in understanding how IoT devices collect real-world data and process it for monitoring and control applications.

Description:
This project shows how an Arduino reads data from a sensor. An analog sensor is connected to the Arduino, and it gives a changing signal. The Arduino reads this signal using an analog pin and converts it into numbers. These numbers are then shown on the Serial Monitor. The circuit and code are done using the Tinkercad online platform. This helps us understand how IoT devices sense the environment.

Components Used:
-Arduino Uno
-Analog Sensor (Potentiometer or Temperature Sensor)
-Connecting Wires
-Tinkercad Circuits
  Circuit Connections:-
- Potentiometer left pin → 5V  
- Potentiometer middle pin → A0  
- Potentiometer right pin → GND
 **IoT-Task 3:- Connecting ESP32 to WiFi and Making HTTP Requests**
Overview:-

This task demonstrates the core of IoT (Internet of Things): connecting a device to the internet. Using an ESP32 board (which has built-in WiFi), we connect to a local WiFi network and send data from a cloud service.

By the end of this task, the ESP32 will fetch data from a public API and print it to the Serial Monitor, confirming that the device can communicate over the internet.

Components Used:-
ESP32 Development Board
USB Cable 
Computer with Arduino IDE installed
WiFi Network (SSID and Password)
**IoT TASK-4:-4ESP32 Temperature Monitoring using Adafruit IO**

This project explain a simple Internet of Things (IoT) application using an ESP32 microcontroller. The ESP32 reads temperature data from a DHT11/DHT22 sensor and sends the data to the Adafruit IO cloud platform. Adafruit IO stores the sensor data and displays it in graphical form.

The project was implemented using the Wokwi online simulator and can also be tested on real ESP32 hardware. The ESP32 first connects to a WiFi network and then continuously reads temperature values from the sensor. These values are sent to the cloud using an HTTP POST request with an API key for authentication.

Components used in this project include an ESP32 development board, a DHT11 or DHT22 temperature sensor, jumper wires, a WiFi connection, and an Adafruit IO account. The result of this project is the successful transmission and visualization of temperature data on the Adafruit IO dashboard, confirming proper cloud connectivity and sensor operation.


