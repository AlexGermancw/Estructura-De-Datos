/***********************************************************************
 * Module:  Nodo.h
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 5:50:45 AM
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__NumeroPrimo2_Nodo_h)
#define __NumeroPrimo2_Nodo_h

class NodoNumero
{
public:
    NodoNumero();
   ~NodoNumero();
   NodoNumero *getSiguiente(void);
   void setSiguiente(NodoNumero *newSiguiente);
   NodoNumero(int newNumero, NodoNumero *newSiguiente);
   int getNumero(void);
   void setNumero(int newNumero);
protected:
private:
   int numero;
   NodoNumero *siguiente;


};

#endif
