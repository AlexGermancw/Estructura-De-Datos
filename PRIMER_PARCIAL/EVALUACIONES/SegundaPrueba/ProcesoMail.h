/***********************************************************************
 * Module:  ProcesoMail.h
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Declaration of the class ProcesoMail
 ***********************************************************************/

#if !defined(__Registro_usuario3_ProcesoMail_h)
#define __Registro_usuario3_ProcesoMail_h
#include "GenerarMail.h"
#include "Alumno.h"

class ProcesoMail : public GenerarMail
{
public:
   char * cortarNombre(char* nombre);
   char * cortarApellido(char * apellido);
   char * generarMail(char * nombre,char * apellido,int num);
   bool validarExistente(char *correo,Alumno *arr,int tam);
   void  mail(Alumno *arr,int tam);

protected:

private:

};

#endif
