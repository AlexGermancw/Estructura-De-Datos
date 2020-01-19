/***********************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Module:  main.cpp
 * Author:  ALEX
 * Modified: Thursday, November 21, 2019 8:53:22 AM
 * Purpose: Declaration of the class Main
 ***********************************************************************/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <fstream>
#include "Lista.h"
#include "Ingresar.h"
#include "ListaJugador.h"


using namespace std;

int main()
{
    Ingreso leer;
    bool bandera=true;
    Lista *lista=new Lista();
    ListaJugador *listaJugador=new ListaJugador();


    fstream enter;
    enter.open("solucion.txt",fstream::out);
    enter<<"\tUNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE\n\n\t\tsolucion "<<endl<<endl;
    enter.close();

    enter.open("solucion.txt",fstream::app);
    int numero=1;
    while(bandera){
        system("cls");
        cout << "JUEGO PALABRAS" << endl;
        cout<<endl<<numero;
        char *frase=leer.ingresarLetras("): ");
        char*fraseJugador=frase;
        Jugador jugador;//=Jugador(fraseJugador,numero);
        jugador.setFrase(frase);
        jugador.setId(numero);
        listaJugador->insertarFinal(jugador);
        if(!lista->comparar(frase)){
            bandera=false;
        }
        numero++;
    }
    cout<<"\n\nPERDISTE EL JUEGO\n"<<endl;
    cout<<"\nIMPRESION LISTA"<<endl;
    lista->Imprimir();

    cout<<endl<<endl;
    /*cout<<"\nIMPRESION JUGADORES"<<endl;
    listaJugador->imprimir();
    cout<<"\n"<<endl;*/
    system("pause");
    return 0;
}


char *copiarPalabra(char*palabra){


}
