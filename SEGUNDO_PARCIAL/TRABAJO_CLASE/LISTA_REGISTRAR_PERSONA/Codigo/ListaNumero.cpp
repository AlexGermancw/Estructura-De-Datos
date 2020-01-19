/***********************************************************************
 * Module:  ListaNumero.cpp
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 11:22:08 AM
 * Purpose: Implementation of the class ListaNumero
 ***********************************************************************/

#include<iostream>
#include <stdio.h>
#include<cstring>
#include <stdlib.h>
#include <cstddef>
#include<iostream>
#include "NodoCedula.h"
#include "ListaNumero.h"

////////////////////////////////////////////////////////////////////////
// Name:       ListaNumero::InsertarInicio(int numero)
// Purpose:    Implementation of ListaNumero::InsertarInicio()
// Parameters:
// - numero
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaNumero::InsertarInicio(int numero)
{
   if(vacio()){
		siguiente = new NodoCedula(numero, NULL);
	}else{
		NodoCedula *aux = new NodoCedula();
		aux->
		aux->setSiguiente(siguiente);
		siguiente=aux;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaNumero::InsertarFinal(int numero)
// Purpose:    Implementation of ListaNumero::InsertarFinal()
// Parameters:
// - numero
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaNumero::InsertarFinal(int numero)
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
// Name:       ListaNumero::Imprimir()
// Purpose:    Implementation of ListaNumero::Imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaNumero::Imprimir(void)
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
// Name:       ListaNumero::vacio()
// Purpose:    Implementation of ListaNumero::vacio()
// Return:     int
////////////////////////////////////////////////////////////////////////

int ListaNumero::vacio(void)
{
   if(siguiente == NULL)
		return true;
	else
		return false;
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaNumero::calcular(char * numeroChar)
// Purpose:    Implementation of ListaNumero::calcular()
// Parameters:
// - numeroChar
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaNumero::calcular(char * numeroChar)
{
   // TODO : implement
}
