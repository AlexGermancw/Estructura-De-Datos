/***********************************************************************
 * Module:  Prototipo.h
 * Author:  ALEX
 * Modified: Wednesday, November 13, 2019 10:56:06 AM
 * Purpose: Declaration of the class Prototipo
 ***********************************************************************/

#if !defined(__Listas_Resgitro_Persona2_Prototipo_h)
#define __Listas_Resgitro_Persona2_Prototipo_h

#include "Nodo.h"
#include "Persona.h"

class Prototipo
{
public:
   void insertarInicio(Nodo* lista,Persona persona);
   void insertarFinal(Nodo* nodo);
   void imprimir(Nodo nodo);

protected:
private:

};

#endif
