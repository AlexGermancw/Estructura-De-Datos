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

class Ingreso{

	public:
		int ingresarInt(char *);
};


int Ingreso::ingresarInt(char *message){
	bool flag=true;
	char caracter[]="";
	int contMenos=0;
	int i=0;
	int numero=0;
    printf("\n%s\n",message);

	do{
	    caracter[0]=getch();
		if((caracter[0]>=48 && caracter[0]<=57)){
			printf("%c",caracter[0]);
			numero=numero*10+atoi(caracter);
			i++;
		}else{
			if(caracter[0]==13){
				flag=false;
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
	}while(flag);
	if(contMenos>0)
        numero=numero*(-1);
	return numero;
}

