/***********************************************************************
 * Module:  Prototipo.cpp
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 9:28:52 AM
 * Purpose: Implementation of the class Prototipo
 ***********************************************************************/

#include<iostream>
#include <stdio.h>
#include<cstring>
#include <stdlib.h>
#include <cstddef>
#include<iostream>

#include "Prototipo.h"
#include "Persona.h"
#include "ProcesoMail.h"

////////////////////////////////////////////////////////////////////////
// Name:       Prototipo::insertarInicio()
// Purpose:    Implementation of Prototipo::insertarInicio()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Prototipo::insertarInicio(Persona persona)
{
   if(vacio()){
		siguiente = new Nodo(persona, NULL);
	}else{
		Nodo *aux = new Nodo();
		aux->setPersona(persona);
		aux->setSiguiente(siguiente);
		siguiente=aux;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Prototipo::insertarFinal()
// Purpose:    Implementation of Prototipo::insertarFinal()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Prototipo::insertarFinal(Persona persona)
{
    int num=0;
    ProcesoMail procesar;
    char * correo=procesar.generarMail4(persona.getNombre(),persona.getApellido(),persona.getCedula(),persona.getIdPersona());
    //std::cout<<correo<<std::endl;
    persona.setCorreo(correo);
	if(vacio()){
		siguiente = new Nodo(persona, NULL);
	}
	else{
		Nodo *aux1 = new Nodo();
		aux1=siguiente;
		Nodo *aux2=new Nodo();
		while((aux1)!=NULL){
			aux2=aux1;
			if(strcmp(aux1->getPersona().getCorreo(),persona.getCorreo())==0){
                num++;
                correo=procesar.generarMail(persona.getNombre(),persona.getApellido(),num);
                persona.setCorreo(correo);
			}
			aux1=aux1->getSiguiente();

		}
		Nodo *aux3=new Nodo(persona,NULL);
		aux2->setSiguiente(aux3);
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Prototipo::imprimir()
// Purpose:    Implementation of Prototipo::imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Prototipo::imprimir(void)
{
    Nodo *aux = new Nodo();
	aux = siguiente;
	if(!vacio()){
		while(aux != NULL){
            std::cout<<" ID  :  "<<aux->getPersona().getIdPersona()<<std::endl;
            std::cout<<"CEDULA  : "<<aux->getPersona().getCedula()<<std::endl;
            std::cout<<"NOMBRE  : "<<aux->getPersona().getNombre()<<std::endl;
            std::cout<<"APELLIDO: "<<aux->getPersona().getApellido()<<std::endl;
            std::cout<<"CORREO  : "<<aux->getPersona().getCorreo()<<std::endl<<std::endl;
			aux = aux->getSiguiente();
		}
	}else{
		std::cout << "Lista vacia" << std::endl;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Prototipo::buscar(char * nombre)
// Purpose:    Implementation of Prototipo::buscar()
// Parameters:
// - nombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Prototipo::buscar(char * nombre)
{
   Nodo *aux = new Nodo();
    aux = siguiente;
    int cont = 1;
    if(siguiente!=NULL){
        while(aux!=NULL){
            if(strcmp(nombre,aux->getPersona().getNombre())==0){
                std::cout<<"Esta en la posicion: "<<cont<<std::endl;
            }
            aux = aux->getSiguiente();
            cont++;
        }
    }
}

bool Prototipo::vacio(){
    if(siguiente == NULL)
		return true;
	else
		return false;

}

Persona Prototipo::leerPersona(){
	Persona _persona;
	//_persona.ingresarDatos();
	return _persona;
}

////////////////////////////////////////////////////////////////////////
// Name:       Prototipo::getSiguiente()
// Purpose:    Implementation of Prototipo::getSiguiente()
// Return:     Nodo*
////////////////////////////////////////////////////////////////////////

Nodo* Prototipo::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Prototipo::setSiguiente(Nodo* newSiguiente)
// Purpose:    Implementation of Prototipo::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void Prototipo::setSiguiente(Nodo* newSiguiente)
{
   siguiente = newSiguiente;
}
