#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXTAM 10	//define numero maximo gerado
#define TAM 10		//define tamano do vetor gerado

int main() {
	
	int vet[TAM], i, n;
	srand(time(NULL));
	
	for (i = 0; i < TAM; i++)
		vet[i] = rand() % MAXTAM;
		
		printf("Vetor Gerado:\n");
		for(i= 0; i <TAM; i++)
			printf("%d ", vet[i]);
		
		printf("\n\nQual valor deseja buscar? ");
		scanf ("%d", &n);
		
		
		//busca sequencial
		for(i= 0; i <TAM; i++){	
			if(vet[i] == n)
				printf("%d ocorre na posicao %d do vetor.\n", n, i);
		}
		
		
	return 0;
}
