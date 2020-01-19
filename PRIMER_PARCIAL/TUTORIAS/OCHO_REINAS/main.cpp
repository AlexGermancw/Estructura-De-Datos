#include <iostream>
#include "OCHO_REINAS.h"

using namespace std;

int main() {

	int n;
	cout<<"\tCuantas reinas "<<endl;
	cin>>n;
	Reina *obj= new Reina(n);
	obj->solucionReinas();
	cout<<"Se creo el archivo solucion.txt"<<endl;

	return 0;
}
