#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "Trabalhador.h"


class TrabalhadorPorHora: public Trabalhador
{
    public:
    float calcularPagamento(int Horas);
};

#endif // TRABALHADORPORHORA_H
