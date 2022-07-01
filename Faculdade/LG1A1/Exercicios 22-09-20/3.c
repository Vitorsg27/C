/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 5

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
	printf("Insira os números desejados:\n\n");
	for (indice =0; indice<MAX; indice++){
	scanf("%d", &vet[indice]);
	}
	
	/* Mostra o conteúdo do vetor em ordem inversa*/
	printf ("\n\n\nVetores em ordem inversa\n");
	for ( indice=MAX-1 ; indice >=0; indice--)
	{
		printf ("\n[%i]", vet[indice] );
	}
	
	printf ("\n\n\nNúmeros Pares\n");
	
	/* Mostra os números pares*/
		for ( indice=0 ; indice <MAX; indice++)
	{
		if (vet[indice]%2==0)
			printf ("\n[%i]", vet[indice] );
	}
	
	printf ("\n\n\nNúmeros Impares\n");
	
	/* Mostra os números ímpares*/
	for ( indice=0 ; indice <MAX; indice++)
	{
		if (vet[indice]%2!=0)
			printf ("\n[%i]", vet[indice] );
	}
	
	printf ("\n\n\nMédia Aritmética\n");
	
	/* Mostra a média aritmética*/
		for ( indice=0 ; indice <MAX; indice++)
		{
			soma = soma + vet[indice];
		}
		media = soma / MAX;
	
			printf ("\n[%.2f]", media );
			
	printf ("\n\n\nMaior Valor:\n");
	
	/* encontra maior valor*/
	valor = vet[0];
	position = 0;
	for ( indice= 1 ; indice <MAX; indice++)
		{
			if (vet[indice] > valor){
				valor = vet[indice];
				position = indice;
				
			}
		}
		position = position + 1;
	printf ("Maior Vetor: %iº vetor - [%i]", position, valor);
	
		printf ("\n\n\nMenor Valor\n");
	
	/* encontra menor valor*/
	valor = vet[0];
	position = 0;
	for ( indice= 1 ; indice <MAX; indice++)
		{
			if (vet[indice] < valor){
				valor = vet[indice];
				position = indice;
		
			}
		}
		position = position + 1;
	printf ("Menor Vetor: %iº vetor - [%i]", position, valor);
	
	printf ("\n\n");
	
	
	getch();
	return (0);
}
