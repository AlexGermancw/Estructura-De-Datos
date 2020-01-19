/***********************************************************************
 * Module:  Lista.h
 * Author:  ALEX
 * Modified: Thursday, November 28, 2019 10:04:54 AM
 * Purpose: Declaration of the class Lista
 ***********************************************************************/

#if !defined(__listaDoble2_Lista_h)
#define __listaDoble2_Lista_h

#include "Nodo.h"

class Lista
{
public:
   void insertarInicio(Nodo *&nodo, int numero);
   void insertarFinal(Nodo* nodo, int numero);
   void insertarEntre(Nodo* nodo, int numero);
   void imprimir(Nodo* nodo);

protected:
private:

};

#endif
