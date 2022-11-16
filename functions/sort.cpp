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


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void trocaNotas(vest &a, vest &b){
  vest aux; 
  aux = a; 
  a = b; 
  b = aux;
}

int separaNotas(int p, int r, vest *&v){ // p = inicio r = fim
  float x;
  int esq, dir;
  x = v[p].notaFinal; // = PIVO
  esq = p - 1;
  dir = r + 1;
  while (1) {
    do {
      dir--;
    } while (v[dir].notaFinal > x);
    do {
      esq++;
    } while (v[esq].notaFinal < x);               // [1, 4, 2, 15, 90, 3]     --->      
    if (esq < dir)
      trocaNotas(v[esq], v[dir]);
    else
      return dir;
  }
}

void quicksortVestNotas(int inicio, int fim, vest *&v){
  int q;
  if (inicio < fim) { 
    q = separaNotas(inicio, fim, v); // = FIM, NA PRIMEIRA INSTANCIA RECURSIVA DA FUNCAO
    quicksortVestNotas(inicio, q, v);
    quicksortVestNotas(q+1, fim, v);
  }
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void trocaNotasCurs(vest &a, vest &b){
  vest aux; 
  aux = a; 
  a = b; 
  b = aux;
}

int separaNotasCurs(int p, int r, vest *&v){ // p = inicio r = fim
  float x;
  int esq, dir;
  x = v[p].notaFinal; // = PIVO
  esq = p - 1;
  dir = r + 1;
  while (1) {
    do {
      dir--;
    } while (v[dir].notaFinal > x);
    do {
      esq++;
    } while (v[esq].notaFinal < x);               // [1, 4, 2, 15, 90, 3]     --->      
    if (esq < dir)
      trocaNotasCurs(v[esq], v[dir]);
    else
      return dir;
  }
}

void quicksortNotasCurso(int inicio, int fim, vest *&v){
  int q;
  if (inicio < fim) { 
    q = separaNotasCurs(inicio, fim, v); // = FIM, NA PRIMEIRA INSTANCIA RECURSIVA DA FUNCAO
    quicksortNotasCurso(inicio, q, v);
    quicksortNotasCurso(q+1, fim, v);
  }
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void trocarVest(vest &a, vest &b){
      vest aux; 
      
      aux = a;
      a = b;
      b = aux;
  }

void inverterVetor(int qtd, vest *&v){
    for (int i = 0; i < qtd/2; i++){
        trocarVest(v[(0+i)], v[((qtd-1)-i)]);
    }
}