#include "Trabalhador.h"

void Trabalhador::setNome(string nome)
{
    this -> nome = nome;
}

void Trabalhador::setSalarioMensal(float salarioMensal)
{
    this -> salarioMensal = salarioMensal;
}

string Trabalhador::getNome()
{
    return nome;
}

float Trabalhador::getSalarioMensal()
{
    return salarioMensal;
}

float Trabalhador::calcularPagamento(int Horas)
{
    //1 mes = 4 semanas

    return salarioMensal/4;
}
