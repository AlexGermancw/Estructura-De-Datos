/***********************************************************************
 * Module:  GenerarMail.h
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Declaration of the class GenerarMail
 ***********************************************************************/

#if !defined(__Registro_usuario3_GenerarMail_h)
#define __Registro_usuario3_GenerarMail_h
#include "Alumno.h"
class GenerarMail
{
public:
   virtual void mail(Alumno *arr)=0;

protected:
private:

};

#endif
