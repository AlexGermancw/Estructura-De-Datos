/********************************************
    UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    NOMBRE: ALEX CHICAIZA
    NRC:2967
    DOCENTE: INGENIERO SOLIS
    FECHA DE CREACCION: 23/09/2019
    FECHA MODIFICACION: 10/10/2019
*********************************************/

#include <iostream>
#include<stdlib.h>
#include "Ingresar.h"
#include "Matematica.h"
#include<math.h>


using namespace std;

int main()
{
    Ingreso lectura;
    Matematica calcular;
    int numero;
    int base;
    int exponente;
    float numSeno;

    //numero=lectura.ingresarInt("Ingrese el numero para el factorial");
    //printf("\nEl factorial de %i es: %i \n",numero,calcular.factorial(numero));

    base=lectura.ingresarInt("Ingrese la base");
    exponente=lectura.ingresarInt("Ingrese el exponente");
    printf("\nLa potencia de %i^%i es: %.3f \n",base,exponente,calcular.potenciacion(base,exponente));

    //numSeno=lectura.ingresarFloat("Ingrese angulo en radianes");
    //printf("\nEl angulo de %.2f rad es: %.4f ",numSeno,calcular.coseno(numSeno));
    //cout<<endl<<cos(numSeno)<<endl;


    return 0;
}
