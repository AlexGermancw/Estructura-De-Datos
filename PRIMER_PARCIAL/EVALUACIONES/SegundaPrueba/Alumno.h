/***********************************************************************
 * Module:  Alumno.h
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Declaration of the class Alumno
 ***********************************************************************/

#if !defined(__Registro_usuario3_Alumno_h)
#define __Registro_usuario3_Alumno_h

//#include "ProcesoMail.h"
class ProcesoMail;

#include "Persona.h"
#include "FechaNacimiento.h"

class Alumno : public Persona
{
public:
   Alumno();
   ~Alumno();

   char* getIdAlumno(void);
   void setIdAlumno(char* newIdAlumno);
   char * getTelefono(void);
   void setTelefono(char * newTelefono);
   char * getMail(void);
   void setMail(char * newMail);
   ProcesoMail* procesoMail;

protected:
private:
   char* idAlumno;
   char * telefono;
   char * mail;

};

#endif
