/***********************************************************************
 * Module:  NodoJugador.h
 * Author:  ALEX
 * Modified: Thursday, November 21, 2019 8:53:22 AM
 * Purpose: Declaration of the class NodoJugador
 ***********************************************************************/

#if !defined(__Juego_Palabra_NodoJugador_h)
#define __Juego_Palabra_NodoJugador_h

#include "Jugador.h"

class NodoJugador
{
public:
   NodoJugador();
   ~NodoJugador();
   NodoJugador(Jugador newJugador, NodoJugador* newSiguiente);
   Jugador getJugador(void);
   void setJugador(Jugador newJugador);
   NodoJugador * getSiguiente(void);
   void setSiguiente(NodoJugador* newSiguiente);

protected:
private:
   Jugador jugador;
   NodoJugador * siguiente;


};

#endif
