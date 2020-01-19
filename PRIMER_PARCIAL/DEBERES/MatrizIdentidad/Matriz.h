#ifndef MATRIZ_H
#define MATRIZ_H


class Matriz
{
    public:
		float **matriz;
		float *matriz1;
		float elemento;
		float coeficiente;
		float *vector;
		float **respuesta;
		float* inicializar1(int);
		float** inicializar(int);
		float** encerar(int,float**);
		float* encerar1(int,float*);
		float** ingresarNumeros(int,float**);
		float** calcularInversa(int,float**);
		float** multiplicar(int,float**,float**);
		void mostrarInversa(int,float**);
		void mostrar(int,float**);
    protected:
    private:

};

#endif // MATRIZ_H
