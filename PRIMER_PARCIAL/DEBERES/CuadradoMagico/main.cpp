/********************************************
    UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    NOMBRE: ALEX CHICAIZA
    NRC:2967
    DOCENTE: INGENIERO SOLIS
    FECHA DE CREACCION:
    FECHA MODIFICACION: 11/2019
*********************************************/
#include <iostream>
#include "cuadrado.h"
#include "Ingreso.h"

using namespace std;

int main() {
    int numero;
    int **mat;
    Cuadrado cuadrado;
    Ingreso leer;
    do{
    numero = leer.ingresarInt("Ingrese tamaño de la matriz: ");
    }while(numero%2==0);
    cout<<endl;
    mat=cuadrado.nmatriz(numero);
    cuadrado.encerar(mat,numero);
    cuadrado.cuadradoMagicoImpar(mat, numero);
    cout<<"Cuadrado magico resuelto:"<<endl;
    cuadrado.imprimir(mat,numero);
    cout<<endl;
    system("pause");
    for(int i=0;i<numero;i++){
        delete[] mat[i];
    }
    delete[] mat;

    return 0;
}
