/***********************************************************************
 * Module:  Lista.h
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 5:50:45 AM
 * Purpose: Declaration of the class Lista
 ***********************************************************************/

#if !defined(__NumeroPrimo2_Lista_h)
#define __NumeroPrimo2_Lista_h

#include "Nodo.h"

class Lista
{
public:
   void InsertarInicio(int numero);
   void InsertarFinal(int numero);
   void Imprimir(void);
   int vacio(void);

protected:
private:
   Nodo *siguiente;


};

#endif
