![License](https://img.shields.io/badge/license-CERN--OHL--S--NC--1.2-blue) ![Arduino](https://img.shields.io/badge/Arduino-Compatible-green) ![Status](https://img.shields.io/badge/status-Active%20Development-yellow)

# *MOTRIX* - matrix, but motors

<img width="119" height="141" alt="image" src="https://github.com/user-attachments/assets/95bc1b64-4798-4447-a8af-002ef7424d90" />     a microcontroller based expansion board and motor driver for beginner robotics freaks. The board is especially created for making car projects _(e.g. line following, obstacle avoiding, remote control, ...)_ easier and even just _"plug-in and code"_. It integrates motor control, comprehensive sensor interfaces, and intelligent power management into a single, beginner-friendly package.

_The reason that I started working on this project is that 1.5 years before I was interested in making arduino projects, and somehow I landed on a BT car project. That was too bulky with messy jumper wires, and coding was chaotic. That day I wished that if only just plug-in and go options were aviable. Yeah, they were aviable, e.g. Keyestudio, but too expensive for me, and coding them were pretty same. So when I heard about [Stasis](stasis.hackclub.com) the first idea that landed on my brain was Motrix._

## _THE PROBLEMS IT SOLVES_
- **WIRING CHAOS**
- **SOFTWARE & CONTROL LIMITATIONS**

## _FEATURES_
- Dual DC motor control using _TB6612FNG_
- Interfaces for common robotics sensors (IR, ultrasonic, line sensors)
- Optimized for Arduino Nano (ESP32 support planned on next versions)
- Beginner-friendly design with minimal configuration needed
- Arduino Library with plenty amount of QOL coding functions


## _Hardware Overview_
Motrix Nano is 47.35x58.8mm 2 layer PCB which is designed to work primarily with Arduino Nano (_Future versions may support ESP32_). The TB6612FNG motor driver IC provides reliable control for dual DC motors. Ready-to-plug pins for other components.

Here's the 3D view of MOTRIX NANO V1 (DEMO):

<img width="439" height="445" alt="1775848664943-njcwxu" src="https://github.com/user-attachments/assets/221ef321-6c20-4812-a460-b8d9bd713170" /><img width="431" height="441" alt="1775848681231-5i2871" src="https://github.com/user-attachments/assets/e4698138-1660-4c23-bbb0-07b5229c5272" />

...PCB's design:

<img width="388" height="441" alt="image" src="https://github.com/user-attachments/assets/aef5e037-4afd-461f-bcea-99390f9f2b09" />

Bill of Materials are aviable in [BOM.csv](https://github.com/jeskodevv/motrix/blob/main/BOM.csv)


## _Software Overview_
Comprehensive Arduino library and example sketches coming soon. Current development focuses on establishing a stable hardware foundation.


### _LINKS_
- [WIKI (everything is detailed there)](https://github.com/jeskodevv/motrix/wiki)
- [Development Journals](https://stasis.hackclub.com/dashboard/discover/cmnlk2lji00hk01qlbceh9il3)
- [PCB Gerber Files](https://github.com/jeskodevv/motrix/blob/main/src/PCB/NANOv1_DEMO.zip)
- Arduino Library (WIP)
- [Example Codes](https://github.com/jeskodevv/motrix/blob/main/src/examples)


## _LICENCE_
This project is licenced under CERN Open Hardware License Version 2 - Strongly Reciprocal - Non Commercial (**CERN-OHL-S-NC-1.2**).

You are free to use the design, modify it, and share this work for **non-commercial purposes only**.

You must give appropriate credit to the original author and distribute contributions **under the same licence**.
