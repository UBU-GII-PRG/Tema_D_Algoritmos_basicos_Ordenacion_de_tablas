/*
Programa:	burbuja.c
Sinopsis:	Primer ejemplo implementando el método de ordenación de la
		burbuja
@author:	Paco González Moya
@version:	1.0
@date:		May 2018

*/

#include <stdio.h>
#define MAX 10

//Algoritmo de ordenación por método de la burbuja
int ordenaBurbuja (int vector[MAX]);

//muestra el vector por consola
void muestraVector (int vector[MAX]);


int main() {
	int mivector[MAX]={3,0,1,8,7,2,5,4,9,6};
	int ok=0;
	//Mostramos el vector
	printf("\nAntes de ordenar:\n");
	muestraVector(mivector);
	//Ordenamos por el método de la burbuja
	ok+=ordenaBurbuja (mivector);
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
	int ordenaBurbuja (int vector[MAX]) 
	
Objetivo:	Ordena el vector por el método de la burbuja
@param		int vector[MAX] 	E/	vector a mostrar
@return		0 si correcto
		otro si eincorrecto		
*/
int ordenaBurbuja (int vector[MAX]) {
	int i, j;	//variables de control de bucle
	int aux;	//variable de intercambio

	for (j=MAX-1;j>0;j--) {	//Bucle j elementos desordenados
		for (i=0;i<j;i++) { //Bucle que se ordena
			if (vector[i] > vector[i+1]) {
				//Intercambio al encontrar mayor
				aux = vector[i+1];
				vector[i+1]=vector[i];
				vector[i]=aux;
			}
		}
	}
	return 0;
}
