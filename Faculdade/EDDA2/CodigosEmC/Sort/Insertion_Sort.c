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
	for (i=1; i<tam; i++){						//percorre o vetor a partir da segunda posicao para comparar com a primeira
		aux = vet[i];							//guarda o valor que vai ser ordenado
		for(j=i-1; j>=0 && vet[j]>aux; j--){	//percorre os vetores anteriores enquanto a posicao deles forem maior ou igual a 0 e o valor deles forem maior do que o numero a ser ordenado
			vet[j+1] = vet[j];					//caso o vetor for >= a posicao 0 e esse vetor for > que o numero ordenado, insere esse numero uma posicao a frente
		}
		vet[j+1] = aux;							//assim que todos os numeros maiores tiverem ido uma posicao para frente insere o numero ordenado na posicao "vazia"
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

    insertion_sort(vet, tam);
	printf("\n\nVetores apos ordenacao\n");
	for (i=0; i<tam; i++){
		printf("[%d]", vet[i]);
	}

    return 0;
}
