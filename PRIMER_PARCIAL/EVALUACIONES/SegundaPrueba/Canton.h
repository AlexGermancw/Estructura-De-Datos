/***********************************************************************
 * Module:  Canton.h
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Declaration of the class Canton
 ***********************************************************************/

#if !defined(__Registro_usuario3_Canton_h)
#define __Registro_usuario3_Canton_h

#include "Parroquia.h"
//class Parroquia;

class Canton
{
public:
   Canton();
   ~Canton();
   char * getIdCanton(void);
   void setIdCanton(char * newIdCanton);
   char* getNombreCanton(void);
   void setNombreCanton(char* newNombreCanton);

   Parroquia* parroquia;

protected:
private:
   char * idCanton;
   char* nombreCanton;
};

#endif
