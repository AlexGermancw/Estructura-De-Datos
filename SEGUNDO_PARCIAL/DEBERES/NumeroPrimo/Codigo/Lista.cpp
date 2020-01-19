/**********************************************************************
 * Module:  Lista.cpp
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 5:50:45 AM
 * Purpose: Implementation of the class Lista
 ***********************************************************************/

 #include<iostream>
#include "Lista.h"

////////////////////////////////////////////////////////////////////////
// Name:       Lista::InsertarInicio()
// Purpose:    Implementation of Lista::InsertarInicio()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::InsertarInicio(int numero)
{
	if(vacio()){
		siguiente = new Nodo(numero, NULL);
	}else{
		Nodo *aux = new Nodo();
		aux->setNumero(numero);
		aux->setSiguiente(siguiente);
		siguiente=aux;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::InsertarFinal()
// Purpose:    Implementation of Lista::InsertarFinal()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::InsertarFinal(int numero)
{
	if(vacio()){
		siguiente = new Nodo(numero, NULL);
	}
	else{
		Nodo *aux1 = new Nodo();
		aux1=siguiente;
		Nodo *aux2=new Nodo();
		while((aux1)!=NULL){
			aux2=aux1;
			aux1=aux1->getSiguiente();
		}
		Nodo *aux3=new Nodo(numero,NULL);
		aux2->setSiguiente(aux3);

	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::Imprimir()
// Purpose:    Implementation of Lista::Imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::Imprimir(void)
{
   Nodo *aux = new Nodo();
	aux = siguiente;
	int cont=1;
	int salto=10;
	if(!vacio()){

		while(aux != NULL){
            std::cout<<aux->getNumero()<<",\t";
			aux = aux->getSiguiente();
			cont++;
			if(cont>salto){
                std::cout<<std::endl;
                salto+=10;
			}
		}

	}else {
		std::cout << "Lista vacia" << std::endl;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::vacio()
// Purpose:    Implementation of Lista::vacio()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Lista::vacio(void)
{
    if(siguiente == NULL)
		return true;
	else
		return false;
}
