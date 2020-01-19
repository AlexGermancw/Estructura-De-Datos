#include <iostream>

#include "Nodo.h"
#include "Lista.h"
#include "NodoDoble.h"

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    Nodo *nodo=new Nodo();
    nodo=NULL;
    Lista lista;

    lista.insertarInicio(nodo,1);
    lista.insertarInicio(nodo,2);
    lista.insertarInicio(nodo,3);
    lista.insertarInicio(nodo,4);
    lista.insertarInicio(nodo,5);
    lista.insertarInicio(nodo,1);
    lista.insertarInicio(nodo,2);
    lista.insertarInicio(nodo,3);
    lista.insertarInicio(nodo,4);
    lista.insertarInicio(nodo,23);
    lista.imprimir(nodo);

    return 0;
}
