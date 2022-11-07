#include <stdlib.h>

void construirMatrizFloat(float **&matriz, int qntVet, int qntItens){
	
	matriz = (float **) malloc(qntVet * sizeof(float *));

	for (int i = 0; i < qntVet; i++){
		matriz[i] = (float *)malloc(qntItens * sizeof(float));
	}
	
}