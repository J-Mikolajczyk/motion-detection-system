# Motion Detection and Video Recording with Raspberry Pi

This program utilizes a Raspberry Pi along with a motion sensor to detect motion and record video when motion is detected. It employs the WiringPi library for GPIO control and uses the `ffmpeg` command-line tool for video recording.

## Prerequisites

Before running this program, make sure you have the following installed:
- WiringPi library
- ffmpeg

## Installation

1. Clone or download this repository to your Raspberry Pi.
2. Compile the C file using a C compiler. For example, you can use `gcc`:
   ```bash
   gcc -o motion_detection motion_detection.c -lwiringPi
3. Run the executable using
   ```bash
   sudo ./motion_detection
