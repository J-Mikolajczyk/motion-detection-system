# Motion Detection and Video Recording with Raspberry Pi

This program utilizes a Raspberry Pi along with a motion sensor to detect motion and record video when motion is detected. It employs the WiringPi library for GPIO control and uses the `ffmpeg` command-line tool for video recording. Videos recorded upon motion detection are saved to the same directory as the executable.

## Prerequisites

Before running this program, make sure you have the following installed:
- WiringPi library
- ffmpeg
- A camera plugged in via USB
- Proper GPIO wiring as shown in GPIOwiring.jpg in the repository

## Installation

1. Clone or download this repository to your Raspberry Pi.
2. Compile the C file using a C compiler. For example, you can use `gcc`:
   ```bash
   gcc -o motion_detection motion_detection.c -lwiringPi
3. Run the executable using
   ```bash
   sudo ./motion_detection
