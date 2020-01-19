#ifndef INGRESAR_H_INCLUDED
#define INGRESAR_H_INCLUDED



#endif // INGRESAR_H_INCLUDED

#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

using namespace std;

class Ingresar{

	public:
		char *validar();
};

char *Ingresar:: validar(){
	bool flag=true;
	float valor=0.0;
	char caracter[]=" ";
	char lectura[50]=" ";
	int contPunto=0;
	char *datoChar;
	int i=0;

	while(flag){

		caracter[0] = getch();

		if((caracter[0]>=65 && caracter[0]<=90) || (caracter[0]>=97 && caracter[0]<=122) || caracter[0]>=32){
			i++;
			cout<<caracter;
			strcat(lectura,caracter);
		}else{
			if(caracter[0]==13){
				flag=false;
			}else{
				if(caracter[0]==8)
				cout<< "\b \b";
			}
		}
	}
	cout<<endl<<"k "<<lectura<<endl;
	//valor=atof(lectura);
	cout<<endl<<"s "<<valor<<endl;
	datoChar=lectura;
	return datoChar;
}
//numeros y punto tipo string
//de string a float
//como se crear los java docs en c++
