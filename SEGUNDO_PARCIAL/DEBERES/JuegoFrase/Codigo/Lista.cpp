/**********************************************************************
 * Module:  Lista.cpp
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 5:50:45 AM
 * Purpose: Implementation of the class Lista
 ***********************************************************************/

 #include<iostream>
#include<stdio.h>
#include<cstring>
#include <stdlib.h>
#include <cstddef>
#include "Lista.h"


////////////////////////////////////////////////////////////////////////
// Name:       Lista::InsertarInicio()
// Purpose:    Implementation of Lista::InsertarInicio()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::InsertarInicio(char* palabra)
{
	if(vacio()){
		siguiente = new Nodo(palabra, NULL);
	}else{
		Nodo *aux = new Nodo();
		aux->setPalabra(palabra);
		aux->setSiguiente(siguiente);
		siguiente=aux;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::InsertarFinal()
// Purpose:    Implementation of Lista::InsertarFinal()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::InsertarFinal(char* palabra)
{
	if(vacio()){
		siguiente = new Nodo(palabra, NULL);
	}
	else{
		Nodo *aux1 = new Nodo();
		aux1=siguiente;
		Nodo *aux2=new Nodo();
		while((aux1)!=NULL){
			aux2=aux1;
			aux1=aux1->getSiguiente();
		}
		Nodo *aux3=new Nodo(palabra,NULL);
		aux2->setSiguiente(aux3);

	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::Imprimir()
// Purpose:    Implementation of Lista::Imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::Imprimir(void)
{
   Nodo *aux = new Nodo();
	aux = siguiente;
	int cont=1;
	int salto=10;
	if(!vacio()){

		while(aux != NULL){
            std::cout<<aux->getPalabra()<<" ";
			aux = aux->getSiguiente();
			cont++;
		}

	}else {
		std::cout << "Lista vacia" << std::endl;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::vacio()
// Purpose:    Implementation of Lista::vacio()
// Return:     int
////////////////////////////////////////////////////////////////////////

bool Lista::vacio(void)
{
    if(siguiente == NULL)
		return true;
	else
		return false;
}

bool Lista::comparar(char * palabra){
    Nodo *aux = new Nodo();
	aux = siguiente;
    char* tok=strtok(palabra," ");
    char* auxPala;
	if(!vacio()){
		while(aux != NULL){
                //printf("%s\n",tok);
            if(strcmp(tok,aux->getPalabra())!=0){
                return false;
            }
            tok=strtok(NULL," ");
            aux = aux->getSiguiente();
            //auxPala=palabra+tok+" ";
		}
	}else {
	    InsertarFinal(palabra);
	    //palabra=auxPala;
		return true;
	}
	//palabra=auxPala;
	InsertarFinal(tok);
	return true;
}

/*void Lista::(){

}*/
