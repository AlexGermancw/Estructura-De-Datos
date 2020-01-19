/***********************************************************************
 *  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

 * NRC:     2967
 * Module:  Datos.cpp
 * Author:  ALEX CHICAIZA
            MARIA BELEN CERON
            ELIAN LLORENTE
 * Docente: INGENIERO EDGAR FERNANDO SOLIS ACOSTA
 * Modified: Monday, October 28, 2019 11:10:04 AM
 * Purpose: Implementation of the class Datos
 ***********************************************************************/
#if !defined(__Class_Diagram_ContadorVocales2_Datos_h)
#define __Class_Diagram_ContadorVocales2_Datos_h

#include "Proceso.h"

class Datos : public Proceso
{
public:
   Datos();
   ~Datos();
   char *getDato(void);
   void setDato(char *newDato);
   int contadorVocales(char* cvCadenaTexto);
   void imprimir(void);

protected:
private:
   char *dato;


};

#endif
