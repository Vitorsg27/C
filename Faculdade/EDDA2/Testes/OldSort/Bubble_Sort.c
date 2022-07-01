#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort (int vet[], int TAM) {
  	int i, j, k, aux; 
  	
  	printf("\n\n<<Bubble>>\n");  
  	for(k = 0; k<TAM; k++) 				//Mostra como estao os vetores durante a ordenacao (primeira linha antes de ordenar)
    printf("%d ", vet[k]);
    printf("\n");
    
 
  for(i=0; i<TAM; i++)
  {
		for(j = 0; j<TAM-1-i; j++)
		{
			if(vet[j]>vet[j+1])
			{
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	for(k = 0; k<TAM; k++) 				//Mostra como estao os vetores durante a ordenacao
    printf("%d ", vet[k]);
    printf("\n");
  }
  printf("\n\nBubble Sort Final");
  
  for( i = 0; i < TAM; i++ )
  {
    printf("\nvetor[%d] %d",i,vet[i]); // exibe o vetor ordenado
  }	
}

void main()
{
	
//Gerador de vetores aleatorios
	int MAXTAM = 100;
	int TAM = 10;
	int vet[TAM],
	i = 0,
	j = 0,
	k = 0,
	aux = 0;
	time_t t;	
	srand((unsigned) time(&t));		// inicia a geração de numero aleatoria
  
  	printf("Numeros aleatorios escolhidos");
	for(i = 0; i < TAM; i++ ) 		// define os numeros aleatorios ao vetor
  {	
	aux = rand() % MAXTAM;
	vet[i] = aux;
	printf("\nVetor[%d] %d", i, vet[i]);
  }
  
  printf ("\n\n");
  bubble_sort (vet, TAM);
  
  }
