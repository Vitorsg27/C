// Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constante
#define MAX 3

int	vet[MAX];
int maior, menor, i;

// encontra maior valor
int main (){

	setlocale (LC_ALL,"");
	printf ("Insira os 3 Números desejados: \n\n");
	
	for (i=0; i<MAX; i++){
		scanf("%i", &vet[i]);
	}
	
	maior = vet[0];
	for ( i= 0 ; i<MAX; i++)
		{
			if (vet[i] > maior){
				maior = vet[i];
				
			}
		}
		
	menor = vet[0];
	for ( i= 0 ; i<MAX; i++)
		{
			if (vet[i] < menor){
				menor = vet[i];
				
			}
		}

	printf ("\n\nMaior Número: %i\nMenor Número: %i", maior, menor);
	
	return (0);
}
