#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXTAM 10	//define numero maximo gerado
#define TAM 10		//define tamanho do vetor gerado

void gerador_aleatorio (int vet[], int tam, int maxtam){
	int i;
	
	for (i = 0; i<tam; i++){
		vet[i] = rand() % maxtam;
	}
}

void insertion_sort(int vet[], int tam){
	int i, j, k, aux;
	for (i=1; i<tam; i++){
		aux = vet[i];
		for(j=i-1; j>=0 && vet[j]>aux; j--){
			vet[j+1] = vet[j];
		}
		vet[j+1] = aux;
		printf("\n");
		for (k=0; k<tam; k++){
			printf("[%d]", vet[k]);
		}
	}
}


int main() {
	
	int tam = TAM;
	int maxtam = MAXTAM;
	int vet[TAM], i;
	srand(time(NULL));
	
	gerador_aleatorio(vet, tam, maxtam);
	for (i=0; i<tam; i++){
		printf("[%d]", vet[i]);
	}

    insertion_sort(vet, tam);
	printf("\n\nVetores apos ordenacao\n");
	for (i=0; i<tam; i++){
		printf("[%d]", vet[i]);
	}

    return 0;
}
