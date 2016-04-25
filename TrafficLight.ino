#include <TrafficLight.h>

//Instanciaçao do semáforo
//Corresponde o pino e o tempo que cada led do semáforo irá operar 
TrafficLight green(13,3000);
TrafficLight yellow(12,1000);
TrafficLight red(8,3000);

//métodos setup é executados 1 vez quando o Arduino é ligado (obrigatório)
void setup() { 

}

//método loop, executado enquanto Arduino está ligado
void loop() {
  //o único método que pode ser utilizado fora da classe Semáforo
  green.operate();
  yellow.operate();
  red.operate();

}
