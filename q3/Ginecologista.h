#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include <iostream>
#include "Medico.h"


using namespace std;

class Ginecologista: public Medico{
    public:
		void consulta();
		void cirurgia();
		void especializacao();
};

#endif // GINECOLOGISTA_H
