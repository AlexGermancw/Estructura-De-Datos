/*
Universidad de las Fuerzas Armadas ESPE
Nombre: Elian Llorente
NRC: 2967
Fecha de Creacion: 23/09/2019
Fecha de Modificacion: 15/10/2019

*/
#include <iostream>
#include "identidad.h"
#include "ingreso.h"
using namespace std;

int main(){
	Ingreso leer;
	Identidad obj;
	float **matriz;
	float **inversa;
	float *matriz1;
	float elemento;
	float coeficiente;
	float **respuesta;
	int dimension=0;
	do{
		system("cls");
		dimension = leer.ingresarInt("Ingrese el tamano de matriz:");
	}while(dimension == 0 || dimension < 0);

	matriz = obj.inicializar(dimension);
	inversa = obj.inicializar(dimension);
	respuesta = obj.inicializar(dimension);
	obj.encerar(dimension,matriz);
	obj.encerar(dimension,respuesta);
	obj.encerar(dimension,inversa);
	matriz = obj.ingresarNumeros(dimension,matriz);
	cout<<"Matriz ingresada: "<<endl;
	obj.mostrar(dimension,matriz);
	cout<<endl;
	inversa = obj.calcularInversa(dimension,matriz);
	cout<<"Matriz inversa: "<<endl;
	obj.mostrarInversa(dimension,inversa);
	cout<<endl;
	respuesta = obj.multiplicar(dimension,matriz,inversa);
	cout<<"Matriz resultante (identidad): "<<endl;
	obj.mostrar(dimension,respuesta);
	system("pause");
	return 0;

}
