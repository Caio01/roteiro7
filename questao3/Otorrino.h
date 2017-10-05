#ifndef OTORRINO_H
#define OTORRINO_H
#include <iostream>
#include "Medico.h"

using namespace std;

class Otorrino: public Medico{
    public:
		void consulta();
		void cirurgia();
		void especializacao();
};


#endif // OTORRINO_H
