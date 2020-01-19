/***********************************************************************
 * Module:  Nodo.h
 * Author:  mabel
 * Modified: martes, 3 de diciembre de 2019 14:29:02
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__RepasoListasDobles2_Nodo_h)
#define __RepasoListasDobles2_Nodo_h

#include "Persona.h"

class Nodo
{
public:
   Nodo();
   ~Nodo();
   Persona getPersona(void);
   void setPersona(Persona newPersona);
   Nodo* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);
   Nodo* getAnterior(void);
   void setAnterior(Nodo* newAnterior);

protected:
private:
   Persona persona;
   Nodo* siguiente;
   Nodo* anterior;


};

#endif