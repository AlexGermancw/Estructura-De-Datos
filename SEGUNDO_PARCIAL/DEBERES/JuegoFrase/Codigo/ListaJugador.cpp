/***********************************************************************
 * Module:  ListaJugador.cpp
 * Author:  ALEX
 * Modified: Thursday, November 21, 2019 8:53:22 AM
 * Purpose: Implementation of the class ListaJugador
 ***********************************************************************/

 #include<iostream>
#include<stdio.h>
#include<cstring>
#include <stdlib.h>
#include <cstddef>

#include "ListaJugador.h"

////////////////////////////////////////////////////////////////////////
// Name:       ListaJugador::insertarFinal(Jugador newJugador)
// Purpose:    Implementation of ListaJugador::insertarFinal()
// Parameters:
// - newJugador
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaJugador::insertarFinal(Jugador newJugador)
{
   if(vacio()){
		siguiente = new NodoJugador(newJugador, NULL);
	}
	else{
		NodoJugador *aux1 = new NodoJugador();
		aux1=siguiente;
		NodoJugador *aux2=new NodoJugador();
		while((aux1)!=NULL){
			aux2=aux1;
			aux1=aux1->getSiguiente();
		}
		NodoJugador *aux3=new NodoJugador(newJugador,NULL);
		aux2->setSiguiente(aux3);

	}
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaJugador::insertarInicio(Jugador newJugador)
// Purpose:    Implementation of ListaJugador::insertarInicio()
// Parameters:
// - newJugador
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaJugador::insertarInicio(Jugador newJugador)
{

   if(vacio()){
		siguiente = new NodoJugador(newJugador, NULL);
	}else{
		NodoJugador *aux = new NodoJugador();
		aux->setJugador(newJugador);
		aux->setSiguiente(siguiente);
		siguiente=aux;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaJugador::vacio()
// Purpose:    Implementation of ListaJugador::vacio()
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool ListaJugador::vacio(void)
{
   if(siguiente == NULL)
		return true;
	else
		return false;
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaJugador::imprimir()
// Purpose:    Implementation of ListaJugador::imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaJugador::imprimir(void)
{
    NodoJugador *aux = new NodoJugador();
	aux = siguiente;
	int cont=1;
	int salto=10;
	if(!vacio()){

		while(aux != NULL){
            std::cout<<"JUGADOR"<<aux->getJugador().getId()<<"\n";
            std::cout<<"\t"<<aux->getJugador().getFrase()<<"\n";
			aux = aux->getSiguiente();
			cont++;
		}

	}else {
		std::cout << "Lista vacia" << std::endl;
	}
}
