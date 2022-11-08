#include <stdio.h>
#include <stdlib.h>


void troca(int &a, int &b){
  int aux; 
  aux = a; 
  a = b; 
  b = aux;
}

int separa(int p, int r, int v[MAX]){ // p = inicio r = fim
  int x, esq, dir;
  x = v[p];
  esq = p - 1;
  dir = r + 1;
  while (1) {
    do {
      dir--;
    } while (v[dir] > x);
    do {
      esq++;
    } while (v[esq] < x);
    if (esq < dir)
      troca(v[esq], v[dir]);
    else
      return dir;
  }
}



void quicksortInt(int inicio, int fim, int v[MAX]){
  int q; // q = pivo
  if (inicio < fim) { 
    q = separa(inicio, fim, v);
    quicksort(inicio, q, v);
    quicksort(q+1, fim, v);
  }
}
