#ifndef RETANGULO_H
#define RETANGULO_H

#include "FiguraGeometrica.h"

class Retangulo: public FiguraGeometrica
{
    public:
        Retangulo();

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

#endif // RETANGULO_H
