/********************************************
    UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    NOMBRE: ALEX CHICAIZA
    NRC:2967
    DOCENTE: INGENIERO SOLIS
    FECHA DE CREACCION: 03/10/2019
    FECHA MODIFICACION: 10/10/2019
*********************************************/



#include <iostream>
#include "FactorialRecursivo.h"
#include "Ingresar.h"


using namespace std;

int main()
{
    cout << "\n\t FACTORIAL RECURSIVO" << endl;

    FactorialRecursivo calcular;
    Ingreso lectura;
    int numero;
    int resultado;
    numero=lectura.ingresarInt(" Ingrese un numero entero: ");
    resultado=calcular.factorial(numero);
    cout<<"\n El factorial de "<<numero<<" es: "<<resultado;
    cout<<endl<<endl;

    system("pause");
    return 0;
}
