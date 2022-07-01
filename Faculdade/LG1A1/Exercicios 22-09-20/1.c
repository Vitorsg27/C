/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 10

/* Variáveis globais */


int   vet[MAX]; 
int     i;

/* CORPO DO PROGRAMA */
int main()
{
	setlocale (LC_ALL, "");
	printf ("Insira 10 números inteiros:\n\n");
	for (i =0; i<MAX; i++){
		scanf("%d", &vet[i]);
	}
	
	printf ("\n\n");
	
	/* Mostra o conteúdo do vetor */
	for ( i=0 ; i <MAX; i++  )
	{
		printf ("[%i]", vet[i] );
	}
	getch();
	return (0);
}
