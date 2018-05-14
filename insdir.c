/*
Programa:	insdir.c
Sinopsis:	Primer ejemplo implementando el método de ordenación 
		por inservción directa
@author:	Paco González Moya
@version:	1.0
@date:		May 2018

*/

#include <stdio.h>
#define MAX 10

//Algoritmo de ordenación por método de inserción directa
int ordenaInsercionDirecta (int vector[MAX]);

//muestra el vector por consola
void muestraVector (int vector[MAX]);


int main() {
	int mivector[MAX]={3,0,1,8,7,2,5,4,9,6};
	int ok=0;
	//Mostramos el vector
	printf("\nAntes de ordenar:\n");
	muestraVector(mivector);
	//Ordenamos por el método de la burbuja
	ok+=ordenaInsercionDirecta(mivector);
	//Mostramos de nuevo el vector
	printf("\nDespués de ordenar\n");
	muestraVector(mivector);
	
	return 0;

}

/**
	 void muestraVector (int vector[MAX]) 
	
Objetivo:	Muestra el vector por consola
@param		int vector[MAX] 	E/	vector a mostrar
@return		nada		
*/
void muestraVector (int vector[MAX]) {
	int i;
	//Cabeceras
	for (i=0;i<MAX;i++) {
		printf("[%d]\t", i);		
	}
	printf("\n");
	//Valores
	for (i=0;i<MAX;i++) {
		printf("%2d\t", vector[i]);		
	}
	printf("\n");

	return;
}

/**
	int ordenaInsercionDirecta (int vector[MAX]) 
	
Objetivo:	Ordena el vector por el método de inserción directa
@param		int vector[MAX] 	E/	vector a mostrar
@return		0 si correcto
		otro si incorrecto		
*/
int ordenaInsercionDirecta (int vector[MAX]) {
	int i, j;	//variables de control de bucle
	int aux;	//variable de intercambio

	//El primer elemento ya está ordenado: empezamos en 1 (primera carta)
	for (j=1; j<MAX;++j) { 
		aux=vector[j];	//aislamos el elemnto a ubicar

		//Bucle para crear"hueco" -> desplazamientos
		for (i=j-1;i>=0 && vector[i]>aux;--i) { 
			//Desplazamientos para crear "hueco"
			vector[i+1]=vector[i];
		}
		//Ubica el valor en su posición (i+1)
		vector[i+1]=aux;
		
	}
	
	return 0;
}
