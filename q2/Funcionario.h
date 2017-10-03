#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;

class Funcionario
{
    private:
        int matricula;
        string nome;
        float salario;
    public:
        void setMatricula(int matricula);
        void setNome(string nome);
        void setSalario(float salario);

        int getMatricula();
        string getNome();
        float getSalario();
        Funcionario(string, string, double);
};

#endif // FUNCIONARIO_H
