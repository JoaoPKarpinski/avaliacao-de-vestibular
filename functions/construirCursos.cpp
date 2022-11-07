#include "functionsVest.h"

void construirCursos(curso* &VetorCursos){
	FILE *cursos = fopen(CURSOSPESOS, "r");
	int nCurs;

	fscanf(cursos, "%d", &nCurs);

	for (int i = 0; i < nCurs; i++){
	fscanf(cursos, "%d", &VetorCursos[i].cod);
	fscanf(cursos, " %[^1234567890]", VetorCursos[i].nome);
		for (int j = 0; j < 5; j++){
		fscanf(cursos, "%d", &VetorCursos[i].pesos[j]);
		}
	}

}