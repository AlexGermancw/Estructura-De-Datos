/***********************************************************************
 * Module:  Arreglo.h
 * Author:  ALEX
 * Modified: Tuesday, November 5, 2019 10:35:18 PM
 * Purpose: Main
 ***********************************************************************/
#include <iostream>
#include<stdlib.h>
#include <stdio.h>
#include "Arreglo.h"
#include "Alumno.h"
#include "ProcesoMail.h"
#include "Ingresar.h"
using namespace std;


int main()
{
    cout << "Hello world!" << endl;
    Alumno *estudiante;
    Ingreso lectura;
    Arreglo arreglo;
    int tam=1;

    tam=lectura.ingresarEnteros("Ingrese el numero de estudiantes: ");

    estudiante=new Alumno[tam];

    //int *m=(estudiante+0)->fechaNacimiento->fechaArreglo(1,5,2015);
    //printf("dd: %d",*m);

    /**Ingreso de datos de objeto*/

    for(int i=0;i<tam;i++){
        cout<<"\nAlumno "<<i+1<<endl;
        (estudiante+i)->setNombre(lectura.ingresarLetras("Nombre: "));
        (estudiante+i)->setApellido(lectura.ingresarLetras("Apellido: "));
        //(estudiante+i)->fechaNacimiento->setDia(lectura.ingresarEnteros("Dia: "));
        //(estudiante+i)->fechaNacimiento->setMes(lectura.ingresarEnteros("Mes: "));
        //(estudiante+i)->fechaNacimiento->setAnio(lectura.ingresarEnteros("Anio: "));
    }

    cout<<endl<<endl;


    estudiante->procesoMail->mail(estudiante,tam);

    /**Impresion de datos del objeto*/

    for(int i=0;i<tam;i++){
        cout<<i+1<<endl;
        cout<<"  Nombre:\t"<<(estudiante+i)->getNombre()<<endl;
        cout<<"  Apellido:\t"<<(estudiante+i)->getApellido()<<endl;
        cout<<"  Coreo:\t"<<(estudiante+i)->getMail()<<endl;
        //cout<<"  fecha:\t"<<(estudiante+i)->fechaNacimiento->getDia()<<endl;
    }

    /**
     * implementcion
     * imvertir nombre
     **/
    int tamArr=0;
    for(int i=0;i<tam;i++){
        tamArr=arreglo.tamanioCadena((estudiante+i)->getNombre());
        char * fraseInver=(char*)malloc(tamArr*sizeof(char));
        arreglo.invertirCadena((estudiante+i)->getNombre(),fraseInver,0,tamArr-1);
        (estudiante+i)->setNombre(fraseInver);
    }

    for(int i=0;i<tam;i++){
        cout<<i+1<<"  Nombre invert:\t"<<(estudiante+i)->getNombre()<<endl;
    }

     /*if((estudiante+0)->fechaNacimiento->palindromoFecha(11,11,1111)){
        printf("\nEs palindromo\n");
    }else{
        printf("\nNo Es palindromo\n");
    }*/

    delete(estudiante);
    printf("Jessy\n");
    system("pause");
    return 0;
}
