/********************************************
    UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    NOMBRE: ALEX CHICAIZA
    NRC:2967
    DOCENTE: INGENIERO SOLIS
    FECHA DE CREACCION:
    FECHA MODIFICACION: 11/2019
*********************************************/

#include<iostream>
#include<stdlib.h>
#include <conio.h>
#include <iostream>
#include "Busqueda.h"
#include "Ingresar.h"

using namespace std;

int main() {

	int clave, n;
	Ingreso ingresar;

	n = ingresar.ingresarEnteros("Ingrese el tamanio del arreglo: ");
	cout << endl;

	int* arreglo = new int[n];

	//Ingreso de datos al arreglo
	for (int i = 0; i < n; i++) {
		cout << "Ingrese dato [" << i+1 << "]: ";
		cin >> *(arreglo + i);
	}

	clave = ingresar.ingresarEnteros("Ingrese el numero que desea ingresar: ");
	cout << endl;

	Busqueda buscar = Busqueda(arreglo, n);
	buscar.busquedaSecuencial(clave);

	system("pause");
	return 0;
}
