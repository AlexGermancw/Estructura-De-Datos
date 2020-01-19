/***********************************************************************
 * Module:  Jugador.h
 * Author:  ALEX
 * Modified: Thursday, November 21, 2019 8:53:22 AM
 * Purpose: Declaration of the class Jugador
 ***********************************************************************/

#if !defined(__Juego_Palabra_Jugador_h)
#define __Juego_Palabra_Jugador_h

class Jugador
{
public:
   Jugador();
   ~Jugador();
   Jugador(char* newFrase,int numer);
   int getId(void);
   void setId(int newId);
   char* getFrase(void);
   void setFrase(char* newFrase);

protected:
private:
   int id;
   char* frase;


};

#endif
