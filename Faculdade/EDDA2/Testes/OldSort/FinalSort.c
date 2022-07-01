#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort (int vet[], int TAM) {
int i, j, k, min, aux;
  
printf("\n\n<<Selection Sort>>\n");
for (i = 0; i < (TAM - 1); i++) {		//O minimo é o primeiro número não ordenado ainda
    min = i;
    for (j = i+1; j < TAM; j++) {		// Caso tenha algum numero menor ele faz a troca do minimo
    	if (vet[j] < vet[min]) {
   		min = j;
    	}
    }
    // Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los
    if (i != min) {
      aux = vet[i];
      vet[i] = vet[min];
      vet[min] = aux;
    }
    for(k = 0; k<TAM; k++) 				//Mostra como estao os vetores durante a ordenacao
    printf("%d ", vet[k]);
    printf("\n");
  }

	printf("\n\nSelection Sort Final");
	for( i = 0; i < TAM; i++ )
	{
	    printf("\nvetor[%d] %d",i,vet[i]); // exibe o vetor ordenado
	}
}


void bubble_sort (int vet[], int TAM) {
  int i, j, k, aux; 
  
  printf("\n\n<<Bubble Sort>>\n");   
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


void insertion_sort (int vet[], int TAM) {
int i, j, k, aux; 
  
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


main()
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
	 
	printf("Numeros aleatorios escolhidos:\n");
	for(i = 0; i < TAM; i++ ){		// define os numeros aleatorios ao vetor	
	aux = rand() % MAXTAM;
	vet[i] = aux;
	printf("%d ", vet[i]);
	}
	  
	printf ("\n\n");
	selection_sort (vet, TAM);
	  
	printf ("\n\n");
	bubble_sort (vet, TAM);
	  
	printf ("\n\n");
	insertion_sort (vet, TAM);  
}
