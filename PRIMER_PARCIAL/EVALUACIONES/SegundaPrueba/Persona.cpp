/***********************************************************************
 * Module:  Persona.cpp
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include "Provincia.h"
#include "FechaNacimiento.h"
#include "Persona.h"
#include <cstddef>

////////////////////////////////////////////////////////////////////////
// Name:       Persona::Persona()
// Purpose:    Implementation of Persona::Persona()
// Return:
////////////////////////////////////////////////////////////////////////

Persona::Persona()
{
   provincia = new Provincia();
   fechaNacimiento = new FechaNacimiento();
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
// Name:       Persona::getCedula()
// Purpose:    Implementation of Persona::getCedula()
// Return:     char *
////////////////////////////////////////////////////////////////////////

char * Persona::getCedula(void)
{
   return cedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setCedula(char * newCedula)
// Purpose:    Implementation of Persona::setCedula()
// Parameters:
// - newCedula
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setCedula(char * newCedula)
{
   cedula = newCedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getNombre()
// Purpose:    Implementation of Persona::getNombre()
// Return:     char *
////////////////////////////////////////////////////////////////////////

char * Persona::getNombre(void)
{
   return nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setNombre(char * newNombre)
// Purpose:    Implementation of Persona::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setNombre(char * newNombre)
{
   nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getApellido()
// Purpose:    Implementation of Persona::getApellido()
// Return:     char *
////////////////////////////////////////////////////////////////////////

char * Persona::getApellido(void)
{
   return apellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setApellido(char * newApellido)
// Purpose:    Implementation of Persona::setApellido()
// Parameters:
// - newApellido
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setApellido(char * newApellido)
{
   apellido = newApellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getNacionalidad()
// Purpose:    Implementation of Persona::getNacionalidad()
// Return:     char *
////////////////////////////////////////////////////////////////////////

char * Persona::getNacionalidad(void)
{
   return nacionalidad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setNacionalidad(char * newNacionalidad)
// Purpose:    Implementation of Persona::setNacionalidad()
// Parameters:
// - newNacionalidad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setNacionalidad(char * newNacionalidad)
{
   nacionalidad = newNacionalidad;
}
