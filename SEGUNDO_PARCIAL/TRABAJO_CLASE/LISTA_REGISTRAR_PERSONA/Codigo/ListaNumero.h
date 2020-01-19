/***********************************************************************
 * Module:  ListaNumero.h
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 11:22:08 AM
 * Purpose: Declaration of the class ListaNumero
 ***********************************************************************/

#if !defined(__listaNumero2_ListaNumero_h)
#define __listaNumero2_ListaNumero_h

#include "NodoCedula.h"

class ListaNumero
{
public:
   void InsertarInicio(int numero);
   void InsertarFinal(int numero);
   void Imprimir(void);
   int vacio(void);
   void calcular(char * numeroChar);

protected:
private:
   NodoCedula *siguiente;


};

#endif
