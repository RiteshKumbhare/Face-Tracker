#Face Tracker with PID Control

#Overview:
This project implements a real-time face tracking system using OpenCV and MediaPipe, combined with a PID control system to send movement commands to an Arduino-controlled device. The system detects a face, calculates its position relative to the center of the frame, and adjusts movement accordingly.

#Features:
1. Real-time face detection and tracking
2. PID control for smooth and stable tracking
3. Sends control signals to an Arduino for external movement control
4.  Works with live webcam input
5.  Adjustable sensitivity and response settings

#Technologies Used:
1.Python (Backend processing)
2.OpenCV (Computer vision tasks)
3.MediaPipe (Face detection)
4.Arduino (Serial communication)
5.PID Control (Proportional-Integral-Derivative controller for smooth tracking)

#Installation:
#Prerequisites:
Ensure you have Python installed. You can download it from python.org.
Install Dependencies
Run the following command to install the required libraries:

pip install opencv-python mediapipe pyserial

Connecting the Arduino:
Connect the Arduino to your system via USB.
Update the serial port in the code (serial.Serial('/dev/tty.usbmodem12401', 9600)) to match your system's port.

Usage:
Running the Face Tracker
Clone this repository:
git clone https://github.com/RiteshKumbhare/Face-Tracker.git
cd Face-Tracker

Run the Python script:
python face_tracker.py
The script will open a webcam feed and track faces in real time.
Press 'X' on your keyboard to exit.

#How It Works:
The camera captures frames in real time.
MediaPipe detects the face and calculates its position.
The PID controller computes necessary adjustments.
Control signals are sent via serial communication to the Arduino.
The Arduino can then move servos or motors accordingly.


#Customization
You can fine-tune the PID parameters for different tracking behaviors:
Kp_x, Ki_x, Kd_x = 0.6, 0.0, 0.1
Kp_y, Ki_y, Kd_y = 0.6, 0.0, 0.1
Increase Kp for faster response.
Increase Ki for reducing steady-state error.
Increase Kd for damping and stability.

#Possible Applications
Security Systems: Automated cameras that track intruders.
Robotics: Human-following robots.
Augmented Reality (AR): Enhancing real-time facial tracking.
Gaming: Motion-controlled interactions.

#License:
This project is licensed under the MIT License – feel free to modify and distribute it!

#Contribution
Feel free to fork this repository and submit pull requests with improvements!

#Contact
For questions or feedback, reach out via GitHub Issues.
