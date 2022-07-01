/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 10

/* Variáveis globais */

int   	vet[MAX]; 
int    	indice;
int 	quadrado;

/* CORPO DO PROGRAMA */
int main()
{
	setlocale (LC_ALL, "");
	printf ("Insira 10 números inteiros:\n\n");	
	for (indice =0; indice<MAX; indice++)
	{
	scanf("%d", &quadrado);
	vet[indice] = quadrado * quadrado;
	}
	
	printf("\n\nRaiz quadrada dos números informados:\n");
	/* Mostra o conteúdo do vetor */
	for ( indice=0 ; indice <MAX; indice++  )
	{
		printf ("\n%i", vet[indice] );
	}
	getch();
	return (0);
}
