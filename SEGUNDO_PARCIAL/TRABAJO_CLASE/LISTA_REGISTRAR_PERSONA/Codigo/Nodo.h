/***********************************************************************
 * Module:  Nodo.h
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 9:28:52 AM
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Listas_Resgitro_Persona2_Nodo_h)
#define __Listas_Resgitro_Persona2_Nodo_h

#include "Persona.h"

class Nodo
{
public:
   Nodo();
   ~Nodo();
   Nodo(Persona newPersona, Nodo *newSiguiente);
   Persona getPersona(void);
   void setPersona(Persona newPersona);
   Nodo * getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);

protected:
private:
   Persona persona;
   Nodo * siguiente;

};

#endif
