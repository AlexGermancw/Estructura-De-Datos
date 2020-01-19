/***********************************************************************
 * Module:  Prototipo.cpp
 * Author:  ALEX
 * Modified: Wednesday, November 13, 2019 10:56:06 AM
 * Purpose: Implementation of the class Prototipo
 ***********************************************************************/

#include "Prototipo.h"
#include <iostream>
#include "Persona.h"
#include "Nodo.h"
#include "Prototipo.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;




    Persona person;
    person.setNombre("Jessy");
    person.setApellido("ALex");
    person.setCedula(12);
    Nodo nodo;
    nodo.persona=person;
    Prototipo pro;
    pro.imprimir(nodo);


    return 0;
}


Persona ingresoDatos(){
    Persona persona;


}
