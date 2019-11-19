/***********************************************************************
 * Module:  Primo.h
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 5:48:00 AM
 * Purpose: Implementation of the class Primo
 ***********************************************************************/

#ifndef PRIMO_H
#define PRIMO_H

#include "Lista.h"
class Primo
{
public:
    Primo();
    virtual ~Primo();
    bool validarPrimo(int numero, int validar);
};

#endif // PRIMO_H
