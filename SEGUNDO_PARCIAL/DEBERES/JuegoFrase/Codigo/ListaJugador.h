/***********************************************************************
 * Module:  ListaJugador.h
 * Author:  ALEX
 * Modified: Thursday, November 21, 2019 8:53:22 AM
 * Purpose: Declaration of the class ListaJugador
 ***********************************************************************/

#if !defined(__Juego_Palabra_ListaJugador_h)
#define __Juego_Palabra_ListaJugador_h

#include "NodoJugador.h"
#include "Jugador.h"

class ListaJugador
{
public:
   void insertarFinal(Jugador newJugador);
   void insertarInicio(Jugador newJugador);
   bool vacio(void);
   void imprimir(void);

protected:
private:
   NodoJugador * siguiente;


};

#endif
