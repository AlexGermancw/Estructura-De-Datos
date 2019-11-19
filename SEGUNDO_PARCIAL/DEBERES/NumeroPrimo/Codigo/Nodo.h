/***********************************************************************
 * Module:  Nodo.h
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 5:50:45 AM
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__NumeroPrimo2_Nodo_h)
#define __NumeroPrimo2_Nodo_h

class Nodo
{
public:
    Nodo();
   ~Nodo();
   Nodo *getSiguiente(void);
   void setSiguiente(Nodo *newSiguiente);
   Nodo(int newNumero, Nodo *newSiguiente);
   int getNumero(void);
   void setNumero(int newNumero);
protected:
private:
   int numero;
   Nodo *siguiente;


};

#endif
