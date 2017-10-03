#include "TrabalhadorPorHora.h"

float TrabalhadorPorHora::calcularPagamento(int Horas)
{
    float salarioHora = ((this -> getSalarioMensal()/4)/40);
    int horasExtra;
    float totalHorasExtra;

    if( Horas > 40)
        {
            horasExtra = Horas - 40;
            totalHorasExtra = salarioHora + salarioHora/2;

            float x = (salarioHora*40) + (totalHorasExtra * horasExtra);
            return x;
        }
       else{
            return (salarioHora * Horas);
}


}


