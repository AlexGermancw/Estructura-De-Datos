/***********************************************************************
 * Module:  main.cpp
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 5:48:00 AM
 * Purpose: Implementation of the class main
 ***********************************************************************/

#include "Lista.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include<string.h>
#include<conio.h>
#include <fstream>

#include "Primo.h"

void *hiloNumeroPrimo(void* data);
void *hiloParar(void *data);
bool numeroPrimo(int numero, int validar);
bool bandera=true;
Lista *lista=new Lista();



using namespace std;

int main()
{
    cout << "NUMEROS PRIMOS!" << endl;
    fstream enter;
    enter.open("solucion.txt",fstream::out);
    enter<<"\tUNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE\n\n\t\tsolucion "<<endl<<endl;
    enter.close();

    pthread_t proceso1;
    pthread_t proceso2;
    pthread_create(&proceso1,NULL,&hiloNumeroPrimo,&lista);
    pthread_create(&proceso2,NULL,&hiloParar,NULL);
    pthread_join(proceso1,NULL);
    pthread_join(proceso2,NULL);

    enter.close();//CIERRA EL ARCHIVO ABIERTO EN hiloNumeroPrimo

    std::cout<<std::endl<<"IMPRESION LISTA"<<std::endl;
    lista->Imprimir();
    cout<<endl<<endl;

    system("pause");
    return 0;
}



void *hiloNumeroPrimo(void *data){
    Primo proceso;
    fstream enter;
    enter.open("solucion.txt",fstream::app);
    int numero=2;
    while(bandera){
        if(proceso.validarPrimo(numero,numero/2)){
            cout<<"\t"<<numero<<"  "<<endl;
            lista->InsertarFinal(numero);
            enter<<"\t"<<numero<<endl;
        }
        numero++;
        //_sleep(5);
    }
}



void *hiloParar(void *data){
    char tecla;
    while(true){
        tecla=getch();
        if(tecla==27){
            bandera=false;
            break;
        }
    }
}
