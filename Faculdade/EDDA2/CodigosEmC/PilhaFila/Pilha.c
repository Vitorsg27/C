#include <stdio.h>

#define tam 100


void inicioPilha(int *topo){
	*topo = -1;

}
void colocaElemento(int	*topo, int vet[], int elem){
	if(*topo>=tam-1){
		printf("Pilha cheia");
	}else
		vet[*topo+1] = elem;
		*topo = *topo+1;
}

void retiraElemento(int* topo, int vet[]){
	if(*topo<0){
		printf("Pilha Vazia\n");
	}else{
		*topo = *topo -1;
	}
}


int main(){
	int topo, i;
	int vet[tam];
	int elem, opc;
	
	inicioPilha(&topo); 
	
	while(opc!=3){
		
		printf("\nDigite 1 para inserir ou 2 para retirar: ");
		scanf("%d", &opc);
		if(opc<1 || opc>2){
			printf("\nOpcao invalida");
		}
		switch(opc){
			case 1: 
				printf("\nDigite o numero a inserir: ");
				scanf("%d", &elem);
				colocaElemento(&topo, vet, elem);
			break;
			
			case 2: retiraElemento(&topo, vet);
			break;
		}
		
		for (i=0; i<topo+1; i++){
			printf("[%d]", vet[i]);
		}
		getch();
		system("cls");
	}
	return 0;
}
