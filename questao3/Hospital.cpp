#include <iostream>
#include <string>


#include "Cirurgiao.h"
#include "Ginecologista.h"
#include "Oftalmologista.h"
#include "Otorrino.h"

using namespace std;

int main(int argc, char** argv) {
	Cirurgiao ci;
	Oftamologista of;
	Otorrino ot;
	Ginecologista gi;


	ci.setNome( "Caio" );
	ci.setAltura(1.75);
	ci.setPeso(80);
	ci.setCurso("Medicina");

	cout << "___Cirurgiao___" << endl << endl;
	cout << "Nome: " << ci.getNome() << endl;
	cout << "Altura: " << ci.getAltura() << endl;
	cout << "Peso: " << ci.getPeso() << endl;
    cout << "Curso: " << ci.getCurso() << endl;
    cout << "Especializacao: "; ci.especializacao();
    cout << "Cirurgias: "; ci.cirurgia();
    cout << "Consultas: "; ci.consulta();
	cout << endl << endl;


	of.setNome("Amanda");
	of.setAltura(1.85);
	of.setPeso(70);
	of.setCurso("Medicina");

	cout << "___Oftamologista___" << endl << endl;
	cout << "Nome: " << of.getNome() << endl;
	cout << "Altura: " << of.getAltura() << endl;
	cout << "Peso: " << of.getPeso() << endl;
	cout << "Curso: " << of.getCurso() << endl;
	cout << "Especializacao: "; of.especializacao();
    cout << "Cirurgias: "; of.cirurgia();
    cout << "Consultas: "; of.consulta();
	cout << endl << endl;


	ot.setNome("Beatriz");
	ot.setAltura(1.60);
	ot.setPeso(67);
	ot.setCurso("Medicina");

	cout << "___Otorrino___" << endl;
	cout << "Nome: " << ot.getNome() << endl;
	cout << "Altura: " << ot.getAltura() << endl;
	cout << "Peso: " << ot.getPeso() << endl;
	cout << "Curso de Especializacao: " << ot.getCurso() << endl;
	cout << "Especializacao: "; ot.especializacao();
    cout << "Cirurgias: "; ot.cirurgia();
    cout << "Consultas: "; ot.consulta();
	cout << endl << endl;

	ot.setNome("Lucas");
	ot.setAltura(2.0);
	ot.setPeso(92);
	ot.setCurso("Medicina");

	cout << "___Ginecologista___" << endl;
	cout << "Nome: " << gi.getNome() << endl;
	cout << "Altura: " << gi.getAltura() << endl;
	cout << "Peso: " << gi.getPeso() << endl;
	cout << "Curso de Especializacao: "; gi.getCurso();
	cout << "Especializacao: "; gi.especializacao();
    cout << "Cirurgias: "; gi.cirurgia();
    cout << "Consultas: "; gi.consulta();
	cout << endl << endl;

	return 0;
}
