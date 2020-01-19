/***********************************************************************
 * Module:  NodoCedula.h
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 11:20:54 AM
 * Purpose: Declaration of the class NodoCedula
 ***********************************************************************/

#if !defined(__listaNumero2_NodoCedula_h)
#define __listaNumero2_NodoCedula_h

class NodoCedula
{
public:
   NodoCedula();
   ~NodoCedula();
   NodoCedula *getSiguiente(void);
   void setSiguiente(NodoCedula* newSiguiente);
   NodoCedula(int newNumero, NodoCedula *newSiguiente);

protected:
private:
   int numero;
   NodoCedula *siguiente;


};

#endif
