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
#include "Ingreso.h"
#include "fraccion.h"
using namespace std;

int main()
{
    float numerador,denominador,numerador2,denominador2;
    Fraccion frac1,frac2,resultado,*p_fracion,fraccion;
    Ingreso leer;
    cout<<"Programa fracciones TDA"<<endl<<endl;
    numerador=leer.ingresarFloat("Ingresa primer numerador: ");
    denominador=leer.ingresarFloat("Ingrese primer numerador: ");
    numerador2=leer.ingresarFloat("Ingresa el segundo numerador: ");
    denominador2=leer.ingresarFloat("Ingrese el segundo denominador: ");
    frac1 = Fraccion(numerador,denominador);
    frac2= Fraccion(numerador2,denominador2);
    fraccion=Fraccion();
    p_fracion=&fraccion;
    resultado = Fraccion();
    cout<<endl<<endl;
    cout<<"Primera fracccion: ";
    frac1.imprimir(frac1);
    cout<<"Segunda fracccion: ";
    frac2.imprimir(frac2);
    cout<<"Resultado 1: "<<endl;
    resultado=resultado.proceso(frac1,frac2);
    resultado.imprimir(resultado);
    cout<<"Resultado 2: "<<endl;
    fraccion.proceso2(frac1,frac2,p_fracion);
    fraccion.imprimir(*p_fracion);
    cout<<"Resultado 3: "<<endl;
    resultado.proceso3(frac1,frac2);
    cout<<endl;
    system("pause");
    return 0;
}
