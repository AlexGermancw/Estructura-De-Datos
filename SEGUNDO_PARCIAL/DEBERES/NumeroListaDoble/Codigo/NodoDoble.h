#ifndef NODODOBLE_H
#define NODODOBLE_H

#include "Nodo.h"
class NodoDoble
{
public:
    NodoDoble();
    ~NodoDoble();
    Nodo * getPrimero(void);
   void setPrimero(Nodo* newPrimero);
   Nodo * getUltimo(void);
   void setUltimo(Nodo* newUltimo);

protected:
private:
    Nodo* primero;
    Nodo* ultimo;

};

#endif // NODODOBLE_H
