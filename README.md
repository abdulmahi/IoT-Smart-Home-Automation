# IoT-Smart-Home-Automation

## Overview

A Smart Home IoT platform developed using Arduino, MQTT, Flask, MySQL, and ThingsBoard. The system integrates multiple IoT devices to monitor and automate home environments through a centralized web application.

## Features

### Fire Prevention System

* Detects smoke levels using an MQ-2 gas sensor.
* Activates visual and audio alerts when smoke exceeds a defined threshold.
* Sends sensor data to the cloud for monitoring.

### Smart Temperature Control

* Continuously monitors ambient temperature.
* Automatically activates a cooling fan when temperature exceeds 40°C.
* Stores temperature readings for analysis and visualization.

### Automated Doorbell System

* Uses an ultrasonic sensor to detect visitors.
* Triggers a buzzer and LED indicator when motion is detected within range.
* Logs proximity events for monitoring.

## System Architecture

Arduino Sensors → Edge Devices → MQTT → Cloud Server → MySQL Database → Flask Web Application → ThingsBoard Dashboard

## Technologies Used

* Arduino UNO
* MQTT
* Raspberry Pi Edge Server
* Python
* Flask
* MySQL
* ThingsBoard
* VirtualBox
* Linux (Debian)

## Screenshots
Please check the "Tools & Project Technical Details.pdf"

## Key Learning Outcomes

* IoT device integration
* MQTT publish/subscribe communication
* Edge and cloud computing concepts
* Database integration with IoT systems
* Real-time monitoring dashboards
* Full-stack IoT application development

## Future Improvements

* Real-time dashboard updates without page refresh
* Remote device control from the web application
* Automatic ThingsBoard integration
* Mobile application support
* Enhanced security and authentication

## Authors

* Abdul Hamid Mahi
* Jason Stanley
* Valentin Gurzau
