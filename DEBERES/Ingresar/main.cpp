/***********************************************************************
  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
   NOMBRE: ALEX CHICAIZA
   NRC:2967
   DOCENTE: INGENIERO SOLIS
   FECHA DE CREACCION:30/09/2019
   FECHA MODIFICACION:
************************************************************************/

#include <iostream>
//#include "Dato.h"
#include "Ingresar.h"

using namespace std;

int main()
{
    Ingreso lectura;
    //int *a;
    float number;
    number=lectura.ingresarFloat("Ingrese un numero entero\n");
    cout<<endl<<number<<endl;
    //a=&number;
    //printf("\nvalor de a: %d\n",*a+10);

    system("pause");
    return 0;
}
