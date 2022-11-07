#include <stdio.h>
#include "medDesv.cpp"
#include "construirMatriz.cpp"


#define ACERTOS "./arquivosEntradas/acertos.txt"
#define CURSOSPESOS "./arquivosEntradas/cursos_e_pesos.txt"
#define DADOS "./arquivosEntradas/dados.txt"


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
	int pesos[5];
	vest* concorrentes;
	//o ultimo peso é da redação
};

