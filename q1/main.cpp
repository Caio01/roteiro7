#include <iostream>
#include <string>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Circulo.h"
#include "Quadrado.h"

using namespace std;

int main(void){

        string nome;
        float area,raio,x, y;
        Triangulo T;
        Circulo C;
        Quadrado Q;

        cout << "QUAL O NOME DA FIGURA GEOMETRICA QUE DESEJADA CALCULAR A AREA "<<endl;
        cout << "( triangulo / circulo / quadrado ) : ";
        cin >> nome;

        if(nome.compare("triangulo") == 0){
            cout << "base: ";
            cin  >> x;
            T.setBase(x);
            cout << "altura: ";
            cin  >> y;
            T.setAltura(y);

            cout << "Area do triangulo eh: " << T.Area() << endl;

        }else{
            if (nome.compare("circulo")== 0){
            cout << "raio: ";
            cin  >> raio;
            C.setRaio(raio);

            cout << "Area do circulo eh: " << C.Area() << endl;
            }else{
                if (nome.compare("quadrado") == 0){
                cout << "lado: ";
                cin  >> x;
                Q.setLado(x);
                cout << "Area do quadrado eh: " << Q.Area() << endl;
                }
            }
        }
        return 0;
}
