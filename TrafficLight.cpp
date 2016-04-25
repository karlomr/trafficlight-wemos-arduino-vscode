#include <TrafficLight.h>
//Implementação da classe 
/*Construtor da classe TrafficLight
define o pino e o tempo que irá aguardar */
TrafficLight::TrafficLight(byte _pin, int _time) {
	//modo que o pino irá operar (emitirá sinal elétrico de saída)
	pinMode(_pin, OUTPUT);
	pin = _pin;
	time = _time;
}

void TrafficLight::on() {
	digitalWrite(pin, HIGH);
}

void TrafficLight::off() {
	digitalWrite(pin, LOW);
}

void TrafficLight::wait() {
	delay(time);
}

//operação na lâmpada
void TrafficLight::operate() {
	on();
	wait();
	off();
}