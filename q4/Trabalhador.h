#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

using namespace std;


class Trabalhador
{
    private:
        string nome;
        float salarioMensal;

    public:
        void setNome(string nome);
        void setSalarioMensal(float salarioMensal);

        string getNome();
        float getSalarioMensal();

        float calcularPagamento(int Horas);
};

#endif // TRABALHADOR_H
