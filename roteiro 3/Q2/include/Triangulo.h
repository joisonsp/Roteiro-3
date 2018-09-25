#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica{

    public:
        Triangulo();

        double calculaArea();

        void setBase(double base);
        double getBase();
        void setAltura(double altura);
        double getAltura();

    protected:
        double base;
        double altura;
    private:
};

#endif // TRIANGULO_H
