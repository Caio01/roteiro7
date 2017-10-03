#include "Consultor.h"

using namespace std;

double Consultor::getSalario(double percentual)
{
    double salario;

    salario = Funcionario::getSalario();

    double total = salario + (salario * (percentual/100));
    return total;
}

double Consultor::getSalario()
{
    double x = (Funcionario::getSalario() * 0.1) + Funcionario::getSalario();
    return x;
}
