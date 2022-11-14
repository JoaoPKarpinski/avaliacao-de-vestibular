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

	//quicksortNotas(0, nVest, vVestibulandos);

/*

 	aux = 1;
 	int ac = 0;
 	int l1 = 0;
 	int l3 = 0;
 	int l4 = 0;
 	int l5 = 0;
 	int l7 = 0;
 	int l8 = 0;
 	int l9 = 0;
 	int l11 = 0;
 	int l13 = 0;
 	int l15 = 0;


//VINICIUS GABRIEL DA SILVA (558587) ESTAVA CADASTRADO COMO CONCORRENTE DA COTA L2, A QUAL ***NÃO EXISTE*** 
 	for (int i = 1; i < nCurs; i++){                printf("iiiiiiiiiiiiiiiii%diiiiiiiiiiiiiiiiiii\n", i);
 		while(1){                                   printf("%d - *%s* - %d -- i = %d --\nnumero do curso i - %d   =====   numero do curso vest - %d\n\n\n\n", vestibulando[aux].matricula, vestibulando[aux].cota, aux, i, vetorCursos[i].cod, vestibulando[aux].curso);
 			if (vestibulando[aux].curso != vetorCursos[i].cod || aux >= nInscDados){
 				break;
 			}
 			else if (!strcmp(vestibulando[aux].cota, "AC")){
 				vetorCursos[i].ac[ac] = &vestibulando[aux];
 				ac++;
 				aux++;
 				continue;
 			}
 			else if (!strcmp(vestibulando[aux].cota, "L1")){
 				vetorCursos[i].l1[l1] = &vestibulando[aux];
 				l1++;
 				aux++;
 				continue;
 			}
 			else if (!strcmp(vestibulando[aux].cota, "L3")){
 				vetorCursos[i].l3[l3] = &vestibulando[aux];
 				l3++;
 				aux++;
 				continue;
 			}
 			else if (!strcmp(vestibulando[aux].cota, "L4")){
 				vetorCursos[i].l4[l4] = &vestibulando[aux];
 				l4++;
 				aux++;
 				continue;
 			}
 			else if (!strcmp(vestibulando[aux].cota, "L5")){
 				vetorCursos[i].l5[l5] = &vestibulando[aux];
 				l5++;
 				aux++;
 				continue;
 			}
 			else if (!strcmp(vestibulando[aux].cota, "L7")){
 				vetorCursos[i].l7[l7] = &vestibulando[aux];
 				l7++;
 				aux++;
 				continue;
 			}
 			else if (!strcmp(vestibulando[aux].cota, "L8")){
 				vetorCursos[i].l8[l8] = &vestibulando[aux];
 				l8++;
 				aux++;
 				continue;
 			}
 			else if (!strcmp(vestibulando[aux].cota, "L9")){
 				vetorCursos[i].l9[l9] = &vestibulando[aux];
 				l9++;
 				aux++;
 				continue;
 			}
 			else if (!strcmp(vestibulando[aux].cota, "L11")){
 				vetorCursos[i].l11[l11] = &vestibulando[aux];
 				l11++;;
 				aux++;
 				continue;
 			}
 			else if (!strcmp(vestibulando[aux].cota, "L13")){
 				vetorCursos[i].l13[l13] = &vestibulando[aux];
 				l13++;;
 				aux++;
 				continue;
 			}
 			else if (!strcmp(vestibulando[aux].cota, "L15")){
 				vetorCursos[i].l15[l15] = &vestibulando[aux];
 				l15++;;
 				aux++;
 				continue;
 			}
 			else{
 				aux++;
 			}
 			
 		}
 	}
*/

	return 0;
}