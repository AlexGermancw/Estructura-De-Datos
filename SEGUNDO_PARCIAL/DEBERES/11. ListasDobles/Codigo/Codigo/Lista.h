/***********************************************************************
 * Module:  Lista.h
 * Author:  mabel
 * Modified: martes, 3 de diciembre de 2019 14:29:02
 * Purpose: Declaration of the class Lista
 ***********************************************************************/

#if !defined(__RepasoListasDobles2_Lista_h)
#define __RepasoListasDobles2_Lista_h

#include "Nodo.h"
#include "Persona.h"

class Lista
{
public:
   void insertarInicio(Persona newPersona);
   void insertarFinal(Persona newPersona);
   void eliminarInicio(void);
   void eliminarFinal(void);
   void eliminarPosicion(int posicion);
   bool vacio(void);
   bool buscarPersonaId(int id);
   int buscarPersonaNombre(string nombre);
   void imprimir(void);
   void modificar(int posicion);

protected:
private:
   Nodo* primero;
   Nodo* ultimo;


};

#endif