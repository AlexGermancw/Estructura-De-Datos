/***********************************************************************
 * Module:  NodoJugador.cpp
 * Author:  ALEX
 * Modified: Thursday, November 21, 2019 8:53:22 AM
 * Purpose: Implementation of the class NodoJugador
 ***********************************************************************/

#include "NodoJugador.h"
#include "Jugador.h"
////////////////////////////////////////////////////////////////////////
// Name:       NodoJugador::NodoJugador()
// Purpose:    Implementation of NodoJugador::NodoJugador()
// Return:
////////////////////////////////////////////////////////////////////////

NodoJugador::NodoJugador()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoJugador::~NodoJugador()
// Purpose:    Implementation of NodoJugador::~NodoJugador()
// Return:
////////////////////////////////////////////////////////////////////////

NodoJugador::~NodoJugador()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoJugador::Nodo(int newPersona, NodoJugador* newSiguiente)
// Purpose:    Implementation of NodoJugador::Nodo()
// Parameters:
// - newPersona
// - newSiguiente
// Return:     int
////////////////////////////////////////////////////////////////////////

NodoJugador::NodoJugador(Jugador newJugador, NodoJugador* newSiguiente)
{
   jugador=newJugador;
   siguiente=newSiguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoJugador::getJugador()
// Purpose:    Implementation of NodoJugador::getJugador()
// Return:     Jugador
////////////////////////////////////////////////////////////////////////

Jugador NodoJugador::getJugador(void)
{
   return jugador;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoJugador::setJugador(Jugador newJugador)
// Purpose:    Implementation of NodoJugador::setJugador()
// Parameters:
// - newJugador
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoJugador::setJugador(Jugador newJugador)
{
   jugador = newJugador;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoJugador::getSiguiente()
// Purpose:    Implementation of NodoJugador::getSiguiente()
// Return:     NodoJugador *
////////////////////////////////////////////////////////////////////////

NodoJugador * NodoJugador::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoJugador::setSiguiente(NodoJugador* newSiguiente)
// Purpose:    Implementation of NodoJugador::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoJugador::setSiguiente(NodoJugador* newSiguiente)
{
   siguiente = newSiguiente;
}
