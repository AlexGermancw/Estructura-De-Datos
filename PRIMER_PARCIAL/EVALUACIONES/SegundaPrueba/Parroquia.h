/***********************************************************************
 * Module:  Parroquia.h
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Declaration of the class Parroquia
 ***********************************************************************/

#if !defined(__Registro_usuario3_Parroquia_h)
#define __Registro_usuario3_Parroquia_h

class Parroquia
{
public:
   Parroquia();
   ~Parroquia();
   char * getIdParroquia(void);
   void setIdParroquia(char * newIdParroquia);
   char* getNombreParroquia(void);
   void setNombreParroquia(char* newNombreParroquia);

protected:
private:
   char * idParroquia;
   char* nombreParroquia;


};

#endif