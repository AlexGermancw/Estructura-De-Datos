#include "NodoDoble.h"
#include "Nodo.h"
 #include <iostream>

NodoDoble::NodoDoble()
{
    primero=NULL;
    ultimo=NULL;
}

NodoDoble::~NodoDoble()
{
    //dtor
}



////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getSiguiente()
// Purpose:    Implementation of Nodo::getSiguiente()
// Return:     Nodo *
////////////////////////////////////////////////////////////////////////

Nodo * NodoDoble::getPrimero(void)
{
   return primero;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setSiguiente(Nodo* newSiguiente)
// Purpose:    Implementation of Nodo::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoDoble::setPrimero(Nodo* newPrimero)
{
   primero = newPrimero;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getAnterior()
// Purpose:    Implementation of Nodo::getAnterior()
// Return:     Nodo *
////////////////////////////////////////////////////////////////////////

Nodo * NodoDoble::getUltimo(void)
{
   return ultimo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setAnterior(Nodo* newAnterior)
// Purpose:    Implementation of Nodo::setAnterior()
// Parameters:
// - newAnterior
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoDoble::setUltimo(Nodo* newUltimo)
{
   ultimo = newUltimo;
}

