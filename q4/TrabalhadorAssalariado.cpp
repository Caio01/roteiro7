#include "TrabalhadorAssalariado.h"

float TrabalhadorAssalariado::calcularPagamento(int Horas)
{
    float salarioHora = ((this -> getSalarioMensal()/4)/40);
    return (salarioHora * 40);
}

