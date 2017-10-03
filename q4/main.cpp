#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
#include <string>

using namespace std;

int main()
{
    TrabalhadorAssalariado Ta;

    Ta.setNome("Caio");
    Ta.setSalarioMensal(9000);
    cout << "Trabalhador Assalariado" << endl;
    cout << "Nome: " << Ta.getNome() << endl;
    cout << "Salario: " << Ta.getSalarioMensal() << endl;
    cout << "Salario Semanal: " << Ta.calcularPagamento(20) << endl << endl;

    TrabalhadorPorHora Tp;

    Tp.setNome("Amanda");
    Tp.setSalarioMensal(750);
    cout << "Trabalhador Por Hora" << endl;
    cout << "Nome: " << Tp.getNome() << endl;
    cout << "Salario: " << Tp.getSalarioMensal() << endl;
    cout << "Salario Semanal: " << Tp.calcularPagamento(50) << endl << endl;

    return 0;
}
