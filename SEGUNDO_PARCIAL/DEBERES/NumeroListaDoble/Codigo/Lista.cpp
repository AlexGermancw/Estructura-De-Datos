/***********************************************************************
 * Module:  Lista.cpp
 * Author:  ALEX
 * Modified: Thursday, November 28, 2019 10:04:54 AM
 * Purpose: Implementation of the class Lista
 ***********************************************************************/

 #include <iostream>
#include "Lista.h"
#include "Nodo.h"


////////////////////////////////////////////////////////////////////////
// Name:       Lista::insertarInicio(Nodo* nodo, int numero)
// Purpose:    Implementation of Lista::insertarInicio()
// Parameters:
// - nodo
// - numero
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::insertarInicio(Nodo*& nodo, int numero)
{
    Nodo *newNodo=new Nodo();

    Nodo *aux=nodo;
    if(aux==NULL){
        newNodo->setNumero(numero);
        newNodo->setSiguiente(NULL);
        newNodo->setAnterior(NULL);
        nodo=newNodo;
    }else{

        newNodo->setNumero(numero);
        newNodo->setSiguiente(aux);
        newNodo->setAnterior(NULL);
        aux->setAnterior(newNodo);
        nodo=newNodo;
    }
    //std::cout<<aux->getAnterior()->getNumero()<<std::endl;

}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::insertarFinal(Nodo* nodo, int numero)
// Purpose:    Implementation of Lista::insertarFinal()
// Parameters:
// - nodo
// - numero
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::insertarFinal(Nodo* nodo, int numero)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::insertarEntre(Nodo* nodo, int numero)
// Purpose:    Implementation of Lista::insertarEntre()
// Parameters:
// - nodo
// - numero
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::insertarEntre(Nodo* nodo, int numero)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::imprimir(Nodo* nodo)
// Purpose:    Implementation of Lista::imprimir()
// Parameters:
// - nodo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::imprimir(Nodo*nodo)
{
   Nodo *aux=nodo;
   while(aux!=NULL){
        std::cout<<aux->getNumero()<<std::endl;
        aux=aux->getSiguiente();
   }
   //std::cout<<"qwe"<<std::endl;
}

/*int Biblioteca::buscarLibro(Nodo *&nodo, int idLibro)
{
    Nodo *aux = new Nodo();
    aux = nodo;
    int posicion=1, cont=0;
    while(aux != NULL)
    {
        if(aux->getlibro().getidLibro() == idLibro)
        {
            cout<<"Nombre del libro: "<<aux->getlibro().gettitulo()<<endl;
            cout<<"Encontrado en la posicion: "<<posicion<<endl;
            cont++;
        }
        posicion++;
        aux = aux->getSiguiente();
    }
    if(cont==0){
        cout<<"Nombre no encontrado"<<endl;
        return 0;
    }
        return posicion;
}
*/
