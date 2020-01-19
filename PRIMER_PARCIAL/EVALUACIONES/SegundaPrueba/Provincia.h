/***********************************************************************
 * Module:  Provincia.h
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Declaration of the class Provincia
 ***********************************************************************/

#if !defined(__Registro_usuario3_Provincia_h)
#define __Registro_usuario3_Provincia_h

#include "Canton.h"
//class Canton;

class Provincia
{
public:
   Provincia();
   ~Provincia();
   char * getIdProvincia(void);
   void setIdProvincia(char * newIdProvincia);
   char* getNombreProvincia(void);
   void setNombreProvincia(char* newNombreProvincia);

   Canton* canton;

protected:
private:
   char * idProvincia;
   char* nombreProvincia;


};

#endif
