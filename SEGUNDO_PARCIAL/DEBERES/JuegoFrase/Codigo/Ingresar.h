/***********************************************************************
 * Module:  ListaJugador.h
 * Author:  ALEX
 * Modified: Thursday, November 21, 2019 8:53:22 AM
 * Purpose: Declaration of the class ListaJugador
 ***********************************************************************/
/**
    @file Ingresar.h
    @version 1.0
    @date 16/10/2019
    @author Alex
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
char * Ingreso ::ingresarLetras(char *mensage){
    printf("%s ",mensage);

	bool flag=true;
	char caracter[]="";
	char *lectura=(char*)malloc(sizeof(char));
	int i=0;

	while(flag){

		caracter[0]= getch();

		if((caracter[0]>=65 && caracter[0]<=90) || (caracter[0]>=97 && caracter[0]<=122) || caracter[0]==32)
		{
			std::cout<<caracter[0];
			*(lectura+i)=caracter[0];
			i++;
		}
		else
		{
			if(caracter[0]==13)
			{
				flag=false;
			}
			else
			{
				if(caracter[0]==8 && i>0)
				{
					*(lectura+i-1)='\0';
					std::cout<< "\b \b";
					i--;
				}
			}
		}
	}
	*(lectura+i)='\0';
	return lectura;

}
