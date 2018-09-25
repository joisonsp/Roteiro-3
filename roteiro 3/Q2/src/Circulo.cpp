#include "Circulo.h"

Circulo::Circulo()
{
    //ctor
}

double Circulo::calculaArea(){
    area = 3.14 * pow(raio, 2);
}

void Circulo::setRaio(double raio){
    this->raio = raio;
}

double Circulo::getRaio(){
    return raio;
}
