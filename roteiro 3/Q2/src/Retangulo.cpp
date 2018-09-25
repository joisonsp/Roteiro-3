#include "Retangulo.h"

Retangulo::Retangulo()
{
    //ctor
}

double Retangulo::calculaArea(){
    area = base*altura;
}

void Retangulo::setBase(double base){
    this->base = base;
}
double Retangulo::getBase(){
    return base;
}
void Retangulo::setAltura(double altura){
    this->altura = altura;
}

double Retangulo::getAltura(){
    return altura;
}
