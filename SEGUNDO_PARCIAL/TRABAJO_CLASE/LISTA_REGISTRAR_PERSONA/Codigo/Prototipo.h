/***********************************************************************
 * Module:  Prototipo.h
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 9:28:52 AM
 * Purpose: Declaration of the class Prototipo
 ***********************************************************************/

#if !defined(__Listas_Resgitro_Persona2_Prototipo_h)
#define __Listas_Resgitro_Persona2_Prototipo_h

#include "Nodo.h"
//#include "Persona.h"

class Prototipo
{
public:
   void insertarInicio(Persona persona);
   void insertarFinal(Persona persona);
   void imprimir(void);
   void buscar(char * nombre);
    bool vacio();
    Persona leerPersona();
    Nodo* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);
protected:
private:
   Nodo * siguiente;

};

#endif
