/***********************************************************************
 * Module:  ProcesoMail.cpp
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Implementation of the class ProcesoMail
 ***********************************************************************/

#include "ProcesoMail.h"
#include<stdio.h>
#include<cstring>
#include <stdlib.h>
#include <cstddef>
#include "Alumno.h"
////////////////////////////////////////////////////////////////////////
// Name:       ProcesoMail::cortarNombre(char * nombre)
// Purpose:    Implementation of ProcesoMail::cortarNombre()
// Parameters:
// - nombre
// Return:     char
////////////////////////////////////////////////////////////////////////

char *ProcesoMail::cortarNombre(char * nombre)
{
    int i=0;
    char *aux = (char*) malloc (sizeof (char));
    aux[0]=nombre[0];
    while(nombre[i]!=' ')
        i++;
    i++;
    aux[1]=nombre[i];
    //printf("%s\n",aux);
    return aux;
}

////////////////////////////////////////////////////////////////////////
// Name:       ProcesoMail::cortarApellido(char * apellido)
// Purpose:    Implementation of ProcesoMail::cortarApellido()
// Parameters:
// - apellido
// Return:     char *
////////////////////////////////////////////////////////////////////////

char *ProcesoMail::cortarApellido(char * apellido)
{
    int i=0;
    char *auxA = (char*) malloc (sizeof (char));

    while(apellido[i]!='\0' && apellido[i]!=' ')
    {
        auxA[i]=apellido[i];
        i++;
    }
    auxA[i]='\0';
    //printf("%s\n",auxA);
    return auxA;
}
////////////////////////////////////////////////////////////////////////
// Name:       ProcesoMail::generarMail(char * nombre, char * apellido, int num)
// Purpose:    Implementation of ProcesoMail::generarMail()
// Parameters:
// - nombre
// - apellido
// - num
// Return:     char *
////////////////////////////////////////////////////////////////////////

char * ProcesoMail::generarMail(char * nombre,char * apellido,int num)
{
   char *inNombre=cortarNombre(nombre);
    char *unApellido=cortarApellido(apellido);
    char dominio[]="@espe.edu.ec";

    char *aux = (char*) malloc (sizeof (char));
    aux[0]=inNombre[0];
    aux[1]=inNombre[1];
    int i=2,j=0;
    while(unApellido[j]!='\0'){
        aux[i]=unApellido[j];
        i++;
        j++;
    }

    j=0;
    if(num>0){
        char* cad = new char;
        sprintf(cad,"%i",num);
        while(cad[j]!='\0'){
            aux[i]=cad[j];
            i++;
            j++;
        }
    }

    j=0;
    while(dominio[j]!='\0'){
        aux[i]=dominio[j];
        i++;
        j++;
    }


    aux[i]='\0';
    free(inNombre);
    free(unApellido);
    strlwr(aux);
    //printf("%s\n",aux);
    return aux;

}

////////////////////////////////////////////////////////////////////////
// Name:       ProcesoMail::validarExistente(char * correo, Alumno* arr, int tam)
// Purpose:    Implementation of ProcesoMail::validarExistente()
// Parameters:
// - correo
// - arr
// - tam
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool ProcesoMail::validarExistente(char *correo,Alumno *arr,int tam)
{
    for(int i=0;i<tam;i++){
        if(strcmp(correo,(arr+i)->getMail())==0){
            return true;
        }
    }
    return false;
}

////////////////////////////////////////////////////////////////////////
// Name:       ProcesoMail::mail(Alumno * arr, int tam)
// Purpose:    Implementation of ProcesoMail::mail()
// Parameters:
// - arr
// - tam
// Return:     void
////////////////////////////////////////////////////////////////////////

void  ProcesoMail::mail(Alumno *arr, int tam)
{
    int j=0;
    for(int i=0;i<tam;i++){
        do{
            (arr+i)->setMail(generarMail((arr+i)->getNombre(),(arr+i)->getApellido(),j));
            j++;
        }while(validarExistente((arr+i)->getMail(),arr,i));
        j=0;
    }
}
