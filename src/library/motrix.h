/* 
	Arduino Library for project MOTRIX
	created by jesko, April 11, 2026.
	https://github.com/jeskodevv/motrix
*/

#ifndef motrix_h
#define motrix_h

#include <Arduino.h>

class motrix
{
	public:
		void motorPower(char unit, int power);
		void motorSteer(int steering, int power);
		void motorTank(int power_a, int power_b);
		void debug(int delay);
	private:
		char _U; 
		int _P, _S, _PA, _PB, _D;
};

#endif