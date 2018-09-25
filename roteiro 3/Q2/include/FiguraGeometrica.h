#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica{
    public:
        FiguraGeometrica();
        virtual double calculaArea()=0;

        double getArea();
    protected:
        double area;
    private:
};

#endif // FIGURAGEOMETRICA_H
