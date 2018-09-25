#include "Triangulo.h"

Triangulo::Triangulo()
{
    //ctor
}

double Triangulo::calculaArea(){
    area = (base*altura)/2;
}

void Triangulo::setBase(double base){
    this->base = base;
}
double Triangulo::getBase(){
    return base;
}
void Triangulo::setAltura(double altura){
    this->altura = altura;
}

double Triangulo::getAltura(){
    return altura;
}
