#include <iostream>
#include<stdlib.h>
#include<string.h>
#include <stdio.h>
#include "Datos.h"
#include "Ingresar.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Datos obj = Datos();
    Ingresar lectura;
    char *pedido;
    pedido=lectura.validar();
    printf("hola: %s",*pedido);

    return 0;
}
