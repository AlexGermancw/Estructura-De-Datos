/***********************************************************************
 * Module:  Arreglo.h
 * Author:  ALEX
 * Modified: Tuesday, November 5, 2019 10:35:18 PM
 * Purpose: Declaration of the class Arreglo
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Arreglo_h)
#define __Class_Diagram_1_Arreglo_h

class Arreglo
{
public:
   Arreglo();
   ~Arreglo();
   int tamanioCadena(char * frase);
   void invertirCadena(char * frase, char* fraseInvertida, int inicio, int fin);

protected:
private:

};

#endif
