#ifndef CIRURGIAO_H
#define CIRURGIAO_H

#include <string>
#include <iostream>

#include "Medico.h"



using namespace std;

class Cirurgiao: public Medico
{
    public:
        void cirurgia();
		void consulta();
		void especializacao();
};


#endif // CIRURGIAO_H
