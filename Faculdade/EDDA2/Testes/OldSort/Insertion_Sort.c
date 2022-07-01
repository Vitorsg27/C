#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_sort (int vet[], int TAM) {
 	int i, j, k, aux; 
 	
 	printf("\n\n<<Insertion>>\n");
  	for(k = 0; k<TAM; k++) 				//Mostra como estao os vetores durante a ordenacao (primeira linha antes de ordenar)
    printf("%d ", vet[k]);
    printf("\n");
  
  for(i = 1; i<TAM;i++){
      aux = vet[i];
      j = i-1;
      while((aux<vet[j]) && (j>=0)){
         vet[j+1] = vet[j];
         j = j-1;
      }
      vet[j+1]= aux;
    for(k = 0; k<TAM; k++) 			 //Mostra como estao os vetores durante a ordenacao
    printf("%d ", vet[k]);
    printf("\n");
   }

   printf("\n\nInsertion Sort Final");
   for(i=0;i<TAM;i++)
      printf("\nvetor[%d] %d", i, vet[i]); // exibe o vetor ordenado
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
  insertion_sort (vet, TAM);
  
  }
