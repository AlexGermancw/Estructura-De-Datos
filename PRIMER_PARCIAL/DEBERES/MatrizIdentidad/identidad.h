/**
  * Universidad De las Fuerzas Armadas ESPE
  * Carrera: Ingeniería de Software
  * Materia: Estructura de Datos
  * NRC: 2969
  * @file identidad.h
  * @version 1.1.0
  * @date 06/10/2019
  * @author Kevin Duy
  * @title 	Matriz Identidad
  * @brief Métodos para obtener la matriz identidad
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Identidad {
	private:
		float **matriz;
		float *matriz1;
		float elemento;
		float coeficiente;
		float *vector;
		float **respuesta;
	public:
		float* inicializar1(int);
		float** inicializar(int);
		float** encerar(int,float**);
		float* encerar1(int,float*);
		float** ingresarNumeros(int,float**);
		float** calcularInversa(int,float**);
		float** multiplicar(int,float**,float**);
		void mostrarInversa(int,float**);
		void mostrar(int,float**);
};


float* Identidad::inicializar1(int tamanio) {
	matriz1 = (float*)malloc(tamanio *sizeof(float));
	return matriz1;
}

float* Identidad::encerar1(int tamanio,float *matriz) {
	for(int i=0; i<tamanio; i++) {
			for(int j=0; j<tamanio; j++) {
				*(matriz+i) = 0;
			}
		}
	return matriz;
}

float** Identidad::inicializar(int tamanio) {
	matriz = (float**)malloc(sizeof(float *)*tamanio);
	for(int i=0; i<tamanio; i++) {
		*(matriz+i) = (float*)malloc(sizeof(float*)*tamanio);
	}
	return matriz;
}

float** Identidad::encerar(int tamanio,float **matriz) {
	for(int i=0; i<tamanio; i++) {
			for(int j=0; j<tamanio; j++) {
				*(*(matriz+i)+j) = 0;
			}
		}
	return matriz;
}

float** Identidad::ingresarNumeros(int tamanio,float **matriz) {
	matriz = inicializar(tamanio);
	matriz = encerar(tamanio,matriz);
	for(int i=0;i<tamanio;i++) {
			for(int j=0;j<tamanio;j++) {
				scanf("%f",*(matriz+i)+j);
			}
		}
	return matriz;
}

float** Identidad::calcularInversa(int tamanio,float **matriz) {
	vector = inicializar1(tamanio);
	vector = encerar1(tamanio,vector);
	for(int i=0; i<tamanio; i++)
		for(int j=tamanio; j<2*tamanio; j++) {
			if(i==(j-tamanio)) {
				*(*(matriz+i)+j) = 1;
			}else {
				*(*(matriz+i)+j) = 0;
			}
		}
		for(int s=0; s<tamanio; s++) {
			elemento = *(*(matriz+s)+s);
			for(int j=0; j<2*tamanio; j++) {
				*(*(matriz+s)+j) = *(*(matriz+s)+j) / elemento;
			}
			for(int i=0; i<tamanio; i++) {
				if(i==s) {
					;
				}
				else {
					coeficiente = *(*(matriz+i)+s);
					for(int j=0; j<2*tamanio; j++)
						*(vector+j) = *(*(matriz+s)+j) * (coeficiente*-1);
					for(int j=0; j<2*tamanio; j++)
						*(*(matriz+i)+j) = *(*(matriz+i)+j) + *(vector+j);
				}
			}
		}
		return matriz;
}

void Identidad::mostrar(int tamanio, float **matriz) {
	for(int i=0; i<tamanio; i++) {
		for(int j=0; j<tamanio; j++) {
			printf(" %0.0f ",*(*(matriz+i)+j));
		}
		printf("\n");
	}
}

void Identidad::mostrarInversa(int tamanio, float **matriz) {
	for(int i=0; i<tamanio; i++) {
		for(int j=tamanio; j<2*tamanio; j++) {
			printf(" %0.1f ",*(*(matriz+i)+j));
		}
		printf("\n");
	}
}

float** Identidad::multiplicar(int tamanio,float **matriz1, float **matriz2) {
	respuesta = inicializar(tamanio);
	respuesta = encerar(tamanio,respuesta);
	for(int i=0;i<tamanio;i++) {
		for(int j=0;j<tamanio;j++) {
	        for(int k=0;k<tamanio;k++) {
	            *(*(respuesta+i)+j) = *(*(respuesta+i)+j) + (*(*(matriz1+i)+k)) * (*(*(matriz2+k)+j));
			}
		}
	}
	return respuesta;
}
