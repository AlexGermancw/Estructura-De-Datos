/***********************************************************************
 * Module:  Persona.h
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 9:28:52 AM
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Listas_Resgitro_Persona2_Persona_h)
#define __Listas_Resgitro_Persona2_Persona_h

class Persona
{
public:
   Persona();
   ~Persona();
   char* getApellido(void);
   void setApellido(char* newApellido);
   char* getCedula(void);
   void setCedula(char* newCedula);
   char* getNombre(void);
   void setNombre(char* newNombre);
   int getIdPersona(void);
   void setIdPersona(int newIdPersona);
   void imprimirPersona();
   char * getCorreo(void);
   void setCorreo(char * newCorreo);

protected:
private:
   int idPersona;
   char* cedula;
   char *nombre;
   char *apellido;
   char *correo;


};

#endif
