/***********************************************************************
 * Module:  Nodo.cpp
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 5:48:00 AM
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/

#include "NodoNumero.h"

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo()
// Purpose:    Implementation of Nodo::Nodo()
// Return:
////////////////////////////////////////////////////////////////////////

NodoNumero::NodoNumero()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::~Nodo()
// Purpose:    Implementation of Nodo::~Nodo()
// Return:
////////////////////////////////////////////////////////////////////////

NodoNumero::~NodoNumero()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getSiguiente()
// Purpose:    Implementation of Nodo::getSiguiente()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

NodoNumero *NodoNumero::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setSiguiente(Nodo newSiguiente)
// Purpose:    Implementation of Nodo::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoNumero::setSiguiente(NodoNumero *newSiguiente)
{
   siguiente = newSiguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo(int newNumero, Nodo newSiguiente)
// Purpose:    Implementation of Nodo::Nodo()
// Parameters:
// - newNumero
// - newSiguiente
// Return:
////////////////////////////////////////////////////////////////////////

NodoNumero::NodoNumero(int newNumero, NodoNumero *newSiguiente)
{
   numero=newNumero;
   siguiente=newSiguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getNumero()
// Purpose:    Implementation of Nodo::getNumero()
// Return:     int
////////////////////////////////////////////////////////////////////////

int NodoNumero::getNumero(void)
{
   return numero;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setNumero(int newNumero)
// Purpose:    Implementation of Nodo::setNumero()
// Parameters:
// - newNumero
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoNumero::setNumero(int newNumero)
{
   numero = newNumero;
}
