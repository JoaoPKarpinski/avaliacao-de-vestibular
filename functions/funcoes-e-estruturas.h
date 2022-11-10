#include <stdio.h>
#include "medDesv.cpp"
#include "construirMatriz.cpp"


#define ACERTOS "./arquivosEntradas/acertos.txt"
#define CURSOSPESOS "./arquivosEntradas/cursos_e_pesos.txt"
#define DADOS "./arquivosEntradas/dados.txt"
#define CURSOSVAGAS "./arquivosEntradas/cursos_e_vagas.txt"



struct data{
	int dia;
	int mes;
	int ano;
};

struct vest{
	int matricula;
	int curso;
	char cota[4];
	char nome[100];
	float notaFinal;
	float notas[5];
	data nasc;
	char situacao;
};

struct curso{
	char nome[100];
	int cod;
	int pesos[5];              //o ultimo peso é da redação
};


struct vagasCurso{
	int cod;
	int vagas[11];          // ac l1 l3 l4 l5 l7 l8 l9 l11 l13 l15
};