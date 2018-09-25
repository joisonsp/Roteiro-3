#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

#include <math.h>

class Circulo: public FiguraGeometrica{
    public:
        Circulo();

        double calculaArea();

        void setRaio(double raio);
        double getRaio();
    protected:

    private:
        double raio;
};

#endif // CIRCULO_H
