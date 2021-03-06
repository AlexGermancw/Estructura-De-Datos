/***********************************************************************
 * Module:  Nodo.cpp
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 9:28:52 AM
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/

#include "Nodo.h"

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo()
// Purpose:    Implementation of Nodo::Nodo()
// Return:
////////////////////////////////////////////////////////////////////////

Nodo::Nodo()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::~Nodo()
// Purpose:    Implementation of Nodo::~Nodo()
// Return:
////////////////////////////////////////////////////////////////////////

Nodo::~Nodo()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo(Persona newPersona, Nodo newSiguiente)
// Purpose:    Implementation of Nodo::Nodo()
// Parameters:
// - newPersona
// - newSiguiente
// Return:
////////////////////////////////////////////////////////////////////////

Nodo::Nodo(Persona newPersona, Nodo *newSiguiente)
{
   persona=newPersona;
   siguiente=newSiguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getPersona()
// Purpose:    Implementation of Nodo::getPersona()
// Return:     Persona
////////////////////////////////////////////////////////////////////////

Persona Nodo::getPersona(void)
{
   return persona;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setPersona(Persona newPersona)
// Purpose:    Implementation of Nodo::setPersona()
// Parameters:
// - newPersona
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setPersona(Persona ewPersona)
{
   persona = ewPersona;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getSiguiente()
// Purpose:    Implementation of Nodo::getSiguiente()
// Return:     Nodo *
////////////////////////////////////////////////////////////////////////

Nodo * Nodo::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setSiguiente(Nodo* newSiguiente)
// Purpose:    Implementation of Nodo::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setSiguiente(Nodo* newSiguiente)
{
   siguiente = newSiguiente;
}
