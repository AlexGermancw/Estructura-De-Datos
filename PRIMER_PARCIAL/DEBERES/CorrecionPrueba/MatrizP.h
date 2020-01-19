/********************************************
    UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    NOMBRE: ALEX CHICAIZA
    NRC:2967
    DOCENTE: INGENIERO SOLIS
    FECHA DE CREACCION:
    FECHA MODIFICACION: 11/2019
*********************************************/
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

class Matriz{
	private:
		int filas;
		int columnas;
		int** matriz;
	public:
		Matriz();
		Matriz(int,int);
		void setFilas(int);
		void setColumnas(int);
		void setMatriz(int**);
		int getFilas();
		int getColumnas();
		int** getMatriz();
		void crearMatriz();
		void llenarMatriz();
		void imprimirMatriz();
		void multiplicarMatriz(int);
		bool comprobarDimensionMatriz();
};

	Matriz::Matriz(int fil, int col){
		this->filas=fil;
		this->columnas=col;
	}

	Matriz::Matriz(){
	}

	void Matriz::setFilas(int fil){
		filas=fil;
	}

	void Matriz::setColumnas(int col){
		columnas=col;
	}

	void Matriz::setMatriz(int** mat){
		matriz=mat;
	}

	int Matriz::getFilas(){
		return filas;
	}

	int Matriz::getColumnas(){
		return columnas;
	}

	int** Matriz::getMatriz(){
		return matriz;
	}

	void Matriz::crearMatriz(){
    matriz =(int **)malloc(filas*sizeof(int *));
    for(int j=0;j<columnas;j++)
        *(matriz+j)=(int *)malloc(columnas*sizeof(int));
	}

	void Matriz::llenarMatriz(){
		srand(time(NULL));
    	for(int i=0;i<filas;i++)
        	for(int j=0;j<columnas;j++){
        		*(*(matriz+i)+j)=1;
			}

	}

	void Matriz::imprimirMatriz(){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++)
			{
				printf("%d",*(*(matriz+i)+j));
				printf("%*s",j+5,"");
			}
		printf("\n");
		}
	}

	void Matriz::multiplicarMatriz(int exponente){
		int** mT1;
		mT1 =(int **)malloc(filas*sizeof(int *));
    	for(int j=0;j<columnas;j++)
        	*(mT1+j)=(int *)malloc(columnas*sizeof(int));

		for(int i=0;i<filas;i++)
        	for(int j=0;j<columnas;j++){
        		*(*(mT1+i)+j)=*(*(matriz+i)+j);
			}

		for(int k=1;k<exponente;k++){
			int ** mT3;
			mT3 =(int **)malloc(filas*sizeof(int *));
    		for(int j=0;j<columnas;j++)
        		*(mT3+j)=(int *)malloc(columnas*sizeof(int));

			for(int i=0;i<filas;i++)
        	for(int j=0;j<columnas;j++){
        		*(*(mT3+i)+j)=0;
			}

			for(int i=0;i<filas;i++){
				for(int j=0;j<filas;j++){
					for(int h=0;h<filas;h++){
						*(*(mT3+i)+j)=*(*(mT3+i)+j)+(*(*(mT1+i)+h))*(*(*(matriz+h)+j));
					}
				}
			}
			matriz=mT3;
		}
	}
