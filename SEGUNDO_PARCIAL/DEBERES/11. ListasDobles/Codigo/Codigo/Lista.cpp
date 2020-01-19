/***********************************************************************
 * Module:  Lista.cpp
 * Author:  mabel
 * Modified: martes, 3 de diciembre de 2019 14:29:02
 * Purpose: Implementation of the class Lista
 ***********************************************************************/

#include "Lista.h"
#include<iostream>

////////////////////////////////////////////////////////////////////////
// Name:       Lista::insertarInicio(Persona newPersona)
// Purpose:    Implementation of Lista::insertarInicio()
// Parameters:
// - newPersona
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::insertarInicio(Persona newPersona)
{
	
	if (vacio()) {
		primero->setPersona(newPersona);
		ultimo->setPersona(newPersona);
	}
	else {
		
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::insertarFinal(Persona newPersona)
// Purpose:    Implementation of Lista::insertarFinal()
// Parameters:
// - newPersona
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::insertarFinal(Persona newPersona)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::eliminarInicio()
// Purpose:    Implementation of Lista::eliminarInicio()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::eliminarInicio(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::eliminarFinal()
// Purpose:    Implementation of Lista::eliminarFinal()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::eliminarFinal(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::eliminarPosicion(int posicion)
// Purpose:    Implementation of Lista::eliminarPosicion()
// Parameters:
// - posicion
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::eliminarPosicion(int posicion)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::vacio()
// Purpose:    Implementation of Lista::vacio()
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool Lista::vacio(void)
{
	if (primero == NULL && ultimo == NULL) {
		return true;
	}
	else {
		return false;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::buscarPersonaId(int id)
// Purpose:    Implementation of Lista::buscarPersonaId()
// Parameters:
// - id
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool Lista::buscarPersonaId(int id)
{
	return false;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::buscarPersonaNombre(string nombre)
// Purpose:    Implementation of Lista::buscarPersonaNombre()
// Parameters:
// - nombre
// Return:     int
////////////////////////////////////////////////////////////////////////

int Lista::buscarPersonaNombre(string nombre)
{
	return 0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::imprimir()
// Purpose:    Implementation of Lista::imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::imprimir(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::modificar(int posicion)
// Purpose:    Implementation of Lista::modificar()
// Parameters:
// - posicion
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::modificar(int posicion)
{
   // TODO : implement
}