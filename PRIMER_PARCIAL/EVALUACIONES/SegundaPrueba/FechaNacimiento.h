/***********************************************************************
 * Module:  FechaNacimiento.h
 * Author:  ALEX
 * Modified: Wednesday, October 30, 2019 9:46:11 AM
 * Purpose: Declaration of the class FechaNacimiento
 ***********************************************************************/

#if !defined(__Registro_usuario3_FechaNacimiento_h)
#define __Registro_usuario3_FechaNacimiento_h

class FechaNacimiento
{
public:
   FechaNacimiento();
   ~FechaNacimiento();
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   int getAnio(void);
   void setAnio(int newAnio);
   bool palindromoFecha(int dia,int mes,int anio);
   char *enteroToChar(int num);

protected:
private:
   int dia;
   int mes;
   int anio;
};

#endif
