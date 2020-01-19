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
#include<conio.h>
#include<string.h>
#include<stdio.h>

using namespace std;

class Ingreso{
public:
    int ingresarEnteros(const char *);
    char ingresarLetras(const char *);

};
/**
    @brief ingresarEnteros
    @param *msg
    @return numero
*/
int Ingreso :: ingresarEnteros(const char *msg){
    bool bandera=true;
	char caracter[]="";
	int contMenos=0;
	int i=0;
	int numero=0;
    cout<< msg;

	do{
	    caracter[0]=_getch();

        if((caracter[0]>=48 && caracter[0]<=57)){
                cout << caracter[0];
                numero=numero*10+atoi(caracter);
                i++;
            }else{
                if(caracter[0]==13){
                    bandera=false;
                }else{
                    if(caracter[0]==8 && i>0){
                        printf("\b \b");
                        i--;
                        numero=numero/10;
                        if(i==0){
                            contMenos=0;
                            numero=0;
                        }
                    }
                }
            }
        }while(bandera);
        if(contMenos>0)
            numero=numero*(-1);
        return numero;
}

/**
    @brief ingresarLetras
    @param *msg
    @return palabra
*/
char Ingreso ::ingresarLetras(const char *msg){
    bool bandera = true;
    char letra[]="";
    char palabra;

	cout << msg;

    do{
        letra[0]=_getch();
        if(isalpha(letra[0])){
            cout<<letra[0];
            palabra = letra[0];
        }else{
            if(*letra==13){
                bandera=false;
            }else{
                if(letra[0]==8){
                    printf("\b \b");
                }
            }
        }
    }while(bandera);
    return palabra;
}
