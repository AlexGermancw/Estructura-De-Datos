/***********************************************************************
 * Module:  Prototipo.cpp
 * Author:  ALEX
 * Modified: Wednesday, November 13, 2019 10:56:06 AM
 * Purpose: Implementation of the class Prototipo
 ***********************************************************************/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include "Persona.h"
#include "Nodo.h"
#include "Prototipo.h"
#include "Ingresar.h"
#include "ProcesoMail.h"
Persona ingresoPersona(int id);
int tamanioCadena(char* cad);
bool validar(char* cedula);

using namespace std;

int main()
{
    cout << "Hello world!" << endl;



    Prototipo *lista =new Prototipo();
    ProcesoMail procesar;
    Ingreso leer;
    int id=1;
    char opcion;
    do{
        Persona persona;
        persona=ingresoPersona(id);
        lista->insertarFinal(persona);
        cout<<"\n Presione cualquier tecla para continuar, ESC para salir, "<<endl;
        id++;
        opcion=getch();
    }while(opcion!=27);

    cout<<"Imprimir\n";
    lista->imprimir();

    system("pause");
    return 0;
}


Persona ingresoPersona(int id){

    Persona perIngreso;
    Ingreso lectura;
    perIngreso.setIdPersona(id);
    perIngreso.setNombre(lectura.ingresarLetras("Nombre :"));
    perIngreso.setApellido(lectura.ingresarLetras("Apellido: "));
    perIngreso.setCedula(lectura.ingresarCedula("Cedula: "));
    /*do{
        perIngreso.setCedula(lectura.ingresarCedula("Cedula: "));
    }while(!validar(perIngreso.getCedula()));
*/
    return perIngreso;
}


bool validar(char* cedula)
{
    bool verdadero=false;
    int arreglo[10];
    int sumaDigitos=0;
    int numeroRestar=0;
    int elementoFinal=0;
    int tam=tamanioCadena(cedula);
    cout<<endl<<cedula<<endl;
    cout<<tam<<endl;
    //char *numero;

    //numero=(char*)cedula.c_str();

    for(int i=0;i<tam;i++)
    {
        arreglo[i]=*(cedula+i)-48;
        cout<<arreglo[i]<<endl;
    }


    for(int i=0;i<9;i++){
        if(i==0){
            arreglo[i]=arreglo[i]*2;
            if(arreglo[i]>=10){
                arreglo[i]=arreglo[i]-9;
            }
        }

        if( (i%2==0) && (i != 0) ){
            arreglo[i]=arreglo[i]*2;
            if(arreglo[i]>=10){
                arreglo[i]=arreglo[i]-9;
            }
        }

        if( (i%2 != 0) && (i!=0) ){
            arreglo[i]=arreglo[i]*1;
            if(arreglo[i]>=10){
                arreglo[i]=arreglo[i]-9;
            }
        }

    }
    for(int i=0;i<9;i++){
        sumaDigitos=sumaDigitos+arreglo[i];
    }

    if(sumaDigitos >=20 && sumaDigitos<=29){
        numeroRestar=30-sumaDigitos;
    }

    if(sumaDigitos >=10 && sumaDigitos<=19){
        numeroRestar=20-sumaDigitos;
    }

    if(sumaDigitos >=30 && sumaDigitos<=39){
        numeroRestar=40-sumaDigitos;
    }

    elementoFinal=arreglo[9];
    if(numeroRestar == elementoFinal){
        cout<<"Tu cedula es correcta\n";
        return verdadero=true;
    }

    if(numeroRestar != elementoFinal){
        cout<<"Tu cedula es incorrecta\n";
        return verdadero=false;
    }
}


int tamanioCadena(char* cad){
    if(*cad=='\0'){
        return 0;
    }else{
        cad++;
        return 1+tamanioCadena(cad);
    }
}
