#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include "Trabalhador.h"

class TrabalhadorAssalariado: public Trabalhador
{
    public:
    float  calcularPagamento(int Horas);
};

#endif // TRABALHADORASSALARIADO_H
