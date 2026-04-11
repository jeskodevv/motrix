![License](https://img.shields.io/badge/license-CERN--OHL--S--NC--1.2-blue) ![Arduino](https://img.shields.io/badge/Arduino-Compatible-green) ![Status](https://img.shields.io/badge/status-Active%20Development-yellow)

# *MOTRIX*
microcontroller based expansion board and motor driver for beginner robotics freaks.
The board is especially created for making car projects _(e.g. line following, obstacle avoiding, remote control, ...)_ easier and even just _"plug-in and code"_. It integrates motor control, comprehensive sensor interfaces, and intelligent power management into a single, beginner-friendly package.

## _THE PROBLEMS IT SOLVES_
- **WIRING CHAOS** - Pre-wired connections eliminate messy breadboard setups
- **SOFTWARE & CONTROL LIMITATIONS** - Dedicated motor driver handles PWM and direction control
- **POWER MANAGEMENT** - Integrated voltage regulation and protection circuits

## _FEATURES_
- Dual DC motor control using _TB6612FNG_
- Interfaces for common robotics sensors (IR, ultrasonic, line sensors)
- Optimized for Arduino Nano with ESP32 support planned
- Beginner-friendly design with minimal configuration needed

## _GETTING STARTED_

### Requirements
- Arduino Nano or compatible microcontroller
- 2x DC motors (5-12V)
- USB cable for programming
- Jumper wires (if needed)

### Quick Setup
1. **Download the PCB files** from the [PCB gerber file (NANO V1 DEMO)](https://github.com/jeskodevv/motrix/blob/main/src/PCB/NANOv1_DEMO.zip)
2. **Assemble the board** - solder components following the schematic
3. **Connect your Arduino Nano** to the expansion board
4. **Attach motors** to the motor connectors
5. **Install the library** - Arduino Library coming soon..
6. **Upload example code** and start building!

### _LINKS_
- [Development Journals](https://stasis.hackclub.com/dashboard/discover/cmnlk2lji00hk01qlbceh9il3)
- [PCB Gerber Files](https://github.com/jeskodevv/motrix/blob/main/src/PCB/NANOv1_DEMO.zip)
- Arduino Library (soon..)

## _Hardware Overview_
The board is designed to work primarily with Arduino Nano. _Future versions may support ESP32-based controllers._ The TB6612FNG motor driver IC provides reliable control for dual DC motors with built-in protection features.

## _Software Overview_
Comprehensive Arduino library and example sketches coming soon. Current development focuses on establishing a stable hardware foundation.

## _LICENCE_
This project is licenced under CERN Open Hardware License Version 2 - Strongly Reciprocal - Non Commercial (**CERN-OHL-S-NC-1.2**).

You are free to use the design, modify it, and share this work for **non-commercial purposes only**.

You must give appropriate credit to the original author and distribute contributions **under the same licence**.