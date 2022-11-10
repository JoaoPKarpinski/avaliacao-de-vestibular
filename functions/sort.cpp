#include <stdio.h>
#include <stdlib.h>
#include "funcoes-e-estruturas.h"

void troca(curso &a, curso &b){
  curso aux; 
  aux = a; 
  a = b; 
  b = aux;
}

int separa(int p, int r, curso v[]){ // p = inicio r = fim
  int x, esq, dir;
  x = v[p].cod; // = PIVO
  esq = p - 1;
  dir = r + 1;
  while (1) {
    do {
      dir--;
    } while (v[dir].cod > x);
    do {
      esq++;
    } while (v[esq].cod < x);
    if (esq < dir)
      troca(v[esq], v[dir]);
    else
      return dir;
  }
}



void quicksortCurso(int inicio, int fim, curso *&v){
  int q;
  if (inicio < fim) { 
    q = separa(inicio, fim, v); // = FIM, NA PRIMEIRA INSTANCIA RECURSIVA DA FUNCAO
    quicksortCurso(inicio, q, v);
    quicksortCurso(q+1, fim, v);
  }
}



void trocaVagas(vagasCurso &a, vagasCurso &b){
  vagasCurso aux; 
  aux = a; 
  a = b; 
  b = aux;
}

int separaVagas(int p, int r, vagasCurso *&v){ // p = inicio r = fim
  int x, esq, dir;
  x = v[p].cod; // = PIVO
  esq = p - 1;
  dir = r + 1;
  while (1) {
    do {
      dir--;
    } while (v[dir].cod > x);
    do {
      esq++;
    } while (v[esq].cod < x);
    if (esq < dir)
      trocaVagas(v[esq], v[dir]);
    else
      return dir;
  }
}



void quicksortVagas(int inicio, int fim, vagasCurso *&v){
  int q;
  if (inicio < fim) { 
    q = separaVagas(inicio, fim, v); // = FIM, NA PRIMEIRA INSTANCIA RECURSIVA DA FUNCAO
    quicksortVagas(inicio, q, v);
    quicksortVagas(q+1, fim, v);
  }
}
