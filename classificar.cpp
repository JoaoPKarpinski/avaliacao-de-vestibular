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

//	quicksortVestNotas(0, nVest, vVestibulandos);


 	int ac;
 	int l1;
 	int l3;
 	int l4;
 	int l5;
 	int l7;
 	int l8;
 	int l9;
 	int l11;
 	int l13;
 	int l15;
 	vest *aux;


//VINICIUS GABRIEL DA SILVA (558587) ESTAVA CADASTRADO COMO CONCORRENTE DA COTA L2, A QUAL ***NÃO EXISTE*** 
 	for (int i = 1; i < nCurs+1; i++){    
	 	ac = vVagas[i].vagas[0];                                                                      
	 	l1 = vVagas[i].vagas[1];                                                                      
	 	l3 = vVagas[i].vagas[2];                                                                      
	 	l4 = vVagas[i].vagas[3];                                                                      
	 	l5 = vVagas[i].vagas[4];                                                                      
	 	l7 = vVagas[i].vagas[5];                                                                      
	 	l8 = vVagas[i].vagas[6];                                                                      
	 	l9 = vVagas[i].vagas[7];                                                                      
	 	l11 = vVagas[i].vagas[8];                                                                      
	 	l13 = vVagas[i].vagas[9];                                                                      
	 	l15 = vVagas[i].vagas[10];                                                                      

	 	quicksortVestNotas(0, vCursos[i].qntInsc, (*vCursos[i].insc));
		inverterVetor(vCursos[i].qntInsc, (*vCursos[i].insc));

		//for (int j = 0; j < vCursos[i].qntInsc; j++){
 			//                                                                                                                                         
 		//}
  
 		for (int j = 0; j < vCursos[i].qntInsc; j++){                          printf("%d valor do i - cod %d - %d - %f\n\n", i, vCursos[i].cod, vCursos[i].insc[j] -> matricula, vCursos[i].insc[j] -> notaFinal);
 			if (!strcmp((*vCursos[i].insc[j]).cota, "AC") && ac > 0){                                                                                                                                           
 				vCursos[i].ac[vVagas[i].vagas[0] - ac] = vCursos[i].insc[j];           
 				ac--;
				if (ac == 0 && j+1 < vCursos[i].qntInsc && (strcmp((*vCursos[i].insc[ vVagas[i].vagas[0] > 0 &&j+1]).cota, "AC") == 0) && vCursos[i].ac[ac] -> notaFinal == vCursos[i].insc[j+1] -> notaFinal){
					printf("teste do if");if (vCursos[i].insc[j+1] -> diasIdade >= D60ANOS){
						aux = vCursos[i].ac[ac + 1];
						vCursos[i].ac[ac+1] = vCursos[i].insc[j+1];
						vCursos[i].insc[j+1] = aux;
					}
				}
 			}

 			else if (!strcmp((*vCursos[i].insc[j]).cota, "L1") && l1 > 0){                                                                                                                                          //printf("testel1\n");
 				vCursos[i].l1[vVagas[i].vagas[1]- l1] = vCursos[i].insc[j];                                                                                                                       
 				l1--;
				if (l1 == 0 && j+1 < vCursos[i].qntInsc && vVagas[i].vagas[1] > 0 && strcmp((*vCursos[i].insc[j+1]).cota, "L1") == 0 && vCursos[i].l1[l1] -> notaFinal == vCursos[i].insc[j+1] -> notaFinal){
					if (vCursos[i].insc[j+1] -> diasIdade >= D60ANOS){
						aux = vCursos[i].l1[l1 + 1];
						vCursos[i].l1[1] = vCursos[i].insc[j+1];
						vCursos[i].insc[j+1] = aux;
					}
				}			
 			}

 			else if (!strcmp((*vCursos[i].insc[j]).cota, "L3") && l3 > 0){                                                                                                                                          //printf("teste2\n");
 				vCursos[i].l3[vVagas[i].vagas[2] - l3] = vCursos[i].insc[j];                                                                                                                       
 				l3--;
				if (l3 == 0 && j+1 < vCursos[i].qntInsc && vVagas[i].vagas[2] > 0 && strcmp((*vCursos[i].insc[j+1]).cota, "L3") == 0 && vCursos[i].l3[l3] -> notaFinal == vCursos[i].insc[j+1] -> notaFinal){
					if (vCursos[i].insc[j+1] -> diasIdade >= D60ANOS){
						aux = vCursos[i].l3[l3 + 1];
						vCursos[i].l3[1] = vCursos[i].insc[j+1];
						vCursos[i].insc[j+1] = aux;
					}
				}			
 			}

 			else if (!strcmp((*vCursos[i].insc[j]).cota, "L4") && l4 > 0){                                                                                                                                          //printf("teste3\n");
 				vCursos[i].l4[vVagas[i].vagas[3] - l4] = vCursos[i].insc[j];                                                                                                                       
 				l4--;
				if (l4 == 0 && j+1 < vCursos[i].qntInsc && vVagas[i].vagas[3] > 0 && strcmp((*vCursos[i].insc[j+1]).cota, "L4") == 0 && vCursos[i].l4[l4] -> notaFinal == vCursos[i].insc[j+1] -> notaFinal){
					if (vCursos[i].insc[j+1] -> diasIdade >= D60ANOS){
						aux = vCursos[i].l4[l4 + 1];
						vCursos[i].l4[1] = vCursos[i].insc[j+1];
						vCursos[i].insc[j+1] = aux;
					}
				}			
 			}

 			else if (!strcmp((*vCursos[i].insc[j]).cota, "L5") && l5 > 0){                                                                                                                                          //printf("teste4\n");
 				vCursos[i].l5[vVagas[i].vagas[4] - l5] = vCursos[i].insc[j];                                                                                                                       
 				l5--;
				if (l5 == 0 && j+1 < vCursos[i].qntInsc && vVagas[i].vagas[4] > 0 && strcmp((*vCursos[i].insc[j+1]).cota, "L5") == 0 && vCursos[i].l5[l5] -> notaFinal == vCursos[i].insc[j+1] -> notaFinal){
					if (vCursos[i].insc[j+1] -> diasIdade >= D60ANOS){
						aux = vCursos[i].l5[l5 + 1];
						vCursos[i].l5[1] = vCursos[i].insc[j+1];
						vCursos[i].insc[j+1] = aux;
					}
				}			
 			}

 			else if (!strcmp((*vCursos[i].insc[j]).cota, "L7") && l7 > 0){                                                                                                                                          //printf("teste5\n");
 				vCursos[i].l7[vVagas[i].vagas[5] - l7] = vCursos[i].insc[j];                                                                                                                       
 				l7--;
				if (l7 == 0 && j+1 < vCursos[i].qntInsc &&  vVagas[i].vagas[5] > 0 && (strcmp((*vCursos[i].insc[j+1]).cota, "L7") == 0) && vCursos[i].l7[l7] -> notaFinal == vCursos[i].insc[j+1] -> notaFinal){
					if (vCursos[i].insc[j+1] -> diasIdade >= D60ANOS){
						aux = vCursos[i].l7[l7 + 1];
						vCursos[i].l7[1] = vCursos[i].insc[j+1];
						vCursos[i].insc[j+1] = aux;
					}
				}			
 			}

 			else if (!strcmp((*vCursos[i].insc[j]).cota, "L8") && l8 > 0){                                                                                                                                          //printf("teste6\n");
 				vCursos[i].l8[vVagas[i].vagas[6] - l8] = vCursos[i].insc[j];                                                                                                                       
 				l8--;
				if (l8 == 0 && j+1 < vCursos[i].qntInsc && vVagas[i].vagas[6] > 0 && strcmp((*vCursos[i].insc[j+1]).cota, "L8") == 0 && vCursos[i].l8[l8] -> notaFinal == vCursos[i].insc[j+1] -> notaFinal){
					if (vCursos[i].insc[j+1] -> diasIdade >= D60ANOS){
						aux = vCursos[i].l8[l8 + 1];
						vCursos[i].l8[1] = vCursos[i].insc[j+1];
						vCursos[i].insc[j+1] = aux;
					}
				}				
 			}

 			else if (!strcmp((*vCursos[i].insc[j]).cota, "L9") && l9 > 0){                                                                                                                                          //printf("teste7\n");
 				vCursos[i].l9[vVagas[i].vagas[7] - l9] = vCursos[i].insc[j];                                                                                                                       
 				l9--;
				if (l9 == 0 && j+1 < vCursos[i].qntInsc && vVagas[i].vagas[7] > 0 && strcmp((*vCursos[i].insc[j+1]).cota, "L9") == 0 && vCursos[i].l9[l9] -> notaFinal == vCursos[i].insc[j+1] -> notaFinal){
					if (vCursos[i].insc[j+1] -> diasIdade >= D60ANOS){
						aux = vCursos[i].l9[l9 + 1];
						vCursos[i].l9[1] = vCursos[i].insc[j+1];
						vCursos[i].insc[j+1] = aux;
					}
				}				
 			}

 			else if (!strcmp((*vCursos[i].insc[j]).cota, "L11") && l11 > 0){                                                                                                                                          //printf("teste8\n");
 				vCursos[i].l11[vVagas[i].vagas[8] - l11] = vCursos[i].insc[j];                                                                                                                       
 				l11--;
				if (l11 == 0 && j+1 < vCursos[i].qntInsc && vVagas[i].vagas[8] > 0 && strcmp((*vCursos[i].insc[j+1]).cota, "L11") == 0 && vCursos[i].l11[l11] -> notaFinal == vCursos[i].insc[j+1] -> notaFinal){
					if (vCursos[i].insc[j+1] -> diasIdade >= D60ANOS){
						aux = vCursos[i].l11[l11 + 1];
						vCursos[i].l11[1] = vCursos[i].insc[j+1];
						vCursos[i].insc[j+1] = aux;
					}
				}
 			}

 			else if (!strcmp((*vCursos[i].insc[j]).cota, "L13") && l13 > 0){                                                                                                                                          //printf("teste9\n");
 				vCursos[i].l13[vVagas[i].vagas[9] - l13] = vCursos[i].insc[j];                                                                                                                       
 				l13--;
				if (l13 == 0 && j+1 < vCursos[i].qntInsc && vVagas[i].vagas[9] > 0 && strcmp((*vCursos[i].insc[j+1]).cota, "L13") == 0 && vCursos[i].l13[l13] -> notaFinal == vCursos[i].insc[j+1] -> notaFinal){
					if (vCursos[i].insc[j+1] -> diasIdade >= D60ANOS){
						aux = vCursos[i].l13[l13 + 1];
						vCursos[i].l13[1] = vCursos[i].insc[j+1];
						vCursos[i].insc[j+1] = aux;
					}
				}
 			}

 			else if (!strcmp((*vCursos[i].insc[j]).cota, "L15") && l15 > 0){                                                                                                                                        
 				vCursos[i].l15[vVagas[i].vagas[10] - l15] = vCursos[i].insc[j];                                                                                                                                      
 				l15--;
				if (l15 == 0 && j+1 < vCursos[i].qntInsc && vVagas[i].vagas[10] > 0 && strcmp((*vCursos[i].insc[j+1]).cota, "L15") == 0 && vCursos[i].l15[l15] -> notaFinal == vCursos[i].insc[j+1] -> notaFinal){
					if (vCursos[i].insc[j+1] -> diasIdade >= D60ANOS){
						aux = vCursos[i].l15[l15 + 1];
						vCursos[i].l15[1] = vCursos[i].insc[j+1];
						vCursos[i].insc[j+1] = aux;
					}
				}
 			}
 		}
 	}
 	
 	

	return 0;



	
}










