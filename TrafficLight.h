#ifndef TRAFFICLIGHT_H_
#define TRAFFICLIGHT_H_

#include <Arduino.h>

class TrafficLight {
private:
	byte pin;
	int time;
	void on();
	void off();
	void wait();
public:
	TrafficLight(byte, int);
	void operate();

};
#endif