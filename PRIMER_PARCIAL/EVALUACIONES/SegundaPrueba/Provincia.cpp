/***********************************************************************
 * Module:  Provincia.cpp
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Implementation of the class Provincia
 ***********************************************************************/

#include "Canton.h"
#include "Provincia.h"
#include <cstddef>

////////////////////////////////////////////////////////////////////////
// Name:       Provincia::Provincia()
// Purpose:    Implementation of Provincia::Provincia()
// Return:
////////////////////////////////////////////////////////////////////////

Provincia::Provincia()
{
   canton = new Canton();
}

////////////////////////////////////////////////////////////////////////
// Name:       Provincia::~Provincia()
// Purpose:    Implementation of Provincia::~Provincia()
// Return:
////////////////////////////////////////////////////////////////////////

Provincia::~Provincia()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Provincia::getIdProvincia()
// Purpose:    Implementation of Provincia::getIdProvincia()
// Return:     char *
////////////////////////////////////////////////////////////////////////

char * Provincia::getIdProvincia(void)
{
   return idProvincia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Provincia::setIdProvincia(char * newIdProvincia)
// Purpose:    Implementation of Provincia::setIdProvincia()
// Parameters:
// - newIdProvincia
// Return:     void
////////////////////////////////////////////////////////////////////////

void Provincia::setIdProvincia(char * newIdProvincia)
{
   idProvincia = newIdProvincia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Provincia::getNombreProvincia()
// Purpose:    Implementation of Provincia::getNombreProvincia()
// Return:     char*
////////////////////////////////////////////////////////////////////////

char* Provincia::getNombreProvincia(void)
{
   return nombreProvincia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Provincia::setNombreProvincia(char* newNombreProvincia)
// Purpose:    Implementation of Provincia::setNombreProvincia()
// Parameters:
// - newNombreProvincia
// Return:     void
////////////////////////////////////////////////////////////////////////

void Provincia::setNombreProvincia(char* newNombreProvincia)
{
   nombreProvincia = newNombreProvincia;
}
