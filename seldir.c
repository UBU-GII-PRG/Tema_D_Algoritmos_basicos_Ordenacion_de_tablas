/*
Programa:	seldir.c
Sinopsis:	Primer ejemplo implementando el método de ordenación 
		por selección directa
@author:	Paco González Moya
@version:	1.0
@date:		May 2018

*/

#include <stdio.h>
#define MAX 10

//Algoritmo de ordenación por método de inserción directa
int ordenaSeleccionDirecta (int vector[MAX]);

//muestra el vector por consola
void muestraVector (int vector[MAX]);


int main() {
	int mivector[MAX]={3,0,1,8,7,2,5,4,9,6};
	int ok=0;
	//Mostramos el vector
	printf("\nAntes de ordenar:\n");
	muestraVector(mivector);
	//Ordenamos por el método de la burbuja
	ok+=ordenaSeleccionDirecta(mivector);
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
	int ordenaSeleccionDirecta (int vector[MAX]) 
	
Objetivo:	Ordena el vector por el método de seleccion directa
@param		int vector[MAX] 	E/	vector a mostrar
@return		0 si correcto
		otro si incorrecto		
*/
int ordenaSeleccionDirecta (int vector[MAX]) {
	int i, j;	//variables de control de bucle
	int aux;	//variable de intercambio
	int max;	//posicion del mayor valor	

	//Partimos del último al primero: 
	//buscamos la posición del mayor en sl subvector guiado por j
	for (j=MAX-1; j>0;--j) {

		//Recorremos buscando la posición del mayor
		//Hipótesis: de partida suponemos que está en j
		for (max=j, i=j-1;i>=0;--i) { 
			//Si encontramos el mayor en otra posición
			if (vector[i] > vector[max])
				max=i;
		}
		//Si el máximo no estaba en posicion j,
		//hago el intercambio
		if (max!=j) {
			aux=vector[j];
			vector[j]=vector[max];
			vector[max]=aux;
		}
	}
	
	return 0;
}
