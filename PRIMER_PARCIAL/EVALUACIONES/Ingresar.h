/********************************************
    UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    NOMBRE: ALEX CHICAIZA
    NRC:2967
    DOCENTE: INGENIERO SOLIS
    FECHA DE CREACCION:23/09/2019
    FECHA MODIFICACION:
*********************************************/
/**
  *@file Ingresar.h
  *@version 1.0
  *@date 23/09/2019
  *@author Alex German Chicaiza
  *@title Ingreso de numero con validaciones
  */
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

//using namespace std;

class Ingreso{

	public:
		int ingresarInt(char *);
		float ingresarFloat(char *);
		char * ingresarTexto(char *);
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
	    if(caracter[0]==45 && contMenos==0 && i==0){/**lectura del signo menos*/
            printf("%c",caracter[0]);
            contMenos++;
            i++;
	    }
		if((caracter[0]>=48 && caracter[0]<=57)){/**lectura de numeros*/
			printf("%c",caracter[0]);
			numero=numero*10+atoi(caracter);
			i++;
		}else{
			if(caracter[0]==13){
				flag=false;
			}else{
				if(caracter[0]==8 && i>0){   /**borrar numeros*/
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

//numeros y punto tipo string
//de string a float
//como se crear los java docs en c++


float Ingreso::ingresarFloat(char *mensage){
	bool flag=true;
	char caracter[]="";
	int contMenos=0;
	int contPunto=0;
	int i=0;
	int numero=0;
    printf("\n%s\n",mensage);

	do{
	    caracter[0]=getch();
	    if(caracter[0]==45 && contMenos==0 && i==0){/**lectura del signo menos*/
            printf("%c",caracter[0]);
            contMenos++;
            i++;
	    }else{
            if(caracter[0]==46 && contPunto==0){/**lectura del signo punto*/
                printf("%c",caracter[0]);
                contPunto++;
                i++;
            }
	    }
		if((caracter[0]>=48 && caracter[0]<=57)){/**lectura de numeros*/
			printf("%c",caracter[0]);
			numero=numero*10+atoi(caracter);
			i++;
			if(contPunto>0)
                contPunto++;
		}else{
			if(caracter[0]==13){
				flag=false;
			}else{
				if(caracter[0]==8 && i>0){   /**borrar numeros*/
                    printf("\b \b");
                    i--;
                    contPunto--;
                    if(contPunto!=0)
                        numero=numero/10;
                    //std::cout<<" "<<numero;
                    if(i==0){
                        contMenos=0;
                        numero=0;
                        contPunto=0;
                    }else{
                        if(contPunto<=0)
                            contPunto=0;
                    }
				}
			}
		}
	}while(flag);

	float numeroFloat=(float)numero;
	while (contPunto-->1){
        numeroFloat=numeroFloat/10;
	}
	if(contMenos>0)
        numeroFloat=numeroFloat*(-1);
	return numeroFloat;
}


char * Ingreso::ingresarTexto(char * mensaje){
    bool flag=true;
	char caracter[]="";
	int contEspacio=0;
	int i=0;
	char *lectura = (char*) malloc (sizeof (char));
    printf("\n%s",mensaje);

	do{
	    caracter[0]=getch();
	    if(caracter[0]==32 && contEspacio==0){
            printf("%c",caracter[0]);
            lectura[i]=caracter[0];
            contEspacio++;
            i++;
	    }

	    if((caracter[0]>=65 && caracter[0]<=90)|| (caracter[0]>=97 && caracter[0]<=122)){
            printf("%c",caracter[0]);
            i++;
            lectura[i]=caracter[0];
            if(contEspacio>0){
                contEspacio++;
            }
		}else{
			if(caracter[0]==13){
				flag=false;
			}else{
				if(caracter[0]==8 && i>0){   /**borrar numeros*/
                    printf("\b \b");
                    i--;
                    if(i==0){
                        contEspacio=0;
                    }
                    if(contEspacio>0){
                        contEspacio--;
                    }
				}
			}
		}
	}while(flag);
	lectura[i]='\0';
	return lectura;

}
