#include <stdio.h>
#include <stdlib.h>

typedef struct ElementoLista{
	int *dado;
	struct ElementoLista *seguinte;
} Elemento;

typedef struct ListaDetectada{
	Elemento *inicio;
	int tamanho;
} Pilha;

void inicializacao(Pilha *monte){
	monte->inicio = NULL;
	monte->tamanho = 0;
}

int empilhar(Pilha *monte, int elem){
	Elemento *novo_elemento;
	if ((novo_elemento = (Elemento *) malloc (sizeof (Elemento)))== NULL)
		return -1;
	if((novo_elemento->dado = (int *) malloc (50 * sizeof(int))) == NULL)
		return -1;
}

int main(){
	int i, elem, opc;

	inicializacao();
	empilhar();
	
	/*while(opc!=3){
		
		printf("\nDigite 1 para inserir ou 2 para retirar: ");
		scanf("%d", &opc);
		if(opc<1 || opc>2){
			printf("\nOpcao invalida");
		}
		switch(opc){
			case 1: 
			break;
			
			case 2:
			break;
		}
	}*/
	return 0;
}
