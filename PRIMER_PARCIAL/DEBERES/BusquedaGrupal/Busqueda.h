/********************************************
    UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    NOMBRE: ALEX CHICAIZA
    NRC:2967
    DOCENTE: INGENIERO SOLIS
    FECHA DE CREACCION:
    FECHA MODIFICACION: 11/2019
*********************************************/
#include <iostream>

using namespace std;

class Busqueda{
private:
    int *arreglo;
    int tamanio;
public:
    Busqueda(int *,int);
    void busquedaSecuencial(int clave);
};

Busqueda :: Busqueda(int * arrg, int n){
    this->arreglo = arrg;
    this->tamanio = n;
}

/**
	@brief busquedaSecuencial
	@param clave
*/
void Busqueda :: busquedaSecuencial(int clave){
    bool encontrado = true;
    //Buscar clave o dato en el arreglo.
    for (int j = 0;j < tamanio;j++){
        if (*(arreglo+j) == clave){
            cout<< "Se encontro el " << clave<< " en la posicion [" << j+1<< "]" << endl;
            encontrado = false;
        }
    }

    delete[] arreglo;

    if (encontrado)
        cout<< "No se encontro el dato" << endl;
}
