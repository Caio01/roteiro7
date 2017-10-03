#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"
#include "iostream"

using namespace std;

class Triangulo: public FiguraGeometrica
{
    private:
    float base, altura;

    public:
    float Area();

    float getBase();
    float getAltura();

    void setBase(float base);
    void setAltura(float altura);
};

#endif // TRIANGULO_H
