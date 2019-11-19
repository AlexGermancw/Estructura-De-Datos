/***********************************************************************
 * Module:  Persona.h
 * Author:  ALEX
 * Modified: Wednesday, November 13, 2019 10:56:06 AM
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Listas_Resgitro_Persona2_Persona_h)
#define __Listas_Resgitro_Persona2_Persona_h
#include<iostream>
#include<string.h>

class Persona
{
public:
   Persona();
   ~Persona();
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   int getCedula(void);
   void setCedula(int newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);

protected:
private:
   int idPersona;
   int cedula;
   std::string nombre;
   std::string apellido;
   int siguiente;


};

#endif
