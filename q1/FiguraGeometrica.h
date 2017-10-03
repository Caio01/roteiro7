#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>
#include <string>

using namespace std;

class FiguraGeometrica
{
    private:
    string nome;

    public:
    float calcularArea();
    string getnome();
    void setnome(string nome);
};

#endif // FIGURAGEOMETRICA_H
