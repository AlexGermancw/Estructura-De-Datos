/**
	Universidad de las Fuerzas Armadas ESPE
    Maria Belen Ceron
    NRC: 2967
    Fecha creacion: 23/09/2019
	Fecha ultima modificacion:	16/10/2019
	Docente: Ing. Solis
*/
/**
    @file Ingresar.h
    @version 1.0
    @date 16/10/2019
    @author Maria Belen Ceron
    @title Validacion de Ingresos
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

using namespace std;

class Ingreso{
public:
    int ingresarEnteros(char *);
    char* ingresarLetras(char *);

};
/**
    @brief ingresarEnteros
    @param *msg
    @return numero
*/
int Ingreso :: ingresarEnteros(char *msg){
    bool bandera=true;
	char caracter[]="";
	int contMenos=0;
	int i=0;
	int numero=0;
    printf("\n%s ",msg);

	do{
	    caracter[0]=getch();

        if((caracter[0]>=48 && caracter[0]<=57)){
                printf("%c",caracter[0]);
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
char * Ingreso ::ingresarLetras(char *msg){
    bool bandera = true;
    char letra[]="";
    char *palabra=(char*) malloc (sizeof (char));
    int i=0;

    printf("\n%s",msg);

    do{
        letra[0]=getch();
        if(isalpha(letra[0]) || letra[0]==32){
            cout<<letra[0];
            palabra[i] = letra[0];
            i++;
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
    palabra[i] = '\0';
    return palabra;
}
