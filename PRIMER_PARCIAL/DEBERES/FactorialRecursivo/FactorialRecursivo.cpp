/********************************************
    UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    NOMBRE: ALEX CHICAIZA
    NRC:2967
    DOCENTE: INGENIERO SOLIS
    FECHA DE CREACCION: 03/10/2019
    FECHA MODIFICACION: 10/10/2019
*********************************************/

#include "FactorialRecursivo.h"

/**
    implemetacion de la funcion factorialRecursivo
    */

int FactorialRecursivo::factorial(int numero){

    if(numero<=1){
        return 1;
    }
    else{
        numero=numero*factorial(numero-1);
    }
    return numero;

}
