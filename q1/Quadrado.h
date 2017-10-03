#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"
#include <iostream>

using namespace std;

class Quadrado: public FiguraGeometrica
{
    private:
    float lado;

    public:
    float Area();
    float getLado();
    void setLado(float lado);
};

#endif // QUADRADO_H
