#include "atribuirVetoresPrincipais.cpp"


int main(){
	float *vMedia;
	float *vDesvPadrao;
	curso *vCursos;
	vest *vVestibulandos;
	int nVest;
	int nCurs;
	vagasCurso *vVagas;

	atribuirVetoresPrincipais(vMedia, vDesvPadrao, vCursos, vVestibulandos, vVagas, nVest, nCurs);

	quicksortNotas(0, nVest, vVestibulandos);


	return 0;
}