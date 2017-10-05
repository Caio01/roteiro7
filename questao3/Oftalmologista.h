#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include <iostream>
#include "Medico.h"

using namespace std;

class Oftamologista: public Medico{
    public:
		void consulta();
		void cirurgia();
		void especializacao();
};


#endif // OFTALMOLOGISTA_H
