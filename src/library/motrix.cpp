#include "Arduino.h"
#include "motrix.h"

void motrix::motorPower(char unit, int power){
	_U = unit;
	_P = power;
	if(_U == 'A'){
		if(_P>0 && _P<=255){
			analogWrite(5, abs(_P));
			digitalWrite(3, 1);
		}else if(_P<0 && _P>=-255){
			analogWrite(5, abs(_P));
			digitalWrite(4, 1);
		}else{
			analogWrite(5, 0);
			digitalWrite(4, 0);
			digitalWrite(3, 0);
		}
	}else if(_U == 'B'){
		if(_P>0 && _P<=255){
			analogWrite(6, abs(_P));
			digitalWrite(8, 1);
		}else if(_P<0 && _P>=-255){
			analogWrite(6, abs(_P));
			digitalWrite(7, 1);
		}else{
			analogWrite(6, 0);
			digitalWrite(7, 0);
			digitalWrite(8, 0);
		}
	}
}

void motrix::motorSteer(int steering, power){
	_S = steering;
	_P = power;
	if(_S >= 255){
		motrix::motorPower(A, _P);
		motrix::motorPower(B, _P*-1);
	}else if(_S <= -255){
		motrix::motorPower(A, _P*-1);
		motrix::motorPower(B, _P);
	}else{
		motrix::motorPower(A, _P*(255+_S)/255);
		motrix::motorPower(B, _P*(255-_S)/255);
	}
}

void motrix::motorTank(int power_a, power_b){
	_PA = power_a;
	_PB = power_b;
	motrix::motorPower(A, _PA);
	motrix::motorPower(B, _PB);
}

void motrix::debug(int delay){
	_D = delay;
	digitalWrite(13, 1);
	delay(_D*1000);
	digitalWrite(13, 0);
}
