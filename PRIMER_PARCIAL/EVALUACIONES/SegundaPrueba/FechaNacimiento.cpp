/***********************************************************************
 * Module:  FechaNacimiento.cpp
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Implementation of the class FechaNacimiento
 ***********************************************************************/

#include "FechaNacimiento.h"

#include<stdio.h>
#include<cstring>
#include <stdlib.h>
#include <cstddef>

////////////////////////////////////////////////////////////////////////
// Name:       FechaNacimiento::FechaNacimiento()
// Purpose:    Implementation of FechaNacimiento::FechaNacimiento()
// Return:
////////////////////////////////////////////////////////////////////////

FechaNacimiento::FechaNacimiento()
{

}

////////////////////////////////////////////////////////////////////////
// Name:       FechaNacimiento::~FechaNacimiento()
// Purpose:    Implementation of FechaNacimiento::~FechaNacimiento()
// Return:
////////////////////////////////////////////////////////////////////////

FechaNacimiento::~FechaNacimiento()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       FechaNacimiento::getDia()
// Purpose:    Implementation of FechaNacimiento::getDia()
// Return:     int
////////////////////////////////////////////////////////////////////////

int FechaNacimiento::getDia(void)
{
   return dia;
}

////////////////////////////////////////////////////////////////////////
// Name:       FechaNacimiento::setDia(int newDia)
// Purpose:    Implementation of FechaNacimiento::setDia()
// Parameters:
// - newDia
// Return:     void
////////////////////////////////////////////////////////////////////////

void FechaNacimiento::setDia(int newDia)
{
   dia = newDia;
}

////////////////////////////////////////////////////////////////////////
// Name:       FechaNacimiento::getMes()
// Purpose:    Implementation of FechaNacimiento::getMes()
// Return:     int
////////////////////////////////////////////////////////////////////////

int FechaNacimiento::getMes(void)
{
   return mes;
}

////////////////////////////////////////////////////////////////////////
// Name:       FechaNacimiento::setMes(int newMes)
// Purpose:    Implementation of FechaNacimiento::setMes()
// Parameters:
// - newMes
// Return:     void
////////////////////////////////////////////////////////////////////////

void FechaNacimiento::setMes(int newMes)
{
   mes = newMes;
}

////////////////////////////////////////////////////////////////////////
// Name:       FechaNacimiento::getAnio()
// Purpose:    Implementation of FechaNacimiento::getAnio()
// Return:     int
////////////////////////////////////////////////////////////////////////

int FechaNacimiento::getAnio(void)
{
   return anio;
}

////////////////////////////////////////////////////////////////////////
// Name:       FechaNacimiento::setAnio(int newAnio)
// Purpose:    Implementation of FechaNacimiento::setAnio()
// Parameters:
// - newAnio
// Return:     void
////////////////////////////////////////////////////////////////////////

void FechaNacimiento::setAnio(int newAnio)
{
   anio = newAnio;
}


bool FechaNacimiento::palindromoFecha(int dia,int mes,int anio){
    char * fecha = (char*) malloc (sizeof (char));
    char * diaChar = enteroToChar(dia);
    char * mesChar = enteroToChar(mes);
    char * anioChar  = enteroToChar(anio);

    if(dia<10){
        fecha[0]='0';
        fecha[1]=diaChar[0];
    }else{
        fecha[0]=diaChar[0];
        fecha[1]=diaChar[1];
    }
    if(mes<10){
        fecha[2]='0';
        fecha[3]=mesChar[0];
    }else{
        fecha[2]=mesChar[0];
        fecha[3]=mesChar[1];
    }
    for(int i=0;i<4;i++){
        fecha[i+4]=anioChar[i];
    }
    fecha[8]='\0';
    //printf("aqui: %s\n",fecha);
    for(int i=0;i<4;i++){
        if(*(fecha+i)!=*(fecha+7-i)){
            return false;
        }
        printf("\n%i",i);
    }
    return true;

}

char *FechaNacimiento::enteroToChar(int num){
    char* cad = new char;
    sprintf(cad,"%i",num);
    return cad;
}
