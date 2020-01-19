/*
Universidad de las Fuerzas Armadas ESPE
Nombre: Elian Llorente
NRC: 2967
Fecha de Creacion: 23/09/2019
Fecha de Modificacion: 15/10/2019

*/
#include <stdio.h>
#include <iostream>
#include "Ingreso.h"
#include "MatrizP.h"

using namespace std;

int main(){
	Ingreso leer;
	int filas, columnas, exponente;
    cout<<"Correcion Prueba Matrices"<<endl;
	filas=leer.ingresarInt("Ingrese el numero de filas de la matriz");
	columnas= leer.ingresarInt("Ingrese el numero de columnas de la matriz");
	cout<<endl<<"Matriz Inicial: "<<endl;
	Matriz matriz = Matriz(filas,columnas);
	Matriz resultado = Matriz(filas,columnas);
	matriz.crearMatriz();
	resultado.crearMatriz();
	matriz.llenarMatriz();
	matriz.imprimirMatriz();
	exponente=leer.ingresarInt("Ingrese el exponente a elevar a la matriz");
	cout<<endl<<"Matriz Respuesta: "<<endl;
	matriz.multiplicarMatriz(exponente);
	matriz.imprimirMatriz();

	return 0;
}
