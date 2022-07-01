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

void pesquisa_desordenada(int vet[], int tam, int n){
	int i, fail = 0;
	for (i=0; i<tam; i++){									//percorre o vetor para buscar o numero
		if (vet[i] == n){									//se o numero buscado for igual o vetor
			printf("\nNumero %d na posicao [%d]", n , i);	//mostra a posicao do vetor que esta o numero
		}else fail = fail + 1;								//caso nao ache nessa linha acressenta +1 no contador de falha de busca
	}
	if (fail == tam){										//se o numero de falhas na buscar for o mesmo que o tamanho do vetor
		printf("Numero nao encontrado");					//entao nao foi achado o numero procurado em nenhuma posicao
	}
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
	
	printf("\n\nEscolha um numero para ser pesquisado:");
	scanf("%d", &n);
	
	pesquisa_desordenada(vet, tam, n);
		
	return 0;
}

