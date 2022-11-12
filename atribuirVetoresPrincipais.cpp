//#include "./functions/funcoes-e-estruturas.h"
#include "./functions/sort.cpp"

//#define PESSOA 571567

void dimVet(int *&vetor, int k, int &tam){
	vetor[k] = vetor[tam];
	tam = tam-1;
}


/**************************************
     TROCAR AS CONSTANTES DE ARQUIVOS
     POR PARAMETRO DE FUNÇÃO
***************************************/

 void atribuirVetoresPrincipais(float* &vMedia, float* &vDesvPadrao, curso* &vCursos, vest* &vVestibulandos, vagasCurso* &vVagas, int &numeroVest, int &numeroCursos){
	FILE *notas = fopen(ACERTOS, "r");
	FILE *dados = fopen(DADOS, "r");
	FILE *cursos = fopen(CURSOSPESOS, "r");
	FILE *testeNotas = fopen("testeNotas.txt", "a");
	FILE *cursosVagas = fopen(CURSOSVAGAS, "r");
	
	int nInsc, *insc;

	int nCurs;
	vagasCurso *vagasCurs;
	curso *vetorCursos;

//     nV --> para a leitura de DADOS (numero de insc naquele curso)
//     nC --> para a leitura de DADOS (numero do curso)
	int nV, nC;

	vest *vestibulando;

	fscanf(notas, "%d", &nInsc);
	
	float **acertos;
	float *media, *desv;

	desv  = (float*)malloc(5 * sizeof(float));
	media = (float*)malloc(5 * sizeof(float));

	fscanf(cursos, "%d", &nCurs);
	vetorCursos = (curso*)malloc(nCurs * sizeof(curso));




/* 
   CONSTRUINDO AS LISTAS DE INSCRITOS
   ALINHADA COM A COLUNA DAS NOTAS
*/
	construirMatrizFloat(acertos, nInsc, 5);
	insc = (int*) malloc(nInsc * sizeof(int));

	for (int i = 0; i < nInsc; i++){
		fscanf(notas, "%d %f %f %f %f %f", &insc[i], &acertos[i][0], &acertos[i][1], &acertos[i][2], &acertos[i][3], &acertos[i][4]);
	}

	
/* 
	CALCULANDO A MEDIA E O DESVIO PADRÃO 
	DE ACORDO COM AS NOTAS
*/
	for (int i = 0; i < 5; i++){
		mediaDesv(acertos, nInsc, i, media[i], desv[i]);
	}
	
/*
	PADRONIZANDO AS NOTAS USANDO A MEDIA
	E O DESVIO PADRAO
*/
	for (int i = 0; i < nInsc; i++){
		for (int j = 0; j < 4; j++){
			acertos[i][j] = 500 + 100 * ((2 * acertos[i][j] - media[j]) / desv[j]);
		}
	}


/*
	CONSTRUINDO O VETOR QUE ARMAZENA AS 
 	ESTRUTURAS DOS CURSOS
*/ 
	for (int i = 0; i < nCurs-1; i++){
	fscanf(cursos, "%d", &vetorCursos[i].cod);
	fscanf(cursos, " %[^1234567890]", vetorCursos[i].nome);
		for (int j = 0; j < 5; j++){
		fscanf(cursos, "%d", &vetorCursos[i].pesos[j]);
		}
	}

	fscanf(cursosVagas, "%d", &nCurs);

/*
	CONSTRUINDO O VETOR QUE ARMAZENA AS 
	ESTRUTURAS DAS VAGAS RESPECTIVAS A CADA CURSO
*/

	vagasCurs = (vagasCurso*)malloc(nCurs * sizeof(vagasCurso));    // criando vetor que armazena, alem do cod do curso,

	for (int i = 0; i < nCurs-1; i++){     
		fscanf(cursosVagas, "%d", &vagasCurs[i].cod);
		for (int j = 0; j < 11; j++){
			fscanf(cursosVagas, "%d", &vagasCurs[i].vagas[j]);      // as vagas referentes a cada "cota"
		}
	}	  
/*
	USANDO O ALGORITMO QUICKSORT PARA ALINHAR OS VETORES
*/ 
	quicksortVagas(0, (nCurs-1), vagasCurs);
	quicksortCurso(0, (nCurs-1), vetorCursos);

//	printf("%s  -  %d  \n%d %d", vetorCursos[78].nome, vagasCurs[78].vagas[0], vetorCursos[78].cod, vagasCurs[78].cod);
 /*
 	CONSTRUINDO O VETOR QUE ARMAZENA AS 
 	INFORMAÇÕES DOS VESTIBULANDOS
 */

 	char car;
 	int nInscDados = 1;
 	while (!feof(dados)){
 		fscanf(dados, "%c", &car);
 		if (car == '\n'){
 			nInscDados = nInscDados + 1;
 		}
 	}


 	fclose(dados);
 	dados = fopen(DADOS, "r");


 	nInscDados = nInscDados - nCurs;
 
 	vestibulando = (vest*)calloc(nInscDados, sizeof(vest));

 	int aux = 0;
 	while (!feof(dados)){
 		fscanf(dados, "%d %d", &nC, &nV);
 		for (int j = 0; j < nV; j++){
 			vestibulando[aux].curso = nC;
 			fscanf(dados, "%d", &vestibulando[aux].matricula);
 			fscanf(dados, " %[^1234567890]", vestibulando[aux].nome);
 			fscanf(dados, "%d/%d/%d", &vestibulando[aux].nasc.dia, &vestibulando[aux].nasc.mes, &vestibulando[aux].nasc.ano);
 			fscanf(dados, " %[^\n]", vestibulando[aux].cota);
 			for (int k = 0; k < nInsc; k++){
 				if (vestibulando[aux].matricula == insc[k]){
 					vestibulando[aux].notas[0] = acertos[k][0];
 					vestibulando[aux].notas[1] = acertos[k][1];
 					vestibulando[aux].notas[2] = acertos[k][2];
 					vestibulando[aux].notas[3] = acertos[k][3];
 					vestibulando[aux].notas[4] = acertos[k][4];
 					dimVet(insc, k, nInsc);
 					for (int l = 0; l < nCurs; l++){
 						if (vestibulando[aux].curso == vetorCursos[l].cod){
 							vestibulando[aux].notaFinal = ((vestibulando[aux].notas[0] * vetorCursos[l].pesos[2]) + 
 														  (vestibulando[aux].notas[1] * vetorCursos[l].pesos[1]) +
 														  (vestibulando[aux].notas[2] * vetorCursos[l].pesos[4]) +
 														  (vestibulando[aux].notas[3] * vetorCursos[l].pesos[3]) +
 														  (vestibulando[aux].notas[4] * vetorCursos[l].pesos[0])) /
 														  (vetorCursos[l].pesos[0] + vetorCursos[l].pesos[1] + vetorCursos[l].pesos[2] + vetorCursos[l].pesos[3] + vetorCursos[l].pesos[4]);
 							break;
 						}
 					}
 					break;
 				}
 			}
 			aux = aux + 1;
 		}
 	}



 	vMedia = media;
 	vDesvPadrao = desv;
 	vCursos = vetorCursos;
 	vVestibulandos = vestibulando;
 	vVagas = vagasCurs;
 	numeroVest = nInscDados;
 	numeroCursos = nCurs;
}
