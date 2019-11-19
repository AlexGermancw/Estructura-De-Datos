/***********************************************************************
 * Module:  Primo.cpp
 * Author:  ALEX
 * Modified: Tuesday, November 19, 2019 5:48:00 AM
 * Purpose: Implementation of the class Primo
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include<string.h>
#include<conio.h>
#include "Primo.h"

Primo::Primo(){

}

Primo::~Primo()
{
    //dtor
}


bool Primo::validarPrimo(int numero, int validar){
    if(validar<2){
        return true;
    }
    if(numero%validar==0){
        return false;
    }else{
        return validarPrimo(numero,validar-1);
    }
}


