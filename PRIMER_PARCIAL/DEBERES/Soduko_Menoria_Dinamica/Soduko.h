#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include<time.h>

class Soduko{

public:
    bool validarPosicion(int **mat,int fila,int columna,int numero);
    void juego(int **mat);
    void llenarMatriz(int **mat,int fila,int columna,int numero);
    void imprime(int **mat);
    int **crearMatriz();
    void encerar(int ** m);

};

int **Soduko::crearMatriz()
{
    int ** m , j;
    m =(int **)malloc(9*sizeof(int *));
    for(j=0;j<9;j++)
        *(m+j)=(int *)malloc(9*sizeof(int));
    return m;
}

void Soduko::encerar(int **mat)
{
    int i, j;
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            *(*(mat+i)+j)=0;
    return;
}

bool Soduko::validarPosicion(int **mat,int fila,int columna,int numero)
{
    //std::cout<<numero<<std::endl;
    //printf("   %d\n",*(*(mat+fila)+columna));
    /**verificar si el espacio ya se encuentra ocupado*/
    if(*(*(mat+fila)+columna)!=0)
        return false;

    /**verificar si el numero se encuentra en la fila o columna*/
    for(int i=0;i<9;i++)
    {
        if(*(*(mat+fila)+i)==numero){
            //printf("f %i c %i\n",fila,i);
            return false;
        }

        if(*(*(mat+i)+columna)==numero)
        {
            //printf("f %i c %i\n",i,columna);
            return false;
        }

    }

    /**verificar si se encuentra en el cuadrante*/
    int filaCuadrante=0;
    int columnaCuadrante=0;
    if(fila>=3 && fila<=5)
        filaCuadrante=3;
    if(fila>=6 && fila<=8)
        filaCuadrante=6;

    if(columna>=3 && columna<=5)
        columnaCuadrante=3;
    if(columna>=6 && columna<=8)
        columnaCuadrante=6;

    for(int i=filaCuadrante;i<filaCuadrante+3;i++)
    {
        for(int j=columnaCuadrante;j<columnaCuadrante+3;j++)
        {
            if(*(*(mat+i)+j)==numero)
                return false;
        }
    }

    return true;
}


/*void Soduko::juego(int **mat){
    srand(time(NULL));
    int numero,resta=5;
    while(resta>0)
    {
        numero=1+rand()%(9);
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(validarPosicion(mat,i,j,numero)==true)
                {
                    *(*(mat+i)+j)=numero;
                    resta--;
                }
            }
        }
    }

}*/
void Soduko::juego(int **mat){

    int num,inicio=1;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            for(num=1;num<10;num++)
            {
                if(validarPosicion(mat,i,j,num))
                {
                    *(*(mat+i)+j)=num;
                    break;
                }
            }
            if(num>=9)
                inicio=1;
            else
                inicio=num;
        }
        inicio=1;
    }

}


void Soduko::llenarMatriz(int **mat,int fila,int columna,int numero){

    if(validarPosicion(mat,fila,columna,numero))
        *(*(mat+fila)+columna)=numero;
    else
        printf("Posiscion no valida");

}

void Soduko::imprime(int **mat)
{
    for(int i=0;i<9;i++)
    {
        if(i==3||i==6)
            printf(" ----------------------------------------\n");

        for(int j=0;j<9;j++)
        {

            if (j==3||j==6)
                printf(" |");
            printf("   %d",*(*(mat+i)+j));
			//printf("%*s",j+5,"");
        }
        printf("\n");
    }

}
