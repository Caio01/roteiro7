#include "Triangulo.h"

void Triangulo::setAltura(float altura)
{
    this -> altura = altura;
}

void Triangulo::setBase(float base)
{
    this -> base = base;
}

float Triangulo::getAltura()
{
    return altura;
}

float Triangulo::getBase()
{
    return base;
}

float Triangulo::Area()
{
    float area = (base*altura)/2;
    return area;
}







