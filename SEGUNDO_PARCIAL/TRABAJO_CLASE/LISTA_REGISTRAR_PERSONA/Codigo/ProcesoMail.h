/***********************************************************************
 * Module:  ProcesoMail.h
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Declaration of the class ProcesoMail
 ***********************************************************************/

#if !defined(__Registro_usuario3_ProcesoMail_h)
#define __Registro_usuario3_ProcesoMail_h
#include "GenerarMail.h"
#include "Prototipo.h"

class ProcesoMail : public GenerarMail
{
public:
   char * cortarNombre(char* nombre);
   char * cortarApellido(char * apellido);
   char * generarMail(char * nombre,char * apellido,int num);
   bool validarExistente(char *correo,Prototipo *lista);
   void  mail(Prototipo *lista);
   char * cortarNombre4(char * nombre);
   char * generarMail4(char * nombre,char * apellido,char* cedula,int num);
protected:
private:

};

#endif
