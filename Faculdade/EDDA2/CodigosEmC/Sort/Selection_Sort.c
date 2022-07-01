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

void selection_sort (int vet[], int tam){
	int i, j, k, min, aux;
	for (i=0; i<(tam-1); i++){			//percorre o vetor
		min = i;						//define o primeiro vetor como minimo para comecar	
		for (j=(i+1); j<tam; j++){		//percorre o vetor para fazer a comparacao com o primeiro vetor
			if(vet[j]<vet[min]){		//se o vetor atual for menor que o primeiro vetor
				min = j;				//entao o vetor atual e indicado como o valor minimo
			}
		}
		if (i!=min){					//se o vetor atual for diferente do min
			aux = vet[i];				//entao o aux recebe o valor que esta como min
			vet[i] = vet[min];			//o valor do vetor que foi comparado eh atualizado para o valor menor
			vet[min] = aux;				//o vetor que estava com o valor menor recebe o valor maior
		}								//a troca foi finalizada
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
	printf("\n");

	selection_sort(vet, tam);
	printf("\n\nVetores apos ordenacao\n");
	for (i=0; i<tam; i++){
		printf("[%d]", vet[i]);
	}
	
	return 0;
}
