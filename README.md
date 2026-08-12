![Hardware Licence](https://img.shields.io/badge/Hardware%20Licence-CERN--OHL--S--v2-blue) ![Software Licence](https://img.shields.io/badge/Software%20Licence-MIT-green) ![Arduino](https://img.shields.io/badge/MCU-Arduino%20Nano-teal) ![Status](https://img.shields.io/badge/status-Active%20Development-yellow) ![HackClub](https://img.shields.io/badge/supported%20by-HackClub-red)

# *MOTRIX* — matrix, but motors

<img width="2560" height="920" alt="image" src="https://github.com/jeskodevv/motrix/blob/main/assets/motrix_banner.jpg" />

Motrix is a microcontroller expansion board and motor driver built for beginner robotics. I've designed it for the Hack Club [Stasis](https://stasis.hackclub.com) program! [+ [Stardance](https://stardance.hackclub.com) from v2]. Designed specifically for car type of projects like line following, obstacle avoiding, remote control, robofootball, and robosumo. The goal is just **plug in and code**, no breadboards and no chaotic wires.

This is the first hardware project I've ever worked on. Version 1 got unfinished because of final exams and some personal stuff. V2 is now here, it has more polished structure and good vibes!!

For details about the design process or other information, check out the [development journal](https://stasis.hackclub.com/dashboard/discover/cmnlk2lji00hk01qlbceh9il3). A local copy is available in [JOURNAL.md](https://github.com/jeskodevv/motrix/blob/main/JOURNAL.md).


> when i was like 13 i tried building a BT car. It was bulky, wires everywhere, and the code was spagetthi. I wished there were a plug-in and go options. The ones that existed (Keyestudio, etc.) were too expensive and had the same coding problems. When I knew about [Stasis](https://stasis.hackclub.com) the first idea that came to mind was Motrix.


## WHAT IT SOLVES

- **Wiring chaos:** no need to explain this
- **Software complexity:** Arduino library handles motors, sensors, bluetooth and more so beginners focus on logic, not setup
- **Power management:** onboard buck converter handles 6–20V input, delivers clean 5V to logic and sensors automatically. but our little TB6612FNG can't handle that much, so the ceiling is 13V, otherwise we might fire it.
- its compactt!!!

## WHAT IT HAS (aka FEATURES)

- Arduino library include such handful QoL features like advanced motor control, emergenccy stop, and including integration with common libraries.
- Onboard MP1584EN buck converter (6–12V input → 5V logic)
- Power switch
- Optimized for beginner robotics and competition robots
- Dual DC motor control via TB6612FNG module (PWM speed control, direction, emergency stop)
- 3x ultrasonic sensor headers share 1 TRIG line for being efficient with pins, and i think its also perfect for sumo robots
- Bluetooth header with AT mode button
- Pin headers dedicated for line sensor, 2x servos, 3x ultrasonic sensors, 3x universal (analog & digital) pins, and bluetooth module.
- AT MODE button for Bluethooth module which makes it possible to enter "admin" mode with just pressing that button while switching the power switch.


## HARDWARE OVERVIEW

**Motrix Nano V2** is a 2-layer PCB designed around the Arduino Nano.

here's the pcb
<img width="468" height="463" alt="image" src="https://github.com/jeskodevv/motrix/blob/main/assets/pcb-v2.png" />

and here's the schematic
<img width="757" height="500" alt="image" src="https://github.com/jeskodevv/motrix/blob/main/assets/schem-v2.png" />


### Power Specs

Maximum input Motrix can support is 13.5V because its ceiling for TB6612FNG, so i wrote 6-13.5V to power input
btw MP1584EN handles up to 20V and turns it into 5V. exceed 12V limit on your own risk!

> **Warning:** 4S Li-ion fully charged = 16.8V, which exceeds TB6612FNG maximum and probably fires it. I personally recommended using only 3S if you are using Li-ion 18650s cuz its 12.6V maximum. 4S is incompatible.

### BOM

| name | purpose | qty. | total (USD) | link | distributor |
|---|---|---|---|---|---|
| JLCPCB PCB | circuit board itself | 5 | 6.5 | [jlcpcb.com](https://jlcpcb.com) | JLCPCB |
| ARDUINO NANO | microcontroller | 1 | I have this one | https://ali.click/65z4j1p | |
| TB6612FNG MODULE | dual-H bridge motor driver module | 5 | 5.75 | [link](https://ali.click/l194g12) | AliExpress |
| MP1584EN MODULE | 4.5-28V buck convertor module | 5 | 3.5 | [link](https://ali.click/5294g1f) | AliExpress |
| BUTTONS AND HEADER PINS IN BULK | bulk order all needed various header pins and buttons in one | 1 | 5 | https://ali.click/9bz4j16, https://ali.click/ocz4j1b, https://ali.click/rdz4j1o | AliExpress |
| SHIPPING COSTS | shipping costs of everything combined | 1 | 10 | | |

Bill of Materials also available in [BOM.csv](https://github.com/jeskodevv/motrix/blob/main/BOM.csv) too.


## SOFTWARE OVERVIEW

The Motrix Arduino library provides clean, beginner-friendly functions for all onboard hardware and more.

Library and example sketches will be available in the [src/](https://github.com/jeskodevv/motrix/tree/main/src) folder.

> currently library is wip so leaving this section blank, i'll document it after finishing.

## LINKS

- [Wiki [WIP]](https://github.com/jeskodevv/motrix/wiki)
- [Development Journal](https://stasis.hackclub.com/dashboard/discover/cmnlk2lji00hk01qlbceh9il3)
- [PCB Gerber Files](https://github.com/jeskodevv/motrix/blob/main/src/PCB/)
- [Arduino Library](https://github.com/jeskodevv/motrix/releases/tag/library)
- [Example Sketches [WIP]](https://github.com/jeskodevv/motrix/tree/main/src/examples)
- [BOM](https://github.com/jeskodevv/motrix/blob/main/BOM.csv)


## LICENSE

Hardware (PCB, schematics, Gerber files) is licensed under **CERN-OHL-S v2**.
Software (Arduino library, examples) is licensed under **MIT**.

See [LICENSE](https://github.com/jeskodevv/motrix/blob/main/LICENSE) for full terms.

---

Made with ❤ and [Hack](https://hackclub.com) by [@jeskodevv](https://github.com/jeskodevv)
