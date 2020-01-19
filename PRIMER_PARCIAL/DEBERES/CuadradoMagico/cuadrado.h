/********************************************
    UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    NOMBRE: ALEX CHICAIZA
    NRC:2967
    DOCENTE: INGENIERO SOLIS
    FECHA DE CREACCION:
    FECHA MODIFICACION: 11/2019
*********************************************/
#include <iostream>

using namespace std;
class Cuadrado{
    public:
        void cuadradoMagicoImpar(int **mat, int num);
        void encerar(int **mat, int dim );
        void imprimir(int **mat, int dim);
        int **nmatriz(int dim);
};

void Cuadrado::cuadradoMagicoImpar(int **mat, int num){
    int numero;
    int fila;
    int col;
    int mitad;
    int posAnteriorFila=0;
    int posAnteriorCol=0;
    mitad= num / 2;
    for(fila=0, col=mitad, numero=1; numero <= (num * num); numero++){
        *(*(mat+fila)+col) = numero;
        posAnteriorFila=fila;
        posAnteriorCol=col;
        fila--;
        col++;
        if(fila < 0){
            fila = num -1;
        }
        if(col == num){
            col =0;
        }
        if(*(*(mat+fila)+col) != 0){
            fila=posAnteriorFila;
            col=posAnteriorCol;
            fila++;
        }
    }

}

int **Cuadrado::nmatriz(int dim){
    int ** m , j;
    m = new int*[dim];
    for(j=0;j<dim;j++)
        *(m+j) = new int[dim];
    return m;
}

void Cuadrado::encerar(int **mat,int dim){
    for(int fila=0;fila<dim;fila++){
        for(int col=0;col<dim;col++){
            *(*(mat+fila)+col) = 0;
        }
    }
}

void Cuadrado::imprimir(int **mat,int dim){
    for(int fila=0;fila<dim;fila++){
        for(int col=0;col<dim;col++){
            cout<<*(*(mat+fila)+col)<<"\t";
        }
        cout<<""<<endl;
    }
}


