#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
#include <FiguraGeometrica.h>

#define pi 3.14159265

using namespace std;

class Circulo : public FiguraGeometrica
{
    private:
    float raio;

    public:
    float Area();
    float getRaio();
    void setRaio(float raio);
};

#endif // CIRCULO_H
