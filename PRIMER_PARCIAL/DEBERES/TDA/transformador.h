/*
	Universidad de las Fuerzas Armadas ESPE
    Maria Belen Ceron, Elian Llorente
    NRC: 2967
    Fecha creacion: 28/09/2019
	Fecha ultima modificacion:	30/09/2019
	Docente: Ing. Fernando Solis

*/
#include<iostream>
#include<cmath>

using namespace std;

class GradosRadian {
	private:
		float grado;
		const static double pi=3.1415926;
	public:
 		GradosRadian (float);
 		int transformarGrado(int);
};

class RadianGrado{
	private:
		float radianNum;
		float radianDen;
	public:
 		RadianGrado (float,float);
 		float transformarRadian(float,float);
};
	
	//Primera Clase
	GradosRadian :: GradosRadian(float grad){
		this->grado = grad;
	}
	
 	int GradosRadian :: transformarGrado(int grado){
		int resultado=0;
		resultado = 180/grado;
		return resultado;
	}
	//Segunda Clase
	RadianGrado :: RadianGrado(float num,float den){
		this->radianNum = num;
		this->radianDen = den;
	}
 	
	float RadianGrado :: transformarRadian(float numerador, float denominador){
		float resultado=0;
		resultado = (numerador/denominador)*180;
		return resultado;
	}

