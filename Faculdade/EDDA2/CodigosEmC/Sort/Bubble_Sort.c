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

void bubble_sort (int vet[], int tam){
    int i, j, k, aux;
    for(i=0; i<tam-1; i++){				//percorre o vetor ate a penultima posicao pois esse sort troca com o vetor 1 posicao a frente
        for(j=0; j<tam-1-i; j++){		//percorre o vetor ate a penultima posicao de vetor que ainda nao foram ordenados
            if(vet[j]>vet[j+1]){		//verifica se o numero do vetor atual é maior que o da frente
                aux = vet[j];			//caso seja o aux recebe o valor do vetor atual
                vet[j] = vet[j+1];		//a posicao atual recebe o numero da frente
                vet[j+1] = aux;			//o vetor da frente recebe o numero ordenado que era maior, finalizando a troca
            }							//se repete o processo ate nao ter nenhum numero maior na frente e finalizar a ordenacao desse numero
        }
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

    bubble_sort(vet, tam);
	printf("\n\nVetores apos ordenacao\n");
	for (i=0; i<tam; i++){
		printf("[%d]", vet[i]);
	}

    return 0;
}
