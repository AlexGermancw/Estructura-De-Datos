/*
	Universidad de las Fuerzas Armadas ESPE
    Maria Belen Ceron, Elian Llorente
    NRC: 2967
    Fecha creacion: 28/09/2019
	Fecha ultima modificacion:	30/09/2019
	Docente: Ing. Fernando Solis

*/
#include<iostream>
#include<cmath>
#include "transformador.h"

using namespace std;

int main(){
	int opcion;
	int g,rads;
	float num,den,rgrados;
	cout<<"\tUniversidad de las Fuerzas Armadas ESPE\n\tMaria Belen Ceron, Elian Llorente\n\tNRC: 2967\n\tFecha creacion: 28/09/2019\n";
	cout<<"\tFecha ultima modificacion:30/09/2019\n\tDocente: Ing. Fernando Solis\n\n\tMENU"<<endl;
	cout<<"1. Grados->Radianes"<<endl;
	cout<<"2. Radianes ->Grados"<<endl;
	cout<<"Pulsa 1 o 2"<<endl;
	cin>>opcion;
	if(opcion==1) {
 		cout<<"Dame los grados: ";cin>>g;

 		GradosRadian transformador(g);
 		rads=transformador.transformarGrado(g);
 		cout<<"El angulo en radianes vale : PI / "<<rads<<endl;
 	}else{
 		cout<<"Dame los radianes (PI/3 = 1/3): "<<endl;
 		cin>>num>>den;

 		RadianGrado transformador2(num,den);
 		rgrados=transformador2.transformarRadian(num,den);
 		cout<<"Los radianes en angulo son : "<<rgrados<<" o "<<endl;
	}
	return 0;
}

