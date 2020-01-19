/***********************************************************************
 * Module:  Canton.cpp
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Implementation of the class Canton
 ***********************************************************************/

#include "Parroquia.h"
#include "Canton.h"
#include <cstddef>

////////////////////////////////////////////////////////////////////////
// Name:       Canton::Canton()
// Purpose:    Implementation of Canton::Canton()
// Return:
////////////////////////////////////////////////////////////////////////

Canton::Canton()
{
   parroquia = new Parroquia();
}

////////////////////////////////////////////////////////////////////////
// Name:       Canton::~Canton()
// Purpose:    Implementation of Canton::~Canton()
// Return:
////////////////////////////////////////////////////////////////////////

Canton::~Canton()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Canton::getIdCanton()
// Purpose:    Implementation of Canton::getIdCanton()
// Return:     char *
////////////////////////////////////////////////////////////////////////

char * Canton::getIdCanton(void)
{
   return idCanton;
}

////////////////////////////////////////////////////////////////////////
// Name:       Canton::setIdCanton(char * newIdCanton)
// Purpose:    Implementation of Canton::setIdCanton()
// Parameters:
// - newIdCanton
// Return:     void
////////////////////////////////////////////////////////////////////////

void Canton::setIdCanton(char * newIdCanton)
{
   idCanton = newIdCanton;
}

////////////////////////////////////////////////////////////////////////
// Name:       Canton::getNombreCanton()
// Purpose:    Implementation of Canton::getNombreCanton()
// Return:     char*
////////////////////////////////////////////////////////////////////////

char* Canton::getNombreCanton(void)
{
   return nombreCanton;
}

////////////////////////////////////////////////////////////////////////
// Name:       Canton::setNombreCanton(char* newNombreCanton)
// Purpose:    Implementation of Canton::setNombreCanton()
// Parameters:
// - newNombreCanton
// Return:     void
////////////////////////////////////////////////////////////////////////

void Canton::setNombreCanton(char* newNombreCanton)
{
   nombreCanton = newNombreCanton;
}
