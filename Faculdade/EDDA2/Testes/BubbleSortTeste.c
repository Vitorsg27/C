#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10		//tamanho do vetor
#define MAXTAM 100	//valor maximo dos numeros a ordenar
 
 void selection_sort (int vetor[], int max) {
  int i, j, min, aux;
  
  for (i = 0; i < (max - 1); i++) {
    /* O minimo é o primeiro número não ordenado ainda */
    min = i;
    for (j = i+1; j < max; j++) {
      /* Caso tenha algum numero menor ele faz a troca do minimo*/
      if (vetor[j] < vetor[min]) {
   min = j;
      }
    }
    /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
  /* Imprime o vetor ordenado */
  for (i = 0; i < max; i++) {
    printf ("%d ",vetor[i]);
  }
  printf ("\n");
}
 
main()
{
	
//Gerador de vetores aleatorios

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
  
  //Selection
  printf("\n\n");
  selection_sort (vet, TAM);

 //Bubble
printf("\n\n<<Bubble>>\n");   
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

  
//Insertion Sort
  	printf("\n\n<<Insertion>>\n");
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
