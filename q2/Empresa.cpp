#include "Empresa.h"


void Empresa::setFuncionario()
{
    double SALARIO;
    string NOME;
    int MATRICULA;

    cout << "___FUNCIONARIO___" << endl<<endl;
    cout << "nome: ";
    cin >> NOME;
    func.setNome(NOME);

    cout << "matricula: ";
    cin >> MATRICULA;
    func.setMatricula(MATRICULA);

    cout << "Informe o salario: ";
    cin >> SALARIO;
    func.setSalario(SALARIO);

}

void Empresa::setConsultor()
{
    double SALARIO;
    string NOME, MATRICULA;

    cout << endl << "___CONSULTOR___" << endl <<endl;
    cout << "nome: ";
    cin >> NOME;
    consultor.setNome(NOME);

    cout << "matricula: ";
    cin >> MATRICULA;
    consultor.setMatricula(MATRICULA);

    cout << "Informe o salario: ";
    cin >> SALARIO;
    consultor.setSalario(SALARIO);

}

void Empresa::exibirSalario()
{

    double PERCENTUAL = 0.0;

    cout << "Digite qual o valor do percentual a ser acrescentado: ";
    cin >> PERCENTUAL;


    cout <<" Salario com um aumento de 10% = " << consultor.getSalario() << endl;

    cout << "Salario com um aumento de " << PERCENTUAL << "% " << "eh = " << consultor.getSalario(percentual) << endl;



}
