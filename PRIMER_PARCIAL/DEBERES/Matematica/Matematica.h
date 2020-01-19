/********************************************
    UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    NOMBRE: ALEX CHICAIZA
    NRC:2967
    DOCENTE: INGENIERO SOLIS
    FECHA DE CREACCION: 03/10/2019
    FECHA MODIFICACION: 10/10/2019
*********************************************/


class Matematica{

public:
    int factorial(int numero);
    float seno(float angulo);
    float coseno(float angulo);
    float potenciacion(float base, int exponente);

private:
    float potenciaRecursiva(float base,int exponente);
};


int Matematica::factorial(int numero){

    if(numero<=1){
        return 1;
    }
    else{
        numero=numero*factorial(numero-1);
    }
    return numero;
}

float Matematica::seno(float angulo){
    int presicion=7;
    float resultado=0;
    float aux=0.0;
    int signo=1;
    int signoAngulo=1;
    while(angulo>3.141592){
        angulo=angulo-3.141592;
        signoAngulo=-1*signoAngulo;
    }

    for(int i=0;i<presicion;i++){
        signo=potenciacion(-1,i);
        resultado=resultado+(potenciacion(angulo,i*2+1)/factorial(i*2+1))*signo;
    }
    return signoAngulo*resultado;
}


float Matematica::coseno(float angulo){
    int presicion=7;
    float resultado=0;
    float aux=0.0;
    int signo=1;
    int signoAngulo=1;
    while(angulo>3.141592){
        angulo=angulo-3.141592;
        signoAngulo=-1*signoAngulo;
    }
    for(int i=0;i<presicion;i++){
        signo=potenciacion(-1,i);
        resultado=resultado+(potenciacion(angulo,i*2)/factorial(i*2))*signo;
    }
    return signoAngulo*(resultado);
    //free(ptr);
}

float Matematica::potenciaRecursiva(float base,int exponente){
    if(exponente<=0){
        return 1;

    }else{
        return base*potenciaRecursiva(base,exponente-1);
    }
}

float Matematica::potenciacion(float base, int exponente){
    float potencia=1;
    if(exponente>0){
            potencia=potenciaRecursiva(base,exponente);
    }else{
            exponente=exponente*(-1);
            potencia=potenciacion(base,exponente);
            potencia=1/potencia;
    }
    return potencia;
}

/*
#include<stdlib.h>
#include<time.h>
srand(time(NULL));
num = rand();
num=rand()%51;
num=1+rand()%(101-1);
num=250+rand()%(421-250);*/
