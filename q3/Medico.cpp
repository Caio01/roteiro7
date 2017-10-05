#include "Medico.h"

using namespace std;

void Medico::setNome(string nome)
{
    this -> nome = nome;
}

void Medico::setAltura(float altura)
{
    this -> altura = altura;
}

void Medico::setPeso(float peso)
{
    this -> peso = peso;
}

void Medico::setCurso(string curso)
{
    this -> curso = curso;
}

string Medico::getNome()
{
    return nome;
}
string Medico::getCurso()
{
    return curso;
}
float Medico::getAltura()
{
    return altura;
}
float Medico::getPeso()
{
    return peso;
}

void Medico::especializacao()
{
    cout << "" <<endl;
}

void Medico::consulta()
{
    cout << "" <<endl;
}

void Medico::cirurgia()
{
	cout << "" <<endl;
}
