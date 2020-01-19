/***********************************************************************
 * Module:  Persona.h
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Registro_usuario3_Persona_h)
#define __Registro_usuario3_Persona_h
#include "Provincia.h"


class FechaNacimiento;
//class Provincia;

class Persona
{
public:
   Persona();
   ~Persona();
   char * getCedula(void);
   void setCedula(char * newCedula);
   char * getNombre(void);
   void setNombre(char * newNombre);
   char * getApellido(void);
   void setApellido(char * newApellido);
   char * getNacionalidad(void);
   void setNacionalidad(char * newNacionalidad);

   Provincia* provincia;
   FechaNacimiento* fechaNacimiento;

protected:
private:
   char * cedula;
   char * nombre;
   char * apellido;
   char * nacionalidad;
};

#endif
