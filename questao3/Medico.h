#ifndef MEDICO_H
#define MEDICO_H

#include <iostream>
#include <string>

using namespace std;

class Medico
{
    private:
        string nome;
        string curso;
        float altura;
        float peso;

    public:
        void setNome(string nome);
        void setAltura(float altura);
        void setPeso(float peso);
        void setCurso (string curso);

        void especializacao();
		void consulta();
        void cirurgia();

        string getNome();
        string getCurso();
        float getAltura();
        float getPeso();

};

#endif // MEDICO_H
