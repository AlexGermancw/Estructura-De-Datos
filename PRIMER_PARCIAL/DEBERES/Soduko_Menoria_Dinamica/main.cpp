#include <iostream>
#include "Soduko.h"

using namespace std;

int main()
{
    Soduko obj;
    int **mat;

    mat=obj.crearMatriz();
    obj.encerar(mat);
    obj.imprime(mat);
    cout<<endl<<endl<<"Aqui"<<endl;
    *(*(mat+0)+0)=5;
    obj.juego(mat);
    obj.imprime(mat);
    cout<<endl<<endl<<"Aqui"<<endl;
    obj.juego(mat);
    obj.imprime(mat);
    free(mat);
    return 0;
}
