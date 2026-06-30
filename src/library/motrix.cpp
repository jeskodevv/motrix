#include "Arduino.h"
#include "motrix.h"
#include "Servo.h"
#include "SoftwareSerial.h"
#include "NewPing.h"

#define ECHO1 2
#define ECHO2 3
#define ECHO3 4
#define S1 5
#define S2 6
#define BIN1 7
#define BIN2 8
#define PWMB 9
#define PWMA 10
#define AIN2 11
#define AIN1 12
#define LDEBUG 13
#define TRIG A0
#define L1 A4
#define L2 A5
#define L3 A6
#define STBY A7

void begin(){
    
};

void enable(){

}

void brake(){

}

void motorPower(char unit, int power){
    if(unit == 'A'){
        if(power>0 && power<=255){
            analogWrite(PWMA, abs(power));
            digitalWrite(AIN1, 1);
            digitalWrite(AIN2, 0);
        }else if(power<0 && power>=-255){
            analogWrite(PWMA, abs(power));
            digitalWrite(AIN1, 0);
            digitalWrite(AIN2, 1);
        }else{
            analogWrite(PWMA, 0);
            digitalWrite(AIN1, 0);
            digitalWrite(AIN2, 0);
        }
    }else if(unit == 'B'){
        if(power>0 && power<=255){
            analogWrite(PWMB, abs(power));
            digitalWrite(BIN1, 1);
            digitalWrite(BIN2, 0);
        }else if(power<0 && power>=-255){
            analogWrite(PWMB, abs(power));
            digitalWrite(BIN1, 0);
            digitalWrite(BIN2, 1);
        }else{
            analogWrite(PWMB, 0);
            digitalWrite(BIN1, 0);
            digitalWrite(BIN2, 0);
        }
    }
}

void motorSteer(int steering, int power){
    if(steering >= 255){
    motorPower('A', power);
    motorPower('B', power*-1);
    }else if(steering <= -255){
    motorPower('A', power*-1);
    motorPower('B', power);
    }else{
    motorPower('A', power*((255+steering)/255));
    motorPower('B', power*((255-steering)/255));
    }
}

void motorTank(int power_a, int power_b){
    motorPower('A', power_a);
    motorPower('B', power_b);
}

void stop(){
    motorPower(A, 0);
    motorPower(B, 0);
}

void debug(int seconds){
    digitalWrite(LDEBUG, 1);
    delay(seconds*1000);
    digitalWrite(LDEBUG, 0);
}