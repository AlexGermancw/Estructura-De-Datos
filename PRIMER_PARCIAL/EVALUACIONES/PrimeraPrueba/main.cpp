/********************************************
    UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
        PRUEBA
    NOMBRE: ALEX CHICAIZA
    NRC:2967
    DOCENTE: INGENIERO SOLIS
    FECHA DE CREACCION: 23/09/2019
    FECHA MODIFICACION: 10/10/2019
*********************************************/

#include <iostream>
#include "Ingresar.h"
#include "Matriz.h"

using namespace std;

int main()
{
    Ingreso lectura;
    Matriz proceso;

    int **matriz;
    int **matPotencia;

    int fila;
    int columna;
    int expo;
    do{
        fila=lectura.ingresarInt("Ingrese un numero entero del 1 al 10");
    }while(fila<1 || fila>10);
    do{
        columna=lectura.ingresarInt("Ingrese un numero entero del 1 al 10");
    }while(columna<1 || columna>10);

    do{
        expo=lectura.ingresarInt("Ingrese un numero exponente del 1 al 10");
    }while(columna<1 || columna>10);

    matriz=proceso.crearMatriz(fila,columna);
    matPotencia=proceso.crearMatriz(fila,columna);
    proceso.randomico(matriz,fila,columna);

    printf("\n\n");

    proceso.imprime(matriz,fila,columna);
    proceso.proceso(matriz,matPotencia,fila,columna,expo);
    printf("\n\n");
    proceso.imprime(matPotencia,fila,columna);

    free(matriz);
    free(matPotencia);

    return 0;
}
