#include <stdio.h>
#include <stdlib.h>

typedef int informacao ;

struct celula{
	informacao dado;			// tipo de informa??o que ser? armazenada na c?lula
	struct celula * prox;		// server para fazer o encadeamento
};
 
struct celula * ptr;
struct celula * temp;		// vari?vel tempor?ria									.

int inserir (informacao x)  // supondo que temos apenas uma estrutura do tipo pilha ou fila ou lista encadeada
{							// nesta fun??o est? sendo feita a inser??o no come?o
	int ret_code = 0;
	struct celula *tmp;		// variavel tempor?ria para n?o perder o come?o da estrutura
	
	// alocando espaco de memoria para variavel temporaria tmp
	tmp = (struct celula *) malloc (sizeof(struct celula));
	
	// se temp for igual a NULL, ent?o deu erro na aloca??o
	if (tmp != NULL)
		{	// conseguiu alocar
			tmp->prox = NULL;
			tmp->dado = x;
			// inserir no come?o/inicio
			tmp->prox = ptr;	// liga tmp a ptr
			ptr = tmp;			// faz ptr apontar para a posi??o tmp
			printf("\n\n Numero inserido => %d ", ptr->dado);
			ret_code = 0;
		}
	else
		{ 	// nao conseguiu alocar
			ret_code = -1;
		}
	
	return ret_code;	
}

void imprimir_estrutura()	// exibe o conteudo da estrutura, um item de cada vez, 
							// do "inicio" para o "fim" da estrutura
{
	struct celula * tmp;
	tmp = ptr;			// vai utilizar a variavel temporaria ao inves da variavel que marca
						// o inicio da estrutura
	printf("\n\n Exibicao da estrutura:\n\n");
	if (tmp != NULL)
		{
			while (tmp!= NULL){
				printf(" %d " , tmp->dado);
				tmp = tmp->prox;
			}
			printf("\n\n");
		}
	else
		printf("\n Estrutura vazia!\n");
	system("pause");
	
}

int main(int argc, char *argv[]) {
	int opc, codigo;
	informacao entrada;
	do {
			// limpa a tela
			system("cls");
			// exibe menu de op??es
			printf("\n\n Menu de Opcoes: \n");
			printf("\n  1 - Inserir dados");
			printf("\n  2 - Exibir conte?do da estrutura");
			printf("\n  3 - Sair do programa\n");
			printf("\n  Opcao desejada => ");
			
			// faz a leitura da op??o que o usuario digitou
			scanf("%d", &opc);					
			switch (opc){
				case 1:	
						printf("\nDigite o valor inteiro a inserir na estrutura => ");
						scanf("%d", &entrada);
						codigo = inserir (entrada);
						if (codigo !=0 ) {
								printf("\n\n **** Ocorreu erro na insercao de dados !!! \n\n");
								opc = 3;  // se deu erro entao termina o programa
						}
						break;
				case 2:
						imprimir_estrutura( );
						break;
				case 3: // saindo do programa
						break;
			}
	} while (opc != 3);
	return 0;
}
