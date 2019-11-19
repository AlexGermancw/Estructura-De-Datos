/***********************************************************************
 * Module:  Prototipo.cpp
 * Author:  ALEX
 * Modified: Wednesday, November 13, 2019 10:56:06 AM
 * Purpose: Implementation of the class Prototipo
 ***********************************************************************/

#include "Prototipo.h"
#include<iostream>
#include <stdio.h>

////////////////////////////////////////////////////////////////////////
// Name:       Prototipo::insertarInicio(Nodo* nodo)
// Purpose:    Implementation of Prototipo::insertarInicio()
// Parameters:
// - nodo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Prototipo::insertarInicio(Nodo* lista,Persona persona)
{
   /*Persona _persona;
	_persona = leerPersona();
	if(vacio()){
		siguiente = new Nodo(_persona, NULL);
	}else{
		Nodo *aux = new Nodo();
		aux->setPersona(_persona);
		aux->setSiguiente(siguiente);
		siguiente = aux;
	}*/
    Nodo* q;
    q = new Nodo();
    q->persona = persona;
    q->siguiente = lista;
    lista  = q;
}

////////////////////////////////////////////////////////////////////////
// Name:       Prototipo::insertarFinal(Nodo* nodo)
// Purpose:    Implementation of Prototipo::insertarFinal()
// Parameters:
// - nodo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Prototipo::insertarFinal(Nodo* nodo)
{
   printf("nombre: %s", nodo->persona.getNombre());
}

////////////////////////////////////////////////////////////////////////
// Name:       Prototipo::imprimir(Nodo* nodo)
// Purpose:    Implementation of Prototipo::imprimir()
// Parameters:
// - nodo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Prototipo::imprimir(Nodo nodo)
{
   printf("nombre: %s",nodo.persona.getNombre());
}
