#include "Quadrado.h"

void Quadrado::setLado(float lado)
{
    this -> lado = lado;
}

float Quadrado::getLado()
{
    return lado;
}

float Quadrado:: Area()
{
    float area = lado*lado;
    return area;
}
