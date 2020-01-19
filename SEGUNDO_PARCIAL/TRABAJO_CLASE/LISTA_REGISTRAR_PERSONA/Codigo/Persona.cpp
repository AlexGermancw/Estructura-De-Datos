/***********************************************************************
 * Module:  Persona.cpp
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 9:28:52 AM
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include "Persona.h"
#include<iostream>
#include <stdio.h>
////////////////////////////////////////////////////////////////////////
// Name:       Persona::Persona()
// Purpose:    Implementation of Persona::Persona()
// Return:
////////////////////////////////////////////////////////////////////////

Persona::Persona()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::~Persona()
// Purpose:    Implementation of Persona::~Persona()
// Return:
////////////////////////////////////////////////////////////////////////

Persona::~Persona()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getApellido()
// Purpose:    Implementation of Persona::getApellido()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

char* Persona::getApellido(void)
{
   return apellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setApellido(std::string newApellido)
// Purpose:    Implementation of Persona::setApellido()
// Parameters:
// - newApellido
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setApellido(char* newApellido)
{
   apellido = newApellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getCedula()
// Purpose:    Implementation of Persona::getCedula()
// Return:     int
////////////////////////////////////////////////////////////////////////

char* Persona::getCedula(void)
{
   return cedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setCedula(int newCedula)
// Purpose:    Implementation of Persona::setCedula()
// Parameters:
// - newCedula
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setCedula(char* newCedula)
{
   cedula = newCedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getNombre()
// Purpose:    Implementation of Persona::getNombre()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

char* Persona::getNombre(void)
{
   return nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setNombre(std::string newNombre)
// Purpose:    Implementation of Persona::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setNombre(char* newNombre)
{
   nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getIdPersona()
// Purpose:    Implementation of Persona::getIdPersona()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Persona::getIdPersona(void)
{
   return idPersona;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setIdPersona(int newIdPersona)
// Purpose:    Implementation of Persona::setIdPersona()
// Parameters:
// - newIdPersona
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setIdPersona(int newIdPersona)
{
   idPersona = newIdPersona;
}


void Persona::imprimirPersona() {
    printf("Nombre: %s",nombre);
	std::cout << "Nombre:" << nombre << std::endl;
	std::cout << "Apellido: " << apellido << std::endl;
	std::cout << "Cedula: " << cedula << std::endl;
	std::cout << "ID: " << idPersona << std::endl;
	std::cout<<std::endl;
}



////////////////////////////////////////////////////////////////////////
// Name:       Persona::getCorreo()
// Purpose:    Implementation of Persona::getCorreo()
// Return:     char *
////////////////////////////////////////////////////////////////////////

char * Persona::getCorreo(void)
{
   return correo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setCorreo(char * newCorreo)
// Purpose:    Implementation of Persona::setCorreo()
// Parameters:
// - newCorreo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setCorreo(char * newCorreo)
{
//printf("%s\n",newCorreo);
   correo = newCorreo;
}
