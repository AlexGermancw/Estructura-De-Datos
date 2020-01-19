/***********************************************************************
 * Module:  NodoCedula.cpp
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 11:20:54 AM
 * Purpose: Implementation of the class NodoCedula
 ***********************************************************************/

#include "NodoCedula.h"

////////////////////////////////////////////////////////////////////////
// Name:       NodoCedula::NodoCedula()
// Purpose:    Implementation of NodoCedula::NodoCedula()
// Return:
////////////////////////////////////////////////////////////////////////

NodoCedula::NodoCedula()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoCedula::~NodoCedula()
// Purpose:    Implementation of NodoCedula::~NodoCedula()
// Return:
////////////////////////////////////////////////////////////////////////

NodoCedula::~NodoCedula()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoCedula::getSiguiente()
// Purpose:    Implementation of NodoCedula::getSiguiente()
// Return:     NodoCedula
////////////////////////////////////////////////////////////////////////

NodoCedula *NodoCedula::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoCedula::setSiguiente(NodoCedula newSiguiente)
// Purpose:    Implementation of NodoCedula::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoCedula::setSiguiente(NodoCedula *newSiguiente)
{
   siguiente = newSiguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoCedula::Nodo(int newNumero, NodoCedula newSiguiente)
// Purpose:    Implementation of NodoCedula::Nodo()
// Parameters:
// - newNumero
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

NodoCedula::NodoCedula(int newNumero, NodoCedula *newSiguiente)
{
   numero=newNumero;
   siguiente=newSiguiente;
}
