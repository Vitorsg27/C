#include <stdio.h>
#include <stdlib.h>

int w=0; //contador geral

struct no{
	int valor;
	struct no * proximo;

}*topo, *aux;

void Inserir(void);  
void Remover(void);  
void Mostrar(void);  
void MostrarOrdenado(int ordem);

int vazio(struct no *campo);

void bubble_sortCre(int *V, int N);
void bubble_sortDec(int *V, int N);

  	int main(){ //ponto onde o programa inicia sua execu??o ou entrada principal do programa

	 	topo=NULL;
	 	int opcao;
	 	int sair=1;

		do {
		
			system("cls");  
		
			printf("Escolha a opcao desejada: ");
			printf("\n1- Mostrar elementos da pilha original");
			printf("\n2- Mostrar elementos da pilha em ordem crescente");
			printf("\n3- Mostrar elementos da pilha em ordem decrecente");
			printf("\n4- Remover elemento no topo da Pilha");
			printf("\n5- Inserir elemento no topo da Pilha");
			printf("\n6- Sair do programa");
			printf ("\n");
			printf("\nDigite a opcao: ");
			
			// faz a leitura da opcao que o usuario digitou
			scanf("%d", &opcao);
			if (!(opcao>=7 || opcao<=0)){
			
			switch (opcao){
				case 1:
					Mostrar(); //chama o m?todo para mostrar elementos da pilha orginal
					break;
				case 2:
					MostrarOrdenado(1); //chama o m?todo para mostrar elementos da pilha em ordem crescente
					break;
				case 3: 
					MostrarOrdenado(2); //chama o m?todo para mostrar elementos da pilha em ordem decrescente
					break;
				case 4:
					Remover(); //chama o m?todo para remover elemento da pilha
					break;
				case 5:
					Inserir(); //chama o m?todo para inserir elemento da pilha
					break;
				case 6: // saindo do programa
					break;
			}
			
			else (exit (0);
					
		} while (opc != 6);

 

 }    

 system("cls");

 exit(0);  

}

void Inserir(void) { //metodo para inserir elementos na pilha

    int x;

 printf("Digite um numero inteiro para inserir na pilha: ");
 scanf("%i",&x);

 if(aux==NULL){ //inserindo primeiro elemento da pilha

  aux=(struct no *)malloc(sizeof(aux));

  aux->valor=x;

  aux->proximo=NULL;

  //aux->proximo=topo;

  topo=aux;

  printf("Elemento inserido na pilha\n ");

  system("pause");

 }

 else { //inserindo elemento no topo da pilha

  printf("Elemento inserido na pilha\n");

  aux=(struct no *)malloc(sizeof(aux));

  aux->valor=x;

  aux->proximo=topo;

  topo=aux;

  system("pause");

 }

 w++;    

}

 

void Remover(void)

{

  if(vazio(topo)==1)

 {

  printf("Pilha vazia, necessario inserir algum item primeiro\n");

  system ("pause");  

 }  

 else {

           aux=topo;

   topo=aux->proximo;

   free(aux);

   printf("\nElemento removido da pilha");  

  }

 w--;  

 system("pause");

}

void Mostrar(void)//Metodo para mostrar elementos da pilha inicial

{

 printf("O tamanho da pilha eh: %i \n",w);

 if(vazio(topo)==1)  

 {

  printf("Pilha vazia, necessario inserir algum item primeiro\n");

  system ("pause");

 }  

 else

 {

  aux=topo;

  int a =1;

  while(aux!=NULL)

  {          

   printf("Elemento [%i]: %i\n",a,aux->valor);

   aux=aux->proximo;

   a++;  

  }  

  aux=topo;

  system("pause");

 }  

}  

void MostrarOrdenado(int ordem)

{  

 int i, tam;

 tam = w;

 printf("O tamanho da pilha eh: %i \n",tam);

 int vetor[tam];

 i = 0;

 if(vazio(topo)==1){

  printf("Pilha vazia, necessario inserir algum item primeiro\n");

 }  

 else if(ordem==1)

 {

  aux=topo;

  while(aux!=NULL)

  {

   vetor[i]= aux->valor;

         aux=aux->proximo;

         i++;

     }

  aux=topo;

  bubble_sortCre(vetor,tam);

 }

 else if(ordem==2)

 {

  aux=topo;

  while(aux!=NULL)

  {

   vetor[i]= aux->valor;

         aux=aux->proximo;

         i++;

     }

  aux=topo;

  bubble_sortDec(vetor,tam);  

 }

 system("pause");

}

 
void bubble_sortCre(int *V, int N){ //cria m?todo bolha  

     int j, i, aux;  

do {

     j = 0;

     for (i = 0; i < ( N - 1); i++) {


/* Verfica se o vetor está em ordem, no caso ele coloca em ordem crescente, para decrescente trocar '>' por '<' */

if (V[i] > V[i+1]) {

  /* Caso não esteja, ordena */

  aux = V[i];
  V[i] = V[i+1];
  V[i+1] = aux;
  j =1;

}

     }

   /* Repete enquanto algum valor estiver fora de ordem */  

   } while (j == 1);

   /* Imprime o vetor ordenado em ordem crescente */

   for (i = 0; i < N; i++) {

     printf ("%d \n", V[i]);

   }

   printf ("\n");

 }

void bubble_sortDec(int *V, int N){

    int j, i, aux;  

   printf ( " Os numeros em ordem decrescente sao:, \n");

do {

     j = 0;

     for (i = 0; i < ( N - 1); i++) {

/* Verfica se o vetor está em ordem, no caso ele coloca em ordem crescente, para decrescente trocar '>' por '<' */

if (V[i] < V[i+1]) {

  /* Caso não esteja, ordena */

  aux = V[i];
  V[i] = V[i+1];
  V[i+1] = aux;
  j =1;

}

     }

   /* Repete enquanto algum valor estiver fora de ordem */  

   } while (j == 1);

   /* Imprime o vetor ordenado em ordem crescente */

for (i = 0; i < N; i++) {

     printf ("%d \n",  V[i]);

   }

   printf ("\n");

 }

int vazio(struct no *campo)

{

 if(campo==NULL)

 {

  return 1;

 }

 else

 {

  return 0;

 }

}
