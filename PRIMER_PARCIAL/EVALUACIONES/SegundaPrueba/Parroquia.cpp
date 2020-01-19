/***********************************************************************
 * Module:  Parroquia.cpp
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Implementation of the class Parroquia
 ***********************************************************************/

#include "Parroquia.h"

////////////////////////////////////////////////////////////////////////
// Name:       Parroquia::Parroquia()
// Purpose:    Implementation of Parroquia::Parroquia()
// Return:     
////////////////////////////////////////////////////////////////////////

Parroquia::Parroquia()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Parroquia::~Parroquia()
// Purpose:    Implementation of Parroquia::~Parroquia()
// Return:     
////////////////////////////////////////////////////////////////////////

Parroquia::~Parroquia()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Parroquia::getIdParroquia()
// Purpose:    Implementation of Parroquia::getIdParroquia()
// Return:     char *
////////////////////////////////////////////////////////////////////////

char * Parroquia::getIdParroquia(void)
{
   return idParroquia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Parroquia::setIdParroquia(char * newIdParroquia)
// Purpose:    Implementation of Parroquia::setIdParroquia()
// Parameters:
// - newIdParroquia
// Return:     void
////////////////////////////////////////////////////////////////////////

void Parroquia::setIdParroquia(char * newIdParroquia)
{
   idParroquia = newIdParroquia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Parroquia::getNombreParroquia()
// Purpose:    Implementation of Parroquia::getNombreParroquia()
// Return:     char*
////////////////////////////////////////////////////////////////////////

char* Parroquia::getNombreParroquia(void)
{
   return nombreParroquia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Parroquia::setNombreParroquia(char* newNombreParroquia)
// Purpose:    Implementation of Parroquia::setNombreParroquia()
// Parameters:
// - newNombreParroquia
// Return:     void
////////////////////////////////////////////////////////////////////////

void Parroquia::setNombreParroquia(char* newNombreParroquia)
{
   nombreParroquia = newNombreParroquia;
}