/***********************************************************************
 * Module:  Nodo.h
 * Author:  ALEX
 * Modified: Thursday, November 28, 2019 10:04:54 AM
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__listaDoble2_Nodo_h)
#define __listaDoble2_Nodo_h

class Nodo
{
public:
   Nodo();
   ~Nodo();
   int getNumero(void);
   void setNumero(int newNumero);
   Nodo * getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);
   Nodo * getAnterior(void);
   void setAnterior(Nodo* newAnterior);

protected:
private:
   int numero;
   Nodo * siguiente;
   Nodo * anterior;


};

#endif