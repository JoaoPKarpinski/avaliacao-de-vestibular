#include "./functions/functionsVest.h"


//#define PESSOA 571567

void dimVet(int *&vetor, int k, int &tam){
	vetor[k] = vetor[tam];
	tam = tam-1;
}


/*******************************
     TROCAR AS CONSTANTES DE ARQUIVOS
     POR PARAMETRO DE FUNÇÃO
********************************/


int main(){
	FILE *notas = fopen(ACERTOS, "r");
	FILE *dados = fopen(DADOS, "r");
	FILE *cursos = fopen(CURSOSPESOS, "r");
	FILE *testeNotas = fopen("testeNotas.txt", "a");

	
	int nInsc, *insc;

	int nCurs;
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
//	notaF = (float*)malloc(nInsc * sizeof(float));

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
	for (int i = 0; i < nCurs; i++){
	fscanf(cursos, "%d", &vetorCursos[i].cod);
	fscanf(cursos, " %[^1234567890]", vetorCursos[i].nome);
		for (int j = 0; j < 5; j++){
		fscanf(cursos, "%d", &vetorCursos[i].pesos[j]);
		}
	}
 

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
 			//fprintf(testeNotas, "%d - %s\nData de nasc - %d/%d/%d \n\n", vestibulando[aux].matricula, vestibulando[aux].nome, vestibulando[aux].nasc.dia, vestibulando[aux].nasc.mes, vestibulando[aux].nasc.ano);

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
 				qntdvezes = qntdvezes+1;
 			}
 			aux = aux + 1;
 		}
 	}

///////////////testeNotas//////////////////
// 	for (int i = 0; i < nInscDados; i++){
// 		fprintf(testeNotas, "%d - %s\nData de nasc - %d/%d/%d", vestibulando[i].matricula, vestibulando[i].nome, vestibulando[i].nasc.dia, vestibulando[i].nasc.mes, vestibulando[i].nasc.ano);
// 		if (vestibulando[i].notaFinal != 0){
// 			fprintf(testeNotas, "\n nota final ==> %.4f\n\n\n\n", vestibulando[i].notaFinal);
// 		}
// 	}
// 	fprintf(testeNotas, "\n\n\n\n========== qntdvezes - %d ============\n\n\n\n", qntdvezes);
// 	fprintf(testeNotas, "\n\n\n\n========== qntdpessoas - %d ============\n\n\n\n", aux);
//	
//////////////testeNotas//////////////////	

	return 0;
}
