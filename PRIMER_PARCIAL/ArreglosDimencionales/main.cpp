#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

void matrizIdentidad(int** matr, int tam);
int **nmatriz(int d);
void imprime(int **mat, int t);




void imprime(int **mat, int t)
{
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++)
		{
			printf("%d",*(*(mat+i)+j));
			printf("%*s",j+5,"");
		}
	printf("\n");
	}
}




void matrizIdentidad(int** matr, int tam)
{
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < tam; j++) {
			if (i == j) {
                *(*(matr+i)+j)=1;
			}
			else{
                *(*(matr+i)+j)=0;
			}
		}
	}
}


int **nmatriz(int d)
{
    int ** m , j;
    m =(int **)malloc(d*sizeof(int *));
    for(j=0;j<d;j++)
        *(m+j)=(int *)malloc(d*sizeof(int));
    return m;
}


int main()
{
    int d;
	int **mat;
	printf("\nIngrese la dimension de la matriz: ");
	scanf("%d",&d);

    mat=nmatriz(d);
    matrizIdentidad(mat,d);
    printf("\nMATRIS IDENTIDAD DE %i\n",d);
    imprime(mat,d);


    return 0;
}
