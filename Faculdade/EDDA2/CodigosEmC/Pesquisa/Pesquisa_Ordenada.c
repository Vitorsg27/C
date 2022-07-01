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
	int i, j, min, aux;
	for (i=0; i<(tam-1); i++){
		min = i;
		for (j=(i+1); j<tam; j++){
			if(vet[j]<vet[min])
				min = j;
		}
		if (i!=min){
			aux = vet[i];
			vet[i] = vet[min];
			vet[min] = aux;
		}
	}
}

int pesquisa_ordenada(int vet[], int tam, int n){
	int i;
	for (i=0; i<tam; i++){		//percorre o vetor
		if (vet[i] == n){		//verifica se vetor atual é o número pesquisado
			return i;			//caso sim retorna a posição do vetor na qual foi encontrado
		}else
			if (vet[i]>n){		//caso o vetor testado no momento for maior que o buscado
				return -1;		//retorna -1 para indicar o erro
			}
	}
	return -1;
}


int main() {
	
	int tam = TAM;
	int maxtam = MAXTAM;
	int vet[TAM], i, n;
	srand(time(NULL));
	
	gerador_aleatorio(vet, tam, maxtam);
	for (i=0; i<tam; i++){
		printf("[%d]", vet[i]);
	}

	selection_sort(vet, tam);
	printf("\n\nVetores apos ordenacao\n");
	for (i=0; i<tam; i++){
		printf("[%d]", vet[i]);
	}
	
	printf("\n\nEscolha um numero para ser pesquisado:");
	scanf("%d", &n);
	
	int result = pesquisa_ordenada(vet, tam, n);
	if (result>=0){
		printf("\n\nNumero %d encontrado na posicao [%d]", n, result);
	}
	else printf("\n\nNumero nao encontrado");
	
	return 0;
}
