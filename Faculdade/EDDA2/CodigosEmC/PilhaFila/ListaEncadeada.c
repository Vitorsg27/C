#include <stdio.h>
#include <stdlib.h>

//Estruturas
typedef struct Elemento{
	int dado;
	struct Elemento *seguinte;
}Elemento;

typedef struct Lista{
	struct Elemento *inicio;
	struct Elemento *fim;
	int tamanho;
}Lista;

//Funcoes
void inicializacao (struct Lista *lista){
	lista->inicio = NULL;
	lista->fim = NULL;
	lista->tamanho = 0;
}

void inserir (struct Lista *lista, int num){
	Elemento *novo = (Elemento*)malloc(sizeof(Elemento));
	novo->dado = num;
	novo->seguinte = NULL;
	if(lista->inicio == NULL){
		lista->inicio = novo;
	}
	lista->fim = novo;
	lista->tamanho = lista->tamanho + 1;
}

void print(struct Lista *lista){
		printf("%d, %d, %d\n", lista->inicio, lista->fim, lista->tamanho);
}

int main(){	
	struct Lista lista;
	int num, opc;
	
	do
	printf("Escolha o que quer fazer\n\n");
	printf("1");
	scanf("%d". &opc);
	switch (opc){
		
	case	inicializacao (&lista);
		inserir(&lista, num);
		print(&lista);
		
		inserir(&lista, num);
		print(&lista);
		
		inserir(&lista, num);
		print(&lista);
	
	return 0;
}
