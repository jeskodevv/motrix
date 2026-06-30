/* 
	Arduino Library for project MOTRIX
	created by jesko, April 11, 2026.
	https://github.com/jeskodevv/motrix
*/

#ifndef motrix_h
#define motrix_h

#include <Arduino.h>
#include <Servo.h>
#include <SoftwareSerial.h>
#include <NewPing.h>

void begin();
void enable();
void brake();
void debug(int seconds);
void motorPower(char unit, int power);
void motorSteer(int steering, int power);
void motorTank(int power_a, int power_b);
void stop();

#endif