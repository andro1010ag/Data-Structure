/*---------------------------------------------
*  Universidad de las Fuerzas Armadas Espe     *
* Nombres: Angel C�rdenas, Edison Ba�z         *
* NRC: 2967                                    *
* Fecha: 07/11/2019                            *
*                                              *
*----------------------------------------------*/
#include <iostream>
#include "Validacion.h"

using namespace std;

class Ingreso {

public:
	string leer(string,int);
};

string Ingreso::leer(string mensage,int tipo) {
	Validacion validacion;
	string entrada;
	cout << mensage << endl;
	cin >> entrada;
	while (validacion.validar(entrada, tipo)) {
		cout << "Valor no valido reingrese" << endl;
		cin >> entrada;
	}
	return entrada;

}
