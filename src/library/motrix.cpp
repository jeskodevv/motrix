#include "Arduino.h"
#include "motrix.h"

void motrix::motorPower(char unit, int power){
\t_U = unit;
\t_P = power;
\tif(_U == 'A'){
\t\tif(_P>0 && _P<=255){
\t\t\tanalogWrite(5, abs(_P));
\t\t\tdigitalWrite(3, 1);
\t\t}else if(_P<0 && _P>=-255){
\t\t\tanalogWrite(5, abs(_P));
\t\t\tdigitalWrite(4, 1);
\t\t}else{
\t\t\tanalogWrite(5, 0);
\t\t\tdigitalWrite(4, 0);
\t\t\tdigitalWrite(3, 0);
\t\t}
\t}else if(_U == 'B'){
\t\tif(_P>0 && _P<=255){
\t\t\tanalogWrite(6, abs(_P));
\t\t\tdigitalWrite(8, 1);
\t\t}else if(_P<0 && _P>=-255){
\t\t\tanalogWrite(6, abs(_P));
\t\t\tdigitalWrite(7, 1);
\t\t}else{
\t\t\tanalogWrite(6, 0);
\t\t\tdigitalWrite(7, 0);
\t\t\tdigitalWrite(8, 0);
\t\t}
\t}
}

void motrix::motorSteer(int steering, int power){
\t_S = steering;
\t_P = power;
\tif(_S >= 255){
\tmotrix::motorPower('A', _P);
\tmotrix::motorPower('B', _P*-1);
\t}else if(_S <= -255){
\tmotrix::motorPower('A', _P*-1);
\tmotrix::motorPower('B', _P);
\t}else{
\tmotrix::motorPower('A', _P*(255+_S)/255);
\tmotrix::motorPower('B', _P*(255-_S)/255);
\t}
}

void motrix::motorTank(int power_a, int power_b){
\t_PA = power_a;
\t_PB = power_b;
\tmotrix::motorPower('A', _PA);
\tmotrix::motorPower('B', _PB);
}

void motrix::debug(int delay){
\t_D = delay;
\tdigitalWrite(13, 1);
\tdelay(_D*1000);
\tdigitalWrite(13, 0);
}