/***********************************************************************
 * Module:  Persona.h
 * Author:  mabel
 * Modified: martes, 3 de diciembre de 2019 14:29:02
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__RepasoListasDobles2_Persona_h)
#define __RepasoListasDobles2_Persona_h

#include <iostream>
//#include<string>

using namespace std;

class Persona
{
public:
   Persona();
   ~Persona();
   int getId(void);
   void setId(int newId);
   string getNombre(void);
   void setNombre(string newNombre);

protected:
private:
   int id;
   string nombre;


};

#endif