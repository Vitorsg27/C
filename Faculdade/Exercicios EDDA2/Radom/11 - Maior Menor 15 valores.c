// Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constante
#define MAX 15

int maior (int *vet)


	int nMaior = vet[0], i;
	for ( i= 0 ; i<MAX; i++)
		{
			if (vet[i] > nMaior){
				nMaior = vet[i];
				
			}
		}
	return (nMaior);
}		

int menor (int *vet){
		
	int nMenor = vet[0], i;
	for ( i= 0 ; i<MAX; i++)
		{
			if (vet[i] < nMenor){
				nMenor = vet[i];
				
			}
		}
	return (nMenor);
}

int main (){

	setlocale (LC_ALL,"");
	int	vet[MAX], i;
	
	printf ("Insira os %d Números desejados: \n\n", MAX);
	
	for (i=0; i<MAX; i++){
		scanf("%i", &vet[i]);
	}
	
	printf ("\n\nMaior Número: %i\nMenor Número: %i", maior(vet), menor(vet));
	
	return (0);
}
