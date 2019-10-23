

#include<stdlib.h>
#include<time.h>




class Matriz{

public:
        int **crearMatriz(int fila,int columna);
        void randomico(int ** m,int fila,int columna);
        void imprime(int **mat, int fila, int columna);
        void igualarMatriz(int ** m1,int ** m2,int fila);
        void proceso(int **mat1, int **mat2,int fila,int columna,int exp);

};


int **Matriz::crearMatriz(int fila,int columna)
{
    int ** m , j;
    m =(int **)malloc(fila*sizeof(int *));
    for(j=0;j<columna;j++)
        *(m+j)=(int *)malloc(columna*sizeof(int));
    return m;
}

void Matriz::randomico(int ** m,int fila,int columna)
{
    srand(time(NULL));
    int num;
    int i, j;
    for(i=0;i<fila;i++)
        for(j=0;j<columna;j++)
            (*(*(m+i)+j))=1;
    return;
}

void Matriz::imprime(int **mat, int fila, int columna)
{
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++)
		{
			printf(" %d  ",*(*(mat+i)+j));
			//printf("%*s",j+5,"");
		}
	printf("\n");
	}
}


//FUNCION PARA CALCULAR MULTIPLICACION DE MATRICES
void Matriz::proceso(int **mat1, int **mat2,int fila,int columna,int exp)
{
	//igualarMatriz(mat1,mat2,fila);

	//imprime(mat2,fila,fila);
	int**mAux;
	mAux=crearMatriz(fila,columna);
	for(int p=1;p<exp;p++)
    {
        for(int i=0;i<fila;i++){
            for(int j=0;j<columna;j++){
                    *(*(mat2+i)+j)=0;
            }
        }
    }

    for(int p=1;p<exp;p++)
    {
        for(int i=0;i<fila;i++){
            for(int j=0;j<columna;j++){
                    *(*(mAux+i)+j)=*(*(mat1+i)+j)+0;
            }
        }
    }

	for(int p=1;p<exp;p++)
    {
        for(int i=0;i<fila;i++){
            for(int j=0;j<columna;j++){
                for(int h=0;h<fila;h++){//pivote
                    *(*(mat2+i)+j)=*(*(mAux+i)+j)+(*(*(mat1+i)+h))*(*(*(mat2+h)+j));
                }
            }
        }
    }
}

void Matriz::igualarMatriz(int ** m1,int ** m2,int fila)
{
    printf("\n\n m2\n");
    int aux;
    int i, j;
    for(i=0;i<fila;i++)
        for(j=0;j<fila;j++){
            aux=*(*(m1+i)+j);
            printf("%i",aux);
            *(*(m2+i)+j)=aux;
            aux=0;

        }



    printf("\n\n m2\n");
    imprime(m2,fila,fila);
    return;
}
