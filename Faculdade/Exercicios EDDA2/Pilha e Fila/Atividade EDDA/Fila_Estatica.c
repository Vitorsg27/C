#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <locale.h>

#define MAXTAM 3

typedef struct T_FILA{
	int dados[MAXTAM];
	int fim;
}T_FILA;

void inicializaFila(T_FILA *f){
	int i;
	for(i=0;i<MAXTAM;i++){
		f->dados[i] = 0;
	}
	f->fim = 0;
}

void enfileira(int dado, T_FILA *f){
	if(f->fim == MAXTAM){
		printf("\nFila está cheia.\n");
		return;
	} else{
		f->dados[f->fim] = dado;
		f->fim++;
	}
}

int desenfileira(T_FILA *f){
	int dado, i;
	if(f->fim == 0){
		printf("\nFila esta vazia.\n");
		return;
	} else {
		dado = f->dados[0];
		for(i=0;i<f->fim;i++){
			f->dados[i] = f->dados[i+1];
		}
		printf("\n\nRemovendo elemento do topo!\n\n");
		f->fim--;
		return dado;
	}
}

void imprimeFila(T_FILA *f){
	int i;
	if(f->fim == 0){
		printf("Fila está vazia.\n");
		return;
	} else {
		printf("\n\nImprimindo a fila:\n");
		for(i=0;i<f->fim;i++){
			printf("\nPosição %d - %d ", i, f->dados[i]);
		}
  	}
}

int localizaElemento (T_FILA *f, int x){
	int i;
	for (i=0; i<f->fim;i++){
		if(x == f->dados[i]){
			return i;
		}
	}
	return -1;
}

void verificaVazio (T_FILA *f){
	if (f->fim==0){
		printf("\n\nFila está Vazia!\n");
	} else {
		printf("\n\nA fila não está Vazia!\n");
	}
}

void verificaCheio (T_FILA *f){
	if (f->fim== MAXTAM){
		printf("\nFila está Cheia!\n");
	} else {
		printf("\nA não está Cheia!\n");
	}
}

int main(){
	int i_aux;
	setlocale(LC_ALL,"");
	T_FILA f1;
	
	inicializaFila(&f1);
	
	enfileira(10, &f1);
	enfileira(20, &f1);
	enfileira(30, &f1);
	imprimeFila(&f1);
	
	verificaVazio(&f1);
	verificaCheio(&f1);
	
	i_aux = localizaElemento(&f1, 3);
		if (i_aux = -1){
			printf("O elemento buscado não está na Fila!");
		} else {
			printf("Numero na posição %d: ", i_aux);
		}
	
	desenfileira(&f1);
	imprimeFila(&f1);

	return (0);
}
