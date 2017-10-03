#include <iostream>

#include "Funcionario.h"
#include "Consultor.h"
#include "Empresa.h"

using namespace std;

int main()
{
    Empresa empresa;

    empresa.setFuncionario();
    empresa.setConsultor();
    empresa.exibeSalario();

    return 0;
}
