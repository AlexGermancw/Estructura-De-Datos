#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

void ingreso(int **mat, int t);
void imprime(int **mat, int t);
void proceso(int **mat1, int **mat2,int **matr, int t);

//FUNCION PARA INGRESAR LOS DATOS DE LA MATRIZ
void ingreso(int **mat, int t)
{
	for(int i=0;i<t;i++)
		for(int j=0;j<t;j++)
			scanf("%d",&(*(*(mat+i)+j)));
}


//FUNCION PARA CALCULAR MULTIPLICACION DE MATRICES
void proceso(int **mat1, int **mat2,int **matr, int t)
{
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			for(int h=0;h<t;h++){
				*(*(matr+i)+j)=*(*(matr+i)+j)+(*(*(mat1+i)+h))*(*(*(mat2+h)+j));
			}

		}
	}
}

//FUNCION IMPRESION DATOS DE LA MATRIZ
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

int **nmatriz(int d)
{
    int ** m , j;
    m =(int **)malloc(d*sizeof(int *));
    for(j=0;j<d;j++)
        *(m+j)=(int *)malloc(d*sizeof(int));
    return m;
}

void encerar(int ** m,int d)
{
    int i, j;
    for(i=0;i<d;i++)
        for(j=0;j<d;j++)
            *(*(m+i)+j)=0;
    return;
}



int main()
{
	int d;
	int **mat1, **mat2, **matr;
	printf("\nIngrese la dimension de la matriz: ");
	scanf("%d",&d);


	mat1=nmatriz(d);
	mat2=nmatriz(d);
	matr=nmatriz(d);
	encerar(matr,d);

	ingreso(mat1, d);
	ingreso(mat2, d);
	imprime(mat1, d);
	printf("\n");
	imprime(mat2, d);
	printf("\n");

	proceso(mat1,mat2,matr,d);
	imprime(matr,d);
	system("pause");
   return 0;
}
