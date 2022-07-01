/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 2

/* Variáveis globais */


int   	vet[MAX]; 
int     indice;
float 	media;
float 	soma=0;
int		valor;
int 	position;

/* CORPO DO PROGRAMA */
int main()
{
	setlocale (LC_ALL, "");
	
	for (indice =0; indice<MAX; indice++){
	scanf("%d", &vet[indice]);
	}
	
	/* Mostra o conteúdo do vetor */
	for ( indice= 0 ; indice <50; indice++)
	{
		if 
		printf ("\n[%i]", vet[indice] );
	}
