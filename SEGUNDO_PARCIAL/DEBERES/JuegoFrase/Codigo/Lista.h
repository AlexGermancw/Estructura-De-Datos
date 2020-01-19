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
   void InsertarInicio(char* palabra);
   void InsertarFinal(char* palabra);
   void Imprimir(void);
   bool vacio(void);
   bool comparar(char* palabra);

protected:
private:
   Nodo *siguiente;


};

#endif
