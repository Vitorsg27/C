#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXTAM 1000	//define numero maximo gerado
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

int pesquisa_binaria (int vet[], int tam, int n){
	int i, inicio, meio, fim;
	inicio = 0;					//define o inicio
	fim = tam-1;				//define o final com menos -1 pois vetor de 10 vai de 0->9
	while (inicio<=fim){		//repete a condição enquanto o inicio não for maior que o fim
		meio = (inicio+fim)/2;	//define o meio
		if(n<vet[meio]){		//se o numero buscado for menor que o meio
			fim = meio-1;		//o fim sera 1 numero antes do meio atual
		}else					
			if(n>vet[meio]){	//se o numero buscado for maior que o meio
			inicio=meio+1;		//o inicio será 1 numero depois do meio atual
			}else				//caso o meio não seja maior nem menor que o buscado
				return meio;	//ele é o numero buscado, então retorna a sua posição
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
	
	int result = pesquisa_binaria(vet, tam, n);
	if (result>=0){
		printf("\n\nNumero %d encontrado na posicao [%d]", n, result);
	}
	else printf("\n\nNumero nao encontrado");
		
	return 0;
}
