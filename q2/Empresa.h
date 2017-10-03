#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"


using namespace std;

class Empresa
{
    private:
        Funcionario func;
        Consultor consultor;

    public:
        Empresa();

        void setFuncionario();
        void setConsultor();
        void exibeSalario();

};

#endif
