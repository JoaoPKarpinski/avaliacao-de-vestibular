#include <stdlib.h>

void construirMatrizFloat(float **&matriz, int qntVet, int qntItens){
	
	matriz = (float **) malloc(qntVet * sizeof(float *));

	for (int i = 0; i < qntVet; i++){
		matriz[i] = (float *)malloc(qntItens * sizeof(float));
	}
	
}



void construirMatrizInt(int **&matriz, int qntVet, int qntItens){
	
	matriz = (int **) malloc(qntVet * sizeof(int *));

	for (int i = 0; i < qntVet; i++){
		matriz[i] = (int *)malloc(qntItens * sizeof(int));
	}
	
}
