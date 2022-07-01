#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 void selection_sort (int vet[], int max) {
  	int i, j, k, min, aux;
  	
  	printf("\n\n<<Selection>>\n");  
  	for(k = 0; k<max; k++) 				//Mostra como estao os vetores durante a ordenacao (primeira linha antes de ordenar)
    printf("%d ", vet[k]);
    printf("\n");
    
  for (i = 0; i < (max - 1); i++) {
    /* O minimo é o primeiro número não ordenado ainda */
    min = i;
    for (j = i+1; j < max; j++) {
      /* Caso tenha algum numero menor ele faz a troca do minimo*/
      if (vet[j] < vet[min]) {
   min = j;
      }
    }
    /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
    if (i != min) {
      aux = vet[i];
      vet[i] = vet[min];
      vet[min] = aux;
    }
    for(k = 0; k<max; k++) 				//Mostra como estao os vetores durante a ordenacao
    printf("%d ", vet[k]);
    printf("\n");
  }
  printf("\n\nSelection Sort Final");
  
  for( i = 0; i < max; i++ )
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
  selection_sort (vet, TAM);
  
  }
