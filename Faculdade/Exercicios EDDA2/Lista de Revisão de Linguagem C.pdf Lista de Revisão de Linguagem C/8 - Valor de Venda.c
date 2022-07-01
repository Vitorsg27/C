// Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

char nomeProduto [20];
float valorInicial, valorFinal ;

int main (){

	setlocale (LC_ALL,"");
	printf ("Insira o nome do produto: \n");
	scanf ("%s", nomeProduto);
	printf ("\nInsira o valor do produto: \n");
	scanf ("%f", &valorInicial);
	valorFinal = valorInicial * 1.3;
	printf ("\nValor de venda de %s: %.2f\n", nomeProduto, valorFinal);
	getch();
	
	return (0);
}
