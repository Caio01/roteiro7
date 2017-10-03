#include "Circulo.h"

void Circulo::setRaio(float raio)
{
    this -> raio = raio;
}

float Circulo::Area()
{
    float area = pi * (raio*raio);

    return area;
}
