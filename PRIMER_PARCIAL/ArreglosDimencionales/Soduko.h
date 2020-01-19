

class Soduko{

public:
    bool validarPosicion(int **mat,int fila,int columna,int numero);
    void juego(int **mat);
    void llenarMatriz(int **mat,int fila,int columna,int numero);
    void imprime(int **mat);
    int **nmatriz(int d);
    void encerar(int ** m,int d);

};

int **nmatriz()
{
    int ** m , j;
    m =(int **)malloc(9*sizeof(int *));
    for(j=0;j<9;j++)
        *(m+j)=(int *)malloc(9*sizeof(int));
    return m;
}

void encerar(int **mat)
{
    int i, j;
    for(i=0;i<d;i++)
        for(j=0;j<d;j++)
            *(*(mat+i)+j)=0;
    return;
}

bool Soduko::validarPosicion(int **mat,int fila,int columna,int numero)
{

    /**verificar si el espacio ya se encuentra ocupado*/
    if(*(*(matr+fila)+columna))!=0) return false;


    /**verificar si el numero se encuentra en la fila o columna*/
    for(int i=0;i<9;i++)
    {
        if((*(*matr+fila)+i)==numero) return false;
        if((*(*matr+i)+columna)==numero) return false;
    }

    /**verificar si se encuentra en el cuadrante*/
    int filaCuadrante=fila/3;
    int columnaCuadrante=columna/3;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if((*(*matr+i)+j)==numero) return false;
        }
    }

    return true;
}

void Soduko::juego(int **mat){

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            for(int n=1;n<10;n++)
            {
                if(validarPosicion(mat,i,j))
                    *(*(mat+i)+j)=n;
            }
        }
    }

}


void Soduko::llenarMatriz(int **mat,int fila,int columna,int numero){

    if(validarPosicion(mat,numero,fila,columna,numero))
        *(*(mat+fila)+columna)=numero;
    else
        printf("Posiscion no valida");

}

void Soduko::imprime(int **mat)
{
    for(int i=0;i<9;i++)
    {
        if(i==3||j==7)
            printf("--------------------\n")

        for(int j=0;j<9;j++)
            if (j==3||j==7)
                printf(" | ")
            printf("%d",*(*(mat+i)+j));
			printf("%*s",j+5,"");
    }
	printf("\n");
}
