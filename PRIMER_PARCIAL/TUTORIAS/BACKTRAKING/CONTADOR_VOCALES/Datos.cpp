/***********************************************************************
 *  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

 * NRC:     2967
 * Module:  Datos.cpp
 * Author:  ALEX CHICAIZA
            MARIA BELEN CERON
            ELIAN LLORENTE
 * Docente: INGENIERO EDGAR FERNANDO SOLIS ACOSTA
 * Modified: Monday, October 28, 2019 11:10:04 AM
 * Purpose: Implementation of the class Datos
 ***********************************************************************/

#include "Datos.h"
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include <stdio.h>
////////////////////////////////////////////////////////////////////////
// Name:       Datos::Datos()
// Purpose:    Implementation of Datos::Datos()
// Return:
////////////////////////////////////////////////////////////////////////

Datos::Datos()
{
    dato=" ";
}


////////////////////////////////////////////////////////////////////////
// Name:       Datos::~Datos()
// Purpose:    Implementation of Datos::~Datos()
// Return:
////////////////////////////////////////////////////////////////////////

Datos::~Datos()
{
   free(dato);
}

////////////////////////////////////////////////////////////////////////
// Name:       Datos::getDato()
// Purpose:    Implementation of Datos::getDato()
// Return:     char
////////////////////////////////////////////////////////////////////////

char *Datos::getDato(void)
{
   return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Datos::setDato(char newDato)
// Purpose:    Implementation of Datos::setDato()
// Parameters:
// - newDato
// Return:     void
////////////////////////////////////////////////////////////////////////

void Datos::setDato(char *newDato)
{
   dato = newDato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Datos::contadorVocales()
// Purpose:    Implementation of Datos::contadorVocales()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Datos::contadorVocales(char* cvCadenaTexto)
{
    if(*cvCadenaTexto == '\0') {
        return 0;
    }
    if((*cvCadenaTexto == 'A')||(*cvCadenaTexto == 'E')
        ||(*cvCadenaTexto == 'I')||(*cvCadenaTexto == 'O')
        ||(*cvCadenaTexto == 'U')) {
        return 1 + contadorVocales((++cvCadenaTexto));
    }else {
        return 0 + contadorVocales((++cvCadenaTexto));
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Datos::imprimir()
// Purpose:    Implementation of Datos::imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Datos::imprimir(void)
{
   // TODO : implement
   printf("Dato: %s",getDato());
}
