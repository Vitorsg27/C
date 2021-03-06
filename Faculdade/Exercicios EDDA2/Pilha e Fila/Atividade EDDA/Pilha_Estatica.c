#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100

typedef struct {
	int Item[MAXTAM];
	int Topo;
	
} TPilha;

void TPilha_Inicia (TPilha *p) {
	p->Topo = -1;
}

int TPilha_Vazia (TPilha *p) {
	if (p->Topo == -1) {
		return 1;
	}else {
		return 0;
	}
}

int TPilha_Cheia (TPilha *p) {
	if (p->Topo == MAXTAM-1){
		return 1;
	}else {
		return 0;
	}	
}

void TPilha_Insere (TPilha *p, int x) {
	if(TPilha_Cheia(p) == 1) {
		printf ("\nERRO: Pilha cheia\n");
	}else {
		p->Topo++;
		p->Item[p->Topo] = x;
	}
}

int TPilha_Retira (TPilha *p) {
	int aux;
	if(TPilha_Vazia(p) == 1) {
		printf("\nERRO: Pilha vazia\n");
	} else {
		aux = p->Item[p->Topo];
		p->Topo--;
		return aux;
	}
}

void TPilha_VerificaTopo (TPilha *p){
	if (p->Topo==-1){
		printf("\nA Pilha est? Vazia\n");
	} else {
		printf ("\nNumero do topo: %d", p->Item[p->Topo]);
	}
}

int main() {
	TPilha *p = (TPilha*)malloc(sizeof(TPilha));
	TPilha_Inicia(p);
	
	TPilha_Insere (p, 1);
	TPilha_Insere (p, 2);
	TPilha_Insere (p, 3);

	TPilha_VerificaTopo(p);
	
	int aux;
	aux = TPilha_Retira(p);
	printf("\nSaiu: %d", aux);
	
return 0;
}
